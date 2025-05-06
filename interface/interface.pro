QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17



# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    connexion.cpp \
    gressource.cpp \
    main.cpp \
    ressources.cpp

HEADERS += \
    connexion.h \
    gressource.h \
    gressource.h \
    ressources.h

FORMS += \
    gressource.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    filtre.qrc \
    images.qrc
    #arduino
    QT+= serialport
    QT+= sql
    QT += charts
    QT += core gui sql charts network
    greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
    QT += core gui sql charts network multimedia
    greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
