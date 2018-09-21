#ifndef TGL_H_
#define TGL_H_
#include <GLES2/gl2.h>

typedef void (*TGLProcAddress)();

GL_APICALL void GL_APIENTRY tglInitialize();
GL_APICALL void GL_APIENTRY tglTerminate();
GL_APICALL TGLProcAddress GL_APIENTRY tglGetProcAddress(const char* name);

#endif