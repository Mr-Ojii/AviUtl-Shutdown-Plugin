g++ -Wall -shared "-Wl,--dll,--enable-stdcall-fixup" -o shutdown_plugin.auf src/shutdown_plugin.cpp src/shutdown_plugin.def -m32 -lmsvcrt -lgcc_s -lstdc++ -lmingw32