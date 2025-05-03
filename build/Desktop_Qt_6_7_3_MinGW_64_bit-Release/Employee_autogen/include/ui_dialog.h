/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *pushButton_7;
    QWidget *widget_4;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QLabel *label_10;
    QLabel *label_6;
    QPushButton *validrech;
    QLabel *label_7;
    QPushButton *exp;
    QComboBox *tri;
    QLineEdit *rech;
    QTableWidget *tableWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *prenom;
    QLabel *label_4;
    QLabel *label_5;
    QDateEdit *date;
    QPushButton *valider;
    QPushButton *annuler;
    QLineEdit *nom;
    QLabel *label_14;
    QLineEdit *tel;
    QDoubleSpinBox *salaire;
    QLineEdit *lineEdit;
    QLabel *label_12;
    QLineEdit *lineEdit_4;
    QLabel *label_15;
    QLabel *label_16;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QLabel *label_30;
    QWidget *tab_2;
    QGroupBox *groupBox_4;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLineEdit *prenom_2;
    QLabel *label_22;
    QLabel *label_23;
    QDateEdit *date_2;
    QPushButton *valider_2;
    QPushButton *annuler_2;
    QLineEdit *nom_2;
    QLabel *label_24;
    QLineEdit *tel_2;
    QDoubleSpinBox *salaire_2;
    QLineEdit *lineEdit_2;
    QLabel *label_25;
    QLineEdit *lineEdit_5;
    QLabel *label_26;
    QLabel *label_27;
    QPushButton *pushButton_2;
    QComboBox *comboBox_2;
    QLabel *label_29;
    QWidget *tab_4;
    QLabel *label_17;
    QLabel *label_18;
    QGraphicsView *graphicsView;
    QLabel *label_28;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;
    QLabel *label_11;
    QPushButton *pushButton_3;
    QWidget *widget;
    QLabel *label_8;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton_8;
    QLabel *label_13;
    QLabel *label_9;
    QPushButton *pushButton_16;
    QPushButton *pushButton_9;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(1148, 603);
        pushButton_7 = new QPushButton(Dialog);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(20, 370, 151, 31));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(81, 182, 182, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(131, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(106, 218, 218, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(41, 91, 91, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(54, 121, 121, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(168, 218, 218, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush9(QColor(0, 0, 0, 127));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush10(QColor(41, 91, 91, 127));
        brush10.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        QBrush brush11(QColor(105, 237, 237, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Accent, brush11);
        pushButton_7->setPalette(palette);
        QFont font;
        font.setBold(true);
        pushButton_7->setFont(font);
        widget_4 = new QWidget(Dialog);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(-1, 80, 1151, 651));
        widget_4->setStyleSheet(QString::fromUtf8("background-color: #99d9d9;"));
        tabWidget = new QTabWidget(widget_4);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(200, 10, 931, 511));
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: #d5f1f0;\n"
"color: Black;"));
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        label_10 = new QLabel(tab_3);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(480, -10, 101, 111));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/Downloads/Design_sans_titre__11_-removebg-preview.png")));
        label_10->setScaledContents(true);
        label_6 = new QLabel(tab_3);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(140, 110, 171, 31));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: white;\n"
""));
        validrech = new QPushButton(tab_3);
        validrech->setObjectName("validrech");
        validrech->setGeometry(QRect(330, 150, 83, 29));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush12(QColor(5, 105, 107, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush6);
        QBrush brush13(QColor(214, 248, 245, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush13);
        QBrush brush14(QColor(86, 120, 118, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush14);
        QBrush brush15(QColor(115, 161, 157, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush15);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette1.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush15);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush15);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush16(QColor(173, 241, 235, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush16);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush17(QColor(86, 120, 118, 127));
        brush17.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush17);
#endif
        QBrush brush18(QColor(241, 255, 254, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Accent, brush18);
        validrech->setPalette(palette1);
        validrech->setFont(font);
        validrech->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: rgb(255, 255, 255);"));
        label_7 = new QLabel(tab_3);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(510, 110, 71, 31));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        QBrush brush19(QColor(127, 127, 127, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush19);
        QBrush brush20(QColor(170, 170, 170, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush20);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette2.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush19);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush20);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush19);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush19);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush20);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush19);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush19);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush21(QColor(127, 127, 127, 127));
        brush21.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush21);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::Accent, brush6);
        label_7->setPalette(palette2);
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: white;\n"
""));
        exp = new QPushButton(tab_3);
        exp->setObjectName("exp");
        exp->setGeometry(QRect(360, 20, 131, 41));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush12);
        QBrush brush22(QColor(7, 157, 160, 255));
        brush22.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush22);
        QBrush brush23(QColor(6, 131, 133, 255));
        brush23.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush23);
        QBrush brush24(QColor(2, 52, 53, 255));
        brush24.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush24);
        QBrush brush25(QColor(3, 70, 71, 255));
        brush25.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush25);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush24);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush26(QColor(255, 255, 255, 127));
        brush26.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush26);
