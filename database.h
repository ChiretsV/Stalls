#ifndef DATABASE_H
#define DATABASE_H

#include <QDebug>
#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QString>
#include <QMessageBox>

namespace Ui {
class Database;
}

class Database : public QDialog
{
    Q_OBJECT

public:
    explicit Database(QWidget *parent = nullptr);
    ~Database();

public slots:
    void slotToDatabase(QString itemName, int quantity_database);
    void slot_for_replenishment_database(QString item, int value);

private:
    Ui::Database *ui;
    QSqlDatabase database;
    QSqlQuery *query;
    QSqlTableModel *model;
};

#endif // DATABASE_H
