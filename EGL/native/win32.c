#include "native.h"
#include <windows.h>

static HANDLE g_console;

void tglc_native_init() {
	g_console = GetStdHandle(STD_OUTPUT_HANDLE);

	#if _WIN32_WINNT >= 0x0500
		CONSOLE_FONT_INFOEX font;
		font.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		GetCurrentConsoleFontEx(g_console, false, &font);
		font.dwFontSize.X = 8;
		font.dwFontSize.Y = 8;
		SetCurrentConsoleFontEx(g_console, false, &font);
	#endif

	CONSOLE_CURSOR_INFO cursor;
	GetConsoleCursorInfo(g_console, &cursor);
	cursor.bVisible = false;
	SetConsoleCursorInfo(g_console, &cursor);

	CONSOLE_SCREEN_BUFFER_INFO buffer;
	GetConsoleScreenBufferInfo(g_console, &buffer);
	buffer.dwSize.X = buffer.srWindow.Right - buffer.srWindow.Left + 1;
	buffer.dwSize.Y = buffer.srWindow.Bottom - buffer.srWindow.Top + 1;
	SetConsoleScreenBufferSize(g_console, buffer.dwSize);
}

void tglc_native_exit() {
}