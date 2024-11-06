/********************************************************************************
** Form generated from reading UI file 'authorization.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHORIZATION_H
#define UI_AUTHORIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Authorization
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLineEdit *pass;
    QLabel *label_2;
    QLineEdit *login;
    QLabel *label;
    QPushButton *entrance;

    void setupUi(QDialog *Authorization)
    {
        if (Authorization->objectName().isEmpty())
            Authorization->setObjectName("Authorization");
        Authorization->resize(400, 300);
        gridLayout = new QGridLayout(Authorization);
        gridLayout->setObjectName("gridLayout");
        groupBox = new QGroupBox(Authorization);
        groupBox->setObjectName("groupBox");
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        pass = new QLineEdit(groupBox);
        pass->setObjectName("pass");

        gridLayout_2->addWidget(pass, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        login = new QLineEdit(groupBox);
        login->setObjectName("login");

        gridLayout_2->addWidget(login, 0, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        entrance = new QPushButton(groupBox);
        entrance->setObjectName("entrance");

        gridLayout_2->addWidget(entrance, 2, 0, 1, 2);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(Authorization);

        QMetaObject::connectSlotsByName(Authorization);
    } // setupUi

    void retranslateUi(QDialog *Authorization)
    {
        Authorization->setWindowTitle(QCoreApplication::translate("Authorization", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Authorization", "GroupBox", nullptr));
        label_2->setText(QCoreApplication::translate("Authorization", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label->setText(QCoreApplication::translate("Authorization", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        entrance->setText(QCoreApplication::translate("Authorization", "\320\222\320\276\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Authorization: public Ui_Authorization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHORIZATION_H
