/********************************************************************************
** Form generated from reading UI file 'shop.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOP_H
#define UI_SHOP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Shop
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QSpinBox *spinBox;
    QPushButton *delete_2;
    QPushButton *confirm;
    QPushButton *confirmed;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Shop)
    {
        if (Shop->objectName().isEmpty())
            Shop->setObjectName("Shop");
        Shop->resize(800, 600);
        centralwidget = new QWidget(Shop);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName("tableWidget");

        verticalLayout->addWidget(tableWidget);

        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName("spinBox");

        verticalLayout->addWidget(spinBox);

        delete_2 = new QPushButton(centralwidget);
        delete_2->setObjectName("delete_2");

        verticalLayout->addWidget(delete_2);

        confirm = new QPushButton(centralwidget);
        confirm->setObjectName("confirm");

        verticalLayout->addWidget(confirm);

        confirmed = new QPushButton(centralwidget);
        confirmed->setObjectName("confirmed");

        verticalLayout->addWidget(confirmed);


        horizontalLayout->addLayout(verticalLayout);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");

        horizontalLayout->addWidget(listWidget);


        verticalLayout_2->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        Shop->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Shop);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 23));
        Shop->setMenuBar(menubar);
        statusbar = new QStatusBar(Shop);
        statusbar->setObjectName("statusbar");
        Shop->setStatusBar(statusbar);

        retranslateUi(Shop);

        QMetaObject::connectSlotsByName(Shop);
    } // setupUi

    void retranslateUi(QMainWindow *Shop)
    {
        Shop->setWindowTitle(QCoreApplication::translate("Shop", "Shop", nullptr));
        delete_2->setText(QCoreApplication::translate("Shop", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\215\320\273\320\265\320\274\320\265\320\275\321\202 \320\270\320\267 \320\272\320\276\321\200\320\267\320\270\320\275\321\213", nullptr));
        confirm->setText(QCoreApplication::translate("Shop", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262 \320\272\320\276\321\200\320\267\320\270\320\275\321\203", nullptr));
        confirmed->setText(QCoreApplication::translate("Shop", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214 \320\267\320\260\320\272\320\260\320\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Shop: public Ui_Shop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOP_H
