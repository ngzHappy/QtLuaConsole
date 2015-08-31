

#if defined(QT_CORE_LIB)

#ifndef __QLUA_0_REPORT__
#define __QLUA_0_REPORT__

/*
 * 重定向LUA输出抽象层
*/

extern void lua_writestring(const char * s, unsigned int l);
extern void lua_writeline();
extern void lua_writestringerror(const char * s,const char * p);


#endif


#else





#endif

