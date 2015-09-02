

#ifndef __QLUA__CONSOLE__WIDGETT__
#define __QLUA__CONSOLE__WIDGETT__


#ifdef QT_CORE_LIB

#include <memory>
#include "QConsoleWidget.hpp"
#include <Lua/lua.hpp>
#include <QtGlobal>
#include <QMessageLogContext>
#include <QDebug>

/*
单一头文件 必须用泛型写静态数据变量
*/
template<
    typename TQLuaConsole,
    typename TQtMessageHandler
>
class QLuaConsoleStaticData {
public:
    static TQLuaConsole *  globalHandle  ;
    static TQtMessageHandler globalMessageHangle  ;
};

template<
    typename TQLuaConsole,
    typename TQtMessageHandler
>
TQLuaConsole *
QLuaConsoleStaticData<TQLuaConsole, TQtMessageHandler>::globalHandle = 0;

template<
    typename TQLuaConsole,
    typename TQtMessageHandler
>
TQtMessageHandler 
QLuaConsoleStaticData<TQLuaConsole, TQtMessageHandler>::globalMessageHangle = 0;

class QLuaConsole  :
    public QConsole,
    public QLuaConsoleStaticData<
    QLuaConsole,
    QtMessageHandler
    >
    {
    Q_OBJECT
public:
    QLuaConsole(QWidget * p=0):QConsole(p) {

        this->setMinimumHeight(300);
        this->setMinimumWidth(512);

        if (globalHandle == 0) {
            globalHandle = this;
            installMessageHandler();
        }
        else {
            /*一个程序只允许一个lua控制台*/
            abort();
        }

        this->connect(
            this,this->getEvalsFunction(),
            this, &QLuaConsole::luaEval);

    }
    ~QLuaConsole() {
        globalHandle = 0;
    }

public  :

    class LuaState {
        std::shared_ptr< lua_State > L_;
    public:
        LuaState() {
            auto * L__ = luaL_newstate();
            L_ = std::shared_ptr< lua_State >(
                L__,
                [](lua_State * L__) {
                lua_close(L__);
            }
            );
            luaL_openlibs(L__);
        }

        const lua_State * getState()const {return L_.get();}
        lua_State * getState() {return L_.get();}

        operator lua_State *() {return getState();}
        operator const lua_State *()const {return getState();}

        ~LuaState() {}
};

    LuaState luaState ;
    void luaEval(QList<QConsoleWidgetCommand > commans__) {
        QByteArray __to__do__;
        lua_State * L = luaState;
        for ( const auto & i:commans__ ) {
            __to__do__ +=( i.command + "\n" ).toUtf8() ;
        }
        const auto & c__to__do__=__to__do__;
        if (luaL_dostring(L, c__to__do__.data())!=0) {
            if (lua_gettop(L)) {

                QTextCharFormat char__format__ =
                    globalHandle->textCharFormate();
                char__format__.setForeground(QColor(255, 100, 10, 255));
                size_t n__ = 0;
                auto * d__ = luaL_tolstring(L, -1, &n__);
                if (n__ > 0) {
                    globalHandle->insertText(
                        QString::fromUtf8(d__, n__),
                        char__format__
                        );
                }
                lua_pop(L, 1);
            }
        }
    }

private:

    static void messageOutput(
        QtMsgType type,
        const QMessageLogContext &context,
        const QString &message__) {

		/*去掉多余的不可见元素*/
		QString msg = [message__]()->QString {
			/*
			如果是换行符则保留
			去除多余的空白元素
			添加分隔符
			*/
			if (message__ == "\n") { return "\n"; }
			QString ans = message__.trimmed();
			if (ans.isEmpty()) { return ans; }
			if (message__.endsWith("\n")) {
				return ans + " \n";
			}
			return ans + " ";
		}();
        if (msg.isEmpty()) { return; }
	
        /*
        如果在非执行状态下重定向到默认(控制台)输出
        */
        if ((globalHandle == 0)||
            (globalHandle->isEvaling()==false)
            ) {
            if (globalMessageHangle) {
                (globalMessageHangle)(type, context, msg);
            }
            return;
        }

        /*
        重定向到lua console
        */
        switch (type) {
        case QtDebugMsg:
        {
            globalHandle->insertText(msg);
        }
            break;
        case QtWarningMsg:
        {
            globalHandle->insertText(msg);
        }
            break;
        case QtCriticalMsg:
        {
            globalHandle->insertText(msg);
        }
            break;
        case QtFatalMsg:
        {
            globalHandle->insertText(msg);
        }
            break;
        case QtInfoMsg:
        {
            globalHandle->insertText(msg);
        }
            break;
        }

    }

    static void installMessageHandler() {
        if (globalMessageHangle==0) {
            globalMessageHangle = qInstallMessageHandler(&messageOutput);
        }
        else {
            qInstallMessageHandler(&messageOutput);
        }
    }

};



#endif



#endif



