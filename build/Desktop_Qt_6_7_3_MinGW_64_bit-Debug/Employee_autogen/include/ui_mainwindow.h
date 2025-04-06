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
#include <QtGui/QAction>
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
#include <QtWidgets/QMenu>
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
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;
    QLabel *label_11;
    QLabel *label_8;
    QPushButton *pushButton_16;
    QWidget *widget;
    QLabel *label_9;
    QLabel *label_13;
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
    QTableView *tableView;
    QPushButton *sup;
    QLineEdit *id_2;
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
    QLineEdit *mail;
    QDoubleSpinBox *salaire;
    QLineEdit *id;
    QLabel *label_12;
    QLineEdit *mdp;
    QLabel *label_15;
    QLabel *label_16;
    QPushButton *deposer;
    QComboBox *poste;
    QLabel *label_30;
    QLabel *laboula;
    QWidget *tab_2;
    QGroupBox *groupBox_4;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLineEdit *prenomm;
    QLabel *label_22;
    QLabel *label_23;
    QDateEdit *datem;
    QPushButton *modifier;
    QPushButton *annuler_2;
    QLineEdit *nomm;
    QLabel *label_24;
    QLineEdit *mailm;
    QDoubleSpinBox *salairem;
    QLineEdit *idm;
    QLabel *label_25;
    QLineEdit *mdpm;
    QLabel *label_26;
    QLabel *label_27;
    QPushButton *deposerm;
    QComboBox *postem;
    QPushButton *set;
    QLabel *label_29;
    QLabel *laboula1;
    QWidget *tab_4;
    QLabel *label_17;
    QLabel *label_18;
    QGraphicsView *stat;
    QLabel *label_28;
    QGraphicsView *stat1;
    QLabel *label_31;
    QMenuBar *menubar;
    QMenu *menuGestion_Employ_s;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1136, 662);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(20, 130, 151, 29));
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
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush6);
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
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush6);
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
        pushButton_3->setPalette(palette);
        QFont font;
        font.setBold(true);
        pushButton_3->setFont(font);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(20, 190, 151, 29));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette1.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::Accent, brush11);
        pushButton_4->setPalette(palette1);
        pushButton_4->setFont(font);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(20, 250, 151, 29));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette2.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::Accent, brush11);
        pushButton_5->setPalette(palette2);
        pushButton_5->setFont(font);
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(20, 310, 151, 29));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette3.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::Accent, brush11);
        pushButton_6->setPalette(palette3);
        pushButton_6->setFont(font);
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(20, 370, 151, 31));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette4.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::Accent, brush11);
        pushButton_7->setPalette(palette4);
        pushButton_7->setFont(font);
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(20, 430, 151, 31));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette5.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::Accent, brush11);
        pushButton_8->setPalette(palette5);
        pushButton_8->setFont(font);
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(30, 550, 131, 31));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette6.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::Accent, brush11);
        pushButton_9->setPalette(palette6);
        pushButton_9->setFont(font);
        groupBox_2 = new QGroupBox(centralwidget);
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
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, -20, 121, 121));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/Downloads/Vaxhaven__6_-removebg-preview.png")));
        label_8->setScaledContents(true);
        pushButton_16 = new QPushButton(centralwidget);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setGeometry(QRect(750, 20, 151, 31));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette7.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::Accent, brush11);
        pushButton_16->setPalette(palette7);
        pushButton_16->setFont(font);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(-20, 0, 1161, 80));
        widget->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: white;\n"
""));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(50, 50, 81, 21));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: white;\n"
""));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 90, 181, 31));
        label_13->setFont(font);
        label_13->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: white;\n"
""));
        widget_4 = new QWidget(centralwidget);
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
        label_10->setGeometry(QRect(670, 0, 101, 111));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/Downloads/Design_sans_titre__11_-removebg-preview.png")));
        label_10->setScaledContents(true);
        label_6 = new QLabel(tab_3);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(150, 110, 141, 31));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: white;\n"
