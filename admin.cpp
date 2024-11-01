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



//void Admin::slot_for_replenishment(QString item, int value)
//{
    //int rowCount = ui->tableWidget->rowCount();

    //ui->tableWidget->insertRow(rowCount);

    //ui->tableWidget->setItem(rowCount, 0, new QTableWidgetItem(item));
    //ui->tableWidget->setItem(rowCount, 1, new QTableWidgetItem(QString::number(value)));
//}



//void Admin::on_send_to_shop_clicked()
//{

//}

