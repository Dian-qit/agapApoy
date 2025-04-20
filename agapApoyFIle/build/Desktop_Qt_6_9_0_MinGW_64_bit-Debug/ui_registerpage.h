/********************************************************************************
** Form generated from reading UI file 'registerpage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERPAGE_H
#define UI_REGISTERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registerPage
{
public:
    QLineEdit *lineEdit;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *registerUsernameLineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *registerPasswordLineEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *firstnameLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lastnameLineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *mobileNumberLineEdit;
    QPushButton *registerPushButton;

    void setupUi(QDialog *registerPage)
    {
        if (registerPage->objectName().isEmpty())
            registerPage->setObjectName("registerPage");
        registerPage->resize(450, 630);
        lineEdit = new QLineEdit(registerPage);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(180, 50, 113, 28));
        widget = new QWidget(registerPage);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 90, 341, 331));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        registerUsernameLineEdit = new QLineEdit(widget);
        registerUsernameLineEdit->setObjectName("registerUsernameLineEdit");

        horizontalLayout_3->addWidget(registerUsernameLineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        registerPasswordLineEdit = new QLineEdit(widget);
        registerPasswordLineEdit->setObjectName("registerPasswordLineEdit");

        horizontalLayout_4->addWidget(registerPasswordLineEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        firstnameLineEdit = new QLineEdit(widget);
        firstnameLineEdit->setObjectName("firstnameLineEdit");

        horizontalLayout->addWidget(firstnameLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        lastnameLineEdit = new QLineEdit(widget);
        lastnameLineEdit->setObjectName("lastnameLineEdit");

        horizontalLayout_2->addWidget(lastnameLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        mobileNumberLineEdit = new QLineEdit(widget);
        mobileNumberLineEdit->setObjectName("mobileNumberLineEdit");

        horizontalLayout_5->addWidget(mobileNumberLineEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        registerPushButton = new QPushButton(widget);
        registerPushButton->setObjectName("registerPushButton");

        verticalLayout->addWidget(registerPushButton);


        retranslateUi(registerPage);

        QMetaObject::connectSlotsByName(registerPage);
    } // setupUi

    void retranslateUi(QDialog *registerPage)
    {
        registerPage->setWindowTitle(QCoreApplication::translate("registerPage", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("registerPage", "Username", nullptr));
        label_4->setText(QCoreApplication::translate("registerPage", "Password", nullptr));
        label->setText(QCoreApplication::translate("registerPage", "First name", nullptr));
        label_2->setText(QCoreApplication::translate("registerPage", "Last name", nullptr));
        label_5->setText(QCoreApplication::translate("registerPage", "Mobile number", nullptr));
        registerPushButton->setText(QCoreApplication::translate("registerPage", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registerPage: public Ui_registerPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERPAGE_H
