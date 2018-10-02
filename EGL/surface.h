#ifndef TGLC_SURFACE_H_
#define TGLC_SURFACE_H_
#include "display.h"
#include <ncurses/curses.h>

typedef struct tglc_surface_t {
	bool window;
	int width;
	int height;
} tglc_surface_t;

void tglc_surface_init(tglc_display_t* display);
void tglc_surface_exit(tglc_display_t* display);

#endif