""));
        validrech = new QPushButton(tab_3);
        validrech->setObjectName("validrech");
        validrech->setGeometry(QRect(310, 150, 83, 29));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush12(QColor(5, 105, 107, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush6);
        QBrush brush13(QColor(214, 248, 245, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush13);
        QBrush brush14(QColor(86, 120, 118, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush14);
        QBrush brush15(QColor(115, 161, 157, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush15);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette8.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush13);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush14);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush15);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush14);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush13);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush14);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush15);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush14);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush14);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush16(QColor(173, 241, 235, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush16);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush17(QColor(86, 120, 118, 127));
        brush17.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush17);
#endif
        QBrush brush18(QColor(241, 255, 254, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Disabled, QPalette::Accent, brush18);
        validrech->setPalette(palette8);
        validrech->setFont(font);
        validrech->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: rgb(255, 255, 255);"));
        label_7 = new QLabel(tab_3);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(550, 110, 81, 31));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette9.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        QBrush brush19(QColor(127, 127, 127, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette9.setBrush(QPalette::Active, QPalette::Dark, brush19);
        QBrush brush20(QColor(170, 170, 170, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette9.setBrush(QPalette::Active, QPalette::Mid, brush20);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush);
        palette9.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette9.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette9.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette9.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Dark, brush19);
        palette9.setBrush(QPalette::Inactive, QPalette::Mid, brush20);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette9.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush19);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette9.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Dark, brush19);
        palette9.setBrush(QPalette::Disabled, QPalette::Mid, brush20);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush19);
        palette9.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush19);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        palette9.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush21(QColor(127, 127, 127, 127));
        brush21.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush21);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::Accent, brush6);
        label_7->setPalette(palette9);
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: white;\n"
""));
        exp = new QPushButton(tab_3);
        exp->setObjectName("exp");
        exp->setGeometry(QRect(550, 30, 131, 41));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush12);
        QBrush brush22(QColor(7, 157, 160, 255));
        brush22.setStyle(Qt::SolidPattern);
        palette10.setBrush(QPalette::Active, QPalette::Light, brush22);
        QBrush brush23(QColor(6, 131, 133, 255));
        brush23.setStyle(Qt::SolidPattern);
        palette10.setBrush(QPalette::Active, QPalette::Midlight, brush23);
        QBrush brush24(QColor(2, 52, 53, 255));
        brush24.setStyle(Qt::SolidPattern);
        palette10.setBrush(QPalette::Active, QPalette::Dark, brush24);
        QBrush brush25(QColor(3, 70, 71, 255));
        brush25.setStyle(Qt::SolidPattern);
        palette10.setBrush(QPalette::Active, QPalette::Mid, brush25);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette10.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette10.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Active, QPalette::AlternateBase, brush24);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush26(QColor(255, 255, 255, 127));
        brush26.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush26);
#endif
        palette10.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette10.setBrush(QPalette::Inactive, QPalette::Light, brush22);
        palette10.setBrush(QPalette::Inactive, QPalette::Midlight, brush23);
        palette10.setBrush(QPalette::Inactive, QPalette::Dark, brush24);
        palette10.setBrush(QPalette::Inactive, QPalette::Mid, brush25);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette10.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush24);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush26);
#endif
        palette10.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush24);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette10.setBrush(QPalette::Disabled, QPalette::Light, brush22);
        palette10.setBrush(QPalette::Disabled, QPalette::Midlight, brush23);
        palette10.setBrush(QPalette::Disabled, QPalette::Dark, brush24);
        palette10.setBrush(QPalette::Disabled, QPalette::Mid, brush25);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush24);
        palette10.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush24);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        palette10.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush12);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush27(QColor(2, 52, 53, 127));
        brush27.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush27);
#endif
        QBrush brush28(QColor(4, 74, 75, 255));
        brush28.setStyle(Qt::SolidPattern);
        palette10.setBrush(QPalette::Disabled, QPalette::Accent, brush28);
        exp->setPalette(palette10);
        exp->setFont(font);
        exp->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: rgb(255, 255, 255);"));
        tri = new QComboBox(tab_3);
        tri->addItem(QString());
        tri->addItem(QString());
        tri->addItem(QString());
        tri->addItem(QString());
        tri->setObjectName("tri");
        tri->setGeometry(QRect(640, 110, 101, 31));
        tri->setFont(font);
        tri->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        rech = new QLineEdit(tab_3);
        rech->setObjectName("rech");
        rech->setGeometry(QRect(300, 110, 101, 28));
        rech->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tableView = new QTableView(tab_3);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(110, 201, 701, 241));
        tableView->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: white;\n"
