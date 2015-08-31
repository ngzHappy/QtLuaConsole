
#include <QApplication>
#include "QLuaConsoleWidget.hpp"



int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

	QLuaConsole console;
    console.show();
		
    return app.exec();
}




