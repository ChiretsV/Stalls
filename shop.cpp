#include "shop.h"
#include "ui_shop.h"

Shop::Shop(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Shop)
{
    ui->setupUi(this);
    ui->tableWidget->setRowCount(9);
    ui->tableWidget->setColumnCount(3);

    ui->tableWidget->setItem(0, 0, new QTableWidgetItem("Яблоко"));
    ui->tableWidget->setItem(1, 0, new QTableWidgetItem("Арбуз"));
    ui->tableWidget->setItem(2, 0, new QTableWidgetItem("Банан"));
    ui->tableWidget->setItem(3, 0, new QTableWidgetItem("Персик"));
    ui->tableWidget->setItem(4, 0, new QTableWidgetItem("Виноград"));
    ui->tableWidget->setItem(5, 0, new QTableWidgetItem("Малина"));
    ui->tableWidget->setItem(6, 0, new QTableWidgetItem("Клубника"));
    ui->tableWidget->setItem(7, 0, new QTableWidgetItem("Вишня"));
    ui->tableWidget->setItem(0, 1, new QTableWidgetItem("Огурец"));
    ui->tableWidget->setItem(1, 1, new QTableWidgetItem("Болгарский перец"));
    ui->tableWidget->setItem(2, 1, new QTableWidgetItem("Морковка"));
    ui->tableWidget->setItem(3, 1, new QTableWidgetItem("Свекла"));
    ui->tableWidget->setItem(4, 1, new QTableWidgetItem("Капуста"));
    ui->tableWidget->setItem(5, 1, new QTableWidgetItem("Бульба"));
    ui->tableWidget->setItem(6, 1, new QTableWidgetItem("Брокколи"));
    ui->tableWidget->setItem(7, 1, new QTableWidgetItem("Укроп"));
    ui->tableWidget->setItem(8, 1, new QTableWidgetItem("Петрушка"));
    ui->tableWidget->setItem(0, 2, new QTableWidgetItem("Борщ"));
    ui->tableWidget->setItem(1, 2, new QTableWidgetItem("Салат из капусты"));
    ui->tableWidget->setItem(2, 2, new QTableWidgetItem("Салат красное море"));

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


