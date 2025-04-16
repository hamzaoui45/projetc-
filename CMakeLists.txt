cmake_minimum_required(VERSION 3.16)

project(Employee VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# Trouver les packages Qt nécessaires
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets Sql Multimedia)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Sql Multimedia)





set(PROJECT_SOURCES
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    dialog.h dialog.cpp dialog.ui
    employee.h employee.cpp
    log.h log.cpp log.ui
    connexion.h connexion.cpp
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Employee
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        build/Desktop_Qt_6_7_3_MinGW_64_bit-Debug/logo.qrc
        build/Desktop_Qt_6_7_3_MinGW_64_bit-Debug/pdf.qrc
        build/Desktop_Qt_6_7_3_MinGW_64_bit-Debug/deconnexion.qrc
        statfaza.qrc
        tyy.qrc
        frt.qrc
        user.qrc
        lkkj.qrc
        lak.qrc
    )
else()
    if(ANDROID)
        add_library(Employee SHARED
            ${PROJECT_SOURCES}
        )
    else()
        add_executable(Employee
            ${PROJECT_SOURCES}
        )
    endif()
endif()

# Lier les bibliothèques Qt nécessaires
target_link_libraries(Employee PRIVATE Qt${QT_VERSION_MAJOR}::Widgets Qt${QT_VERSION_MAJOR}::Sql Qt${QT_VERSION_MAJOR}::Multimedia)

set(OpenCV_DIR "C:/Users/VIVOBOOK/Downloads/opencv/build/x64/mingw")
find_package(OpenCV REQUIRED PATHS "${OpenCV_DIR}/lib" NO_DEFAULT_PATH)
# Inclure les headers de OpenCV
include_directories(${OpenCV_INCLUDE_DIRS})


# Configuration pour macOS et Windows
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.Employee)
endif()
set_target_properties(Employee PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS Employee
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)



if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Employee)
endif()
