#include "authorization.h"
#include "ui_authorization.h"

Authorization::Authorization(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Authorization)
{
    ui->setupUi(this);

    QObject::connect(&shop, SIGNAL(send_to_database(QString, int)), &database, SLOT(slotToDatabase(QString, int)));

    QObject::connect(&admin, SIGNAL(send_to_admin_db(QString, int)), &admin_db, SLOT(slot_from_admin(QString, int)));


    QObject::connect(&shop, SIGNAL(send_to_admin(QString, int)), &admin, SLOT(slot_for_replenishment(QString, int)));
    QObject::connect(&admin, SIGNAL(send_to_database(QString, int)), &database, SLOT(slot_for_replenishment_database(QString, int)));

}

Authorization::~Authorization()
{
    delete ui;
}

void Authorization::on_entrance_clicked()
{
    QString login = ui->login->text();
    QString password = ui->pass->text();
    if(login == "User" && password == "123")
    {
        hide();
        shop.show();


    }
    if(login=="admin" && password == "admin")
    {
        hide();
        admin.show();
    }
}
