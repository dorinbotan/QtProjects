TEMPLATE = lib

# Place lib one level higher that it's sourses
DESTDIR = ..

QT -= gui

HEADERS += \
    dynlib.h

SOURCES += \
    dynlib.cpp

TARGET = dynlib
