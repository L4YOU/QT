#-------------------------------------------------
#
# Project created by QtCreator 2016-05-25T19:50:20
#
#-------------------------------------------------

QT       += core gui sql network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DBProj
TEMPLATE = app


SOURCES += main.cpp\
        login.cpp \
    showtata.cpp \
    edit.cpp \
    editaud.cpp

HEADERS  += login.h \
    showtata.h \
    edit.h \
    editaud.h

FORMS    += login.ui \
    showtata.ui \
    edit.ui \
    editaud.ui

CONFIG += mobility
MOBILITY = 

