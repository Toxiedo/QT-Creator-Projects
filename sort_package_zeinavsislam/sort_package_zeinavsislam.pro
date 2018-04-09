#-------------------------------------------------
#
# Project created by QtCreator 2013-08-05T17:05:26
#
#-------------------------------------------------

QT       += core gui

TARGET = sort_package_zeinavsislam
TEMPLATE = app
target.path=/usr/local/bin
INSTALLS=target


SOURCES += main.cpp\
        mainwindow.cpp \
    insertion.cpp \
    insertion_sort_class.cpp \
    bubble_sort_class.cpp \
    bubble.cpp \
    selection_sort_class.cpp \
    selection.cpp \
    basic_methods_class.cpp

HEADERS  += mainwindow.h \
    insertion.h \
    insertion_sort_class.h \
    bubble_sort_class.h \
    bubble.h \
    selection_sort_class.h \
    selection.h \
    basic_methods_class.h

FORMS    += mainwindow.ui \
    insertion.ui \
    bubble.ui \
    selection.ui
