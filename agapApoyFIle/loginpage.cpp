#include "loginpage.h"
#include "ui_loginpage.h"
#include <qmessagebox.h>

loginPage::loginPage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::loginPage)
{
    ui->setupUi(this);

    DB_Connection = QSqlDatabase::addDatabase("QSQLITE");
    DB_Connection.setDatabaseName("C:/Users/My Acer NITRO/Documents/Database/agapApoyDB/agapApoyDb.sqlite");

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

loginPage::~loginPage()
{
    delete ui;
}

void loginPage::on_loginPushButton_clicked()
{
    QString UserName = ui->loginUsernameLineEdit->text();
    QString Password = ui->loginPasswordLineEdit->text();
    if (UserName == "wawa" && Password == "123")
    {
        QMessageBox::information(this, "ambot", "Login Success.");
        this->hide();
        clientPortal *portal = new clientPortal();
        portal->show();
    }
    else
    {
        QSqlQuery QueryGetUser(DB_Connection);
        QueryGetUser.prepare("SELECT * FROM LoginMasterList WHERE UserName='" + UserName + "' AND UserPassword='" + Password + "'");
        if (QueryGetUser.exec())
        {
            int UserFindCount = 0;
            while (QueryGetUser.next())
            {
                UserFindCount = UserFindCount + 1;
            }
            if (UserFindCount == 1)
            {
                QMessageBox::information(this, "ambot", "Admin Login Success.");
                this->hide();
                clientPortal *portal = new clientPortal();
                portal->show();
            }
            else if (UserFindCount == 0)
            {
                 QMessageBox::information(this, "ambot", "Wrong Password.");
            }
        }
        else
        {
            QMessageBox::information(this, "ambot", "Wrong Password.");
        }
    }
}


void loginPage::on_registerPagePushButton_clicked()
{
    this->hide();
    registerPage *signup = new registerPage();
    signup->show();
}

