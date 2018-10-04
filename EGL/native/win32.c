#include "native.h"
#include <windows.h>

void tglc_native_surface(EGLNativeWindowType window) {
	if (window != NULL) {
		ShowWindow(window, SW_HIDE);
	}
	AllocConsole();
}