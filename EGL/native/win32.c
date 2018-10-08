#include "native.h"
#include <windows.h>

static HANDLE g_console;

void tglc_native_init() {
	g_console = GetStdHandle(STD_OUTPUT_HANDLE);

	#if _WIN32_WINNT >= 0x0500
		CONSOLE_FONT_INFOEX font;
		GetCurrentConsoleFontEx(g_console, false, &font);
		font.dwFontSize.X = 8;
		font.dwFontSize.Y = 8;
		SetCurrentConsoleFontEx(g_console, false, &font);
	#endif
}

void tglc_native_exit() {
}