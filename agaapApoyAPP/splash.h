#ifndef SPLASH_H
#define SPLASH_H

#include <QMainWindow>
#include <QDialog>
#include <QtSql>
#include <qmessagebox.h>
#include <qmessagebox.h>
#include <dashboard.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class splash;
}
QT_END_NAMESPACE

class splash : public QMainWindow
{
    Q_OBJECT

public:
    splash(QWidget *parent = nullptr);
    ~splash();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_15_clicked();


    void on_loginButton_clicked();

    void on_sihnUpPushButton_clicked();

    void on_pushButton_36_clicked();

    void on_continuePushButton_clicked();

    void on_signUpPushButton_clicked();

private:
    Ui::splash *ui;
    QSqlDatabase DB_Connection;
};
#endif // SPLASH_H
