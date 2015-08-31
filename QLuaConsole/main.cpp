
#include <QApplication>
#include "QLuaConsoleWidget.hpp"
#include <QTextCodec>


int main(int argc, char *argv[])
{
#ifdef _WIN32
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("GBK"));
#endif
    QApplication app(argc, argv);

	QLuaConsole console;
    console.show();
		
    return app.exec();
}




