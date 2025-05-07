#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QMainWindow>
#include <QDialog>
#include <QtSql>
#include <qmessagebox.h>
#include <dashboard.h>
#include <QTimer>


namespace Ui {
class dashboard;
}

class dashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit dashboard(QWidget *parent = nullptr);
    ~dashboard();

private slots:
    void on_dashboardPushButton_2_clicked();

    void on_tablePushButton_clicked();

    void on_dashboardPushButton_3_clicked();

    void on_tablePushButton_3_clicked();

private:
    Ui::dashboard *ui;
    void loadUsersTable();
    QSqlDatabase DB_Connection;
    void refreshDashboard();
};

#endif // DASHBOARD_H
