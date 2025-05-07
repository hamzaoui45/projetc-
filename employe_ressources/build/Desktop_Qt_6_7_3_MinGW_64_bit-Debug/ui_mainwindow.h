/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QPushButton *pushButton_16;
    QLabel *label_9;
    QWidget *widget_4;
    QTabWidget *tabWidget_2;
    QWidget *tab_5;
    QLabel *label_34;
    QLabel *label_35;
    QPushButton *validrech_2;
    QLabel *label_36;
    QPushButton *exp_2;
    QComboBox *tri_2;
    QLineEdit *rech_2;
    QTableView *tableView_2;
    QPushButton *sup_2;
    QLineEdit *id_3;
    QLabel *label_37;
    QComboBox *tr_2;
    QWidget *tab_6;
    QGroupBox *groupBox_6;
    QLabel *label_38;
    QLabel *label_39;
    QLabel *label_40;
    QLineEdit *prenom_2;
    QLabel *label_41;
    QLabel *label_42;
    QDateEdit *date_2;
    QPushButton *valider_2;
    QPushButton *annuler_3;
    QLineEdit *nom_2;
    QLabel *label_43;
    QLineEdit *mail_2;
    QDoubleSpinBox *salaire_2;
    QLineEdit *id_4;
    QLabel *label_44;
    QLineEdit *mdp_2;
    QLabel *label_45;
    QLabel *label_46;
    QPushButton *deposer_2;
    QComboBox *poste_2;
    QLabel *label_47;
    QLabel *laboula_2;
    QWidget *tab_7;
    QGroupBox *groupBox_7;
    QLabel *label_48;
    QLabel *label_49;
    QLabel *label_50;
    QLineEdit *prenomm_2;
    QLabel *label_51;
    QLabel *label_52;
    QDateEdit *datem_2;
    QPushButton *modifier_2;
    QPushButton *annuler_4;
    QLineEdit *nomm_2;
    QLabel *label_53;
    QLineEdit *mailm_2;
    QDoubleSpinBox *salairem_2;
    QLineEdit *idm_2;
    QLabel *label_54;
    QLineEdit *mdpm_2;
    QLabel *label_55;
    QLabel *label_56;
    QPushButton *deposerm_2;
    QComboBox *postem_2;
    QPushButton *set_2;
    QLabel *label_57;
    QLabel *laboula1_2;
    QWidget *tab_8;
    QLabel *label_58;
    QLabel *label_59;
    QGraphicsView *stat_2;
    QLabel *label_60;
    QGraphicsView *stat1_2;
    QLabel *label_61;
    QLabel *label_33;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(1201, 733);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(153, 217, 217)"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, -30, 1231, 121));
        widget->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: white;\n"
""));
        pushButton_16 = new QPushButton(widget);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setGeometry(QRect(990, 50, 151, 31));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(5, 105, 107, 255));
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
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
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
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
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
        QBrush brush10(QColor(81, 182, 182, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush11(QColor(41, 91, 91, 127));
        brush11.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        QBrush brush12(QColor(105, 237, 237, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Accent, brush12);
        pushButton_16->setPalette(palette);
        QFont font;
        font.setBold(true);
        pushButton_16->setFont(font);
        label_9 = new QLabel(widget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(30, 60, 81, 21));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: white;\n"
""));
        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(1, 90, 1131, 591));
        widget_4->setStyleSheet(QString::fromUtf8("background-color: #99d9d9;"));
        tabWidget_2 = new QTabWidget(widget_4);
        tabWidget_2->setObjectName("tabWidget_2");
        tabWidget_2->setGeometry(QRect(220, 20, 911, 561));
        tabWidget_2->setFont(font);
        tabWidget_2->setStyleSheet(QString::fromUtf8("background-color: #d5f1f0;\n"
"color: Black;"));
        tabWidget_2->setDocumentMode(false);
        tabWidget_2->setTabsClosable(false);
        tabWidget_2->setMovable(false);
        tabWidget_2->setTabBarAutoHide(false);
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        label_34 = new QLabel(tab_5);
        label_34->setObjectName("label_34");
        label_34->setGeometry(QRect(670, 0, 101, 111));
        label_34->setPixmap(QPixmap(QString::fromUtf8(":/Downloads/Design_sans_titre__11_-removebg-preview.png")));
        label_34->setScaledContents(true);
        label_35 = new QLabel(tab_5);
        label_35->setObjectName("label_35");
        label_35->setGeometry(QRect(150, 110, 141, 31));
        label_35->setFont(font);
        label_35->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: white;\n"