#endif
        palette3.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush22);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush23);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush24);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush25);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush24);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush26);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush24);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush22);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush23);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush24);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush25);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush24);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush24);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush27(QColor(2, 52, 53, 127));
        brush27.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush27);
#endif
        QBrush brush28(QColor(4, 74, 75, 255));
        brush28.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Disabled, QPalette::Accent, brush28);
        exp->setPalette(palette3);
        exp->setFont(font);
        exp->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: rgb(255, 255, 255);"));
        tri = new QComboBox(tab_3);
        tri->setObjectName("tri");
        tri->setGeometry(QRect(590, 110, 101, 28));
        tri->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        rech = new QLineEdit(tab_3);
        rech->setObjectName("rech");
        rech->setGeometry(QRect(320, 110, 101, 28));
        rech->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tableWidget = new QTableWidget(tab_3);
        if (tableWidget->columnCount() < 10)
            tableWidget->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font);
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font);
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font);
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFont(font);
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFont(font);
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setFont(font);
        tableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(20, 210, 881, 251));
        QFont font1;
        font1.setBold(false);
        tableWidget->setFont(font1);
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab_3, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(50, -30, 341, 501));
        QFont font2;
        font2.setBold(true);
        font2.setItalic(false);
        groupBox->setFont(font2);
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 150, 41, 20));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush29(QColor(213, 241, 240, 255));
        brush29.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush29);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush19);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush20);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush29);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush29);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette4.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush29);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush19);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush20);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush29);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush29);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush19);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush29);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush19);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush20);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush19);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush19);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush29);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush29);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush21);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::Accent, brush6);
        label->setPalette(palette4);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 220, 61, 20));
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: black;"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 290, 41, 20));
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color:black;"));
        prenom = new QLineEdit(groupBox);
        prenom->setObjectName("prenom");
        prenom->setGeometry(QRect(20, 250, 121, 28));
        prenom->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(120, 380, 51, 20));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color:black;"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(180, 290, 131, 20));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("color:black;"));
        date = new QDateEdit(groupBox);
        date->setObjectName("date");
        date->setGeometry(QRect(180, 320, 121, 29));
        QFont font3;
        font3.setBold(false);
        font3.setItalic(false);
        date->setFont(font3);
        date->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: black;"));
        valider = new QPushButton(groupBox);
        valider->setObjectName("valider");
        valider->setGeometry(QRect(10, 460, 101, 29));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush6);
        QBrush brush30(QColor(245, 250, 255, 255));
        brush30.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush30);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush12);
        QBrush brush31(QColor(255, 255, 255, 128));
        brush31.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush31);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush30);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush31);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush31);
#endif
        valider->setPalette(palette5);
        valider->setFont(font2);
        valider->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: white;"));
        annuler = new QPushButton(groupBox);
        annuler->setObjectName("annuler");
        annuler->setGeometry(QRect(200, 460, 101, 29));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush31);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush31);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush31);
