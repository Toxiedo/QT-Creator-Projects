#-------------------------------------------------
#
# Project created by QtCreator 2012-12-15T18:13:20
#
#-------------------------------------------------

QT       += core gui

TARGET = Image_Studio
TEMPLATE = app
target.path=/usr/local/bin
INSTALLS=target


SOURCES += main.cpp\
        mainwindow.cpp \
    addform.cpp \
    contrast.cpp \
    gray.cpp \
    gamma.cpp \
    bilinear_resize.cpp \
    addimage.cpp \
    subimage.cpp \
    mean.cpp

HEADERS  += mainwindow.h \
    addform.h \
    contrast.h \
    gray.h \
    gamma.h \
    bilinear_resize.h \
    addimage.h \
    subimage.h \
    mean.h \
    my_color.h

FORMS    += mainwindow.ui \
    addform.ui \
    contrast.ui \
    gray.ui \
    gamma.ui \
    bilinear_resize.ui \
    addimage.ui \
    subimage.ui \
    mean.ui