""));
        validrech_2 = new QPushButton(tab_5);
        validrech_2->setObjectName("validrech_2");
        validrech_2->setGeometry(QRect(310, 150, 83, 29));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
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
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette1.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush15);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush15);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
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
        validrech_2->setPalette(palette1);
        validrech_2->setFont(font);
        validrech_2->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: rgb(255, 255, 255);"));
        label_36 = new QLabel(tab_5);
        label_36->setObjectName("label_36");
        label_36->setGeometry(QRect(550, 110, 111, 31));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
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
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette2.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush19);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush20);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush19);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush19);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush20);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush19);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush19);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
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
        label_36->setPalette(palette2);
        label_36->setFont(font);
        label_36->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: white;\n"
""));
        exp_2 = new QPushButton(tab_5);
        exp_2->setObjectName("exp_2");
        exp_2->setGeometry(QRect(550, 30, 131, 41));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
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
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
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
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush22);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush23);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush24);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush25);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush24);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush26);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush24);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush22);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush23);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush24);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush25);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush24);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush24);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
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
        exp_2->setPalette(palette3);
        exp_2->setFont(font);
        exp_2->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: rgb(255, 255, 255);"));
        tri_2 = new QComboBox(tab_5);
        tri_2->addItem(QString());
        tri_2->addItem(QString());
        tri_2->addItem(QString());
        tri_2->addItem(QString());
        tri_2->setObjectName("tri_2");
        tri_2->setGeometry(QRect(680, 110, 101, 31));
        tri_2->setFont(font);
        tri_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        rech_2 = new QLineEdit(tab_5);
        rech_2->setObjectName("rech_2");
        rech_2->setGeometry(QRect(300, 110, 101, 28));
        rech_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tableView_2 = new QTableView(tab_5);
        tableView_2->setObjectName("tableView_2");
        tableView_2->setGeometry(QRect(110, 201, 701, 241));
        tableView_2->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: white;\n"
"border: 1px solid #808080;\n"
"font-weight: bold;"));
        sup_2 = new QPushButton(tab_5);
        sup_2->setObjectName("sup_2");
        sup_2->setGeometry(QRect(150, 30, 121, 41));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush22);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush23);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush24);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush25);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush24);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush26);
#endif
        palette4.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush22);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush23);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush24);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush25);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush24);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush26);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush24);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush22);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush23);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush24);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush25);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush24);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush24);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush27);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::Accent, brush28);
        sup_2->setPalette(palette4);
        sup_2->setFont(font);
        sup_2->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: rgb(255, 255, 255);"));
        id_3 = new QLineEdit(tab_5);
        id_3->setObjectName("id_3");
        id_3->setGeometry(QRect(290, 40, 111, 28));
        id_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_37 = new QLabel(tab_5);
        label_37->setObjectName("label_37");
        label_37->setGeometry(QRect(550, 150, 111, 31));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush19);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush20);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette5.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush19);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush20);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush19);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush19);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush20);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush19);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush19);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush21);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::Accent, brush6);
        label_37->setPalette(palette5);
        label_37->setFont(font);
        label_37->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: white;\n"
""));
        tr_2 = new QComboBox(tab_5);
        tr_2->addItem(QString());
        tr_2->addItem(QString());
        tr_2->addItem(QString());
        tr_2->addItem(QString());
        tr_2->setObjectName("tr_2");
        tr_2->setGeometry(QRect(680, 150, 101, 31));
        tr_2->setFont(font);
        tr_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        tabWidget_2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName("tab_6");
        groupBox_6 = new QGroupBox(tab_6);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setGeometry(QRect(50, -30, 341, 501));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(false);
        groupBox_6->setFont(font1);
        label_38 = new QLabel(groupBox_6);
        label_38->setObjectName("label_38");
        label_38->setGeometry(QRect(60, 150, 41, 20));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush29(QColor(213, 241, 240, 255));
        brush29.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush29);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush19);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush20);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush29);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush29);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette6.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush29);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush19);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush20);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush29);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush29);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush19);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush29);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush19);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush20);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush19);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush19);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush29);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush29);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush21);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::Accent, brush6);
        label_38->setPalette(palette6);
        label_38->setFont(font1);
        label_38->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_39 = new QLabel(groupBox_6);
        label_39->setObjectName("label_39");
        label_39->setGeometry(QRect(50, 220, 61, 20));
        label_39->setFont(font1);
        label_39->setStyleSheet(QString::fromUtf8("color: black;"));
        label_40 = new QLabel(groupBox_6);
        label_40->setObjectName("label_40");
        label_40->setGeometry(QRect(60, 290, 41, 20));
        label_40->setFont(font1);
        label_40->setStyleSheet(QString::fromUtf8("color:black;"));
        prenom_2 = new QLineEdit(groupBox_6);
        prenom_2->setObjectName("prenom_2");
        prenom_2->setGeometry(QRect(20, 250, 121, 28));
        prenom_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_41 = new QLabel(groupBox_6);
        label_41->setObjectName("label_41");
        label_41->setGeometry(QRect(120, 380, 51, 20));
        label_41->setFont(font1);
        label_41->setStyleSheet(QString::fromUtf8("color:black;"));
        label_42 = new QLabel(groupBox_6);
        label_42->setObjectName("label_42");
        label_42->setGeometry(QRect(180, 290, 131, 20));
        label_42->setFont(font1);
        label_42->setStyleSheet(QString::fromUtf8("color:black;"));
        date_2 = new QDateEdit(groupBox_6);
        date_2->setObjectName("date_2");
        date_2->setGeometry(QRect(180, 320, 121, 29));
        QFont font2;
        font2.setBold(false);
        font2.setItalic(false);
        date_2->setFont(font2);
        date_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: black;"));
        valider_2 = new QPushButton(groupBox_6);
        valider_2->setObjectName("valider_2");
        valider_2->setGeometry(QRect(10, 460, 101, 29));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush6);
        QBrush brush30(QColor(245, 250, 255, 255));
        brush30.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush30);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush31(QColor(255, 255, 255, 128));
        brush31.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush31);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush30);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush31);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush31);
