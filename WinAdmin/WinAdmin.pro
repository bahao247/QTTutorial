#-------------------------------------------------
#
# Project created by QtCreator 2015-06-22T19:50:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = WinAdmin
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp

HEADERS  += widget.h

FORMS    += widget.ui

#Windows icon and admin right
win32 {
    RC_FILE = winadmin.rc
}
