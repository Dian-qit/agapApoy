/********************************************************************************
** Form generated from reading UI file 'clientportal.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTPORTAL_H
#define UI_CLIENTPORTAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_clientPortal
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *clientPortal)
    {
        if (clientPortal->objectName().isEmpty())
            clientPortal->setObjectName("clientPortal");
        clientPortal->resize(800, 600);
        centralwidget = new QWidget(clientPortal);
        centralwidget->setObjectName("centralwidget");
        clientPortal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(clientPortal);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        clientPortal->setMenuBar(menubar);
        statusbar = new QStatusBar(clientPortal);
        statusbar->setObjectName("statusbar");
        clientPortal->setStatusBar(statusbar);

        retranslateUi(clientPortal);

        QMetaObject::connectSlotsByName(clientPortal);
    } // setupUi

    void retranslateUi(QMainWindow *clientPortal)
    {
        clientPortal->setWindowTitle(QCoreApplication::translate("clientPortal", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class clientPortal: public Ui_clientPortal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTPORTAL_H
