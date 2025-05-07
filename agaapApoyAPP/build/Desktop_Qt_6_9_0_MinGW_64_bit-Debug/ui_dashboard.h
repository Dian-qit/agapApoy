/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dashboard
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *label_5;
    QFrame *frame;
    QFrame *frame_2;
    QLabel *label_6;
    QPushButton *pushButton;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QFrame *frame_3;
    QLabel *label_8;
    QPushButton *pushButton_3;
    QFrame *frame_5;
    QLabel *label_10;
    QFrame *frame_8;
    QFrame *frame_6;
    QPushButton *pushButton_5;
    QFrame *frame_7;
    QPushButton *dashboardPushButton;
    QPushButton *tablePushButton;
    QPushButton *pushButton_8;
    QWidget *page_2;
    QLabel *label_7;
    QFrame *frame_4;
    QLabel *recentAddressLabel;
    QPushButton *pushButton_4;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_9;
    QLabel *recentAddressLabel_2;
    QLabel *recentAddressLabel_3;
    QFrame *frame_9;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_12;
    QLabel *recentAddressLabel_4;
    QLabel *recentAddressLabel_5;
    QLabel *recentAddressLabel_7;
    QPushButton *pushButton_15;
    QLabel *recentAddressLabel_6;
    QFrame *frame_10;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_16;
    QLabel *recentAddressLabel_8;
    QLabel *recentAddressLabel_9;
    QLabel *recentAddressLabel_10;
    QPushButton *pushButton_17;
    QLabel *recentAddressLabel_11;
    QFrame *frame_11;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_18;
    QLabel *recentAddressLabel_12;
    QLabel *recentAddressLabel_13;
    QLabel *recentAddressLabel_14;
    QPushButton *pushButton_19;
    QLabel *recentAddressLabel_15;
    QFrame *line;
    QWidget *page_3;
    QLabel *label_9;
    QFrame *frame_12;
    QTableWidget *tableWidget;
    QFrame *frame_13;
    QPushButton *dashboardPushButton_2;
    QPushButton *tablePushButton_2;
    QPushButton *pushButton_20;
    QWidget *page_4;
    QLabel *label_11;
    QFrame *frame_14;
    QPushButton *dashboardPushButton_3;
    QPushButton *tablePushButton_3;
    QPushButton *pushButton_22;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_13;
    QLabel *displayUsernameLabel;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_15;
    QLabel *displayMobileNumberLabel;
    QWidget *layoutWidget_9;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_16;
    QLabel *displayAddressLabel;
    QWidget *layoutWidget_10;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_17;
    QLabel *displaySmokeLabel;
    QWidget *layoutWidget_11;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_18;
    QLabel *displayTemperatureLabel;
    QWidget *layoutWidget_12;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_19;
    QLabel *displayStatusLabel;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_12;
    QLabel *displayIdLabel;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_14;
    QLabel *displayNameLabel;

    void setupUi(QMainWindow *dashboard)
    {
        if (dashboard->objectName().isEmpty())
            dashboard->setObjectName("dashboard");
        dashboard->resize(296, 640);
        dashboard->setStyleSheet(QString::fromUtf8("background-color: rgb(26, 26, 26);\n"
"color:#fff;\n"
""));
        centralwidget = new QWidget(dashboard);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 301, 641));
        page = new QWidget();
        page->setObjectName("page");
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 30, 161, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("Tahoma")});
        font.setBold(true);
        label->setFont(font);
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(110, 60, 106, 21));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Tahoma")});
        font1.setPointSize(6);
        font1.setBold(true);
        font1.setItalic(false);
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_2->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(254, 162, 10);"));

        horizontalLayout_2->addWidget(label_5);

        frame = new QFrame(page);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(19, 90, 261, 171));
        frame->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgb(47, 47, 47);\n"
"border-radius:10px;"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(10, 20, 121, 171));
        frame_2->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgb(26, 26, 26);\n"
"border-radius:10px;"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 0, 121, 20));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Tahoma")});
        font2.setPointSize(7);
        font2.setBold(true);
        label_6->setFont(font2);
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 120, 111, 29));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 161, 11);\n"
"border:none;\n"
"border-radius:5px;\n"
"font: 700 6pt \"Tahoma\";\n"
"color:#000;"));
        layoutWidget1 = new QWidget(page);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 60, 78, 21));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(254, 162, 10);"));

        horizontalLayout->addWidget(label_3);

        frame_3 = new QFrame(page);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(20, 270, 111, 151));
        frame_3->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgb(47, 47, 47);\n"
