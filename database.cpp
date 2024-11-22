#include "database.h"
#include "ui_database.h"

Database::Database(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Database)
{
    ui->setupUi(this);
    if (QSqlDatabase::contains("user_db_connection")) {
        QSqlDatabase::removeDatabase("user_db_connection");
    }
    database = QSqlDatabase::addDatabase("QSQLITE", "user_db_connection");
    database.setDatabaseName("D:/Stalls/user_db.db");
    if(database.open())
    {
        qDebug("open");
    }
    else
    {
        qDebug("not open");
    }
    query = new QSqlQuery(database);
    // query->exec("CREATE TABLE IF NOT EXISTS Items(ItemName TEXT, quantity_database INT);");

    model = new QSqlTableModel(this, database);
    model->setTable("Items");

    // if (!query->exec("DELETE FROM Items;")) {
    //    qDebug() << "Error clearing table:";
    // }

    // model->setEditStrategy(QSqlTableModel::OnManualSubmit); // Настраиваем модель для ручного сохранения изменений
    // model->select();

    // QStringList items = {"Яблоко", "Арбуз", "Банан", "Персик", "Виноград", "Малина", "Клубника", "Вишня", "Огурец", "Болгарский перец", "Морковка", "Свекла", "Капуста","Бульба", "Брокколи", "Укроп", "Петрушка"};

    // for (int i = 0; i <= 16; ++i) {
    //     if (!model->insertRow(i)) {
    //         qDebug() << "Error inserting row for item:" << items[i];
    //         continue;
    //     }
    //     if (!model->setData(model->index(i, model->fieldIndex("ItemName")), items[i]) || !model->setData(model->index(i, model->fieldIndex("quantity_database")), 10)) {
    //         qDebug() << "Error setting data for item:" << items[i];
    //     }
    // }

    // //Применяем изменения к базе данных
    // if (!model->submitAll()) {
    //     qDebug() << "Ошибка при сохранении начальных данных в базе данных:";
    // } else {
    // qDebug() << "Данные успешно сохранены";
    // }
    model->select();
    ui->tableView->setModel(model);
}

Database::~Database()
{
    database.close();
    delete ui;
}

void Database::slotToDatabase(QString itemName, int quantity_database)
{
    model->select();

    for (int row = 0; row < model->rowCount(); ++row) {
        QModelIndex itemIndex = model->index(row, model->fieldIndex("ItemName"));

        if (model->data(itemIndex).toString() == itemName) {
            // Получаем текущий quantity_database
            QModelIndex quantityIndex = model->index(row, model->fieldIndex("quantity_database"));
            int currentQuantity = model->data(quantityIndex).toInt();

            // Выполняем вычитание
            int newQuantity = currentQuantity - quantity_database;
            if (newQuantity < 0)
            {
                QMessageBox::critical(this, "Ошибка", "Нет такого кол-ва товара на складе");
                newQuantity = currentQuantity;
            }

            model->setData(quantityIndex, newQuantity);

            // Применяем изменения к базе данных
            if (!model->submitAll()) {
                qDebug() << "Ошибка при обновлении базы данных:";
            }
            return; // Прерываем цикл, как только нашли и обновили нужную запись
        }
    }

    qDebug() << "Товар" << itemName << "не найден в базе данных.";
}


void Database::slot_for_replenishment_database(QString item, int value)
{
    model->select();

    for (int row = 0; row < model->rowCount(); ++row) {
        QModelIndex itemIndex = model->index(row, model->fieldIndex("ItemName"));

        if (model->data(itemIndex).toString() == item) {
            QModelIndex quantityIndex = model->index(row, model->fieldIndex("quantity_database"));
            int currentQuantity = model->data(quantityIndex).toInt();

            int newQuantity = currentQuantity + value;

            model->setData(quantityIndex, newQuantity);
            QMessageBox::information(this, "Пополнение", "Склад пополнен");
            // Применяем изменения к базе данных
            if (!model->submitAll()) {
                qDebug() << "Ошибка при обновлении базы данных:";
            }
            return;
        }
    }

    qDebug() << "Товар" << item << "не найден в базе данных.";

}