#endif
        annuler->setPalette(palette6);
        annuler->setFont(font2);
        annuler->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: white;"));
        nom = new QLineEdit(groupBox);
        nom->setObjectName("nom");
        nom->setGeometry(QRect(20, 180, 121, 28));
        nom->setAutoFillBackground(false);
        nom->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(220, 220, 51, 20));
        label_14->setFont(font2);
        label_14->setStyleSheet(QString::fromUtf8("color:black;"));
        tel = new QLineEdit(groupBox);
        tel->setObjectName("tel");
        tel->setGeometry(QRect(180, 250, 121, 28));
        tel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        salaire = new QDoubleSpinBox(groupBox);
        salaire->setObjectName("salaire");
        salaire->setGeometry(QRect(90, 410, 121, 29));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush31);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush31);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush31);
#endif
        salaire->setPalette(palette7);
        salaire->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: rgb(255, 255, 255);\n"
""));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(20, 110, 121, 28));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(40, 80, 63, 20));
        label_12->setFont(font2);
        label_12->setStyleSheet(QString::fromUtf8("color: black;"));
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(180, 110, 121, 28));
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(210, 80, 63, 20));
        label_15->setFont(font2);
        label_15->setStyleSheet(QString::fromUtf8("color: black;"));
        label_16 = new QLabel(groupBox);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(190, 150, 111, 20));
        label_16->setFont(font2);
        label_16->setStyleSheet(QString::fromUtf8("\n"
"color: black;\n"
"\n"
""));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(190, 180, 101, 29));
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: rgb(255, 255, 255);"));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(20, 320, 121, 28));
        comboBox->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: rgb(255, 255, 255);"));
        label_30 = new QLabel(tab);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(420, 0, 491, 461));
        label_30->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/LAKAHNI__4_-removebg-preview.png")));
        label_30->setScaledContents(true);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(50, -30, 341, 501));
        groupBox_4->setFont(font2);
        label_19 = new QLabel(groupBox_4);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(60, 150, 41, 20));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush29);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush19);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush20);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush29);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush29);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette8.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush29);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush19);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush20);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush29);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush29);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush19);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush29);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush19);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush20);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush19);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush19);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush29);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush29);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush21);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::Accent, brush6);
        label_19->setPalette(palette8);
        label_19->setFont(font2);
        label_19->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_20 = new QLabel(groupBox_4);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(50, 220, 61, 20));
        label_20->setFont(font2);
        label_20->setStyleSheet(QString::fromUtf8("color: black;"));
        label_21 = new QLabel(groupBox_4);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(60, 290, 41, 20));
        label_21->setFont(font2);
        label_21->setStyleSheet(QString::fromUtf8("color:black;"));
        prenom_2 = new QLineEdit(groupBox_4);
        prenom_2->setObjectName("prenom_2");
        prenom_2->setGeometry(QRect(20, 250, 121, 28));
        prenom_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_22 = new QLabel(groupBox_4);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(120, 380, 51, 20));
        label_22->setFont(font2);
        label_22->setStyleSheet(QString::fromUtf8("color:black;"));
        label_23 = new QLabel(groupBox_4);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(180, 290, 131, 20));
        label_23->setFont(font2);
        label_23->setStyleSheet(QString::fromUtf8("color:black;"));
        date_2 = new QDateEdit(groupBox_4);
        date_2->setObjectName("date_2");
        date_2->setGeometry(QRect(180, 320, 121, 29));
        date_2->setFont(font3);
        date_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: black;"));
        valider_2 = new QPushButton(groupBox_4);
        valider_2->setObjectName("valider_2");
        valider_2->setGeometry(QRect(10, 460, 101, 29));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush30);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush31);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush30);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush31);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush31);
#endif
        valider_2->setPalette(palette9);
        valider_2->setFont(font2);
        valider_2->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: white;"));
        annuler_2 = new QPushButton(groupBox_4);
        annuler_2->setObjectName("annuler_2");
        annuler_2->setGeometry(QRect(200, 460, 101, 29));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush31);