"border-radius:10px;"));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        label_8 = new QLabel(frame_3);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 10, 91, 20));
        label_8->setFont(font2);
        label_8->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        pushButton_3 = new QPushButton(frame_3);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(10, 110, 91, 29));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 161, 11);\n"
"border:none;\n"
"border-radius:5px;\n"
"font: 700 6pt \"Tahoma\";\n"
"color:#000;"));
        frame_5 = new QFrame(page);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(140, 270, 141, 151));
        frame_5->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgb(47, 47, 47);\n"
"border-radius:10px;"));
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        label_10 = new QLabel(frame_5);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(0, 10, 101, 20));
        label_10->setFont(font2);
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);
        frame_8 = new QFrame(frame_5);
        frame_8->setObjectName("frame_8");
        frame_8->setGeometry(QRect(10, 40, 121, 101));
        frame_8->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgb(26, 26, 26);\n"
"border-radius:10px;"));
        frame_8->setFrameShape(QFrame::Shape::StyledPanel);
        frame_8->setFrameShadow(QFrame::Shadow::Raised);
        frame_6 = new QFrame(page);
        frame_6->setObjectName("frame_6");
        frame_6->setGeometry(QRect(20, 430, 261, 111));
        frame_6->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgb(47, 47, 47);\n"
"border-radius:10px;"));
        frame_6->setFrameShape(QFrame::Shape::StyledPanel);
        frame_6->setFrameShadow(QFrame::Shadow::Raised);
        pushButton_5 = new QPushButton(frame_6);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(50, 60, 161, 29));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 161, 11);\n"
"border:none;\n"
"border-radius:5px;\n"
"font: 700 6pt \"Tahoma\";\n"
"color:#000;"));
        frame_7 = new QFrame(page);
        frame_7->setObjectName("frame_7");
        frame_7->setGeometry(QRect(-20, 580, 361, 91));
        frame_7->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgb(47, 47, 47);\n"
"border-radius:10px;"));
        frame_7->setFrameShape(QFrame::Shape::StyledPanel);
        frame_7->setFrameShadow(QFrame::Shadow::Raised);
        dashboardPushButton = new QPushButton(frame_7);
        dashboardPushButton->setObjectName("dashboardPushButton");
        dashboardPushButton->setGeometry(QRect(60, 10, 41, 41));
        dashboardPushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(26, 26, 26);\n"
"border-radius:20px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/burn.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        dashboardPushButton->setIcon(icon);
        dashboardPushButton->setIconSize(QSize(25, 25));
        tablePushButton = new QPushButton(frame_7);
        tablePushButton->setObjectName("tablePushButton");
        tablePushButton->setGeometry(QRect(150, 10, 41, 41));
        tablePushButton->setStyleSheet(QString::fromUtf8("\n"
"border-radius:20px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/table.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        tablePushButton->setIcon(icon1);
        tablePushButton->setIconSize(QSize(28, 28));
        pushButton_8 = new QPushButton(frame_7);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(240, 10, 41, 41));
        pushButton_8->setStyleSheet(QString::fromUtf8("\n"
"border-radius:20px;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/settings (2).png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_8->setIcon(icon2);
        pushButton_8->setIconSize(QSize(30, 30));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        label_7 = new QLabel(page_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 30, 161, 20));
        label_7->setFont(font);
        frame_4 = new QFrame(page_2);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(20, 60, 251, 121));
        frame_4->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgb(47, 47, 47);\n"
"border-radius:10px;"));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        recentAddressLabel = new QLabel(frame_4);
        recentAddressLabel->setObjectName("recentAddressLabel");
        recentAddressLabel->setGeometry(QRect(40, 10, 106, 16));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Tahoma")});
        font3.setPointSize(8);
        font3.setBold(true);
        recentAddressLabel->setFont(font3);
        recentAddressLabel->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        pushButton_4 = new QPushButton(frame_4);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(12, 1, 24, 31));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/location (2).png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_4->setIcon(icon3);
        layoutWidget_2 = new QWidget(frame_4);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(30, 40, 183, 42));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_9 = new QPushButton(layoutWidget_2);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setIcon(icon);
        pushButton_9->setIconSize(QSize(40, 40));

        horizontalLayout_4->addWidget(pushButton_9);

        recentAddressLabel_2 = new QLabel(layoutWidget_2);
        recentAddressLabel_2->setObjectName("recentAddressLabel_2");
        recentAddressLabel_2->setFont(font3);
        recentAddressLabel_2->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_4->addWidget(recentAddressLabel_2);

        recentAddressLabel_3 = new QLabel(frame_4);
        recentAddressLabel_3->setObjectName("recentAddressLabel_3");
        recentAddressLabel_3->setGeometry(QRect(30, 90, 130, 21));
        recentAddressLabel_3->setFont(font3);
        recentAddressLabel_3->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        frame_9 = new QFrame(page_2);
        frame_9->setObjectName("frame_9");
        frame_9->setGeometry(QRect(60, 200, 191, 131));
        frame_9->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgb(47, 47, 47);\n"
