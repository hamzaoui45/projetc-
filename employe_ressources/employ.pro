QT += core gui widgets sql multimedia serialport charts network
QT += core gui widgets multimedia

CONFIG += c++17

TEMPLATE = app
TARGET = Employee

# Sources: Combine unique source files from both projects
SOURCES += \
    gressource.cpp \
    main.cpp \
    mainwindow.cpp \
    employee.cpp \
    log.cpp \
    connexion.cpp \
    arduino.cpp \
    ressources.cpp

# Headers: Combine unique header files, removing duplicates
HEADERS += \
    gressource.h \
    mainwindow.h \
    employee.h \
    log.h \
    connexion.h \
    arduino.h \
    ressources.h

# Forms: Combine unique UI files
FORMS += \
    gressource.ui \
    mainwindow.ui \
    log.ui \
    gressource.ui

# Resources: Combine unique resource files
RESOURCES += \
    images.qrc \
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

# Include paths for OpenCV
INCLUDEPATH += C:/Users/VIVOBOOK/Downloads/opencv/build/x64/mingw/include

# OpenCV libraries (uncomment if needed)
LIBS += -LC:/Users/VIVOBOOK/Downloads/opencv/build/x64/mingw/lib \
   #-lopencv_core490 \
    #-lopencv_imgproc490 \
   #-lopencv_highgui490 \
   #-lopencv_videoio490 \
    #-lopencv_objdetect490

# Deployment rules
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
