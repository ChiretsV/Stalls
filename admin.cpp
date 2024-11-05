#include "admin.h"
#include "ui_admin.h"


Admin::Admin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Admin)
{
    ui->setupUi(this);

}

Admin::~Admin()
{
    delete ui;
}



void Admin::slot_for_replenishment(QString item, int value)
{
    int rowCount = ui->tableWidget->rowCount();

    ui->tableWidget->insertRow(rowCount);

    if (ui->tableWidget->columnCount() < 2) {
        ui->tableWidget->setColumnCount(2);
    }

    QTableWidgetItem *itemWidget = new QTableWidgetItem(item);
    QTableWidgetItem *valueWidget = new QTableWidgetItem(QString::number(value));

    ui->tableWidget->setItem(rowCount, 0, itemWidget);
    ui->tableWidget->setItem(rowCount, 1, valueWidget);
}



//void Admin::on_send_to_shop_clicked()
//{

//}