"border-radius:10px;"));
        frame_9->setFrameShape(QFrame::Shape::StyledPanel);
        frame_9->setFrameShadow(QFrame::Shadow::Raised);
        layoutWidget_3 = new QWidget(frame_9);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(20, 60, 171, 42));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton_12 = new QPushButton(layoutWidget_3);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setIcon(icon);
        pushButton_12->setIconSize(QSize(30, 30));

        horizontalLayout_5->addWidget(pushButton_12);

        recentAddressLabel_4 = new QLabel(layoutWidget_3);
        recentAddressLabel_4->setObjectName("recentAddressLabel_4");
        recentAddressLabel_4->setFont(font2);
        recentAddressLabel_4->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_5->addWidget(recentAddressLabel_4);

        recentAddressLabel_5 = new QLabel(frame_9);
        recentAddressLabel_5->setObjectName("recentAddressLabel_5");
        recentAddressLabel_5->setGeometry(QRect(30, 100, 130, 20));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Tahoma")});
        font4.setPointSize(6);
        font4.setBold(true);
        recentAddressLabel_5->setFont(font4);
        recentAddressLabel_5->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        recentAddressLabel_7 = new QLabel(frame_9);
        recentAddressLabel_7->setObjectName("recentAddressLabel_7");
        recentAddressLabel_7->setGeometry(QRect(30, 40, 151, 16));
        recentAddressLabel_7->setFont(font2);
        recentAddressLabel_7->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        pushButton_15 = new QPushButton(frame_9);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setGeometry(QRect(2, 12, 24, 31));
        pushButton_15->setIcon(icon3);
        recentAddressLabel_6 = new QLabel(frame_9);
        recentAddressLabel_6->setObjectName("recentAddressLabel_6");
        recentAddressLabel_6->setGeometry(QRect(30, 20, 65, 16));
        recentAddressLabel_6->setFont(font2);
        recentAddressLabel_6->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        frame_10 = new QFrame(page_2);
        frame_10->setObjectName("frame_10");
        frame_10->setGeometry(QRect(60, 340, 191, 131));
        frame_10->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgb(47, 47, 47);\n"
"border-radius:10px;"));
        frame_10->setFrameShape(QFrame::Shape::StyledPanel);
        frame_10->setFrameShadow(QFrame::Shadow::Raised);
        layoutWidget_4 = new QWidget(frame_10);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(20, 60, 171, 42));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        pushButton_16 = new QPushButton(layoutWidget_4);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setIcon(icon);
        pushButton_16->setIconSize(QSize(30, 30));

        horizontalLayout_6->addWidget(pushButton_16);

        recentAddressLabel_8 = new QLabel(layoutWidget_4);
        recentAddressLabel_8->setObjectName("recentAddressLabel_8");
        recentAddressLabel_8->setFont(font2);
        recentAddressLabel_8->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_6->addWidget(recentAddressLabel_8);

        recentAddressLabel_9 = new QLabel(frame_10);
        recentAddressLabel_9->setObjectName("recentAddressLabel_9");
        recentAddressLabel_9->setGeometry(QRect(30, 100, 130, 20));
        recentAddressLabel_9->setFont(font4);
        recentAddressLabel_9->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        recentAddressLabel_10 = new QLabel(frame_10);
        recentAddressLabel_10->setObjectName("recentAddressLabel_10");
        recentAddressLabel_10->setGeometry(QRect(30, 40, 151, 16));
        recentAddressLabel_10->setFont(font2);
        recentAddressLabel_10->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        pushButton_17 = new QPushButton(frame_10);
        pushButton_17->setObjectName("pushButton_17");
        pushButton_17->setGeometry(QRect(2, 12, 24, 31));
        pushButton_17->setIcon(icon3);
        recentAddressLabel_11 = new QLabel(frame_10);
        recentAddressLabel_11->setObjectName("recentAddressLabel_11");
        recentAddressLabel_11->setGeometry(QRect(30, 20, 65, 16));
        recentAddressLabel_11->setFont(font2);
        recentAddressLabel_11->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        frame_11 = new QFrame(page_2);
        frame_11->setObjectName("frame_11");
        frame_11->setGeometry(QRect(60, 480, 191, 131));
        frame_11->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgb(47, 47, 47);\n"
