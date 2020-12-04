cl src\\shutdown_plugin.cpp src\\shutdown_plugin.def /LD
del shutdown_plugin.exp
del shutdown_plugin.lib
del shutdown_plugin.obj
ren shutdown_plugin.dll shutdown_plugin.auf