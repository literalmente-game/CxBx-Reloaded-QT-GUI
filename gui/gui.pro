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
    settings_emulation.cpp \
    models/xbetablemodel.cpp

HEADERS  += mainwindow.h \
    settings_emulation.h \
    models/xbetablemodel.h

FORMS    += mainwindow.ui \
    settings_emulation.ui

RESOURCES += \
    images.qrc

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../xbereader/release/ -lxbereader
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../xbereader/debug/ -lxbereader
else:unix: LIBS += -L$$OUT_PWD/../xbereader/ -lxbereader

INCLUDEPATH += $$PWD/../xbereader
DEPENDPATH += $$PWD/../xbereader

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../xbereader/release/libxbereader.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../xbereader/debug/libxbereader.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../xbereader/release/xbereader.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../xbereader/debug/xbereader.lib
else:unix: PRE_TARGETDEPS += $$OUT_PWD/../xbereader/libxbereader.a
