#include "context.h"
#include "error.h"
#include "display.h"
#include "config.h"

static tgl_heap_t g_contexts;

void tglc_context_init() {
	tgl_heap_create(&g_contexts,
		sizeof(tgl_context_t),
		NULL,
		(tgl_heap_callback_t)tgl_context_destroy
	);
}

void tglc_context_exit() {
	tgl_heap_destroy(&g_contexts);
}

TGL_API EGLContext TGL_ENTRY eglCreateContext(EGLDisplay display, EGLConfig config, EGLContext share, const EGLint* attribs) {
	if (!tglc_display_check(display) || !tglc_config_check(config)) {
		return NULL;
	}
	if (attribs != NULL && attribs[0] != EGL_NONE) {
		tglc_error_set(EGL_BAD_ATTRIBUTE);
		return NULL;
	}

	tgl_context_t* context = tgl_heap_add(&g_contexts);
	tgl_context_create(context, share);
	return context;
}

TGL_API EGLBoolean TGL_ENTRY eglDestroyContext(EGLDisplay display, EGLContext egl_context) {
	if (!tglc_display_check(display)) {
		return false;
	}

	tgl_heap_remove(&g_contexts, egl_context);
	return true;
}