#include "responderhub.h"
#include "ui_responderhub.h"

responderHub::responderHub(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::responderHub)
{
    ui->setupUi(this);
}

responderHub::~responderHub()
{
    delete ui;
}