#endif
        valider_2->setPalette(palette7);
        valider_2->setFont(font1);
        valider_2->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: white;"));
        annuler_3 = new QPushButton(groupBox_6);
        annuler_3->setObjectName("annuler_3");
        annuler_3->setGeometry(QRect(200, 460, 101, 29));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush31);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush31);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush31);
#endif
        annuler_3->setPalette(palette8);
        annuler_3->setFont(font1);
        annuler_3->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: white;"));
        nom_2 = new QLineEdit(groupBox_6);
        nom_2->setObjectName("nom_2");
        nom_2->setGeometry(QRect(20, 180, 121, 28));
        nom_2->setAutoFillBackground(false);
        nom_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_43 = new QLabel(groupBox_6);
        label_43->setObjectName("label_43");
        label_43->setGeometry(QRect(220, 220, 51, 20));
        label_43->setFont(font1);
        label_43->setStyleSheet(QString::fromUtf8("color:black;"));
        mail_2 = new QLineEdit(groupBox_6);
        mail_2->setObjectName("mail_2");
        mail_2->setGeometry(QRect(180, 250, 121, 28));
        mail_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        salaire_2 = new QDoubleSpinBox(groupBox_6);
        salaire_2->setObjectName("salaire_2");
        salaire_2->setGeometry(QRect(90, 410, 121, 29));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush31);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush31);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush31);
#endif
        salaire_2->setPalette(palette9);
        salaire_2->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: rgb(255, 255, 255);\n"
