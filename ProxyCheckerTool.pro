#-------------------------------------------------
#
# Project created by QtCreator 2016-01-15T07:52:26
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ProxyCheckerTool
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    addsingleproxydialog.cpp \
    helpers.cpp

HEADERS  += mainwindow.h \
    addsingleproxydialog.h \
    helpers.h

FORMS    += mainwindow.ui \
    addsingleproxydialog.ui