"border: 1px solid #808080;\n"
"font-weight: bold;"));
        sup = new QPushButton(tab_3);
        sup->setObjectName("sup");
        sup->setGeometry(QRect(150, 30, 121, 41));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette11.setBrush(QPalette::Active, QPalette::Light, brush22);
        palette11.setBrush(QPalette::Active, QPalette::Midlight, brush23);
        palette11.setBrush(QPalette::Active, QPalette::Dark, brush24);
        palette11.setBrush(QPalette::Active, QPalette::Mid, brush25);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette11.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette11.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette11.setBrush(QPalette::Active, QPalette::AlternateBase, brush24);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Active, QPalette::PlaceholderText, brush26);
#endif
        palette11.setBrush(QPalette::Active, QPalette::Accent, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette11.setBrush(QPalette::Inactive, QPalette::Light, brush22);
        palette11.setBrush(QPalette::Inactive, QPalette::Midlight, brush23);
        palette11.setBrush(QPalette::Inactive, QPalette::Dark, brush24);
        palette11.setBrush(QPalette::Inactive, QPalette::Mid, brush25);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette11.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush24);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush26);
#endif
        palette11.setBrush(QPalette::Inactive, QPalette::Accent, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush24);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette11.setBrush(QPalette::Disabled, QPalette::Light, brush22);
        palette11.setBrush(QPalette::Disabled, QPalette::Midlight, brush23);
        palette11.setBrush(QPalette::Disabled, QPalette::Dark, brush24);
        palette11.setBrush(QPalette::Disabled, QPalette::Mid, brush25);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush24);
        palette11.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush24);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        palette11.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush12);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush27);
#endif
        palette11.setBrush(QPalette::Disabled, QPalette::Accent, brush28);
        sup->setPalette(palette11);
        sup->setFont(font);
        sup->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: rgb(255, 255, 255);"));
        id_2 = new QLineEdit(tab_3);
        id_2->setObjectName("id_2");
        id_2->setGeometry(QRect(290, 40, 111, 28));
        id_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab_3, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(50, -30, 341, 501));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(false);
        groupBox->setFont(font1);
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 150, 41, 20));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush29(QColor(213, 241, 240, 255));
        brush29.setStyle(Qt::SolidPattern);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush29);
        palette12.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette12.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        palette12.setBrush(QPalette::Active, QPalette::Dark, brush19);
        palette12.setBrush(QPalette::Active, QPalette::Mid, brush20);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush);
        palette12.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush29);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush29);
        palette12.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette12.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette12.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush29);
        palette12.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::Dark, brush19);
        palette12.setBrush(QPalette::Inactive, QPalette::Mid, brush20);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush29);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush29);
        palette12.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette12.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush19);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush29);
        palette12.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::Dark, brush19);
        palette12.setBrush(QPalette::Disabled, QPalette::Mid, brush20);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush19);
        palette12.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush19);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush29);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush29);
        palette12.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush21);
#endif
        palette12.setBrush(QPalette::Disabled, QPalette::Accent, brush6);
        label->setPalette(palette12);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 220, 61, 20));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: black;"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 290, 41, 20));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color:black;"));
        prenom = new QLineEdit(groupBox);
        prenom->setObjectName("prenom");
        prenom->setGeometry(QRect(20, 250, 121, 28));
        prenom->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(120, 380, 51, 20));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color:black;"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(180, 290, 131, 20));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color:black;"));
        date = new QDateEdit(groupBox);
        date->setObjectName("date");
        date->setGeometry(QRect(180, 320, 121, 29));
        QFont font2;
        font2.setBold(false);
        font2.setItalic(false);
        date->setFont(font2);
        date->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: black;"));
        valider = new QPushButton(groupBox);
        valider->setObjectName("valider");
        valider->setGeometry(QRect(10, 460, 101, 29));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush6);
        QBrush brush30(QColor(245, 250, 255, 255));
        brush30.setStyle(Qt::SolidPattern);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush30);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush12);
        QBrush brush31(QColor(255, 255, 255, 128));
        brush31.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Active, QPalette::PlaceholderText, brush31);
