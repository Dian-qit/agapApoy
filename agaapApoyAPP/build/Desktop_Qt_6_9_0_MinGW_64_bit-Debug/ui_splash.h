/********************************************************************************
** Form generated from reading UI file 'splash.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPLASH_H
#define UI_SPLASH_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_splash
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page1Splash;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *page2Login;
    QPushButton *loginButton;
    QLabel *label_5;
    QPushButton *pushButton_3;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QPushButton *pushButton_4;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QFrame *frame;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_5;
    QLineEdit *loginUsernameLineEdit;
    QLabel *label_4;
    QFrame *frame_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_7;
    QLineEdit *loginPasswordLineEdit;
    QWidget *page3SignUp;
    QPushButton *continuePushButton;
    QLabel *label_9;
    QLabel *label_14;
    QPushButton *pushButton_15;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_13;
    QFrame *frame_8;
    QWidget *layoutWidget_9;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButton_14;
    QLineEdit *registerUsernameLineEdit;
    QLabel *label_10;
    QFrame *frame_5;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_11;
    QLineEdit *registerEmailLineEdit;
    QLabel *label_12;
    QFrame *frame_7;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton_13;
    QLineEdit *registerPasswordLineEdit;
    QLabel *label_11;
    QFrame *frame_6;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_12;
    QLineEdit *registerConfirmPasswordLineEdit;
    QPushButton *pushButton_2;
    QLabel *label_7;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_8;
    QPushButton *pushButton_6;
    QWidget *page4SignUp;
    QLabel *label_15;
    QFrame *line_3;
    QPushButton *pushButton_8;
    QLabel *label_36;
    QFrame *line_4;
    QLabel *label_37;
    QPushButton *pushButton_36;
    QLabel *label_38;
    QPushButton *signUpPushButton;
    QPushButton *pushButton_9;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_32;
    QFrame *frame_25;
    QWidget *layoutWidget_26;
    QHBoxLayout *horizontalLayout_27;
    QLineEdit *firstnameLineEdit;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_39;
    QFrame *frame_29;
    QWidget *layoutWidget_30;
    QHBoxLayout *horizontalLayout_31;
    QLineEdit *lastnameLineEdit;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_33;
    QFrame *frame_26;
    QDateEdit *registerDateEdit;
    QPushButton *pushButton_33;
    QLabel *label_34;
    QFrame *frame_27;
    QWidget *layoutWidget_28;
    QHBoxLayout *horizontalLayout_29;
    QPushButton *pushButton_34;
    QLineEdit *registerAddressLineEdit;

    void setupUi(QMainWindow *splash)
    {
        if (splash->objectName().isEmpty())
            splash->setObjectName("splash");
        splash->resize(296, 640);
        splash->setStyleSheet(QString::fromUtf8("background-color: #353a40;\n"
"    background: qlineargradient(x1:1, y2:1, x2:0, y2:1, \n"
"                  stop:0.15 #353a40, stop:.8 #121416);"));
        centralwidget = new QWidget(splash);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 291, 631));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,0%);"));
        stackedWidget->setFrameShape(QFrame::Shape::NoFrame);
        page1Splash = new QWidget();
        page1Splash->setObjectName("page1Splash");
        pushButton = new QPushButton(page1Splash);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(13, 500, 271, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Gadugi")});
        font.setPointSize(9);
        font.setBold(true);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y3:2, x2:1, y2:2, stop:1 rgba(255, 255, 255, 255), stop:.1 rgba(205, 91, 10, 255));\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y3:2, x2:1, y2:2, stop:1 rgba(200, 200, 200, 255), stop:.1 rgba(160, 71, 5, 255));\n"
"}\n"
""));
        layoutWidget = new QWidget(page1Splash);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(-20, 270, 334, 62));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Gadugi")});
        font1.setPointSize(16);
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setAutoFillBackground(false);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,0%);\n"
"position:center;"));
        label_2->setFrameShadow(QFrame::Shadow::Raised);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Gadugi")});
        font2.setPointSize(8);
        font2.setBold(false);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,0%);"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_3);

        stackedWidget->addWidget(page1Splash);
        page2Login = new QWidget();
        page2Login->setObjectName("page2Login");
        loginButton = new QPushButton(page2Login);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(13, 350, 271, 41));
        loginButton->setFont(font);
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y3:2, x2:1, y2:2, stop:1 rgba(255, 255, 255, 255), stop:.1 rgba(205, 91, 10, 255));\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y3:2, x2:1, y2:2, stop:1 rgba(200, 200, 200, 255), stop:.1 rgba(160, 71, 5, 255));\n"
"}\n"
""));
        label_5 = new QLabel(page2Login);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(0, 120, 301, 20));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Gadugi")});
        font3.setPointSize(11);
        font3.setBold(true);
        label_5->setFont(font3);
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton_3 = new QPushButton(page2Login);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(20, 310, 141, 29));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Gadugi")});
        font4.setPointSize(8);
        font4.setUnderline(true);
        pushButton_3->setFont(font4);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,0%);\n"
"border:none;\n"
"text-align:left;\n"
"text-decoration:underline;\n"
""));
        layoutWidget1 = new QWidget(page2Login);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(50, 410, 211, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName("label_6");
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Gadugi")});
        font5.setPointSize(8);
        font5.setBold(true);
        label_6->setFont(font5);

        horizontalLayout->addWidget(label_6);

        pushButton_4 = new QPushButton(layoutWidget1);
        pushButton_4->setObjectName("pushButton_4");
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Gadugi")});
        font6.setPointSize(8);
        font6.setBold(true);
        font6.setUnderline(true);
        pushButton_4->setFont(font6);
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,0%);\n"
"border:none;\n"
"text-align:left;\n"
"text-decoration:underline;\n"
"color:rgba(205, 91, 10, 255);\n"
""));

        horizontalLayout->addWidget(pushButton_4);

        layoutWidget2 = new QWidget(page2Login);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(20, 181, 261, 131));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget2);
        label->setObjectName("label");
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Gadugi")});
        font7.setPointSize(8);
        label->setFont(font7);

        verticalLayout_2->addWidget(label);

        frame = new QFrame(layoutWidget2);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 70);\n"
"border: none;\n"
"border-radius: 5px;\n"
"height:30px;"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        layoutWidget3 = new QWidget(frame);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(10, 0, 231, 32));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(layoutWidget3);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setStyleSheet(QString::fromUtf8("border:none;\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/email.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_5->setIcon(icon);

        horizontalLayout_2->addWidget(pushButton_5);

        loginUsernameLineEdit = new QLineEdit(layoutWidget3);
        loginUsernameLineEdit->setObjectName("loginUsernameLineEdit");
        loginUsernameLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 70);\n"
"border: none;\n"
"border-radius: 5px;\n"
"height:30px;"));

        horizontalLayout_2->addWidget(loginUsernameLineEdit);


        verticalLayout_2->addWidget(frame);

        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName("label_4");
        label_4->setFont(font7);

        verticalLayout_2->addWidget(label_4);

        frame_2 = new QFrame(layoutWidget2);
        frame_2->setObjectName("frame_2");
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 70);\n"
"border: none;\n"
"border-radius: 5px;\n"
"height:30px;"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        layoutWidget_2 = new QWidget(frame_2);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(10, 0, 231, 32));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_7 = new QPushButton(layoutWidget_2);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setStyleSheet(QString::fromUtf8("border:none;\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/password.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_7->setIcon(icon1);
        pushButton_7->setIconSize(QSize(25, 30));

        horizontalLayout_4->addWidget(pushButton_7);

        loginPasswordLineEdit = new QLineEdit(layoutWidget_2);
        loginPasswordLineEdit->setObjectName("loginPasswordLineEdit");
        loginPasswordLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 70);\n"
"border: none;\n"
"border-radius: 5px;\n"
"height:30px;"));

        horizontalLayout_4->addWidget(loginPasswordLineEdit);


        verticalLayout_2->addWidget(frame_2);

        stackedWidget->addWidget(page2Login);
        page3SignUp = new QWidget();
        page3SignUp->setObjectName("page3SignUp");
        continuePushButton = new QPushButton(page3SignUp);
        continuePushButton->setObjectName("continuePushButton");
        continuePushButton->setGeometry(QRect(13, 540, 271, 41));
        continuePushButton->setFont(font);
        continuePushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y3:2, x2:1, y2:2, stop:1 rgba(255, 255, 255, 255), stop:.1 rgba(205, 91, 10, 255));\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y3:2, x2:1, y2:2, stop:1 rgba(200, 200, 200, 255), stop:.1 rgba(160, 71, 5, 255));\n"
"}\n"
""));
        label_9 = new QLabel(page3SignUp);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(0, 110, 301, 20));
        label_9->setFont(font3);
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_14 = new QLabel(page3SignUp);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(10, 130, 271, 20));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Gadugi")});
        font8.setPointSize(7);
        font8.setBold(true);
        label_14->setFont(font8);
        label_14->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton_15 = new QPushButton(page3SignUp);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setGeometry(QRect(10, 50, 31, 29));
        pushButton_15->setStyleSheet(QString::fromUtf8("border:none;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/back.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_15->setIcon(icon2);
        layoutWidget4 = new QWidget(page3SignUp);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(10, 200, 271, 261));
        verticalLayout_4 = new QVBoxLayout(layoutWidget4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget4);
        label_13->setObjectName("label_13");
        label_13->setFont(font7);

        verticalLayout_4->addWidget(label_13);

        frame_8 = new QFrame(layoutWidget4);
        frame_8->setObjectName("frame_8");
        frame_8->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 70);\n"
"border: none;\n"
"border-radius: 5px;\n"
"height:30px;"));
        frame_8->setFrameShape(QFrame::Shape::StyledPanel);
        frame_8->setFrameShadow(QFrame::Shadow::Raised);
        layoutWidget_9 = new QWidget(frame_8);
        layoutWidget_9->setObjectName("layoutWidget_9");
        layoutWidget_9->setGeometry(QRect(10, 0, 231, 32));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget_9);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        pushButton_14 = new QPushButton(layoutWidget_9);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setStyleSheet(QString::fromUtf8("border:none;\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/person.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_14->setIcon(icon3);
        pushButton_14->setIconSize(QSize(25, 25));

        horizontalLayout_10->addWidget(pushButton_14);

        registerUsernameLineEdit = new QLineEdit(layoutWidget_9);
        registerUsernameLineEdit->setObjectName("registerUsernameLineEdit");
        registerUsernameLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 70);\n"
"border: none;\n"
"border-radius: 5px;\n"
"height:30px;"));

        horizontalLayout_10->addWidget(registerUsernameLineEdit);


        verticalLayout_4->addWidget(frame_8);

        label_10 = new QLabel(layoutWidget4);
        label_10->setObjectName("label_10");
        label_10->setFont(font7);

        verticalLayout_4->addWidget(label_10);

        frame_5 = new QFrame(layoutWidget4);
        frame_5->setObjectName("frame_5");
        frame_5->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 70);\n"
"border: none;\n"
"border-radius: 5px;\n"
"height:30px;"));
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        layoutWidget_6 = new QWidget(frame_5);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(10, 0, 231, 32));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        pushButton_11 = new QPushButton(layoutWidget_6);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setStyleSheet(QString::fromUtf8("border:none;\n"
""));
        pushButton_11->setIcon(icon);

        horizontalLayout_7->addWidget(pushButton_11);

        registerEmailLineEdit = new QLineEdit(layoutWidget_6);
        registerEmailLineEdit->setObjectName("registerEmailLineEdit");
        registerEmailLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 70);\n"
"border: none;\n"
"border-radius: 5px;\n"
"height:30px;"));

        horizontalLayout_7->addWidget(registerEmailLineEdit);


        verticalLayout_4->addWidget(frame_5);

        label_12 = new QLabel(layoutWidget4);
        label_12->setObjectName("label_12");
        label_12->setFont(font7);

        verticalLayout_4->addWidget(label_12);

        frame_7 = new QFrame(layoutWidget4);
        frame_7->setObjectName("frame_7");
        frame_7->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 70);\n"
"border: none;\n"
"border-radius: 5px;\n"
"height:30px;"));
        frame_7->setFrameShape(QFrame::Shape::StyledPanel);
        frame_7->setFrameShadow(QFrame::Shadow::Raised);
        layoutWidget_8 = new QWidget(frame_7);
        layoutWidget_8->setObjectName("layoutWidget_8");
        layoutWidget_8->setGeometry(QRect(10, 0, 231, 32));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        pushButton_13 = new QPushButton(layoutWidget_8);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setStyleSheet(QString::fromUtf8("border:none;\n"
""));
        pushButton_13->setIcon(icon1);
        pushButton_13->setIconSize(QSize(25, 30));

        horizontalLayout_9->addWidget(pushButton_13);

        registerPasswordLineEdit = new QLineEdit(layoutWidget_8);
        registerPasswordLineEdit->setObjectName("registerPasswordLineEdit");
        registerPasswordLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 70);\n"
"border: none;\n"
"border-radius: 5px;\n"
"height:30px;"));

        horizontalLayout_9->addWidget(registerPasswordLineEdit);


        verticalLayout_4->addWidget(frame_7);

        label_11 = new QLabel(layoutWidget4);
        label_11->setObjectName("label_11");
        label_11->setFont(font7);

        verticalLayout_4->addWidget(label_11);

        frame_6 = new QFrame(layoutWidget4);
        frame_6->setObjectName("frame_6");
        frame_6->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 70);\n"
"border: none;\n"
"border-radius: 5px;\n"
"height:30px;"));
        frame_6->setFrameShape(QFrame::Shape::StyledPanel);
        frame_6->setFrameShadow(QFrame::Shadow::Raised);
        layoutWidget_7 = new QWidget(frame_6);
        layoutWidget_7->setObjectName("layoutWidget_7");
        layoutWidget_7->setGeometry(QRect(10, 0, 231, 32));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        pushButton_12 = new QPushButton(layoutWidget_7);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setStyleSheet(QString::fromUtf8("border:none;\n"
""));
        pushButton_12->setIcon(icon1);
        pushButton_12->setIconSize(QSize(25, 30));

        horizontalLayout_8->addWidget(pushButton_12);

        registerConfirmPasswordLineEdit = new QLineEdit(layoutWidget_7);
        registerConfirmPasswordLineEdit->setObjectName("registerConfirmPasswordLineEdit");
        registerConfirmPasswordLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 70);\n"
"border: none;\n"
"border-radius: 5px;\n"
"height:30px;"));

        horizontalLayout_8->addWidget(registerConfirmPasswordLineEdit);


        verticalLayout_4->addWidget(frame_6);

        pushButton_2 = new QPushButton(page3SignUp);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(20, 162, 16, 16));
        QFont font9;
        font9.setPointSize(6);
        pushButton_2->setFont(font9);
        pushButton_2->setStyleSheet(QString::fromUtf8("border-radius:7;\n"
"border:solid;\n"
"background-color: rgba(205, 91, 10, 255);"));
        label_7 = new QLabel(page3SignUp);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(38, 162, 92, 16));
        label_7->setFont(font9);
        line = new QFrame(page3SignUp);
        line->setObjectName("line");
        line->setGeometry(QRect(17, 180, 118, 3));
        line->setStyleSheet(QString::fromUtf8("background-color: rgba(205, 91, 10, 255);"));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_2 = new QFrame(page3SignUp);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(145, 180, 118, 3));
        line_2->setStyleSheet(QString::fromUtf8("background-color:#3F3F46;"));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        label_8 = new QLabel(page3SignUp);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(168, 162, 88, 16));
        label_8->setFont(font9);
        pushButton_6 = new QPushButton(page3SignUp);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(148, 162, 16, 16));
        pushButton_6->setFont(font9);
        pushButton_6->setStyleSheet(QString::fromUtf8("border-radius:7;\n"
"border:solid;\n"
"background-color:#3F3F46;\n"
""));
        stackedWidget->addWidget(page3SignUp);
        page4SignUp = new QWidget();
        page4SignUp->setObjectName("page4SignUp");
        label_15 = new QLabel(page4SignUp);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(0, 108, 301, 20));
        label_15->setFont(font3);
        label_15->setAlignment(Qt::AlignmentFlag::AlignCenter);
        line_3 = new QFrame(page4SignUp);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(145, 178, 118, 3));
        line_3->setStyleSheet(QString::fromUtf8("background-color: rgba(205, 91, 10, 255);"));
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        pushButton_8 = new QPushButton(page4SignUp);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(20, 160, 16, 16));
        pushButton_8->setFont(font9);
        pushButton_8->setStyleSheet(QString::fromUtf8("border-radius:7;\n"
"border:solid;\n"
"background-color: rgba(205, 91, 10, 255);"));
        label_36 = new QLabel(page4SignUp);
        label_36->setObjectName("label_36");
        label_36->setGeometry(QRect(10, 128, 271, 20));
        label_36->setFont(font8);
        label_36->setAlignment(Qt::AlignmentFlag::AlignCenter);
        line_4 = new QFrame(page4SignUp);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(17, 178, 118, 3));
        line_4->setStyleSheet(QString::fromUtf8("background-color: rgba(205, 91, 10, 255);"));
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);
        label_37 = new QLabel(page4SignUp);
        label_37->setObjectName("label_37");
        label_37->setGeometry(QRect(38, 160, 92, 16));
        label_37->setFont(font9);
        pushButton_36 = new QPushButton(page4SignUp);
        pushButton_36->setObjectName("pushButton_36");
        pushButton_36->setGeometry(QRect(10, 48, 31, 29));
        pushButton_36->setStyleSheet(QString::fromUtf8("border:none;"));
        pushButton_36->setIcon(icon2);
        label_38 = new QLabel(page4SignUp);
        label_38->setObjectName("label_38");
        label_38->setGeometry(QRect(168, 160, 88, 16));
        label_38->setFont(font9);
        signUpPushButton = new QPushButton(page4SignUp);
        signUpPushButton->setObjectName("signUpPushButton");
        signUpPushButton->setGeometry(QRect(13, 538, 271, 41));
        signUpPushButton->setFont(font);
        signUpPushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y3:2, x2:1, y2:2, stop:1 rgba(255, 255, 255, 255), stop:.1 rgba(205, 91, 10, 255));\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y3:2, x2:1, y2:2, stop:1 rgba(200, 200, 200, 255), stop:.1 rgba(160, 71, 5, 255));\n"
"}\n"
""));
        pushButton_9 = new QPushButton(page4SignUp);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(148, 160, 16, 16));
        pushButton_9->setFont(font9);
        pushButton_9->setStyleSheet(QString::fromUtf8("border-radius:7;\n"
"border:solid;\n"
"background-color: rgba(205, 91, 10, 255);"));
        layoutWidget5 = new QWidget(page4SignUp);
        layoutWidget5->setObjectName("layoutWidget5");
        layoutWidget5->setGeometry(QRect(11, 199, 271, 61));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_32 = new QLabel(layoutWidget5);
        label_32->setObjectName("label_32");
        label_32->setFont(font7);

        verticalLayout_3->addWidget(label_32);

        frame_25 = new QFrame(layoutWidget5);
        frame_25->setObjectName("frame_25");
        frame_25->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 70);\n"
"border: none;\n"
"border-radius: 5px;\n"
"height:30px;"));
        frame_25->setFrameShape(QFrame::Shape::StyledPanel);
        frame_25->setFrameShadow(QFrame::Shadow::Raised);
        layoutWidget_26 = new QWidget(frame_25);
        layoutWidget_26->setObjectName("layoutWidget_26");
        layoutWidget_26->setGeometry(QRect(10, 0, 231, 32));
        horizontalLayout_27 = new QHBoxLayout(layoutWidget_26);
        horizontalLayout_27->setObjectName("horizontalLayout_27");
        horizontalLayout_27->setContentsMargins(0, 0, 0, 0);
        firstnameLineEdit = new QLineEdit(layoutWidget_26);
        firstnameLineEdit->setObjectName("firstnameLineEdit");
        firstnameLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 70);\n"
"border: none;\n"
"border-radius: 5px;\n"
"height:30px;"));

        horizontalLayout_27->addWidget(firstnameLineEdit);


        verticalLayout_3->addWidget(frame_25);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        label_39 = new QLabel(layoutWidget5);
        label_39->setObjectName("label_39");
        label_39->setFont(font7);

        verticalLayout_9->addWidget(label_39);

        frame_29 = new QFrame(layoutWidget5);
        frame_29->setObjectName("frame_29");
        frame_29->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 70);\n"
"border: none;\n"
"border-radius: 5px;\n"
"height:30px;"));
        frame_29->setFrameShape(QFrame::Shape::StyledPanel);
        frame_29->setFrameShadow(QFrame::Shadow::Raised);
        layoutWidget_30 = new QWidget(frame_29);
        layoutWidget_30->setObjectName("layoutWidget_30");
        layoutWidget_30->setGeometry(QRect(10, 0, 231, 32));
        horizontalLayout_31 = new QHBoxLayout(layoutWidget_30);
        horizontalLayout_31->setObjectName("horizontalLayout_31");
        horizontalLayout_31->setContentsMargins(0, 0, 0, 0);
        lastnameLineEdit = new QLineEdit(layoutWidget_30);
        lastnameLineEdit->setObjectName("lastnameLineEdit");
        lastnameLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 70);\n"
"border: none;\n"
"border-radius: 5px;\n"
"height:30px;"));

        horizontalLayout_31->addWidget(lastnameLineEdit);


        verticalLayout_9->addWidget(frame_29);


        horizontalLayout_3->addLayout(verticalLayout_9);

        layoutWidget6 = new QWidget(page4SignUp);
        layoutWidget6->setObjectName("layoutWidget6");
        layoutWidget6->setGeometry(QRect(11, 266, 271, 131));
        verticalLayout_10 = new QVBoxLayout(layoutWidget6);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_33 = new QLabel(layoutWidget6);
        label_33->setObjectName("label_33");
        label_33->setFont(font7);

        verticalLayout_10->addWidget(label_33);

        frame_26 = new QFrame(layoutWidget6);
        frame_26->setObjectName("frame_26");
        frame_26->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 70);\n"
"border: none;\n"
"border-radius: 5px;\n"
"height:30px;"));
        frame_26->setFrameShape(QFrame::Shape::StyledPanel);
        frame_26->setFrameShadow(QFrame::Shadow::Raised);
        registerDateEdit = new QDateEdit(frame_26);
        registerDateEdit->setObjectName("registerDateEdit");
        registerDateEdit->setGeometry(QRect(50, -2, 211, 30));
        registerDateEdit->setCalendarPopup(true);
        pushButton_33 = new QPushButton(frame_26);
        pushButton_33->setObjectName("pushButton_33");
        pushButton_33->setGeometry(QRect(10, 0, 24, 30));
        pushButton_33->setStyleSheet(QString::fromUtf8("border:none;\n"
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/calendar.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_33->setIcon(icon4);

        verticalLayout_10->addWidget(frame_26);

        label_34 = new QLabel(layoutWidget6);
        label_34->setObjectName("label_34");
        label_34->setFont(font7);

        verticalLayout_10->addWidget(label_34);

        frame_27 = new QFrame(layoutWidget6);
        frame_27->setObjectName("frame_27");
        frame_27->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 70);\n"
"border: none;\n"
"border-radius: 5px;\n"
"height:30px;"));
        frame_27->setFrameShape(QFrame::Shape::StyledPanel);
        frame_27->setFrameShadow(QFrame::Shadow::Raised);
        layoutWidget_28 = new QWidget(frame_27);
        layoutWidget_28->setObjectName("layoutWidget_28");
        layoutWidget_28->setGeometry(QRect(10, 0, 231, 32));
        horizontalLayout_29 = new QHBoxLayout(layoutWidget_28);
        horizontalLayout_29->setObjectName("horizontalLayout_29");
        horizontalLayout_29->setContentsMargins(0, 0, 0, 0);
        pushButton_34 = new QPushButton(layoutWidget_28);
        pushButton_34->setObjectName("pushButton_34");
        pushButton_34->setStyleSheet(QString::fromUtf8("border:none;\n"
""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/location.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_34->setIcon(icon5);
        pushButton_34->setIconSize(QSize(25, 30));

        horizontalLayout_29->addWidget(pushButton_34);

        registerAddressLineEdit = new QLineEdit(layoutWidget_28);
        registerAddressLineEdit->setObjectName("registerAddressLineEdit");
        registerAddressLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 70);\n"
"border: none;\n"
"border-radius: 5px;\n"
"height:30px;"));

        horizontalLayout_29->addWidget(registerAddressLineEdit);


        verticalLayout_10->addWidget(frame_27);

        stackedWidget->addWidget(page4SignUp);
        splash->setCentralWidget(centralwidget);

        retranslateUi(splash);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(splash);
    } // setupUi

    void retranslateUi(QMainWindow *splash)
    {
        splash->setWindowTitle(QCoreApplication::translate("splash", "splash", nullptr));
        pushButton->setText(QCoreApplication::translate("splash", "Get Started", nullptr));
        label_2->setText(QCoreApplication::translate("splash", "AGAPP APOY", nullptr));
        label_3->setText(QCoreApplication::translate("splash", "AGAP SA SUNOG, AGAP SA BUHAY", nullptr));
        loginButton->setText(QCoreApplication::translate("splash", "Login", nullptr));
        label_5->setText(QCoreApplication::translate("splash", "Login to your Account", nullptr));
        pushButton_3->setText(QCoreApplication::translate("splash", "Forgot password?", nullptr));
        label_6->setText(QCoreApplication::translate("splash", "Don't have an account?", nullptr));
        pushButton_4->setText(QCoreApplication::translate("splash", "Sign Up", nullptr));
        label->setText(QCoreApplication::translate("splash", "Email", nullptr));
        pushButton_5->setText(QString());
        loginUsernameLineEdit->setText(QCoreApplication::translate("splash", "Email daw", nullptr));
        label_4->setText(QCoreApplication::translate("splash", "Password", nullptr));
        pushButton_7->setText(QString());
        loginPasswordLineEdit->setText(QCoreApplication::translate("splash", "Password", nullptr));
        continuePushButton->setText(QCoreApplication::translate("splash", "Continue", nullptr));
        label_9->setText(QCoreApplication::translate("splash", "Create an Account", nullptr));
        label_14->setText(QCoreApplication::translate("splash", "Help us finish setting up your account", nullptr));
        pushButton_15->setText(QString());
        label_13->setText(QCoreApplication::translate("splash", "Username", nullptr));
        pushButton_14->setText(QString());
        registerUsernameLineEdit->setText(QCoreApplication::translate("splash", "Username", nullptr));
        label_10->setText(QCoreApplication::translate("splash", "Email", nullptr));
        pushButton_11->setText(QString());
        registerEmailLineEdit->setText(QCoreApplication::translate("splash", "Email daw", nullptr));
        label_12->setText(QCoreApplication::translate("splash", "Password", nullptr));
        pushButton_13->setText(QString());
        registerPasswordLineEdit->setText(QCoreApplication::translate("splash", "Password", nullptr));
        label_11->setText(QCoreApplication::translate("splash", "Confirm password", nullptr));
        pushButton_12->setText(QString());
        registerConfirmPasswordLineEdit->setText(QCoreApplication::translate("splash", "Password", nullptr));
        pushButton_2->setText(QCoreApplication::translate("splash", "1", nullptr));
        label_7->setText(QCoreApplication::translate("splash", "Account Information", nullptr));
        label_8->setText(QCoreApplication::translate("splash", "Biodata Information", nullptr));
        pushButton_6->setText(QCoreApplication::translate("splash", "2", nullptr));
        label_15->setText(QCoreApplication::translate("splash", "Create an Account", nullptr));
        pushButton_8->setText(QCoreApplication::translate("splash", "1", nullptr));
        label_36->setText(QCoreApplication::translate("splash", "Help us finish setting up your account", nullptr));
        label_37->setText(QCoreApplication::translate("splash", "Account Information", nullptr));
        pushButton_36->setText(QString());
        label_38->setText(QCoreApplication::translate("splash", "Biodata Information", nullptr));
        signUpPushButton->setText(QCoreApplication::translate("splash", "Create your account", nullptr));
        pushButton_9->setText(QCoreApplication::translate("splash", "2", nullptr));
        label_32->setText(QCoreApplication::translate("splash", "First name", nullptr));
        firstnameLineEdit->setText(QCoreApplication::translate("splash", "Username", nullptr));
        label_39->setText(QCoreApplication::translate("splash", "Last name", nullptr));
        lastnameLineEdit->setText(QCoreApplication::translate("splash", "Username", nullptr));
        label_33->setText(QCoreApplication::translate("splash", "Date of Birth", nullptr));
        registerDateEdit->setDisplayFormat(QCoreApplication::translate("splash", "MMMM d yyyy", nullptr));
        pushButton_33->setText(QString());
        label_34->setText(QCoreApplication::translate("splash", "Address", nullptr));
        pushButton_34->setText(QString());
        registerAddressLineEdit->setText(QCoreApplication::translate("splash", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class splash: public Ui_splash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPLASH_H
