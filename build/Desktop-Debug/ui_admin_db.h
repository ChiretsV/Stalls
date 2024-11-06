/********************************************************************************
** Form generated from reading UI file 'admin_db.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_DB_H
#define UI_ADMIN_DB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Admin_db
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;

    void setupUi(QDialog *Admin_db)
    {
        if (Admin_db->objectName().isEmpty())
            Admin_db->setObjectName("Admin_db");
        Admin_db->resize(400, 300);
        gridLayout = new QGridLayout(Admin_db);
        gridLayout->setObjectName("gridLayout");
        tableView = new QTableView(Admin_db);
        tableView->setObjectName("tableView");

        gridLayout->addWidget(tableView, 0, 0, 1, 1);


        retranslateUi(Admin_db);

        QMetaObject::connectSlotsByName(Admin_db);
    } // setupUi

    void retranslateUi(QDialog *Admin_db)
    {
        Admin_db->setWindowTitle(QCoreApplication::translate("Admin_db", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin_db: public Ui_Admin_db {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_DB_H
