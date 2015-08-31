#include "TestWidget.hpp"
#include <QDebug>
#include <Lua/lua.hpp>
#include <LuaBridge/LuaBridge.h>

TestWidget::TestWidget( ) :QWidget(0)
{
}


TestWidget::TestWidget(QWidget * p):QWidget(p)
{
}

TestWidget::~TestWidget()
{
}

void TestWidget::print() {
	qDebug() << "Hellow Lua!";
}

extern "C"{

TESTWIDGETSHARED_EXPORT
int luaopen_TestWidget(lua_State *L){

	{
		auto & ns = luabridge::getGlobalNamespace(L); 
		ns.beginClass<TestWidget>("TestWidget_")
			.addConstructor<void(*)(void)>()
			.addFunction("print_", &TestWidget::print)
			.addFunction("show_",&TestWidget::show)
			.addFunction("hide_", &TestWidget::hide)
			.endClass();
			;
	}

    return 1;
}

}



