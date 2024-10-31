#include "database.h"
#include "ui_database.h"

Database::Database(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Database)
{
    ui->setupUi(this);
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("./shopDatabase.db");
    if(database.open())
    {
        qDebug("open");
    }
    else
    {
        qDebug("not open");
    }
    query = new QSqlQuery(database);
    query->exec("CREATE TABLE IF NOT EXISTS Items(ItemName TEXT, quantity_database INT);");

    model = new QSqlTableModel(this, database);
    model->setTable("Items");
    model->select();

    ui->tableView->setModel(model);
}

Database::~Database()
{
    delete ui;
}

void Database :: slotToDatabase(QString itemName, int quantity_database)
{
    qDebug()<<itemName<<quantity_database;
    int newRow = model->rowCount();
    if(! model->insertRow(newRow))
    {
        qDebug("Error insert");
        return;
    }


    if(!model->setData(model->index(newRow, model->fieldIndex("ItemName")), itemName) ||
        !model->setData(model->index(newRow, model->fieldIndex("quantity_database")), quantity_database))
    {
        qDebug("Error setData");
    }

    if(!model->submitAll())
    {
        qDebug("Error submitAll");
    }
    model->select();

}


