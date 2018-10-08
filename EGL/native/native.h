#ifndef TGLC_NATIVE_H_
#define TGLC_NATIVE_H_
#include "util.h"

void tglc_native_init();
void tglc_native_exit();
void tglc_native_update(int* width, int* height, uint16_t* frame);

#endif