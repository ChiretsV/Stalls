/********************************************************************************
** Form generated from reading UI file 'database.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATABASE_H
#define UI_DATABASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Database
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;

    void setupUi(QDialog *Database)
    {
        if (Database->objectName().isEmpty())
            Database->setObjectName("Database");
        Database->resize(400, 300);
        gridLayout = new QGridLayout(Database);
        gridLayout->setObjectName("gridLayout");
        tableView = new QTableView(Database);
        tableView->setObjectName("tableView");

        gridLayout->addWidget(tableView, 0, 0, 1, 1);


        retranslateUi(Database);

        QMetaObject::connectSlotsByName(Database);
    } // setupUi

    void retranslateUi(QDialog *Database)
    {
        Database->setWindowTitle(QCoreApplication::translate("Database", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Database: public Ui_Database {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASE_H
