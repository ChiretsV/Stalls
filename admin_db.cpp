#include "admin_db.h"
#include "ui_admin_db.h"

Admin_db::Admin_db(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Admin_db)
{
    ui->setupUi(this);
}

Admin_db::~Admin_db()
{
    delete ui;
}
