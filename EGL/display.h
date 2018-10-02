#ifndef TGLC_DISPLAY_H_
#define TGLC_DISPLAY_H_
#include "util.h"

typedef struct tglc_display_t {
	bool init;
	struct {
		tgl_heap_t heap;
	} surface;
} tglc_display_t;

tglc_display_t* tglc_display_get(EGLDisplay edisplay);

#endif