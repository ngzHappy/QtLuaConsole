include($$PWD/../OutDirPath.pri)
CONFIG += c++14

QT += core
QT += gui
QT += widgets

TARGET = TestWidget
TEMPLATE = lib

DEFINES += TESTWIDGET_LIBRARY

SOURCES += TestWidget.cpp \
    moc/ThisProjectMoc.cpp \
    moc/moc_TestWidget.cpp

HEADERS += TestWidget.hpp\
        testwidget_global.h


INCLUDEPATH += $$PWD/../LuaCore
MOC_DIR = $$PWD/moc

LIBS += -L$$OutDirPath -lLuaCore

DESTDIR = $$OutDirPath