""));
        id_4 = new QLineEdit(groupBox_6);
        id_4->setObjectName("id_4");
        id_4->setGeometry(QRect(20, 110, 121, 28));
        id_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_44 = new QLabel(groupBox_6);
        label_44->setObjectName("label_44");
        label_44->setGeometry(QRect(40, 80, 63, 20));
        label_44->setFont(font1);
        label_44->setStyleSheet(QString::fromUtf8("color: black;"));
        mdp_2 = new QLineEdit(groupBox_6);
        mdp_2->setObjectName("mdp_2");
        mdp_2->setGeometry(QRect(180, 110, 121, 28));
        mdp_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_45 = new QLabel(groupBox_6);
        label_45->setObjectName("label_45");
        label_45->setGeometry(QRect(210, 80, 63, 20));
        label_45->setFont(font1);
        label_45->setStyleSheet(QString::fromUtf8("color: black;"));
        label_46 = new QLabel(groupBox_6);
        label_46->setObjectName("label_46");
        label_46->setGeometry(QRect(190, 150, 111, 20));
        label_46->setFont(font1);
        label_46->setStyleSheet(QString::fromUtf8("\n"
"color: black;\n"
"\n"
""));
        deposer_2 = new QPushButton(groupBox_6);
        deposer_2->setObjectName("deposer_2");
        deposer_2->setGeometry(QRect(190, 180, 101, 29));
        deposer_2->setFont(font1);
        deposer_2->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: rgb(255, 255, 255);"));
        poste_2 = new QComboBox(groupBox_6);
        poste_2->addItem(QString());
        poste_2->addItem(QString());
        poste_2->addItem(QString());
        poste_2->addItem(QString());
        poste_2->setObjectName("poste_2");
        poste_2->setGeometry(QRect(20, 320, 121, 28));
        poste_2->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: rgb(255, 255, 255);"));
        label_47 = new QLabel(tab_6);
        label_47->setObjectName("label_47");
        label_47->setGeometry(QRect(580, -10, 491, 461));
        label_47->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/LAKAHNI__4_-removebg-preview.png")));
        label_47->setScaledContents(true);
        laboula_2 = new QLabel(tab_6);
        laboula_2->setObjectName("laboula_2");
        laboula_2->setGeometry(QRect(410, 100, 281, 261));
        laboula_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tabWidget_2->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName("tab_7");
        groupBox_7 = new QGroupBox(tab_7);
        groupBox_7->setObjectName("groupBox_7");
        groupBox_7->setGeometry(QRect(50, -30, 341, 501));
        groupBox_7->setFont(font1);
        label_48 = new QLabel(groupBox_7);
        label_48->setObjectName("label_48");
        label_48->setGeometry(QRect(60, 150, 41, 20));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush29);
        palette10.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Dark, brush19);
        palette10.setBrush(QPalette::Active, QPalette::Mid, brush20);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush);
        palette10.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush29);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush29);
        palette10.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette10.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush29);
        palette10.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Dark, brush19);
        palette10.setBrush(QPalette::Inactive, QPalette::Mid, brush20);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush29);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush29);
        palette10.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette10.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush19);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush29);
        palette10.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::Dark, brush19);
        palette10.setBrush(QPalette::Disabled, QPalette::Mid, brush20);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush19);
        palette10.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush19);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush29);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush29);
        palette10.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush21);
#endif
        palette10.setBrush(QPalette::Disabled, QPalette::Accent, brush6);
        label_48->setPalette(palette10);
        label_48->setFont(font1);
        label_48->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_49 = new QLabel(groupBox_7);
        label_49->setObjectName("label_49");
        label_49->setGeometry(QRect(50, 220, 61, 20));
        label_49->setFont(font1);
        label_49->setStyleSheet(QString::fromUtf8("color: black;"));
        label_50 = new QLabel(groupBox_7);
        label_50->setObjectName("label_50");
        label_50->setGeometry(QRect(60, 290, 41, 20));
        label_50->setFont(font1);
        label_50->setStyleSheet(QString::fromUtf8("color:black;"));
        prenomm_2 = new QLineEdit(groupBox_7);
        prenomm_2->setObjectName("prenomm_2");
        prenomm_2->setGeometry(QRect(20, 250, 121, 28));
        prenomm_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_51 = new QLabel(groupBox_7);
        label_51->setObjectName("label_51");
        label_51->setGeometry(QRect(120, 380, 51, 20));
        label_51->setFont(font1);
        label_51->setStyleSheet(QString::fromUtf8("color:black;"));
        label_52 = new QLabel(groupBox_7);
        label_52->setObjectName("label_52");
        label_52->setGeometry(QRect(180, 290, 131, 20));
        label_52->setFont(font1);
        label_52->setStyleSheet(QString::fromUtf8("color:black;"));
        datem_2 = new QDateEdit(groupBox_7);
        datem_2->setObjectName("datem_2");
        datem_2->setGeometry(QRect(180, 320, 121, 29));
        datem_2->setFont(font2);
        datem_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: black;"));
        modifier_2 = new QPushButton(groupBox_7);
        modifier_2->setObjectName("modifier_2");
        modifier_2->setGeometry(QRect(10, 460, 101, 29));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush30);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Active, QPalette::PlaceholderText, brush31);
#endif
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush30);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush31);
#endif
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush31);
#endif
        modifier_2->setPalette(palette11);
        modifier_2->setFont(font1);
        modifier_2->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: white;"));
        annuler_4 = new QPushButton(groupBox_7);
        annuler_4->setObjectName("annuler_4");
        annuler_4->setGeometry(QRect(200, 460, 101, 29));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Active, QPalette::PlaceholderText, brush31);
#endif
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush31);
#endif
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush31);
#endif
        annuler_4->setPalette(palette12);
        annuler_4->setFont(font1);
        annuler_4->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: white;"));
        nomm_2 = new QLineEdit(groupBox_7);
        nomm_2->setObjectName("nomm_2");
        nomm_2->setGeometry(QRect(20, 180, 121, 28));
        nomm_2->setAutoFillBackground(false);
        nomm_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_53 = new QLabel(groupBox_7);
        label_53->setObjectName("label_53");
        label_53->setGeometry(QRect(220, 220, 51, 20));
        label_53->setFont(font1);
        label_53->setStyleSheet(QString::fromUtf8("color:black;"));
        mailm_2 = new QLineEdit(groupBox_7);
        mailm_2->setObjectName("mailm_2");
        mailm_2->setGeometry(QRect(180, 250, 121, 28));
        mailm_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        salairem_2 = new QDoubleSpinBox(groupBox_7);
        salairem_2->setObjectName("salairem_2");
        salairem_2->setGeometry(QRect(90, 410, 121, 29));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Active, QPalette::PlaceholderText, brush31);
