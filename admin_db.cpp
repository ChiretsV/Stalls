#include "admin_db.h"
#include "ui_admin_db.h"

Admin_db::Admin_db(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Admin_db)
{
    ui->setupUi(this);
    if (QSqlDatabase::contains("admin_db_connection")) {
        QSqlDatabase::removeDatabase("admin_db_connection");
    }
    admin_database = QSqlDatabase::addDatabase("QSQLITE", "admin_db_connection");
    admin_database.setDatabaseName("./admin_db.db");
    ////////////////////

    if(admin_database.open()) {
        qDebug("open");
    } else {
        qDebug("not open");
        return; // если база данных не открыта, выход
    }

    query = new QSqlQuery(admin_database);

    // Удаляем таблицу, если она уже существует
    //if (!query->exec("DROP TABLE IF EXISTS Items;")) {
      //  qDebug() << "Ошибка при удалении таблицы:";
    //}

    // Создаем таблицу заново
    if (!query->exec("CREATE TABLE IF NOT EXISTS Items(ItemName TEXT, Value INT);")) {
        qDebug() << "Ошибка при создании таблицы:";
    }

    model = new QSqlTableModel(this, admin_database);
    model->setTable("Items");

    //model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();

    //QStringList items = {"Яблоко", "Арбуз", "Банан", "Персик", "Виноград", "Малина", "Клубника", "Вишня", "Огурец", "Болгарский перец", "Морковка", "Свекла", "Капуста","Бульба", "Брокколи", "Укроп", "Петрушка"};

    //int itemNameIndex = model->fieldIndex("ItemName");
    //int valueIndex = model->fieldIndex("Value");
    //qDebug() << "ItemName index:" << itemNameIndex << "Value index:" << valueIndex;

    //for (int i = 0; i < items.size(); ++i) {
        //qDebug() << "Вставка элемента:" << items[i];
        //if (!model->insertRow(i)) {
            //qDebug() << "Ошибка вставки строки для элемента в admin_db:" << items[i];
            //continue;
        //}

        //if (!model->setData(model->index(i, itemNameIndex), items[i])) {
            //qDebug() << "Ошибка установки имени элемента в admin_db для элемента:" << items[i];
        //}

        //if (!model->setData(model->index(i, valueIndex), 1000)) {
            //qDebug() << "Ошибка установки значения в admin_db для элемента:" << items[i];
        //}
    //}

    if (!model->submitAll()) {
        qDebug() << "Ошибка при сохранении начальных данных в базе данных:";
    } else {
        qDebug() << "Данные успешно сохранены";
    }
    ui->tableView->setModel(model);
}

Admin_db::~Admin_db()
{
    delete ui;

}

void Admin_db :: slot_from_admin(QString item, int value)
{
    model->select();

    for (int row = 0; row < model->rowCount(); ++row) {
        QModelIndex itemIndex = model->index(row, model->fieldIndex("ItemName"));
        if (model->data(itemIndex).toString() == item) {
            QModelIndex quantityIndex = model->index(row, model->fieldIndex("Value"));
            int currentQuantity = model->data(quantityIndex).toInt();

            // Выполняем вычитание
            int newQuantity = currentQuantity - value;
            if (newQuantity < 0)
            {
                QMessageBox::critical(this, "Ошибка", "Нет такого кол-ва товара на складе");
                newQuantity = currentQuantity;
            }

            model->setData(quantityIndex, newQuantity);

            if (!model->submitAll()) {
                qDebug() << "Ошибка при обновлении базы данных:";
            }
            return; // Прерываем цикл, как только нашли и обновили нужную запись
        }
    }

    qDebug() << "Товар" << item << "не найден в базе данных.";

}


