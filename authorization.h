#ifndef AUTHORIZATION_H
#define AUTHORIZATION_H

#include <QDialog>
#include "shop.h"
#include "database.h"
#include "admin.h"
#include "admin_db.h"


namespace Ui {
class Authorization;
}

class Authorization : public QDialog
{
    Q_OBJECT

public:
    explicit Authorization(QWidget *parent = nullptr);
    ~Authorization();

private slots:
    void on_entrance_clicked();

private:
    Ui::Authorization *ui;
    Shop shop;
    Database database;
    Admin admin;
    Admin_db admin_db;
};

#endif // AUTHORIZATION_H
