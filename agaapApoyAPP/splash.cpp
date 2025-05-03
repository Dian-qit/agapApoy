#include "splash.h"
#include "ui_splash.h"

splash::splash(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::splash)
{
    ui->setupUi(this);

    this->setFixedSize(296, 640);

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

splash::~splash()
{
    delete ui;
}

void splash::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void splash::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void splash::on_pushButton_15_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}



void splash::on_loginButton_clicked()
{
    QString UserName = ui->loginUsernameLineEdit->text();
    QString Password = ui->loginPasswordLineEdit->text();
    if (UserName == "Admin" && Password == "Password")
    {
        QMessageBox::information(this, "ambot", "Admin Login Success.");
        this->hide();
        dashboard *admin = new dashboard();
        admin->show();
    }
    else
    {
        QSqlQuery QueryGetUser(DB_Connection);
        QueryGetUser.prepare("SELECT * FROM LoginMasterList WHERE UserName='" + UserName + "' AND UserPassword='" + Password + "'");
        if (QueryGetUser.exec())
        {
            int UserFindCount = 0;
            QString FirstName = "";
            int UserID = 0;
            while (QueryGetUser.next())
            {
                UserFindCount = UserFindCount + 1;
                UserID = QueryGetUser.value("UserID").toInt();
                FirstName = QueryGetUser.value("FirstName").toString();
                qDebug() << "first name is " << FirstName;
            }
            if (UserFindCount == 1)
            {
                QMessageBox::information(this, "ambot", "Login Success, Hello " + FirstName);
                // this->hide();
                // clientPortal *portal = new clientPortal(UserID);
                // portal->show();
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


void splash::on_sihnUpPushButton_clicked()
{



}


void splash::on_pushButton_36_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void splash::on_continuePushButton_clicked()
{
   ui->stackedWidget->setCurrentIndex(3);
}


void splash::on_signUpPushButton_clicked()
{
    QString UserName = ui->registerUsernameLineEdit->text();
    QString password = ui->registerPasswordLineEdit->text();
    QString confirmPassword = ui->registerConfirmPasswordLineEdit->text();

    DB_Connection.open();
    QSqlDatabase::database().transaction();

    if (password != confirmPassword) {
        QMessageBox::warning(this, "Password Mismatch", "Password and Confirm Password do not match.");
        DB_Connection.close();
        return;
    }

    // Check if username already exists
    QSqlQuery CheckUserName(DB_Connection);
    CheckUserName.prepare("SELECT * FROM LoginMasterList WHERE UserName = :username");
    CheckUserName.bindValue(":username", UserName);

    if (CheckUserName.exec())
    {
        int UserFindCount = 0;
        while (CheckUserName.next()) {
            UserFindCount++;
        }
        if (UserFindCount >= 1) {
            QMessageBox::information(this, "ambot", "Username is already used.");
            DB_Connection.close();
            return;
        }
    }

    // Insert into LoginMasterList
    QSqlQuery QueryInsertData(DB_Connection);
    QueryInsertData.prepare("INSERT INTO LoginMasterList(UserName, UserPassword, FirstName, LastName, /*MobileNumber, */Email, Address, DateOfBirth) "
                            "VALUES(:UserName, :UserPassword, :FirstName, :LastName,/* :MobileNumber,*/ :Email, :Address, :DateOfBirth)");
    QueryInsertData.bindValue(":UserName", ui->registerUsernameLineEdit->text());
    QueryInsertData.bindValue(":UserPassword", ui->registerPasswordLineEdit->text());
    QueryInsertData.bindValue(":FirstName", ui->firstnameLineEdit->text());
    QueryInsertData.bindValue(":LastName", ui->lastnameLineEdit->text());
    // QueryInsertData.bindValue(":MobileNumber", ui->mobileNumberLineEdit->text());
    QueryInsertData.bindValue(":Email", ui->registerEmailLineEdit->text());
    QueryInsertData.bindValue(":Address", ui->registerAddressLineEdit->text());
    QueryInsertData.bindValue(":DateOfBirth", ui->registerDateEdit->date().toString("MMMM d yyyy"));


    if (!QueryInsertData.exec()) {
        qDebug() << "Error inserting data:" << QueryInsertData.lastError().text();
        QSqlDatabase::database().rollback();
        return;
    }

    int newUserID = QueryInsertData.lastInsertId().toInt();
    QSqlDatabase::database().commit();
    DB_Connection.close();


    QSqlDatabase userDataDB = QSqlDatabase::addDatabase("QSQLITE", "userDataConnection");
    userDataDB.setDatabaseName("C:/Users/My Acer NITRO/Documents/Database/agapApoyDB/userData.sqlite");

    if (!userDataDB.open()) {
        QMessageBox::warning(this, "Error", "Failed to connect to userData.sqlite");
        return;
    }


    QSqlQuery insertUserData(userDataDB);
    insertUserData.prepare("INSERT INTO UserEnvironmentData (UserID, Temperature, Smoke) "
                           "VALUES (:id, 0, 0)");
    insertUserData.bindValue(":id", newUserID);

    if (!insertUserData.exec()) {
        QMessageBox::warning(this, "Error", "Failed to insert into userData.sqlite: " + insertUserData.lastError().text());
    } else {
        QMessageBox::information(this, "ambot", "Registration Complete. Data synced.");
    }
}

