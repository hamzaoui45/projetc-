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
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *user;
    QLineEdit *pswd;
    QPushButton *connect;
    QPushButton *recov;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *recof;
    QLineEdit *speechOutput;
    QLabel *label_8;
    QLabel *label_6;

    void setupUi(QDialog *log)
    {
        if (log->objectName().isEmpty())
            log->setObjectName("log");
        log->resize(1130, 637);
        log->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/rtu.png);"));
        frame = new QFrame(log);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(540, 30, 501, 561));
        QFont font;
        font.setFamilies({QString::fromUtf8("century gothic")});
        frame->setFont(font);
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
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 80, 91, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("century gothic")});
        font1.setBold(false);
        label->setFont(font1);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 180, 131, 31));
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 390, 331, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("century gothic")});
        font2.setBold(true);
        label_3->setFont(font2);
        user = new QLineEdit(frame);
        user->setObjectName("user");
        user->setGeometry(QRect(50, 130, 321, 28));
        user->setMaxLength(32767);
        pswd = new QLineEdit(frame);
        pswd->setObjectName("pswd");
        pswd->setGeometry(QRect(50, 230, 321, 28));
        pswd->setFrame(true);
        pswd->setEchoMode(QLineEdit::EchoMode::Password);
        connect = new QPushButton(frame);
        connect->setObjectName("connect");
        connect->setGeometry(QRect(200, 470, 121, 41));
        connect->setFont(font2);
        connect->setCheckable(false);
        recov = new QPushButton(frame);
        recov->setObjectName("recov");
        recov->setGeometry(QRect(370, 330, 111, 31));
        recov->setFont(font2);
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(160, -50, 171, 181));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Design_sans_titre__13_-removebg-preview.png")));
        label_4->setScaledContents(true);
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 330, 331, 31));
        label_5->setFont(font2);
        recof = new QPushButton(frame);
        recof->setObjectName("recof");
        recof->setGeometry(QRect(370, 390, 111, 31));
        recof->setFont(font2);
        speechOutput = new QLineEdit(frame);
        speechOutput->setObjectName("speechOutput");
        speechOutput->setGeometry(QRect(292, 50, 181, 71));
        speechOutput->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_8 = new QLabel(log);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(0, 0, 161, 161));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/Downloads/Vaxhaven__6_-removebg-preview.png")));
        label_8->setScaledContents(true);
        label_6 = new QLabel(log);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(50, 240, 401, 151));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-radius: 15px;\n"
"background: #05696b;"));

        retranslateUi(log);

        QMetaObject::connectSlotsByName(log);
    } // setupUi

    void retranslateUi(QDialog *log)
    {
        log->setWindowTitle(QCoreApplication::translate("log", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("log", "<html><head/><body><p><span style=\" font-size:16pt;\">UserID:</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("log", "<html><head/><body><p><span style=\" font-size:16pt;\">Password:</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("log", "<html><head/><body><p><span style=\" font-size:12pt;\">Utiliser la Reconnaisance Faciale:</span></p></body></html>", nullptr));
        user->setInputMask(QString());
        user->setText(QString());
        user->setPlaceholderText(QCoreApplication::translate("log", "UserID", nullptr));
        pswd->setInputMask(QString());
        pswd->setText(QString());
        pswd->setPlaceholderText(QCoreApplication::translate("log", "Password", nullptr));
        connect->setText(QCoreApplication::translate("log", "Se connecter", nullptr));
        recov->setText(QCoreApplication::translate("log", "Appuyer ici", nullptr));
        label_4->setText(QString());
        label_5->setText(QCoreApplication::translate("log", "<html><head/><body><p><span style=\" font-size:12pt;\">Utiliser la Reconnaisance Vocale:</span></p></body></html>", nullptr));
        recof->setText(QCoreApplication::translate("log", "Appuyer ici", nullptr));
        label_8->setText(QString());
        label_6->setText(QCoreApplication::translate("log", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt;\">Welcome </span></p><p align=\"center\"><span style=\" font-size:24pt;\">To LAKAHNI</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class log: public Ui_log {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOG_H