#endif
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush31);
#endif
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush31);
#endif
        annuler_2->setPalette(palette10);
        annuler_2->setFont(font2);
        annuler_2->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: white;"));
        nom_2 = new QLineEdit(groupBox_4);
        nom_2->setObjectName("nom_2");
        nom_2->setGeometry(QRect(20, 180, 121, 28));
        nom_2->setAutoFillBackground(false);
        nom_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_24 = new QLabel(groupBox_4);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(220, 220, 51, 20));
        label_24->setFont(font2);
        label_24->setStyleSheet(QString::fromUtf8("color:black;"));
        tel_2 = new QLineEdit(groupBox_4);
        tel_2->setObjectName("tel_2");
        tel_2->setGeometry(QRect(180, 250, 121, 28));
        tel_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        salaire_2 = new QDoubleSpinBox(groupBox_4);
        salaire_2->setObjectName("salaire_2");
        salaire_2->setGeometry(QRect(90, 410, 121, 29));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Active, QPalette::PlaceholderText, brush31);
#endif
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush31);
#endif
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush31);
#endif
        salaire_2->setPalette(palette11);
        salaire_2->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: rgb(255, 255, 255);\n"
""));
        lineEdit_2 = new QLineEdit(groupBox_4);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(20, 110, 121, 28));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_25 = new QLabel(groupBox_4);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(40, 80, 63, 20));
        label_25->setFont(font2);
        label_25->setStyleSheet(QString::fromUtf8("color: black;"));
        lineEdit_5 = new QLineEdit(groupBox_4);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(180, 110, 121, 28));
        lineEdit_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_26 = new QLabel(groupBox_4);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(210, 80, 63, 20));
        label_26->setFont(font2);
        label_26->setStyleSheet(QString::fromUtf8("color: black;"));
        label_27 = new QLabel(groupBox_4);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(190, 150, 111, 20));
        label_27->setFont(font2);
        label_27->setStyleSheet(QString::fromUtf8("\n"
"color: black;\n"
"\n"
""));
        pushButton_2 = new QPushButton(groupBox_4);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(190, 180, 101, 29));
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: rgb(255, 255, 255);"));
        comboBox_2 = new QComboBox(groupBox_4);
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(20, 320, 121, 28));
        comboBox_2->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: rgb(255, 255, 255);"));
        label_29 = new QLabel(tab_2);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(430, 0, 481, 461));
        label_29->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/LAKAHNI__5_-removebg-preview (1).png")));
        label_29->setScaledContents(true);
        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        label_17 = new QLabel(tab_4);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(350, 570, 361, 41));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Active, QPalette::PlaceholderText, brush31);
#endif
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush31);
#endif
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush31);
#endif
        label_17->setPalette(palette12);
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        label_17->setFont(font4);
        label_17->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: white;\n"
""));
        label_18 = new QLabel(tab_4);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(240, -40, 441, 411));
        label_18->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/LAKAHNI__2_-removebg-preview.png")));
        label_18->setScaledContents(true);
        graphicsView = new QGraphicsView(tab_4);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(170, 200, 581, 251));
        graphicsView->setStyleSheet(QString::fromUtf8("background-color: #05696b;"));
        label_28 = new QLabel(tab_4);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(310, 170, 291, 20));
        label_28->setFont(font);
        tabWidget->addTab(tab_4, QString());
        groupBox_2 = new QGroupBox(Dialog);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 90, 181, 511));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: #d5f1f0;\n"
"color: black;\n"
""));
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(0, 0, 191, 511));
        groupBox_3->setFont(font);
        groupBox_3->setStyleSheet(QString::fromUtf8("background-color: #d5f1f0;\n"
"color: black;\n"
""));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(40, 390, 81, 81));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/Downloads/Design_sans_titre__12_-removebg-preview.png")));
        label_11->setScaledContents(true);
        pushButton_3 = new QPushButton(Dialog);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(20, 130, 151, 29));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette13.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette13.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette13.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette13.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette13.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette13.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette13.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette13.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette13.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette13.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette13.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette13.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette13.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette13.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        palette13.setBrush(QPalette::Disabled, QPalette::Accent, brush11);
        pushButton_3->setPalette(palette13);
        pushButton_3->setFont(font);
        widget = new QWidget(Dialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 1161, 80));
        widget->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: white;\n"
