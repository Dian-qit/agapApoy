#ifndef REGISTERPAGE_H
#define REGISTERPAGE_H

#include <QDialog>
#include <QtSql>
#include <loginpage.h>



namespace Ui {
class registerPage;
}

class registerPage : public QDialog
{
    Q_OBJECT

public:
    explicit registerPage(QWidget *parent = nullptr);
    ~registerPage();

private slots:
    void on_registerPushButton_clicked();

private:
    Ui::registerPage *ui;
    QSqlDatabase DB_Connection;
};

#endif // REGISTERPAGE_H
