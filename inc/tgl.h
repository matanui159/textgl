#ifndef TGL_H_
#define TGL_H_
#include <GLES2/gl2.h>

#ifdef __cplusplus
extern "C" {
#endif

GL_APICALL void GL_APIENTRY tgl_init();
GL_APICALL void GL_APIENTRY tgl_exit();

#ifdef __cplusplus
}
#endif

#endif