#endif
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush30);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush31);
#endif
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush31);
#endif
        valider->setPalette(palette13);
        valider->setFont(font1);
        valider->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: white;"));
        annuler = new QPushButton(groupBox);
        annuler->setObjectName("annuler");
        annuler->setGeometry(QRect(200, 460, 101, 29));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette14.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette14.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Active, QPalette::PlaceholderText, brush31);
#endif
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush31);
#endif
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush31);
#endif
        annuler->setPalette(palette14);
        annuler->setFont(font1);
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
        label_14->setFont(font1);
        label_14->setStyleSheet(QString::fromUtf8("color:black;"));
        mail = new QLineEdit(groupBox);
        mail->setObjectName("mail");
        mail->setGeometry(QRect(180, 250, 121, 28));
        mail->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        salaire = new QDoubleSpinBox(groupBox);
        salaire->setObjectName("salaire");
        salaire->setGeometry(QRect(90, 410, 121, 29));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette15.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette15.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Active, QPalette::PlaceholderText, brush31);
#endif
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette15.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush31);
#endif
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette15.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush31);
#endif
        salaire->setPalette(palette15);
        salaire->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: rgb(255, 255, 255);\n"
""));
        id = new QLineEdit(groupBox);
        id->setObjectName("id");
        id->setGeometry(QRect(20, 110, 121, 28));
        id->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(40, 80, 63, 20));
        label_12->setFont(font1);
        label_12->setStyleSheet(QString::fromUtf8("color: black;"));
        mdp = new QLineEdit(groupBox);
        mdp->setObjectName("mdp");
        mdp->setGeometry(QRect(180, 110, 121, 28));
        mdp->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(210, 80, 63, 20));
        label_15->setFont(font1);
        label_15->setStyleSheet(QString::fromUtf8("color: black;"));
        label_16 = new QLabel(groupBox);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(190, 150, 111, 20));
        label_16->setFont(font1);
        label_16->setStyleSheet(QString::fromUtf8("\n"
"color: black;\n"
"\n"
""));
        deposer = new QPushButton(groupBox);
        deposer->setObjectName("deposer");
        deposer->setGeometry(QRect(190, 180, 101, 29));
        deposer->setFont(font1);
        deposer->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: rgb(255, 255, 255);"));
        poste = new QComboBox(groupBox);
        poste->addItem(QString());
        poste->addItem(QString());
        poste->addItem(QString());
        poste->setObjectName("poste");
        poste->setGeometry(QRect(20, 320, 121, 28));
        poste->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: rgb(255, 255, 255);"));
        label_30 = new QLabel(tab);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(580, -10, 491, 461));
        label_30->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/LAKAHNI__4_-removebg-preview.png")));
        label_30->setScaledContents(true);
        laboula = new QLabel(tab);
        laboula->setObjectName("laboula");
        laboula->setGeometry(QRect(410, 100, 281, 261));
        laboula->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(50, -30, 341, 501));
        groupBox_4->setFont(font1);
        label_19 = new QLabel(groupBox_4);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(60, 150, 41, 20));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Active, QPalette::Button, brush29);
        palette16.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette16.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        palette16.setBrush(QPalette::Active, QPalette::Dark, brush19);
        palette16.setBrush(QPalette::Active, QPalette::Mid, brush20);
        palette16.setBrush(QPalette::Active, QPalette::Text, brush);
        palette16.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Active, QPalette::Base, brush29);
        palette16.setBrush(QPalette::Active, QPalette::Window, brush29);
        palette16.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette16.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette16.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush29);
        palette16.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::Dark, brush19);
        palette16.setBrush(QPalette::Inactive, QPalette::Mid, brush20);
        palette16.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush29);
        palette16.setBrush(QPalette::Inactive, QPalette::Window, brush29);
        palette16.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette16.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush19);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush29);
        palette16.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette16.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette16.setBrush(QPalette::Disabled, QPalette::Dark, brush19);
        palette16.setBrush(QPalette::Disabled, QPalette::Mid, brush20);
        palette16.setBrush(QPalette::Disabled, QPalette::Text, brush19);
        palette16.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush19);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush29);
        palette16.setBrush(QPalette::Disabled, QPalette::Window, brush29);
        palette16.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush21);
