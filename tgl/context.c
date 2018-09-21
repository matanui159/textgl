#include <tgl.h>
#include "error.h"
#include "buffer.h"
#include <windows.h>

static _Bool g_init;
static HINSTANCE g_dll;

BOOL WINAPI DllMain(HINSTANCE dll, DWORD reason, LPVOID reserved) {
	g_dll = dll;
	return TRUE;
}

GL_APICALL void GL_APIENTRY tglInitialize() {
	if (!g_init) {
		tgl_error_init();
		tgl_buffer_init();
		g_init = 1;
	}
}

GL_APICALL void GL_APIENTRY tglTerminate() {
	if (g_init) {
		tgl_buffer_exit();
		tgl_error_exit();
		g_init = 0;
	}
}

GL_APICALL TGLProcAddress GL_APIENTRY tglGetProcAddress(const char* name) {
	// return GetProcAddress(g_dll, name);
	return GetProcAddress(g_dll, "_glBindBuffer@8");
}