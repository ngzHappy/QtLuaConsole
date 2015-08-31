include($$PWD/../OutDirPath.pri)

CONFIG += c++14
QT     += core gui
QT     += widgets

TARGET = QLuaConsole
TEMPLATE = app


SOURCES += \
    main.cpp \
    QConsoleWidget.cpp \
    moc/ThisProjectMoc.cpp \
    moc/moc_QConsoleWidget.cpp \
    moc/moc_QConsoleWidgetPrivate.cpp \
    moc/moc_QLuaConsoleWidget.cpp

HEADERS += \
    QConsoleWidget.hpp \
    QConsoleWidgetPrivate.hpp \
    QLuaConsoleWidget.hpp

INCLUDEPATH += $$PWD/../LuaCore
MOC_DIR = $$PWD/moc

LIBS += -L$$OutDirPath -lLuaCore

DESTDIR = $$OutDirPath













