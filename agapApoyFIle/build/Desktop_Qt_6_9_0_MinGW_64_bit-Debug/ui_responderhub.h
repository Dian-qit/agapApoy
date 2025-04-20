/********************************************************************************
** Form generated from reading UI file 'responderhub.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESPONDERHUB_H
#define UI_RESPONDERHUB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_responderHub
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *responderHub)
    {
        if (responderHub->objectName().isEmpty())
            responderHub->setObjectName("responderHub");
        responderHub->resize(400, 300);
        buttonBox = new QDialogButtonBox(responderHub);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(290, 20, 81, 241));
        buttonBox->setOrientation(Qt::Orientation::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        retranslateUi(responderHub);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, responderHub, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, responderHub, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(responderHub);
    } // setupUi

    void retranslateUi(QDialog *responderHub)
    {
        responderHub->setWindowTitle(QCoreApplication::translate("responderHub", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class responderHub: public Ui_responderHub {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESPONDERHUB_H
