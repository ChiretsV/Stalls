#ifndef ADMIN_DB_H
#define ADMIN_DB_H

#include <QDialog>

namespace Ui {
class Admin_db;
}

class Admin_db : public QDialog
{
    Q_OBJECT

public:
    explicit Admin_db(QWidget *parent = nullptr);
    ~Admin_db();

public slots:
    void slot_for_admin_db(QString item, int quantity);

private:
    Ui::Admin_db *ui;
};

#endif // ADMIN_DB_H