#endif
        palette16.setBrush(QPalette::Disabled, QPalette::Accent, brush6);
        label_19->setPalette(palette16);
        label_19->setFont(font1);
        label_19->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_20 = new QLabel(groupBox_4);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(50, 220, 61, 20));
        label_20->setFont(font1);
        label_20->setStyleSheet(QString::fromUtf8("color: black;"));
        label_21 = new QLabel(groupBox_4);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(60, 290, 41, 20));
        label_21->setFont(font1);
        label_21->setStyleSheet(QString::fromUtf8("color:black;"));
        prenomm = new QLineEdit(groupBox_4);
        prenomm->setObjectName("prenomm");
        prenomm->setGeometry(QRect(20, 250, 121, 28));
        prenomm->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_22 = new QLabel(groupBox_4);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(120, 380, 51, 20));
        label_22->setFont(font1);
        label_22->setStyleSheet(QString::fromUtf8("color:black;"));
        label_23 = new QLabel(groupBox_4);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(180, 290, 131, 20));
        label_23->setFont(font1);
        label_23->setStyleSheet(QString::fromUtf8("color:black;"));
        datem = new QDateEdit(groupBox_4);
        datem->setObjectName("datem");
        datem->setGeometry(QRect(180, 320, 121, 29));
        datem->setFont(font2);
        datem->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: black;"));
        modifier = new QPushButton(groupBox_4);
        modifier->setObjectName("modifier");
        modifier->setGeometry(QRect(10, 460, 101, 29));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette17.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette17.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush30);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette17.setBrush(QPalette::Active, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Active, QPalette::PlaceholderText, brush31);
#endif
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette17.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush30);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette17.setBrush(QPalette::Inactive, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush31);
#endif
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette17.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette17.setBrush(QPalette::Disabled, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush31);
#endif
        modifier->setPalette(palette17);
        modifier->setFont(font1);
        modifier->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: white;"));
        annuler_2 = new QPushButton(groupBox_4);
        annuler_2->setObjectName("annuler_2");
        annuler_2->setGeometry(QRect(200, 460, 101, 29));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette18.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette18.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette18.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette18.setBrush(QPalette::Active, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Active, QPalette::PlaceholderText, brush31);
#endif
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette18.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette18.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette18.setBrush(QPalette::Inactive, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush31);
#endif
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette18.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette18.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette18.setBrush(QPalette::Disabled, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush31);
#endif
        annuler_2->setPalette(palette18);
        annuler_2->setFont(font1);
        annuler_2->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: white;"));
        nomm = new QLineEdit(groupBox_4);
        nomm->setObjectName("nomm");
        nomm->setGeometry(QRect(20, 180, 121, 28));
        nomm->setAutoFillBackground(false);
        nomm->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_24 = new QLabel(groupBox_4);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(220, 220, 51, 20));
        label_24->setFont(font1);
        label_24->setStyleSheet(QString::fromUtf8("color:black;"));
        mailm = new QLineEdit(groupBox_4);
        mailm->setObjectName("mailm");
        mailm->setGeometry(QRect(180, 250, 121, 28));
        mailm->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        salairem = new QDoubleSpinBox(groupBox_4);
        salairem->setObjectName("salairem");
        salairem->setGeometry(QRect(90, 410, 121, 29));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette19.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette19.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette19.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette19.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette19.setBrush(QPalette::Active, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Active, QPalette::PlaceholderText, brush31);
#endif
        palette19.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette19.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette19.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette19.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette19.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette19.setBrush(QPalette::Inactive, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush31);
#endif
        palette19.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette19.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette19.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette19.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette19.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette19.setBrush(QPalette::Disabled, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush31);
