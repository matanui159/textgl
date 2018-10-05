#ifndef TGL_H_
#define TGL_H_
#include <KHR/khrplatform.h>

#if defined(TGL_TEST)
#	define TGL_API KHRONOS_APICALL
#elif defined(_WIN32) && !defined(__SCITECH_SNAP__) && !defined(ANGLE_STATIC)
	#define TGL_API __declspec(dllexport)
#elif defined (__SYMBIAN32__) && !defined(ANGLE_STATIC)
	#define TGL_API EXPORT_C
#elif defined(__ANDROID__)
	#define TGL_API __attribute__((visibility("default")))
#else
	#define TGL_API
#endif
#define TGL_ENTRY KHRONOS_APIENTRY

#ifdef TGL_GLES
	#define GL_API TGL_API
#endif

#ifdef TGL_EGL
	#define EGLAPI TGL_API
#endif

#include <EGL/egl.h>
#include <GLES/gl.h>
#include <stdint.h>
#include <stdbool.h>

#define TGL_UNUSED(param) ((void)param)

#include "mem.h"
#include "heap.h"
#include "context.h"
#endif