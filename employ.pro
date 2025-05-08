QT += core gui widgets sql multimedia serialport charts network

CONFIG += c++17
TEMPLATE = app
TARGET = Employee

# Sources
SOURCES += \
    dialog.cpp \
    gressource.cpp \
    main.cpp \
    mainwindow.cpp \
    employee.cpp \
    log.cpp \
    connexion.cpp \
    arduino.cpp \
    mainwindowV.cpp \
    mainwindowrdv.cpp \
    rdv.cpp \
    ressources.cpp \
    vaccin.cpp

# Headers
HEADERS += \
    dialog.h \
    gressource.h \
    mainwindow.h \
    employee.h \
    log.h \
    connexion.h \
    arduino.h \
    mainwindowV.h \
    mainwindowrdv.h \
    rdv.h \
    ressources.h \
    vaccin.h

# Forms
FORMS += \
    dialog.ui \
    gressource.ui \
    mainwindow.ui \
    log.ui \
    mainwindowV.ui \
    mainwindowrdv.ui

# Resources
RESOURCES += \
    statfaza.qrc \
    tyy.qrc \
    frt.qrc \
    user.qrc \
    lkkj.qrc \
    lak.qrc \
    logo.qrc \
    pdf.qrc \
    deconnexion.qrc \
    filtre.qrc \
    images.qrc

# Include paths for OpenCV (uncomment if needed)
#INCLUDEPATH += C:/Users/VIVOBOOK/Downloads/opencv/build/x64/mingw/include

# OpenCV libraries (uncomment if needed)
#LIBS += -LC:/Users/VIVOBOOK/Downloads/opencv/build/x64/mingw/lib \
#    -lopencv_core490 \
#    -lopencv_imgproc490 \
#    -lopencv_highgui490 \
#    -lopencv_videoio490 \
#    -lopencv_objdetect490

# Deployment rules
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
