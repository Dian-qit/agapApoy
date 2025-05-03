/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dashboard
{
public:
    QWidget *centralwidget;

    void setupUi(QMainWindow *dashboard)
    {
        if (dashboard->objectName().isEmpty())
            dashboard->setObjectName("dashboard");
        dashboard->resize(296, 640);
        dashboard->setStyleSheet(QString::fromUtf8("background-color: #353a40;\n"
"    background: qlineargradient(x1:1, y2:1, x2:0, y2:1, \n"
"                  stop:0.15 #353a40, stop:.8 #121416);"));
        centralwidget = new QWidget(dashboard);
        centralwidget->setObjectName("centralwidget");
        dashboard->setCentralWidget(centralwidget);

        retranslateUi(dashboard);

        QMetaObject::connectSlotsByName(dashboard);
    } // setupUi

    void retranslateUi(QMainWindow *dashboard)
    {
        dashboard->setWindowTitle(QCoreApplication::translate("dashboard", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dashboard: public Ui_dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
