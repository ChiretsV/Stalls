#ifndef ADMIN_H
#define ADMIN_H

#include <QDialog>


namespace Ui {
class Admin;
}

class Admin : public QDialog
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = nullptr);
    ~Admin();



signals:
    void send_to_admin_db(QString, int);

private:
    Ui::Admin *ui;
};
#endif // ADMIN_H
