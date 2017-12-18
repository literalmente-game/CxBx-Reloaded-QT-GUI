#-------------------------------------------------
#
# Project created by QtCreator 2017-11-23T16:43:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CxBx-Reloaded
TEMPLATE = app
RC_FILE = myapp.rc

SOURCES += main.cpp\
        mainwindow.cpp \
    settings_emulation.cpp

HEADERS  += mainwindow.h \
    settings_emulation.h

FORMS    += mainwindow.ui \
    settings_emulation.ui

RESOURCES += \
    ../images.qrc
