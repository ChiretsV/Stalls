#ifndef ADMIN_H
#define ADMIN_H

#include <QDialog>
#include <QTableWidgetItem>
#include <QList>
#include <QStringList>


namespace Ui {
class Admin;
}

class Admin : public QDialog
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = nullptr);
    ~Admin();

public slots:
    void slot_for_replenishment(QString item, int value);
    //void slot_from_admin_db(QString item, int value);

signals:
    void send_to_admin_db(QString, int);
    void send_to_database(QString, int);

private slots:
    void on_tableWidget_itemClicked(QTableWidgetItem *item);

    void on_send_to_shop_clicked();

    void on_delete_product_clicked();

private:
    Ui::Admin *ui;
    QString item_name;
    int value;
};
#endif // ADMIN_H
