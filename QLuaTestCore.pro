
TEMPLATE = subdirs

LuaCoreLIB.file = $$PWD/LuaCore/LuaCore.pro
QLuaConsoleAPP.file = $$PWD/QLuaConsole/QLuaConsole.pro
TestWidgetLIB.file = $$PWD/TestWidget/TestWidget.pro

QLuaConsoleAPP.depends += LuaCoreLIB
TestWidgetLIB.depends += LuaCoreLIB

SUBDIRS += LuaCoreLIB \
    QLuaConsoleAPP \
    TestWidgetLIB























