#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QtSql>

#include "responderhub.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Login;
}
QT_END_NAMESPACE

class Login : public QMainWindow
{
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_loginPushButton_clicked();

private:
    Ui::Login *ui;
    QSqlDatabase DB_Connection;

};
#endif // LOGIN_H
