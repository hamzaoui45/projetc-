/********************************************************************************
** Form generated from reading UI file 'log.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOG_H
#define UI_LOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_log
{
public:
    QLabel *label_8;
    QLabel *label_6;
    QFrame *frame;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *user_2;
    QLineEdit *pswd_2;
    QPushButton *connect_2;
    QPushButton *recov_2;
    QLabel *label_12;
    QPushButton *recof_2;
    QLineEdit *speechOutput_2;
    QLabel *label_11;

    void setupUi(QDialog *log)
    {
        if (log->objectName().isEmpty())
            log->setObjectName("log");
        log->resize(1201, 733);
        log->setStyleSheet(QString::fromUtf8("\n"
"background-image: url(:/new/user/imgs/rtu.png);"));
        label_8 = new QLabel(log);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(0, 0, 161, 151));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/new/user/imgs/Vaxhaven__6_-removebg-preview (1).png")));
        label_8->setScaledContents(true);
        label_6 = new QLabel(log);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(120, 270, 401, 151));
        QFont font;
        font.setFamilies({QString::fromUtf8("century gothic")});
        font.setBold(false);
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-radius: 15px;\n"
"background: #05696b;"));
        frame = new QFrame(log);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(650, 70, 501, 561));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("century gothic")});
        frame->setFont(font1);
        frame->setStyleSheet(QString::fromUtf8("* {\n"
"    font-family: century gothic;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QFrame {\n"
"    background: #d5f1f0;\n"
"    border-radius: 15px;\n"
"}\n"
"\n"
"\n"
"QPushButton {\n"
"    background: #05696b;\n"
"    border-radius: 10px;\n"
"    color: white;\n"
"}\n"
"\n"
"QLabel {\n"
"    color: #05696b;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    color: #034f50;\n"
"    border-radius: 15px;\n"
"    background: #a8e6e3;\n"
"}\n"
"\n"
"QLineEdit {\n"
"    background: transparent;\n"
"    border: none;\n"
"    color: #05696b;\n"
"    border-bottom: 1px solid #05696b;\n"
"}\n"
""));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(50, 80, 91, 31));
        label_7->setFont(font);
        label_9 = new QLabel(frame);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(50, 180, 131, 31));
        label_10 = new QLabel(frame);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(30, 390, 331, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("century gothic")});
        font2.setBold(true);
        label_10->setFont(font2);
        user_2 = new QLineEdit(frame);
        user_2->setObjectName("user_2");
        user_2->setGeometry(QRect(50, 130, 321, 28));
        user_2->setMaxLength(32767);
        pswd_2 = new QLineEdit(frame);
        pswd_2->setObjectName("pswd_2");
        pswd_2->setGeometry(QRect(50, 230, 321, 28));
        pswd_2->setFrame(true);
        pswd_2->setEchoMode(QLineEdit::EchoMode::Password);
        connect_2 = new QPushButton(frame);
        connect_2->setObjectName("connect_2");
        connect_2->setGeometry(QRect(200, 470, 121, 41));
        connect_2->setFont(font2);
        connect_2->setCheckable(false);
        recov_2 = new QPushButton(frame);
        recov_2->setObjectName("recov_2");
        recov_2->setGeometry(QRect(370, 330, 111, 31));
        recov_2->setFont(font2);
        label_12 = new QLabel(frame);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(30, 330, 331, 31));
        label_12->setFont(font2);
        recof_2 = new QPushButton(frame);
        recof_2->setObjectName("recof_2");
        recof_2->setGeometry(QRect(370, 390, 111, 31));
        recof_2->setFont(font2);
        speechOutput_2 = new QLineEdit(frame);
        speechOutput_2->setObjectName("speechOutput_2");
        speechOutput_2->setGeometry(QRect(310, 50, 181, 71));
        speechOutput_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_11 = new QLabel(frame);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(150, -50, 171, 181));
        label_11->setStyleSheet(QString::fromUtf8("background: #d5f1f0;"));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/new/user/imgs/Design_sans_titre__13_-removebg-preview.png")));
        label_11->setScaledContents(true);

        retranslateUi(log);

        QMetaObject::connectSlotsByName(log);
    } // setupUi

    void retranslateUi(QDialog *log)
    {
        log->setWindowTitle(QCoreApplication::translate("log", "Dialog", nullptr));
        label_8->setText(QString());
        label_6->setText(QCoreApplication::translate("log", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt;\">Welcome </span></p><p align=\"center\"><span style=\" font-size:24pt;\">To LAKAHNI</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("log", "<html><head/><body><p><span style=\" font-size:16pt;\">UserID:</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("log", "<html><head/><body><p><span style=\" font-size:16pt;\">Password:</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("log", "<html><head/><body><p><span style=\" font-size:12pt;\">Utiliser la Reconnaisance Faciale:</span></p></body></html>", nullptr));
        user_2->setInputMask(QString());
        user_2->setText(QString());
        user_2->setPlaceholderText(QCoreApplication::translate("log", "UserID", nullptr));
        pswd_2->setInputMask(QString());
        pswd_2->setText(QString());
        pswd_2->setPlaceholderText(QCoreApplication::translate("log", "Password", nullptr));
        connect_2->setText(QCoreApplication::translate("log", "Se connecter", nullptr));
        recov_2->setText(QCoreApplication::translate("log", "Appuyer ici", nullptr));
        label_12->setText(QCoreApplication::translate("log", "<html><head/><body><p><span style=\" font-size:12pt;\">Utiliser la Reconnaisance Vocale:</span></p></body></html>", nullptr));
        recof_2->setText(QCoreApplication::translate("log", "Appuyer ici", nullptr));
        label_11->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class log: public Ui_log {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOG_H