"border-radius:10px;"));
        frame_11->setFrameShape(QFrame::Shape::StyledPanel);
        frame_11->setFrameShadow(QFrame::Shadow::Raised);
        layoutWidget_5 = new QWidget(frame_11);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(20, 60, 171, 42));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        pushButton_18 = new QPushButton(layoutWidget_5);
        pushButton_18->setObjectName("pushButton_18");
        pushButton_18->setIcon(icon);
        pushButton_18->setIconSize(QSize(30, 30));

        horizontalLayout_7->addWidget(pushButton_18);

        recentAddressLabel_12 = new QLabel(layoutWidget_5);
        recentAddressLabel_12->setObjectName("recentAddressLabel_12");
        recentAddressLabel_12->setFont(font2);
        recentAddressLabel_12->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_7->addWidget(recentAddressLabel_12);

        recentAddressLabel_13 = new QLabel(frame_11);
        recentAddressLabel_13->setObjectName("recentAddressLabel_13");
        recentAddressLabel_13->setGeometry(QRect(30, 100, 130, 20));
        recentAddressLabel_13->setFont(font4);
        recentAddressLabel_13->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        recentAddressLabel_14 = new QLabel(frame_11);
        recentAddressLabel_14->setObjectName("recentAddressLabel_14");
        recentAddressLabel_14->setGeometry(QRect(30, 40, 151, 16));
        recentAddressLabel_14->setFont(font2);
        recentAddressLabel_14->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        pushButton_19 = new QPushButton(frame_11);
        pushButton_19->setObjectName("pushButton_19");
        pushButton_19->setGeometry(QRect(2, 12, 24, 31));
        pushButton_19->setIcon(icon3);
        recentAddressLabel_15 = new QLabel(frame_11);
        recentAddressLabel_15->setObjectName("recentAddressLabel_15");
        recentAddressLabel_15->setGeometry(QRect(30, 20, 65, 16));
        recentAddressLabel_15->setFont(font2);
        recentAddressLabel_15->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        line = new QFrame(page_2);
        line->setObjectName("line");
        line->setGeometry(QRect(40, 200, 3, 420));
        line->setStyleSheet(QString::fromUtf8("background-color: rgb(47, 47, 47);"));
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        label_9 = new QLabel(page_3);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(20, 30, 161, 20));
        label_9->setFont(font);
        frame_12 = new QFrame(page_3);
        frame_12->setObjectName("frame_12");
        frame_12->setGeometry(QRect(20, 60, 251, 501));
        frame_12->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgb(47, 47, 47);\n"
"border-radius:10px;"));
        frame_12->setFrameShape(QFrame::Shape::StyledPanel);
        frame_12->setFrameShadow(QFrame::Shadow::Raised);
        tableWidget = new QTableWidget(frame_12);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(0, 10, 251, 491));
        tableWidget->horizontalHeader()->setDefaultSectionSize(48);
        frame_13 = new QFrame(page_3);
        frame_13->setObjectName("frame_13");
        frame_13->setGeometry(QRect(-20, 580, 361, 91));
        frame_13->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgb(47, 47, 47);\n"
