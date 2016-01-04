#-------------------------------------------------
#
# Project created by QtCreator 2015-12-19T19:53:34
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ZFLayerDemo
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    newevaluatedialog.cpp \
    solutiondialog.cpp \
    dataopr.cpp

HEADERS  += mainwindow.h \
    newevaluatedialog.h \
    solutiondialog.h \
    dataopr.h

FORMS    += mainwindow.ui \
    newevaluatedialog.ui \
    solutiondialog.ui
