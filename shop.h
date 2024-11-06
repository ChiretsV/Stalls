#ifndef SHOP_H
#define SHOP_H

#include <QMainWindow>
#include <QString>
#include <QDebug>
#include <QMap>
#include <QTableWidgetItem>
#include <QListWidgetItem>
#include "database.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Shop;
}
QT_END_NAMESPACE

class Shop : public QMainWindow
{
    Q_OBJECT

public:
    explicit Shop(QWidget *parent = nullptr);
    ~Shop();

public slots:
    void slot_for_replenishment_shop(QString, int);
signals:
    void send_to_database(QString itemName, int quantity_database);
    void send_to_admin(QString item, int quantity);

private slots:
    void on_confirmed_clicked();

    void on_confirm_clicked();

    void on_tableWidget_itemClicked(QTableWidgetItem *item);

    void on_delete_2_clicked();

    void on_soup();

    void on_main_request_clicked();

    void on_listWidget_itemClicked(QListWidgetItem *item);

private:
    Ui::Shop *ui;
    QMap<QString, int> items;
    QString itemName;
    QString item_database;
    QListWidgetItem *list_item;
    QString item_name_database ;
    int quantity_database ;
    QString item_name;
    int quantity;

};

#endif // SHOP_H