#endif
        salairem->setPalette(palette19);
        salairem->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: rgb(255, 255, 255);\n"
""));
        idm = new QLineEdit(groupBox_4);
        idm->setObjectName("idm");
        idm->setGeometry(QRect(20, 110, 121, 28));
        idm->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_25 = new QLabel(groupBox_4);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(40, 80, 63, 20));
        label_25->setFont(font1);
        label_25->setStyleSheet(QString::fromUtf8("color: black;"));
        mdpm = new QLineEdit(groupBox_4);
        mdpm->setObjectName("mdpm");
        mdpm->setGeometry(QRect(180, 110, 121, 28));
        mdpm->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_26 = new QLabel(groupBox_4);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(210, 80, 63, 20));
        label_26->setFont(font1);
        label_26->setStyleSheet(QString::fromUtf8("color: black;"));
        label_27 = new QLabel(groupBox_4);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(190, 150, 111, 20));
        label_27->setFont(font1);
        label_27->setStyleSheet(QString::fromUtf8("\n"
"color: black;\n"
"\n"
""));
        deposerm = new QPushButton(groupBox_4);
        deposerm->setObjectName("deposerm");
        deposerm->setGeometry(QRect(190, 180, 101, 29));
        deposerm->setFont(font1);
        deposerm->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: rgb(255, 255, 255);"));
        postem = new QComboBox(groupBox_4);
        postem->addItem(QString());
        postem->addItem(QString());
        postem->addItem(QString());
        postem->setObjectName("postem");
        postem->setGeometry(QRect(20, 320, 121, 28));
        postem->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: rgb(255, 255, 255);"));
        set = new QPushButton(groupBox_4);
        set->setObjectName("set");
        set->setGeometry(QRect(100, 60, 101, 29));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette20.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette20.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette20.setBrush(QPalette::Active, QPalette::ButtonText, brush30);
        palette20.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette20.setBrush(QPalette::Active, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Active, QPalette::PlaceholderText, brush31);
#endif
        palette20.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette20.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette20.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette20.setBrush(QPalette::Inactive, QPalette::ButtonText, brush30);
        palette20.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette20.setBrush(QPalette::Inactive, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush31);
#endif
        palette20.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette20.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette20.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette20.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette20.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette20.setBrush(QPalette::Disabled, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush31);
#endif
        set->setPalette(palette20);
        set->setFont(font1);
        set->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: white;"));
        label_29 = new QLabel(tab_2);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(580, -10, 481, 461));
        label_29->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/LAKAHNI__5_-removebg-preview (1).png")));
        label_29->setScaledContents(true);
        laboula1 = new QLabel(tab_2);
        laboula1->setObjectName("laboula1");
        laboula1->setGeometry(QRect(410, 100, 281, 251));
        laboula1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        label_17 = new QLabel(tab_4);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(350, 570, 361, 41));
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette21.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette21.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette21.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette21.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette21.setBrush(QPalette::Active, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Active, QPalette::PlaceholderText, brush31);
#endif
        palette21.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette21.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette21.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette21.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette21.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette21.setBrush(QPalette::Inactive, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush31);
#endif
        palette21.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette21.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette21.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette21.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette21.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette21.setBrush(QPalette::Disabled, QPalette::Window, brush12);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush31);
