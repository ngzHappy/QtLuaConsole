

##change here !!



CONFIG(debug,debug|release){
OutDirPath = $$PWD/../bind
}else{
OutDirPath = $$PWD/../bin
}



DEFINES += LUA_BUILD_AS_DLL



win32{
DEFINES *=LUA_USE_WINDOWS
}else{
DEFINES *=LUA_USE_LINUX
}








