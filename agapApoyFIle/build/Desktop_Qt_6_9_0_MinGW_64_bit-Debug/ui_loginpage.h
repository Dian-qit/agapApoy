/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

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

class Ui_loginPage
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *loginUsernameLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *loginPasswordLineEdit;
    QPushButton *loginPushButton;
    QPushButton *registerPagePushButton;

    void setupUi(QDialog *loginPage)
    {
        if (loginPage->objectName().isEmpty())
            loginPage->setObjectName("loginPage");
        loginPage->resize(351, 581);
        loginPage->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 57, 57);"));
        layoutWidget = new QWidget(loginPage);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 240, 271, 105));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        loginUsernameLineEdit = new QLineEdit(layoutWidget);
        loginUsernameLineEdit->setObjectName("loginUsernameLineEdit");

        horizontalLayout->addWidget(loginUsernameLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        loginPasswordLineEdit = new QLineEdit(layoutWidget);
        loginPasswordLineEdit->setObjectName("loginPasswordLineEdit");

        horizontalLayout_2->addWidget(loginPasswordLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        loginPushButton = new QPushButton(layoutWidget);
        loginPushButton->setObjectName("loginPushButton");

        verticalLayout->addWidget(loginPushButton);

        registerPagePushButton = new QPushButton(loginPage);
        registerPagePushButton->setObjectName("registerPagePushButton");
        registerPagePushButton->setGeometry(QRect(190, 520, 151, 29));
        QFont font;
        font.setPointSize(7);
        registerPagePushButton->setFont(font);
        registerPagePushButton->setStyleSheet(QString::fromUtf8("border: none;"));

        retranslateUi(loginPage);

        QMetaObject::connectSlotsByName(loginPage);
    } // setupUi

    void retranslateUi(QDialog *loginPage)
    {
        loginPage->setWindowTitle(QCoreApplication::translate("loginPage", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("loginPage", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("loginPage", "Password", nullptr));
        loginPushButton->setText(QCoreApplication::translate("loginPage", "Login", nullptr));
        registerPagePushButton->setText(QCoreApplication::translate("loginPage", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginPage: public Ui_loginPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