#endif
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush31);
#endif
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush31);
#endif
        salairem_2->setPalette(palette13);
        salairem_2->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: rgb(255, 255, 255);\n"
""));
        idm_2 = new QLineEdit(groupBox_7);
        idm_2->setObjectName("idm_2");
        idm_2->setGeometry(QRect(20, 110, 121, 28));
        idm_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_54 = new QLabel(groupBox_7);
        label_54->setObjectName("label_54");
        label_54->setGeometry(QRect(40, 80, 63, 20));
        label_54->setFont(font1);
        label_54->setStyleSheet(QString::fromUtf8("color: black;"));
        mdpm_2 = new QLineEdit(groupBox_7);
        mdpm_2->setObjectName("mdpm_2");
        mdpm_2->setGeometry(QRect(180, 110, 121, 28));
        mdpm_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_55 = new QLabel(groupBox_7);
        label_55->setObjectName("label_55");
        label_55->setGeometry(QRect(210, 80, 63, 20));
        label_55->setFont(font1);
        label_55->setStyleSheet(QString::fromUtf8("color: black;"));
        label_56 = new QLabel(groupBox_7);
        label_56->setObjectName("label_56");
        label_56->setGeometry(QRect(190, 150, 111, 20));
        label_56->setFont(font1);
        label_56->setStyleSheet(QString::fromUtf8("\n"
"color: black;\n"
"\n"
""));
        deposerm_2 = new QPushButton(groupBox_7);
        deposerm_2->setObjectName("deposerm_2");
        deposerm_2->setGeometry(QRect(190, 180, 101, 29));
        deposerm_2->setFont(font1);
        deposerm_2->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: rgb(255, 255, 255);"));
        postem_2 = new QComboBox(groupBox_7);
        postem_2->addItem(QString());
        postem_2->addItem(QString());
        postem_2->addItem(QString());
        postem_2->setObjectName("postem_2");
        postem_2->setGeometry(QRect(20, 320, 121, 28));
        postem_2->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: rgb(255, 255, 255);"));
        set_2 = new QPushButton(groupBox_7);
        set_2->setObjectName("set_2");
        set_2->setGeometry(QRect(100, 60, 101, 29));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette14.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush30);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Active, QPalette::PlaceholderText, brush31);
#endif
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush30);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush31);
#endif
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush31);
#endif
        set_2->setPalette(palette14);
        set_2->setFont(font1);
        set_2->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: white;"));
        label_57 = new QLabel(tab_7);
        label_57->setObjectName("label_57");
        label_57->setGeometry(QRect(580, -10, 481, 461));
        label_57->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/LAKAHNI__5_-removebg-preview (1).png")));
        label_57->setScaledContents(true);
        laboula1_2 = new QLabel(tab_7);
        laboula1_2->setObjectName("laboula1_2");
        laboula1_2->setGeometry(QRect(410, 100, 281, 251));
        laboula1_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tabWidget_2->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName("tab_8");
        label_58 = new QLabel(tab_8);
        label_58->setObjectName("label_58");
        label_58->setGeometry(QRect(350, 570, 361, 41));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette15.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette15.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Active, QPalette::PlaceholderText, brush31);
#endif
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush31);
#endif
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush31);
#endif
        label_58->setPalette(palette15);
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        label_58->setFont(font3);
        label_58->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: white;\n"
""));
        label_59 = new QLabel(tab_8);
        label_59->setObjectName("label_59");
        label_59->setGeometry(QRect(240, -40, 441, 411));
        label_59->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/LAKAHNI__2_-removebg-preview.png")));
        label_59->setScaledContents(true);
        stat_2 = new QGraphicsView(tab_8);
        stat_2->setObjectName("stat_2");
        stat_2->setGeometry(QRect(30, 190, 411, 271));
        stat_2->setStyleSheet(QString::fromUtf8("background-color: #FFFFF;"));
        label_60 = new QLabel(tab_8);
        label_60->setObjectName("label_60");
        label_60->setGeometry(QRect(80, 160, 291, 20));
        label_60->setFont(font);
        stat1_2 = new QGraphicsView(tab_8);
        stat1_2->setObjectName("stat1_2");
        stat1_2->setGeometry(QRect(480, 190, 431, 271));
        stat1_2->setStyleSheet(QString::fromUtf8("background-color: #FFFFF;"));
        label_61 = new QLabel(tab_8);
        label_61->setObjectName("label_61");
        label_61->setGeometry(QRect(570, 160, 331, 20));
        label_61->setFont(font);
        tabWidget_2->addTab(tab_8, QString());
        label_33 = new QLabel(widget_4);
        label_33->setObjectName("label_33");
        label_33->setGeometry(QRect(20, 40, 171, 41));
        label_33->setFont(font);
        label_33->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: white;\n"