"border-radius:10px;"));
        frame_13->setFrameShape(QFrame::Shape::StyledPanel);
        frame_13->setFrameShadow(QFrame::Shadow::Raised);
        dashboardPushButton_2 = new QPushButton(frame_13);
        dashboardPushButton_2->setObjectName("dashboardPushButton_2");
        dashboardPushButton_2->setGeometry(QRect(60, 10, 41, 41));
        dashboardPushButton_2->setStyleSheet(QString::fromUtf8("\n"
"border-radius:20px;"));
        dashboardPushButton_2->setIcon(icon);
        dashboardPushButton_2->setIconSize(QSize(25, 25));
        tablePushButton_2 = new QPushButton(frame_13);
        tablePushButton_2->setObjectName("tablePushButton_2");
        tablePushButton_2->setGeometry(QRect(150, 10, 41, 41));
        tablePushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(26, 26, 26);\n"
"border-radius:20px;"));
        tablePushButton_2->setIcon(icon1);
        tablePushButton_2->setIconSize(QSize(28, 28));
        pushButton_20 = new QPushButton(frame_13);
        pushButton_20->setObjectName("pushButton_20");
        pushButton_20->setGeometry(QRect(240, 10, 41, 41));
        pushButton_20->setStyleSheet(QString::fromUtf8("\n"
"border-radius:20px;"));
        pushButton_20->setIcon(icon2);
        pushButton_20->setIconSize(QSize(30, 30));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        label_11 = new QLabel(page_4);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(20, 30, 161, 20));
        label_11->setFont(font);
        frame_14 = new QFrame(page_4);
        frame_14->setObjectName("frame_14");
        frame_14->setGeometry(QRect(-30, 580, 361, 91));
        frame_14->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color: rgb(47, 47, 47);\n"
"border-radius:10px;"));
        frame_14->setFrameShape(QFrame::Shape::StyledPanel);
        frame_14->setFrameShadow(QFrame::Shadow::Raised);
        dashboardPushButton_3 = new QPushButton(frame_14);
        dashboardPushButton_3->setObjectName("dashboardPushButton_3");
        dashboardPushButton_3->setGeometry(QRect(60, 10, 41, 41));
        dashboardPushButton_3->setStyleSheet(QString::fromUtf8("\n"
"border-radius:20px;"));
        dashboardPushButton_3->setIcon(icon);
        dashboardPushButton_3->setIconSize(QSize(25, 25));
        tablePushButton_3 = new QPushButton(frame_14);
        tablePushButton_3->setObjectName("tablePushButton_3");
        tablePushButton_3->setGeometry(QRect(150, 10, 41, 41));
        tablePushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(26, 26, 26);\n"