""));
        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, -20, 121, 121));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/Downloads/Vaxhaven__6_-removebg-preview.png")));
        label_8->setScaledContents(true);
        pushButton_5 = new QPushButton(Dialog);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(20, 250, 151, 29));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette14.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette14.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette14.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette14.setBrush(QPalette::Active, QPalette::Text, brush);
        palette14.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette14.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette14.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette14.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette14.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette14.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette14.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette14.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette14.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        palette14.setBrush(QPalette::Disabled, QPalette::Accent, brush11);
        pushButton_5->setPalette(palette14);
        pushButton_5->setFont(font);
        pushButton_6 = new QPushButton(Dialog);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(20, 310, 151, 29));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette15.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette15.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette15.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette15.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette15.setBrush(QPalette::Active, QPalette::Text, brush);
        palette15.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette15.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette15.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette15.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette15.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette15.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette15.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette15.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette15.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette15.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette15.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette15.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette15.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette15.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette15.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        palette15.setBrush(QPalette::Disabled, QPalette::Accent, brush11);
        pushButton_6->setPalette(palette15);
        pushButton_6->setFont(font);
        pushButton_4 = new QPushButton(Dialog);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(20, 190, 151, 29));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette16.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette16.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette16.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette16.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette16.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette16.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette16.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette16.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette16.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette16.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette16.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette16.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette16.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette16.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette16.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette16.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette16.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette16.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette16.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        palette16.setBrush(QPalette::Disabled, QPalette::Accent, brush11);
        pushButton_4->setPalette(palette16);
        pushButton_4->setFont(font);
        pushButton_8 = new QPushButton(Dialog);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(20, 430, 151, 31));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette17.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette17.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette17.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette17.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette17.setBrush(QPalette::Active, QPalette::Text, brush);
        palette17.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette17.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette17.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette17.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette17.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette17.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette17.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette17.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette17.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette17.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette17.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette17.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette17.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette17.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette17.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette17.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette17.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette17.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        palette17.setBrush(QPalette::Disabled, QPalette::Accent, brush11);
        pushButton_8->setPalette(palette17);
        pushButton_8->setFont(font);
        label_13 = new QLabel(Dialog);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 90, 181, 31));
        label_13->setFont(font);
        label_13->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: white;\n"
""));
        label_9 = new QLabel(Dialog);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(50, 50, 81, 21));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: white;\n"
