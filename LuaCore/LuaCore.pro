include($$PWD/../OutDirPath.pri)
include($$PWD/Lua/Lua.pri)

CONFIG += c++14
QT += core
QT -= gui

TARGET = LuaCore
TEMPLATE = lib

DEFINES += LUACORE_LIBRARY

SOURCES +=

HEADERS +=   luacore_global.h


DESTDIR = $$OutDirPath



unix {
    QMAKE_LFLAGS += -Wl,-rpath .
}






