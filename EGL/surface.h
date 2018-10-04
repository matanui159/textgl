#ifndef TGLC_SURFACE_H_
#define TGLC_SURFACE_H_
#include "util.h"

typedef struct tglc_surface_t {
	bool window;
	int width;
	int height;
} tglc_surface_t;

void tglc_surface_init();
void tglc_surface_exit();

#endif