#endif
        label_17->setPalette(palette21);
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        label_17->setFont(font3);
        label_17->setStyleSheet(QString::fromUtf8("background-color: #05696b;\n"
"color: white;\n"
""));
        label_18 = new QLabel(tab_4);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(240, -40, 441, 411));
        label_18->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/LAKAHNI__2_-removebg-preview.png")));
        label_18->setScaledContents(true);
        stat = new QGraphicsView(tab_4);
        stat->setObjectName("stat");
        stat->setGeometry(QRect(30, 190, 411, 271));
        stat->setStyleSheet(QString::fromUtf8("background-color: #FFFFF;"));
        label_28 = new QLabel(tab_4);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(80, 160, 291, 20));
        label_28->setFont(font);
        stat1 = new QGraphicsView(tab_4);
        stat1->setObjectName("stat1");
        stat1->setGeometry(QRect(480, 190, 431, 271));
        stat1->setStyleSheet(QString::fromUtf8("background-color: #FFFFF;"));
        label_31 = new QLabel(tab_4);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(570, 160, 331, 20));
        label_31->setFont(font);
        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralwidget);
        widget_4->raise();
        widget->raise();
        groupBox_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        pushButton_6->raise();
        pushButton_7->raise();
        pushButton_8->raise();
        pushButton_9->raise();
        label_8->raise();
        pushButton_16->raise();
        label_9->raise();
        label_13->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1136, 25));
        menuGestion_Employ_s = new QMenu(menubar);
        menuGestion_Employ_s->setObjectName("menuGestion_Employ_s");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuGestion_Employ_s->menuAction());

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Acceuil", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Gestion Patients", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Gestion Employ\303\251s", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Gestion Ressources", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Gestion Rendez-vous", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Gestion Vaccins", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "D\303\251connexion", nullptr));
        groupBox_2->setTitle(QString());
        groupBox_3->setTitle(QString());
        label_11->setText(QString());
        label_8->setText(QString());
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "D\303\251connexion", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "LAKAHNI", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "              Dashboard", nullptr));
        label_10->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", " Rechercher un Employ\303\251", nullptr));
        validrech->setText(QCoreApplication::translate("MainWindow", "Valider", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "    Tri Par:", nullptr));
        exp->setText(QCoreApplication::translate("MainWindow", "Exportation PDF", nullptr));
        tri->setItemText(0, QCoreApplication::translate("MainWindow", "ID_EMP", nullptr));
        tri->setItemText(1, QCoreApplication::translate("MainWindow", "SALAIRE", nullptr));
        tri->setItemText(2, QCoreApplication::translate("MainWindow", "NOM", nullptr));
        tri->setItemText(3, QCoreApplication::translate("MainWindow", "DATE_EMB", nullptr));

        sup->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Afficher Employ\303\251", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Prenom", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Poste", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", " Salaire", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Date d'embauche", nullptr));
        valider->setText(QCoreApplication::translate("MainWindow", "Valider", nullptr));
        annuler->setText(QCoreApplication::translate("MainWindow", "Annuler", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "E-Mail", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "      ID", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "   MDP", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "D\303\251poser Photo", nullptr));
        deposer->setText(QCoreApplication::translate("MainWindow", "D\303\251poser", nullptr));
        poste->setItemText(0, QCoreApplication::translate("MainWindow", "M\303\251decin", nullptr));
        poste->setItemText(1, QCoreApplication::translate("MainWindow", "RH manager", nullptr));
        poste->setItemText(2, QCoreApplication::translate("MainWindow", "Agent", nullptr));

        label_30->setText(QString());
        laboula->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Ajouter Employ\303\251", nullptr));
        groupBox_4->setTitle(QString());
        label_19->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Prenom", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Poste", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", " Salaire", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Date d'embauche", nullptr));
        modifier->setText(QCoreApplication::translate("MainWindow", "Valider", nullptr));
        annuler_2->setText(QCoreApplication::translate("MainWindow", "Annuler", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "E-Mail", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "      ID", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "   MDP", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "D\303\251poser Photo", nullptr));
        deposerm->setText(QCoreApplication::translate("MainWindow", "D\303\251poser", nullptr));
        postem->setItemText(0, QCoreApplication::translate("MainWindow", "M\303\251decin", nullptr));
        postem->setItemText(1, QCoreApplication::translate("MainWindow", "RH manager", nullptr));
        postem->setItemText(2, QCoreApplication::translate("MainWindow", "Agent", nullptr));

        set->setText(QCoreApplication::translate("MainWindow", "Recherche", nullptr));
        label_29->setText(QString());
        laboula1->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Modifier Employ\303\251", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "   Statistique des Employ\303\251s selon leur poste", nullptr));
        label_18->setText(QString());
        label_28->setText(QCoreApplication::translate("MainWindow", "Statistique des Employ\303\251s selon leur poste", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "Statistique des Employ\303\251s selon Date_embauche", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Statistique", nullptr));
        menuGestion_Employ_s->setTitle(QCoreApplication::translate("MainWindow", "Gestion Employ\303\251s", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
