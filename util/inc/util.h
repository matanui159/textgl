#ifndef TGL_H_
#define TGL_H_
#include <KHR/khrplatform.h>

#if defined(_WIN32) && !defined(__SCITECH_SNAP__) && !defined(ANGLE_STATIC)
	#define TGL_API __declspec(dllexport)
#elif defined (__SYMBIAN32__) && !defined(ANGLE_STATIC)
	#define TGL_API EXPORT_C
#elif defined(__ANDROID__)
	#define TGL_API __attribute__((visibility("default")))
#else
	#define TGL_API
#endif

#define TGL_ENTRY KHRONOS_APIENTRY
#define GL_APICALL TGL_API
#define EGLAPI TGL_API

#include <GLES2/gl2.h>
#include <EGL/egl.h>
#include <stdint-gcc.h>
#include <stdbool.h>

#define TGL_UNUSED(param) ((void)param)

#include "mem.h"
#include "heap.h"
#include "context.h"
#endif