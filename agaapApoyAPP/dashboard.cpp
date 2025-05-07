#include "dashboard.h"
#include "ui_dashboard.h"

dashboard::dashboard(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::dashboard)
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

    // Initial table load
    refreshDashboard();

    // Set up auto-refresh every 3 seconds
    QTimer *refreshTimer = new QTimer(this);
    connect(refreshTimer, &QTimer::timeout, this, &dashboard::refreshDashboard);
    refreshTimer->start(3000); // 3000 ms = 3 seconds


}

dashboard::~dashboard()
{
    delete ui;
}

void dashboard::refreshDashboard()
{
    loadUsersTable();
    // Add more refresh logic here if needed later
}


void dashboard::loadUsersTable()
{
    QSqlQuery query;
    QString sql = "SELECT UserID, Temperature, Smoke FROM LoginMasterList";
    if (!query.exec(sql)) {
        qDebug() << "Failed to load users:" << query.lastError().text();
        return;
    }

    ui->tableWidget->setRowCount(0);
    int row = 0;

    while (query.next()) {
        int userId = query.value("UserID").toInt();
        int temperature = query.value("Temperature").toInt();
        int smoke = query.value("Smoke").toInt();

        ui->tableWidget->insertRow(row);
        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(QString::number(userId)));
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(QString::number(temperature)));
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(QString::number(smoke)));

        // View button
        QPushButton *viewBtn = new QPushButton("View");
        connect(viewBtn, &QPushButton::clicked, this, [=]() {
            qDebug() << "View user with ID:" << userId;

            QSqlQuery detailQuery;
            detailQuery.prepare("SELECT * FROM LoginMasterList WHERE UserID = ?");
            detailQuery.addBindValue(userId);

            if (detailQuery.exec() && detailQuery.next()) {
                const int TEMP_THRESHOLD = 50;
                const int SMOKE_THRESHOLD = 70;

                ui->stackedWidget->setCurrentIndex(3);

                ui->displayIdLabel->setText(detailQuery.value("UserID").toString());
                ui->displayUsernameLabel->setText(detailQuery.value("UserName").toString());

                QString fullName = detailQuery.value("FirstName").toString() + " " + detailQuery.value("LastName").toString();
                ui->displayNameLabel->setText(fullName);

                ui->displayMobileNumberLabel->setText(detailQuery.value("MobileNumber").toString());
                ui->displayAddressLabel->setText(detailQuery.value("Address").toString());

                int temp = detailQuery.value("Temperature").toInt();
                int smk = detailQuery.value("Smoke").toInt();

                ui->displayTemperatureLabel->setText(QString::number(temp));
                ui->displaySmokeLabel->setText(QString::number(smk));

                if (temp > TEMP_THRESHOLD || smk > SMOKE_THRESHOLD) {
                    ui->displayStatusLabel->setText("FIRE DETECTED");
                    ui->displayStatusLabel->setStyleSheet("color: white; background-color: red; font-weight: bold; padding: 5px;");
                } else {
                    ui->displayStatusLabel->setText("SAFE");
                    ui->displayStatusLabel->setStyleSheet("color: white; background-color: green; font-weight: bold; padding: 5px;");
                }

                ui->displayTemperatureLabel->setStyleSheet(temp > TEMP_THRESHOLD ? "color: red; font-weight: bold;" : "");
                ui->displaySmokeLabel->setStyleSheet(smk > SMOKE_THRESHOLD ? "color: red; font-weight: bold;" : "");
            } else {
                qDebug() << "Failed to get user details:" << detailQuery.lastError().text();
                QMessageBox::warning(this, "Error", "Failed to retrieve user details.");
            }
        });
        ui->tableWidget->setCellWidget(row, 3, viewBtn);

        // Delete button
        QPushButton *delBtn = new QPushButton("Delete");
        connect(delBtn, &QPushButton::clicked, this, [=]() {
            if (QMessageBox::question(this, "Delete", "Are you sure you want to delete this user?") == QMessageBox::Yes) {
                QSqlQuery delQuery;
                delQuery.prepare("DELETE FROM LoginMasterList WHERE UserID = ?");
                delQuery.addBindValue(userId);
                if (delQuery.exec()) {
                    qDebug() << "Deleted user ID " << userId;
                    refreshDashboard();  // Reload the table after deletion
                } else {
                    qDebug() << "Failed to delete user:" << delQuery.lastError().text();
                    QMessageBox::warning(this, "Error", "Failed to delete user.");
                }
            }
        });
        ui->tableWidget->setCellWidget(row, 4, delBtn);

        row++;
    }
}




void dashboard::on_dashboardPushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void dashboard::on_tablePushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}




void dashboard::on_dashboardPushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void dashboard::on_tablePushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

