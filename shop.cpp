#include "shop.h"
#include "ui_shop.h"

Shop::Shop(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Shop)
{
    ui->setupUi(this);
    QStringList items = {
        "Яблоко", "Арбуз", "Банан", "Персик", "Виноград", "Малина", "Клубника", "Вишня",
        "Огурец", "Болгарский перец", "Морковка", "Свекла", "Капуста", "Бульба", "Брокколи", "Укроп", "Петрушка",
        "Борщ", "Салат из капусты", "Салат красное море"
    };

    ui->tableWidget->setRowCount(items.size());
    ui->tableWidget->setColumnCount(1);

    for (int i = 0; i < items.size(); ++i) {
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(items[i]));
    }

    connect(ui->tableWidget, &QTableWidget::itemClicked, this, &Shop::on_tableWidget_itemClicked);
}

Shop::~Shop()
{
    delete ui;
}


void Shop::on_confirmed_clicked()
{
    for(int i=0; i<ui->listWidget->count(); ++i)
    {
        list_item = ui->listWidget->item(i);
        item_database = list_item->text();
        QStringList itemData = item_database.split(" ");
        if(itemData.size()<2)
        {
            continue;
        }
        item_name_database = itemData[0];
        quantity_database = itemData[1].toInt();
        emit send_to_database(item_name_database, quantity_database);
    }
}

void Shop::on_soup()
{

    int val = ui->spinBox->value();
    ui->listWidget->clear();
    items.insert("Свекла", 2*val);
    items.insert("Морковка", 2*val);
    items.insert("Бульба", 2*val);
    QMapIterator<QString, int> it(items);
    while(it.hasNext())
    {
        it.next();
        QString itemText = QString("%1 %2").arg(it.key()).arg(it.value());
        ui->listWidget->addItem(itemText);
    }
}

void Shop::on_confirm_clicked()
{
    if(itemName == "Борщ")
    {
        on_soup();
        return;
    }

    int val = ui->spinBox->value();
    items.insert(itemName,val);
    ui->listWidget->clear();
    QMapIterator<QString, int> it(items);
    while(it.hasNext())
    {
        it.next();
        QString itemText = QString("%1 %2").arg(it.key()).arg(it.value());
        ui->listWidget->addItem(itemText);
    }
}


void Shop::on_tableWidget_itemClicked(QTableWidgetItem *name)
{
    if (name) {

        itemName = name->text();
    }
}

void Shop::on_delete_2_clicked()
{
    items.clear();
    ui->listWidget->clear();
    QMapIterator<QString, int> it(items);
    while(it.hasNext())
    {
        it.next();
        QString itemText = QString("%1 %2").arg(it.key()).arg(it.value());
        ui->listWidget->addItem(itemText);
    }

}

void Shop::on_main_request_clicked()
{
    for(int i=0; i<ui->listWidget->count(); ++i)
    {
        list_item = ui->listWidget->item(i);
        item_database = list_item->text();
        QStringList itemData = item_database.split(" ");
        if(itemData.size()<2)
        {
            continue;
        }
        item_name_database = itemData[0];
        quantity_database = itemData[1].toInt();
        emit send_to_admin(item_name_database, quantity_database);
    }
}

void Shop::on_listWidget_itemClicked(QListWidgetItem *item)
{
    item_name = item->text();
    quantity = item->data(Qt::UserRole).toInt();
}

void Shop :: slot_for_replenishment_shop(QString item, int value)
{
    itemName = item;
    quantity = value;
    emit send_to_database(itemName, quantity);
}
