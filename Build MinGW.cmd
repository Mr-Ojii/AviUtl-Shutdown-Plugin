g++ -Wall -shared "-Wl,--dll,--enable-stdcall-fixup" -o shutdown_plugin.auf src/shutdown_plugin.cpp src/shutdown_plugin.def -lmsvcrt -lgcc_s -lstdc++ -lmingw32 -lkernel32 -lgcc -lmoldname -lmingwex -luser32 -ladvapi32 -lshell32 -m32