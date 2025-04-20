#include "login.h"
#include "ui_login.h"
#include <qmessagebox.h>


Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);

    DB_Connection = QSqlDatabase::addDatabase("QSQLITE");
    DB_Connection.setDatabaseName("C:/Users/My Acer NITRO/Documents/Database/crudtest.sqlite");

    if (DB_Connection.open())
    {
        qDebug() << "Database Is Connected";
    }
    else
    {
        qDebug() << "Database Is Not Connected";
        qDebug() << "Error : " << DB_Connection.lastError();
    }

}

Login::~Login()
{
    delete ui;
}

void Login::on_loginPushButton_clicked()
{
    QString UserName = ui->loginUsernameLineEdit->text();
    QString Password = ui->loginPasswordLineEdit->text();
    if (UserName == "Nigger" && Password == "Burn the jews")
    {
        QMessageBox::information(this, "ambot", "Login Success.");
        // this->hide();
        // responderHub *portal = new responderHub();
        // portal->show();

    }

}