"border-radius:20px;"));
        tablePushButton_3->setIcon(icon1);
        tablePushButton_3->setIconSize(QSize(28, 28));
        pushButton_22 = new QPushButton(frame_14);
        pushButton_22->setObjectName("pushButton_22");
        pushButton_22->setGeometry(QRect(240, 10, 41, 41));
        pushButton_22->setStyleSheet(QString::fromUtf8("\n"
"border-radius:20px;"));
        pushButton_22->setIcon(icon2);
        pushButton_22->setIconSize(QSize(30, 30));
        layoutWidget_6 = new QWidget(page_4);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(30, 210, 201, 20));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget_6);
        label_13->setObjectName("label_13");
        label_13->setFont(font);

        horizontalLayout_8->addWidget(label_13);

        displayUsernameLabel = new QLabel(layoutWidget_6);
        displayUsernameLabel->setObjectName("displayUsernameLabel");
        displayUsernameLabel->setFont(font);

        horizontalLayout_8->addWidget(displayUsernameLabel);

        layoutWidget_8 = new QWidget(page_4);
        layoutWidget_8->setObjectName("layoutWidget_8");
        layoutWidget_8->setGeometry(QRect(30, 270, 201, 20));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget_8);
        label_15->setObjectName("label_15");
        label_15->setFont(font);

        horizontalLayout_11->addWidget(label_15);

        displayMobileNumberLabel = new QLabel(layoutWidget_8);
        displayMobileNumberLabel->setObjectName("displayMobileNumberLabel");
        displayMobileNumberLabel->setFont(font);

        horizontalLayout_11->addWidget(displayMobileNumberLabel);

        layoutWidget_9 = new QWidget(page_4);
        layoutWidget_9->setObjectName("layoutWidget_9");
        layoutWidget_9->setGeometry(QRect(30, 300, 201, 20));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget_9);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget_9);
        label_16->setObjectName("label_16");
        label_16->setFont(font);

        horizontalLayout_12->addWidget(label_16);

        displayAddressLabel = new QLabel(layoutWidget_9);
        displayAddressLabel->setObjectName("displayAddressLabel");
        displayAddressLabel->setFont(font);

        horizontalLayout_12->addWidget(displayAddressLabel);

        layoutWidget_10 = new QWidget(page_4);
        layoutWidget_10->setObjectName("layoutWidget_10");
        layoutWidget_10->setGeometry(QRect(30, 330, 201, 20));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget_10);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(layoutWidget_10);
        label_17->setObjectName("label_17");
        label_17->setFont(font);

        horizontalLayout_13->addWidget(label_17);

        displaySmokeLabel = new QLabel(layoutWidget_10);
        displaySmokeLabel->setObjectName("displaySmokeLabel");
        displaySmokeLabel->setFont(font);

        horizontalLayout_13->addWidget(displaySmokeLabel);

        layoutWidget_11 = new QWidget(page_4);
        layoutWidget_11->setObjectName("layoutWidget_11");
        layoutWidget_11->setGeometry(QRect(30, 360, 201, 20));
        horizontalLayout_14 = new QHBoxLayout(layoutWidget_11);
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(layoutWidget_11);
        label_18->setObjectName("label_18");
        label_18->setFont(font);

        horizontalLayout_14->addWidget(label_18);

        displayTemperatureLabel = new QLabel(layoutWidget_11);
        displayTemperatureLabel->setObjectName("displayTemperatureLabel");
        displayTemperatureLabel->setFont(font);

        horizontalLayout_14->addWidget(displayTemperatureLabel);

        layoutWidget_12 = new QWidget(page_4);
        layoutWidget_12->setObjectName("layoutWidget_12");
        layoutWidget_12->setGeometry(QRect(30, 390, 201, 20));
        horizontalLayout_15 = new QHBoxLayout(layoutWidget_12);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(layoutWidget_12);
        label_19->setObjectName("label_19");
        label_19->setFont(font);

        horizontalLayout_15->addWidget(label_19);

        displayStatusLabel = new QLabel(layoutWidget_12);
        displayStatusLabel->setObjectName("displayStatusLabel");
        displayStatusLabel->setFont(font);

        horizontalLayout_15->addWidget(displayStatusLabel);

        widget = new QWidget(page_4);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 180, 201, 20));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(widget);
        label_12->setObjectName("label_12");
        label_12->setFont(font);

        horizontalLayout_3->addWidget(label_12);

        displayIdLabel = new QLabel(widget);
        displayIdLabel->setObjectName("displayIdLabel");
        displayIdLabel->setFont(font);

        horizontalLayout_3->addWidget(displayIdLabel);

        widget1 = new QWidget(page_4);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(32, 241, 201, 20));
        horizontalLayout_9 = new QHBoxLayout(widget1);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(widget1);
        label_14->setObjectName("label_14");
        label_14->setFont(font);

        horizontalLayout_9->addWidget(label_14);

        displayNameLabel = new QLabel(widget1);
        displayNameLabel->setObjectName("displayNameLabel");
        displayNameLabel->setFont(font);

        horizontalLayout_9->addWidget(displayNameLabel);

        stackedWidget->addWidget(page_4);
        dashboard->setCentralWidget(centralwidget);

        retranslateUi(dashboard);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(dashboard);
    } // setupUi

    void retranslateUi(QMainWindow *dashboard)
    {
        dashboard->setWindowTitle(QCoreApplication::translate("dashboard", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("dashboard", "Admin dashboard", nullptr));
        label_4->setText(QCoreApplication::translate("dashboard", "This week:", nullptr));
        label_5->setText(QCoreApplication::translate("dashboard", "12 Fires", nullptr));
        label_6->setText(QCoreApplication::translate("dashboard", "Active Incidents", nullptr));
        pushButton->setText(QCoreApplication::translate("dashboard", "View Active Log", nullptr));
        label_2->setText(QCoreApplication::translate("dashboard", "Today:", nullptr));
        label_3->setText(QCoreApplication::translate("dashboard", "3 Fires", nullptr));
        label_8->setText(QCoreApplication::translate("dashboard", "Total Account", nullptr));
        pushButton_3->setText(QCoreApplication::translate("dashboard", "Add Device", nullptr));
        label_10->setText(QCoreApplication::translate("dashboard", "RealTime Data", nullptr));
        pushButton_5->setText(QCoreApplication::translate("dashboard", "Feature Coming Soon...", nullptr));
        dashboardPushButton->setText(QString());
        tablePushButton->setText(QString());
        pushButton_8->setText(QString());
        label_7->setText(QCoreApplication::translate("dashboard", "Recent Reports", nullptr));
        recentAddressLabel->setText(QCoreApplication::translate("dashboard", "Active Incidents", nullptr));
        pushButton_4->setText(QString());
        pushButton_9->setText(QString());
        recentAddressLabel_2->setText(QCoreApplication::translate("dashboard", "High Temp Detected", nullptr));
        recentAddressLabel_3->setText(QCoreApplication::translate("dashboard", "at 10:23AM", nullptr));
        pushButton_12->setText(QString());
        recentAddressLabel_4->setText(QCoreApplication::translate("dashboard", "High Temp Detected", nullptr));
        recentAddressLabel_5->setText(QCoreApplication::translate("dashboard", "at 10:23AM", nullptr));
        recentAddressLabel_7->setText(QCoreApplication::translate("dashboard", "Purok-4, Hinaplanon", nullptr));
        pushButton_15->setText(QString());
        recentAddressLabel_6->setText(QCoreApplication::translate("dashboard", "Iligan City", nullptr));
        pushButton_16->setText(QString());
        recentAddressLabel_8->setText(QCoreApplication::translate("dashboard", "High Temp Detected", nullptr));
        recentAddressLabel_9->setText(QCoreApplication::translate("dashboard", "at 10:23AM", nullptr));
        recentAddressLabel_10->setText(QCoreApplication::translate("dashboard", "Purok-4, Hinaplanon", nullptr));
        pushButton_17->setText(QString());
        recentAddressLabel_11->setText(QCoreApplication::translate("dashboard", "Iligan City", nullptr));
        pushButton_18->setText(QString());
        recentAddressLabel_12->setText(QCoreApplication::translate("dashboard", "High Temp Detected", nullptr));
        recentAddressLabel_13->setText(QCoreApplication::translate("dashboard", "at 10:23AM", nullptr));
        recentAddressLabel_14->setText(QCoreApplication::translate("dashboard", "Purok-4, Hinaplanon", nullptr));
        pushButton_19->setText(QString());
        recentAddressLabel_15->setText(QCoreApplication::translate("dashboard", "Iligan City", nullptr));
        label_9->setText(QCoreApplication::translate("dashboard", "All Records", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("dashboard", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("dashboard", "Temp", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("dashboard", "Smoke", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("dashboard", "Action", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("dashboard", "Delete", nullptr));
        dashboardPushButton_2->setText(QString());
        tablePushButton_2->setText(QString());
        pushButton_20->setText(QString());
        label_11->setText(QCoreApplication::translate("dashboard", "All Records", nullptr));
        dashboardPushButton_3->setText(QString());
        tablePushButton_3->setText(QString());
        pushButton_22->setText(QString());
        label_13->setText(QCoreApplication::translate("dashboard", "username", nullptr));
        displayUsernameLabel->setText(QCoreApplication::translate("dashboard", "123", nullptr));
        label_15->setText(QCoreApplication::translate("dashboard", "mobile number", nullptr));
        displayMobileNumberLabel->setText(QCoreApplication::translate("dashboard", "123", nullptr));
        label_16->setText(QCoreApplication::translate("dashboard", "address", nullptr));
        displayAddressLabel->setText(QCoreApplication::translate("dashboard", "123", nullptr));
        label_17->setText(QCoreApplication::translate("dashboard", "Smoke", nullptr));
        displaySmokeLabel->setText(QCoreApplication::translate("dashboard", "123", nullptr));
        label_18->setText(QCoreApplication::translate("dashboard", "Temperature", nullptr));
        displayTemperatureLabel->setText(QCoreApplication::translate("dashboard", "123", nullptr));
        label_19->setText(QCoreApplication::translate("dashboard", "Status", nullptr));
        displayStatusLabel->setText(QCoreApplication::translate("dashboard", "123", nullptr));
        label_12->setText(QCoreApplication::translate("dashboard", "ID:", nullptr));
        displayIdLabel->setText(QCoreApplication::translate("dashboard", "123", nullptr));
        label_14->setText(QCoreApplication::translate("dashboard", "Name", nullptr));
        displayNameLabel->setText(QCoreApplication::translate("dashboard", "123", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dashboard: public Ui_dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
