#ifndef TGLC_DISPLAY_H_
#define TGLC_DISPLAY_H_
#include "util.h"
#include "config.h"

typedef struct tglc_display_t {
	bool init;
} tglc_display_t;

tglc_display_t* tglc_display_get(EGLDisplay edisplay);

#endif