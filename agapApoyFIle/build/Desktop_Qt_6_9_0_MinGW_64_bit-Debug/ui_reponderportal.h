/********************************************************************************
** Form generated from reading UI file 'reponderportal.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPONDERPORTAL_H
#define UI_REPONDERPORTAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_reponderPortal
{
public:

    void setupUi(QDialog *reponderPortal)
    {
        if (reponderPortal->objectName().isEmpty())
            reponderPortal->setObjectName("reponderPortal");
        reponderPortal->resize(651, 467);

        retranslateUi(reponderPortal);

        QMetaObject::connectSlotsByName(reponderPortal);
    } // setupUi

    void retranslateUi(QDialog *reponderPortal)
    {
        reponderPortal->setWindowTitle(QCoreApplication::translate("reponderPortal", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class reponderPortal: public Ui_reponderPortal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPONDERPORTAL_H
