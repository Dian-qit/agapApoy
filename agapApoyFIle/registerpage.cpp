#include "registerpage.h"
#include "ui_registerpage.h"
#include <qmessagebox.h>

registerPage::registerPage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::registerPage)
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

registerPage::~registerPage()
{
    delete ui;
}

void registerPage::on_registerPushButton_clicked()
{
    DB_Connection.open();
    QSqlDatabase::database().transaction();

    QSqlQuery QueryInsertData(DB_Connection);
    QueryInsertData.prepare("INSERT INTO LoginMasterList(UserID,UserName,UserPassword,FirstName,LastName,MobileNumber) VALUES(:UserID,:UserName,:UserPassword,:FirstName,:LastName,:MobileNumber)");
    QueryInsertData.bindValue(":UserID",ui->lineEdit->text());
    QueryInsertData.bindValue(":UserName",ui->registerUsernameLineEdit->text());
    QueryInsertData.bindValue(":UserPassword",ui->registerPasswordLineEdit->text());
    QueryInsertData.bindValue(":FirstName",ui->firstnameLineEdit->text());
    QueryInsertData.bindValue(":LastName",ui->lastnameLineEdit->text());
    QueryInsertData.bindValue(":MobileNumber",ui->mobileNumberLineEdit->text());
    QueryInsertData.exec();
    if (!QueryInsertData.exec()) {
        qDebug() << "Error inserting data:" << QueryInsertData.lastError().text();
    }
    else
    {
        QMessageBox::information(this, "ambot", "Registration Complete.");
    }

    QSqlDatabase::database().commit();
    DB_Connection.close();

    this->hide();
    loginPage *login = new loginPage();
    login->show();
}

