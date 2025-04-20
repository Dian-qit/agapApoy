#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QDialog>
#include <QtSql>
#include <clientportal.h>
#include <registerpage.h>

namespace Ui {
class loginPage;
}

class loginPage : public QDialog
{
    Q_OBJECT

public:
    explicit loginPage(QWidget *parent = nullptr);
    ~loginPage();

private slots:
    void on_loginPushButton_clicked();

    void on_registerPagePushButton_clicked();

private:
    Ui::loginPage *ui;
    QSqlDatabase DB_Connection;
};

#endif // LOGINPAGE_H
