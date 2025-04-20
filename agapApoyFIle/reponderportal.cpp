#include "reponderportal.h"
#include "ui_reponderportal.h"

reponderPortal::reponderPortal(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::reponderPortal)
{
    ui->setupUi(this);
}

reponderPortal::~reponderPortal()
{
    delete ui;
}
