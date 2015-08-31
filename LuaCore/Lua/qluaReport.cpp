
#if defined(QT_CORE_LIB)

#include "qluaReport.hpp"
#include <QString>
#include <QDebug>

/*
 * 输出一个string
*/
void lua_writestring(
        const char * s,
        unsigned int l){
	QString temp__ = QString::fromUtf8(s,l);
	qDebug() << temp__;
}

/*
 * 输出一个结束符
*/
void lua_writeline(){
	qDebug() << endl;
}

/*
 * 输出error
*/
void lua_writestringerror(
        const char * s,
        const char * p){
    QString temp__ = QString::asprintf(s,p);
	qCritical() << temp__;
}



#else

/*
 * 中文注释测试
*/



#endif



