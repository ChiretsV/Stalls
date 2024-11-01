#include "admin_db.h"
#include "ui_admin_db.h"

Admin_db::Admin_db(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Admin_db)
{
    ui->setupUi(this);
    //admin_database = QSqlDatabase::addDatabase("QSQLITE");
    //admin_database.setDatabaseName("./AdminDatabase.db");
    //if(admin_database.open())
    //{
    //    qDebug("open");
    //}
    //else
    //{
    //    qDebug("not open");
    //}
    //query = new QSqlQuery(admin_database);
    //query->exec("CREATE TABLE IF NOT EXISTS Items(ItemName TEXT, quantity_database INT);");

    //model = new QSqlTableModel(this, admin_database);
    //model->setTable("Items");
    //model->select();

    //ui->tableView->setModel(model);
}

Admin_db::~Admin_db()
{
    delete ui;
}


