#include "clientportal.h"
#include "ui_clientportal.h"

clientPortal::clientPortal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::clientPortal)
{
    ui->setupUi(this);
}

clientPortal::~clientPortal()
{
    delete ui;
}