""));
        pushButton_16 = new QPushButton(Dialog);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setGeometry(QRect(750, 20, 151, 31));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette18.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette18.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette18.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette18.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette18.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette18.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette18.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette18.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette18.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette18.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette18.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette18.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette18.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette18.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette18.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette18.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette18.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette18.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette18.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette18.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette18.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette18.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette18.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette18.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette18.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette18.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette18.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette18.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette18.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette18.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        palette18.setBrush(QPalette::Disabled, QPalette::Accent, brush11);
        pushButton_16->setPalette(palette18);
        pushButton_16->setFont(font);
        pushButton_9 = new QPushButton(Dialog);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(30, 550, 131, 31));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette19.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette19.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette19.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette19.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette19.setBrush(QPalette::Active, QPalette::Text, brush);
        palette19.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette19.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette19.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette19.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette19.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette19.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette19.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette19.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette19.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette19.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette19.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette19.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette19.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette19.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette19.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette19.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette19.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette19.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette19.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette19.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette19.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette19.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette19.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette19.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette19.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette19.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette19.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette19.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette19.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette19.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette19.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette19.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        palette19.setBrush(QPalette::Disabled, QPalette::Accent, brush11);
        pushButton_9->setPalette(palette19);
        pushButton_9->setFont(font);

        retranslateUi(Dialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Dialog", "Gestion Rendez-vous", nullptr));
        label_10->setText(QString());
        label_6->setText(QCoreApplication::translate("Dialog", " Rechercher un Employ\303\251", nullptr));
        validrech->setText(QCoreApplication::translate("Dialog", "Valider", nullptr));
        label_7->setText(QCoreApplication::translate("Dialog", "    Tri Par:", nullptr));
        exp->setText(QCoreApplication::translate("Dialog", "Exportation PDF", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Dialog", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Dialog", "Nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Dialog", "Prenom", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Dialog", "Poste", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Dialog", "Salaire", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Dialog", "Date Emb", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Dialog", "E-Mail", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Dialog", "MDP", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("Dialog", "image", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("Dialog", "Actions", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Dialog", "Afficher Employ\303\251", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("Dialog", "Nom", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Prenom", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Poste", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", " Salaire", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "Date d'embauche", nullptr));
        valider->setText(QCoreApplication::translate("Dialog", "Valider", nullptr));
        annuler->setText(QCoreApplication::translate("Dialog", "Annuler", nullptr));
        label_14->setText(QCoreApplication::translate("Dialog", "E-Mail", nullptr));
        label_12->setText(QCoreApplication::translate("Dialog", "      ID", nullptr));
        label_15->setText(QCoreApplication::translate("Dialog", "   MDP", nullptr));
        label_16->setText(QCoreApplication::translate("Dialog", "D\303\251poser Photo", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "D\303\251poser", nullptr));
        label_30->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Dialog", "Ajouter Employ\303\251", nullptr));
        groupBox_4->setTitle(QString());
        label_19->setText(QCoreApplication::translate("Dialog", "Nom", nullptr));
        label_20->setText(QCoreApplication::translate("Dialog", "Prenom", nullptr));
        label_21->setText(QCoreApplication::translate("Dialog", "Poste", nullptr));
        label_22->setText(QCoreApplication::translate("Dialog", " Salaire", nullptr));
        label_23->setText(QCoreApplication::translate("Dialog", "Date d'embauche", nullptr));
        valider_2->setText(QCoreApplication::translate("Dialog", "Valider", nullptr));
        annuler_2->setText(QCoreApplication::translate("Dialog", "Annuler", nullptr));
        label_24->setText(QCoreApplication::translate("Dialog", "E-Mail", nullptr));
        label_25->setText(QCoreApplication::translate("Dialog", "      ID", nullptr));
        label_26->setText(QCoreApplication::translate("Dialog", "   MDP", nullptr));
        label_27->setText(QCoreApplication::translate("Dialog", "D\303\251poser Photo", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "D\303\251poser", nullptr));
        label_29->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Dialog", "Modifier Employ\303\251", nullptr));
        label_17->setText(QCoreApplication::translate("Dialog", "   Statistique des Employ\303\251s selon leur poste", nullptr));
        label_18->setText(QString());
        label_28->setText(QCoreApplication::translate("Dialog", "Statistique des Employ\303\251s selon leur poste", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("Dialog", "Statistique", nullptr));
        groupBox_2->setTitle(QString());
        groupBox_3->setTitle(QString());
        label_11->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("Dialog", "Acceuil", nullptr));
        label_8->setText(QString());
        pushButton_5->setText(QCoreApplication::translate("Dialog", "Gestion Employ\303\251s", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Dialog", "Gestion Ressources", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Dialog", "Gestion Patients", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Dialog", "Gestion Vaccins", nullptr));
        label_13->setText(QCoreApplication::translate("Dialog", "              Dashboard", nullptr));
        label_9->setText(QCoreApplication::translate("Dialog", "LAKAHNI", nullptr));
        pushButton_16->setText(QCoreApplication::translate("Dialog", "D\303\251connexion", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Dialog", "D\303\251connexion", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