""));
        pushButton_8 = new QPushButton(widget_4);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(30, 470, 151, 31));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush32(QColor(153, 217, 217, 255));
        brush32.setStyle(Qt::SolidPattern);
        palette16.setBrush(QPalette::Active, QPalette::Button, brush32);
        palette16.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette16.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette16.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette16.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette16.setBrush(QPalette::Active, QPalette::Text, brush);
        palette16.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette16.setBrush(QPalette::Active, QPalette::Base, brush32);
        palette16.setBrush(QPalette::Active, QPalette::Window, brush32);
        palette16.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette16.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette16.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush32);
        palette16.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette16.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette16.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette16.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush32);
        palette16.setBrush(QPalette::Inactive, QPalette::Window, brush32);
        palette16.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette16.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush32);
        palette16.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette16.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette16.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette16.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette16.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush32);
        palette16.setBrush(QPalette::Disabled, QPalette::Window, brush32);
        palette16.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        palette16.setBrush(QPalette::Disabled, QPalette::Accent, brush12);
        pushButton_8->setPalette(palette16);
        pushButton_8->setFont(font);
        pushButton_7 = new QPushButton(widget_4);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(30, 330, 151, 31));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Active, QPalette::Button, brush32);
        palette17.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette17.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette17.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette17.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette17.setBrush(QPalette::Active, QPalette::Text, brush);
        palette17.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush32);
        palette17.setBrush(QPalette::Active, QPalette::Window, brush32);
        palette17.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette17.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette17.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette17.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette17.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush32);
        palette17.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette17.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette17.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette17.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush32);
        palette17.setBrush(QPalette::Inactive, QPalette::Window, brush32);
        palette17.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette17.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette17.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette17.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush32);
        palette17.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette17.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette17.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette17.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette17.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush32);
        palette17.setBrush(QPalette::Disabled, QPalette::Window, brush32);
        palette17.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette17.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette17.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        palette17.setBrush(QPalette::Disabled, QPalette::Accent, brush12);
        pushButton_7->setPalette(palette17);
        pushButton_7->setFont(font);
        pushButton_6 = new QPushButton(widget_4);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(30, 400, 151, 29));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Active, QPalette::Button, brush32);
        palette18.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette18.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette18.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette18.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette18.setBrush(QPalette::Active, QPalette::Text, brush);
        palette18.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette18.setBrush(QPalette::Active, QPalette::Base, brush32);
        palette18.setBrush(QPalette::Active, QPalette::Window, brush32);
        palette18.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette18.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette18.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette18.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette18.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush32);
        palette18.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette18.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette18.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette18.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette18.setBrush(QPalette::Inactive, QPalette::Base, brush32);
        palette18.setBrush(QPalette::Inactive, QPalette::Window, brush32);
        palette18.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette18.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette18.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette18.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush32);
        palette18.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette18.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette18.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette18.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette18.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette18.setBrush(QPalette::Disabled, QPalette::Base, brush32);
        palette18.setBrush(QPalette::Disabled, QPalette::Window, brush32);
        palette18.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette18.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette18.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        palette18.setBrush(QPalette::Disabled, QPalette::Accent, brush12);
        pushButton_6->setPalette(palette18);
        pushButton_6->setFont(font);
        pushButton_5 = new QPushButton(widget_4);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(30, 180, 151, 29));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Active, QPalette::Button, brush32);
        palette19.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette19.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette19.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette19.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette19.setBrush(QPalette::Active, QPalette::Text, brush);
        palette19.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette19.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette19.setBrush(QPalette::Active, QPalette::Base, brush32);
        palette19.setBrush(QPalette::Active, QPalette::Window, brush32);
        palette19.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette19.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette19.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette19.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette19.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette19.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Button, brush32);
        palette19.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette19.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette19.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette19.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette19.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette19.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette19.setBrush(QPalette::Inactive, QPalette::Base, brush32);
        palette19.setBrush(QPalette::Inactive, QPalette::Window, brush32);
        palette19.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette19.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette19.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette19.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette19.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette19.setBrush(QPalette::Disabled, QPalette::Button, brush32);
        palette19.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette19.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette19.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette19.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette19.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette19.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette19.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette19.setBrush(QPalette::Disabled, QPalette::Base, brush32);
        palette19.setBrush(QPalette::Disabled, QPalette::Window, brush32);
        palette19.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette19.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette19.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        palette19.setBrush(QPalette::Disabled, QPalette::Accent, brush12);
        pushButton_5->setPalette(palette19);
        pushButton_5->setFont(font);
        pushButton_4 = new QPushButton(widget_4);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(30, 250, 151, 29));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Active, QPalette::Button, brush32);
        palette20.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette20.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette20.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette20.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette20.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette20.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette20.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette20.setBrush(QPalette::Active, QPalette::Base, brush32);
        palette20.setBrush(QPalette::Active, QPalette::Window, brush32);
        palette20.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette20.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette20.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette20.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette20.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette20.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Button, brush32);
        palette20.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette20.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette20.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette20.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette20.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette20.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette20.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette20.setBrush(QPalette::Inactive, QPalette::Base, brush32);
        palette20.setBrush(QPalette::Inactive, QPalette::Window, brush32);
        palette20.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette20.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette20.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette20.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette20.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette20.setBrush(QPalette::Disabled, QPalette::Button, brush32);
        palette20.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette20.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette20.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette20.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette20.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette20.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette20.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette20.setBrush(QPalette::Disabled, QPalette::Base, brush32);
        palette20.setBrush(QPalette::Disabled, QPalette::Window, brush32);
        palette20.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette20.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette20.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        palette20.setBrush(QPalette::Disabled, QPalette::Accent, brush12);
        pushButton_4->setPalette(palette20);
        pushButton_4->setFont(font);
        label_2 = new QLabel(widget_4);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 80, 171, 471));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 241, 240);"));
        pushButton_3 = new QPushButton(widget_4);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(30, 110, 151, 29));
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette21.setBrush(QPalette::Active, QPalette::Button, brush32);
        palette21.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette21.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette21.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette21.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette21.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette21.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette21.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette21.setBrush(QPalette::Active, QPalette::Base, brush32);
        palette21.setBrush(QPalette::Active, QPalette::Window, brush32);
        palette21.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette21.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette21.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette21.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette21.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette21.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::Button, brush32);
        palette21.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette21.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette21.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette21.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette21.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette21.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette21.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette21.setBrush(QPalette::Inactive, QPalette::Base, brush32);
        palette21.setBrush(QPalette::Inactive, QPalette::Window, brush32);
        palette21.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette21.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette21.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette21.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette21.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette21.setBrush(QPalette::Disabled, QPalette::Button, brush32);
        palette21.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette21.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette21.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette21.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette21.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette21.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette21.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette21.setBrush(QPalette::Disabled, QPalette::Base, brush32);
        palette21.setBrush(QPalette::Disabled, QPalette::Window, brush32);
        palette21.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette21.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette21.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        palette21.setBrush(QPalette::Disabled, QPalette::Accent, brush12);
        pushButton_3->setPalette(palette21);
        pushButton_3->setFont(font);
        label_2->raise();
        tabWidget_2->raise();
        label_33->raise();
        pushButton_8->raise();
        pushButton_7->raise();
        pushButton_6->raise();
        pushButton_5->raise();
        pushButton_4->raise();
        pushButton_3->raise();
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1201, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "D\303\251connexion", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "LAKAHNI", nullptr));
        label_34->setText(QString());
        label_35->setText(QCoreApplication::translate("MainWindow", " Rechercher un Employ\303\251", nullptr));
        validrech_2->setText(QCoreApplication::translate("MainWindow", "Valider", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "    Tri ASC Par:", nullptr));
        exp_2->setText(QCoreApplication::translate("MainWindow", "Exportation PDF", nullptr));
        tri_2->setItemText(0, QCoreApplication::translate("MainWindow", "ID_EMP", nullptr));
        tri_2->setItemText(1, QCoreApplication::translate("MainWindow", "SALAIRE", nullptr));
        tri_2->setItemText(2, QCoreApplication::translate("MainWindow", "NOM", nullptr));
        tri_2->setItemText(3, QCoreApplication::translate("MainWindow", "DATE_EMB", nullptr));

        sup_2->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "   Tri DESC Par:", nullptr));
        tr_2->setItemText(0, QCoreApplication::translate("MainWindow", "ID_EMP", nullptr));
        tr_2->setItemText(1, QCoreApplication::translate("MainWindow", "SALAIRE", nullptr));
        tr_2->setItemText(2, QCoreApplication::translate("MainWindow", "NOM", nullptr));
        tr_2->setItemText(3, QCoreApplication::translate("MainWindow", "DATE_EMB", nullptr));

        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QCoreApplication::translate("MainWindow", "Afficher Employ\303\251", nullptr));
        groupBox_6->setTitle(QString());
        label_38->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        label_39->setText(QCoreApplication::translate("MainWindow", "Prenom", nullptr));
        label_40->setText(QCoreApplication::translate("MainWindow", "Poste", nullptr));
        label_41->setText(QCoreApplication::translate("MainWindow", " Salaire", nullptr));
        label_42->setText(QCoreApplication::translate("MainWindow", "Date d'embauche", nullptr));
        valider_2->setText(QCoreApplication::translate("MainWindow", "Valider", nullptr));
        annuler_3->setText(QCoreApplication::translate("MainWindow", "Annuler", nullptr));
        label_43->setText(QCoreApplication::translate("MainWindow", "E-Mail", nullptr));
        label_44->setText(QCoreApplication::translate("MainWindow", "      ID", nullptr));
        label_45->setText(QCoreApplication::translate("MainWindow", "   MDP", nullptr));
        label_46->setText(QCoreApplication::translate("MainWindow", "D\303\251poser Photo", nullptr));
        deposer_2->setText(QCoreApplication::translate("MainWindow", "D\303\251poser", nullptr));
        poste_2->setItemText(0, QCoreApplication::translate("MainWindow", "M\303\251decin", nullptr));
        poste_2->setItemText(1, QCoreApplication::translate("MainWindow", "RH manager", nullptr));
        poste_2->setItemText(2, QCoreApplication::translate("MainWindow", "Agent", nullptr));
        poste_2->setItemText(3, QCoreApplication::translate("MainWindow", "Admin", nullptr));

        label_47->setText(QString());
        laboula_2->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QCoreApplication::translate("MainWindow", "Ajouter Employ\303\251", nullptr));
        groupBox_7->setTitle(QString());
        label_48->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        label_49->setText(QCoreApplication::translate("MainWindow", "Prenom", nullptr));
        label_50->setText(QCoreApplication::translate("MainWindow", "Poste", nullptr));
        label_51->setText(QCoreApplication::translate("MainWindow", " Salaire", nullptr));
        label_52->setText(QCoreApplication::translate("MainWindow", "Date d'embauche", nullptr));
        modifier_2->setText(QCoreApplication::translate("MainWindow", "Valider", nullptr));
        annuler_4->setText(QCoreApplication::translate("MainWindow", "Annuler", nullptr));
        label_53->setText(QCoreApplication::translate("MainWindow", "E-Mail", nullptr));
        label_54->setText(QCoreApplication::translate("MainWindow", "      ID", nullptr));
        label_55->setText(QCoreApplication::translate("MainWindow", "   MDP", nullptr));
        label_56->setText(QCoreApplication::translate("MainWindow", "D\303\251poser Photo", nullptr));
        deposerm_2->setText(QCoreApplication::translate("MainWindow", "D\303\251poser", nullptr));
        postem_2->setItemText(0, QCoreApplication::translate("MainWindow", "M\303\251decin", nullptr));
        postem_2->setItemText(1, QCoreApplication::translate("MainWindow", "RH manager", nullptr));
        postem_2->setItemText(2, QCoreApplication::translate("MainWindow", "Agent", nullptr));

        set_2->setText(QCoreApplication::translate("MainWindow", "Recherche", nullptr));
        label_57->setText(QString());
        laboula1_2->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QCoreApplication::translate("MainWindow", "Modifier Employ\303\251", nullptr));
        label_58->setText(QCoreApplication::translate("MainWindow", "   Statistique des Employ\303\251s selon leur poste", nullptr));
        label_59->setText(QString());
        label_60->setText(QCoreApplication::translate("MainWindow", "Statistique des Employ\303\251s selon leur poste", nullptr));
        label_61->setText(QCoreApplication::translate("MainWindow", "Statistique des Employ\303\251s selon Date_embauche", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_8), QCoreApplication::translate("MainWindow", "Statistique", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "              Dashboard", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Gestion Vaccins", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Gestion Rendez-vous", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Gestion Ressources", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Gestion Employ\303\251s", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Gestion Patients", nullptr));
        label_2->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Acceuil", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
