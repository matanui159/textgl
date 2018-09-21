# 1 "test/error.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "test/error.c"
# 1 "test/test.h" 1


# 1 "inc/tgl.h" 1


# 1 "C:/msys64/mingw32/include/GLES2/gl2.h" 1 3
# 37 "C:/msys64/mingw32/include/GLES2/gl2.h" 3
# 1 "C:/msys64/mingw32/include/GLES2/gl2platform.h" 1 3
# 20 "C:/msys64/mingw32/include/GLES2/gl2platform.h" 3
# 1 "C:/msys64/mingw32/include/KHR/khrplatform.h" 1 3
# 141 "C:/msys64/mingw32/include/KHR/khrplatform.h" 3
# 1 "C:/msys64/mingw32/lib/gcc/i686-w64-mingw32/7.3.0/include/stdint.h" 1 3 4
# 9 "C:/msys64/mingw32/lib/gcc/i686-w64-mingw32/7.3.0/include/stdint.h" 3 4
# 1 "C:/msys64/mingw32/i686-w64-mingw32/include/stdint.h" 1 3 4
# 28 "C:/msys64/mingw32/i686-w64-mingw32/include/stdint.h" 3 4
# 1 "C:/msys64/mingw32/i686-w64-mingw32/include/crtdefs.h" 1 3 4
# 10 "C:/msys64/mingw32/i686-w64-mingw32/include/crtdefs.h" 3 4
# 1 "C:/msys64/mingw32/i686-w64-mingw32/include/_mingw.h" 1 3 4
# 12 "C:/msys64/mingw32/i686-w64-mingw32/include/_mingw.h" 3 4
# 1 "C:/msys64/mingw32/i686-w64-mingw32/include/_mingw_mac.h" 1 3 4
# 13 "C:/msys64/mingw32/i686-w64-mingw32/include/_mingw.h" 2 3 4
# 1 "C:/msys64/mingw32/i686-w64-mingw32/include/_mingw_secapi.h" 1 3 4
# 14 "C:/msys64/mingw32/i686-w64-mingw32/include/_mingw.h" 2 3 4
# 282 "C:/msys64/mingw32/i686-w64-mingw32/include/_mingw.h" 3 4
# 1 "C:/msys64/mingw32/i686-w64-mingw32/include/vadefs.h" 1 3 4
# 9 "C:/msys64/mingw32/i686-w64-mingw32/include/vadefs.h" 3 4
# 1 "C:/msys64/mingw32/i686-w64-mingw32/include/_mingw.h" 1 3 4
# 578 "C:/msys64/mingw32/i686-w64-mingw32/include/_mingw.h" 3 4
# 1 "C:/msys64/mingw32/i686-w64-mingw32/include/sdks/_mingw_directx.h" 1 3 4
# 579 "C:/msys64/mingw32/i686-w64-mingw32/include/_mingw.h" 2 3 4
# 1 "C:/msys64/mingw32/i686-w64-mingw32/include/sdks/_mingw_ddk.h" 1 3 4
# 580 "C:/msys64/mingw32/i686-w64-mingw32/include/_mingw.h" 2 3 4
# 10 "C:/msys64/mingw32/i686-w64-mingw32/include/vadefs.h" 2 3 4




#pragma pack(push,_CRT_PACKING)
# 24 "C:/msys64/mingw32/i686-w64-mingw32/include/vadefs.h" 3 4
  
# 24 "C:/msys64/mingw32/i686-w64-mingw32/include/vadefs.h" 3 4
 typedef __builtin_va_list __gnuc_va_list;






  typedef __gnuc_va_list va_list;
# 103 "C:/msys64/mingw32/i686-w64-mingw32/include/vadefs.h" 3 4
#pragma pack(pop)
# 283 "C:/msys64/mingw32/i686-w64-mingw32/include/_mingw.h" 2 3 4
# 552 "C:/msys64/mingw32/i686-w64-mingw32/include/_mingw.h" 3 4
void __attribute__((__cdecl__)) __debugbreak(void);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) void __attribute__((__cdecl__)) __debugbreak(void)
{
  __asm__ __volatile__("int {$}3":);
}




const char *__mingw_get_crt_info (void);
# 11 "C:/msys64/mingw32/i686-w64-mingw32/include/crtdefs.h" 2 3 4




#pragma pack(push,_CRT_PACKING)
# 37 "C:/msys64/mingw32/i686-w64-mingw32/include/crtdefs.h" 3 4
typedef unsigned int size_t;
# 47 "C:/msys64/mingw32/i686-w64-mingw32/include/crtdefs.h" 3 4
typedef int ssize_t;




typedef size_t rsize_t;
# 64 "C:/msys64/mingw32/i686-w64-mingw32/include/crtdefs.h" 3 4
typedef int intptr_t;
# 77 "C:/msys64/mingw32/i686-w64-mingw32/include/crtdefs.h" 3 4
typedef unsigned int uintptr_t;
# 90 "C:/msys64/mingw32/i686-w64-mingw32/include/crtdefs.h" 3 4
typedef int ptrdiff_t;







typedef unsigned short wchar_t;







typedef unsigned short wint_t;
typedef unsigned short wctype_t;





typedef int errno_t;




typedef long __time32_t;




__extension__ typedef long long __time64_t;
# 136 "C:/msys64/mingw32/i686-w64-mingw32/include/crtdefs.h" 3 4
typedef __time32_t time_t;
# 422 "C:/msys64/mingw32/i686-w64-mingw32/include/crtdefs.h" 3 4
struct threadlocaleinfostruct;
struct threadmbcinfostruct;
typedef struct threadlocaleinfostruct *pthreadlocinfo;
typedef struct threadmbcinfostruct *pthreadmbcinfo;
struct __lc_time_data;

typedef struct localeinfo_struct {
  pthreadlocinfo locinfo;
  pthreadmbcinfo mbcinfo;
} _locale_tstruct,*_locale_t;



typedef struct tagLC_ID {
  unsigned short wLanguage;
  unsigned short wCountry;
  unsigned short wCodePage;
} LC_ID,*LPLC_ID;




typedef struct threadlocaleinfostruct {
  int refcount;
  unsigned int lc_codepage;
  unsigned int lc_collate_cp;
  unsigned long lc_handle[6];
  LC_ID lc_id[6];
  struct {
    char *locale;
    wchar_t *wlocale;
    int *refcount;
    int *wrefcount;
  } lc_category[6];
  int lc_clike;
  int mb_cur_max;
  int *lconv_intl_refcount;
  int *lconv_num_refcount;
  int *lconv_mon_refcount;
  struct lconv *lconv;
  int *ctype1_refcount;
  unsigned short *ctype1;
  const unsigned short *pctype;
  const unsigned char *pclmap;
  const unsigned char *pcumap;
  struct __lc_time_data *lc_time_curr;
} threadlocinfo;







#pragma pack(pop)
# 29 "C:/msys64/mingw32/i686-w64-mingw32/include/stdint.h" 2 3 4



# 1 "C:/msys64/mingw32/lib/gcc/i686-w64-mingw32/7.3.0/include/stddef.h" 1 3 4
# 1 "C:/msys64/mingw32/i686-w64-mingw32/include/stddef.h" 1 3 4
# 18 "C:/msys64/mingw32/i686-w64-mingw32/include/stddef.h" 3 4
  __attribute__ ((__dllimport__)) extern int *__attribute__((__cdecl__)) _errno(void);

  errno_t __attribute__((__cdecl__)) _set_errno(int _Value);
  errno_t __attribute__((__cdecl__)) _get_errno(int *_Value);


  __attribute__ ((__dllimport__)) extern unsigned long __attribute__((__cdecl__)) __threadid(void);

  __attribute__ ((__dllimport__)) extern uintptr_t __attribute__((__cdecl__)) __threadhandle(void);
# 2 "C:/msys64/mingw32/lib/gcc/i686-w64-mingw32/7.3.0/include/stddef.h" 2 3 4
# 427 "C:/msys64/mingw32/lib/gcc/i686-w64-mingw32/7.3.0/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));






  __float128 __max_align_f128 __attribute__((__aligned__(__alignof(__float128))));

} max_align_t;
# 33 "C:/msys64/mingw32/i686-w64-mingw32/include/stdint.h" 2 3 4


typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef short int16_t;
typedef unsigned short uint16_t;
typedef int int32_t;
typedef unsigned uint32_t;
__extension__ typedef long long int64_t;
__extension__ typedef unsigned long long uint64_t;


typedef signed char int_least8_t;
typedef unsigned char uint_least8_t;
typedef short int_least16_t;
typedef unsigned short uint_least16_t;
typedef int int_least32_t;
typedef unsigned uint_least32_t;
__extension__ typedef long long int_least64_t;
__extension__ typedef unsigned long long uint_least64_t;





typedef signed char int_fast8_t;
typedef unsigned char uint_fast8_t;
typedef short int_fast16_t;
typedef unsigned short uint_fast16_t;
typedef int int_fast32_t;
typedef unsigned int uint_fast32_t;
__extension__ typedef long long int_fast64_t;
__extension__ typedef unsigned long long uint_fast64_t;


__extension__ typedef long long intmax_t;
__extension__ typedef unsigned long long uintmax_t;
# 10 "C:/msys64/mingw32/lib/gcc/i686-w64-mingw32/7.3.0/include/stdint.h" 2 3 4
# 142 "C:/msys64/mingw32/include/KHR/khrplatform.h" 2 3
typedef int32_t khronos_int32_t;
typedef uint32_t khronos_uint32_t;
typedef int64_t khronos_int64_t;
typedef uint64_t khronos_uint64_t;
# 220 "C:/msys64/mingw32/include/KHR/khrplatform.h" 3
typedef signed char khronos_int8_t;
typedef unsigned char khronos_uint8_t;
typedef signed short int khronos_int16_t;
typedef unsigned short int khronos_uint16_t;
# 236 "C:/msys64/mingw32/include/KHR/khrplatform.h" 3
typedef signed long int khronos_intptr_t;
typedef unsigned long int khronos_uintptr_t;
typedef signed long int khronos_ssize_t;
typedef unsigned long int khronos_usize_t;






typedef float khronos_float_t;
# 259 "C:/msys64/mingw32/include/KHR/khrplatform.h" 3
typedef khronos_uint64_t khronos_utime_nanoseconds_t;
typedef khronos_int64_t khronos_stime_nanoseconds_t;
# 276 "C:/msys64/mingw32/include/KHR/khrplatform.h" 3
typedef enum {
    KHRONOS_FALSE = 0,
    KHRONOS_TRUE = 1,
    KHRONOS_BOOLEAN_ENUM_FORCE_SIZE = 0x7FFFFFFF
} khronos_boolean_enum_t;
# 21 "C:/msys64/mingw32/include/GLES2/gl2platform.h" 2 3
# 38 "C:/msys64/mingw32/include/GLES2/gl2.h" 2 3
# 62 "C:/msys64/mingw32/include/GLES2/gl2.h" 3
typedef khronos_int8_t GLbyte;
typedef khronos_float_t GLclampf;
typedef khronos_int32_t GLfixed;
typedef short GLshort;
typedef unsigned short GLushort;
typedef void GLvoid;
typedef struct __GLsync *GLsync;
typedef khronos_int64_t GLint64;
typedef khronos_uint64_t GLuint64;
typedef unsigned int GLenum;
typedef unsigned int GLuint;
typedef char GLchar;
typedef khronos_float_t GLfloat;
typedef khronos_ssize_t GLsizeiptr;
typedef khronos_intptr_t GLintptr;
typedef unsigned int GLbitfield;
typedef int GLint;
typedef unsigned char GLboolean;
typedef int GLsizei;
typedef khronos_uint8_t GLubyte;
# 383 "C:/msys64/mingw32/include/GLES2/gl2.h" 3
typedef void (__attribute__((__stdcall__))* PFNGLACTIVETEXTUREPROC) (GLenum texture);
typedef void (__attribute__((__stdcall__))* PFNGLATTACHSHADERPROC) (GLuint program, GLuint shader);
typedef void (__attribute__((__stdcall__))* PFNGLBINDATTRIBLOCATIONPROC) (GLuint program, GLuint index, const GLchar *name);
typedef void (__attribute__((__stdcall__))* PFNGLBINDBUFFERPROC) (GLenum target, GLuint buffer);
typedef void (__attribute__((__stdcall__))* PFNGLBINDFRAMEBUFFERPROC) (GLenum target, GLuint framebuffer);
typedef void (__attribute__((__stdcall__))* PFNGLBINDRENDERBUFFERPROC) (GLenum target, GLuint renderbuffer);
typedef void (__attribute__((__stdcall__))* PFNGLBINDTEXTUREPROC) (GLenum target, GLuint texture);
typedef void (__attribute__((__stdcall__))* PFNGLBLENDCOLORPROC) (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef void (__attribute__((__stdcall__))* PFNGLBLENDEQUATIONPROC) (GLenum mode);
typedef void (__attribute__((__stdcall__))* PFNGLBLENDEQUATIONSEPARATEPROC) (GLenum modeRGB, GLenum modeAlpha);
typedef void (__attribute__((__stdcall__))* PFNGLBLENDFUNCPROC) (GLenum sfactor, GLenum dfactor);
typedef void (__attribute__((__stdcall__))* PFNGLBLENDFUNCSEPARATEPROC) (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
typedef void (__attribute__((__stdcall__))* PFNGLBUFFERDATAPROC) (GLenum target, GLsizeiptr size, const void *data, GLenum usage);
typedef void (__attribute__((__stdcall__))* PFNGLBUFFERSUBDATAPROC) (GLenum target, GLintptr offset, GLsizeiptr size, const void *data);
typedef GLenum (__attribute__((__stdcall__))* PFNGLCHECKFRAMEBUFFERSTATUSPROC) (GLenum target);
typedef void (__attribute__((__stdcall__))* PFNGLCLEARPROC) (GLbitfield mask);
typedef void (__attribute__((__stdcall__))* PFNGLCLEARCOLORPROC) (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef void (__attribute__((__stdcall__))* PFNGLCLEARDEPTHFPROC) (GLfloat d);
typedef void (__attribute__((__stdcall__))* PFNGLCLEARSTENCILPROC) (GLint s);
typedef void (__attribute__((__stdcall__))* PFNGLCOLORMASKPROC) (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
typedef void (__attribute__((__stdcall__))* PFNGLCOMPILESHADERPROC) (GLuint shader);
typedef void (__attribute__((__stdcall__))* PFNGLCOMPRESSEDTEXIMAGE2DPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data);
typedef void (__attribute__((__stdcall__))* PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
typedef void (__attribute__((__stdcall__))* PFNGLCOPYTEXIMAGE2DPROC) (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
typedef void (__attribute__((__stdcall__))* PFNGLCOPYTEXSUBIMAGE2DPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef GLuint (__attribute__((__stdcall__))* PFNGLCREATEPROGRAMPROC) (void);
typedef GLuint (__attribute__((__stdcall__))* PFNGLCREATESHADERPROC) (GLenum type);
typedef void (__attribute__((__stdcall__))* PFNGLCULLFACEPROC) (GLenum mode);
typedef void (__attribute__((__stdcall__))* PFNGLDELETEBUFFERSPROC) (GLsizei n, const GLuint *buffers);
typedef void (__attribute__((__stdcall__))* PFNGLDELETEFRAMEBUFFERSPROC) (GLsizei n, const GLuint *framebuffers);
typedef void (__attribute__((__stdcall__))* PFNGLDELETEPROGRAMPROC) (GLuint program);
typedef void (__attribute__((__stdcall__))* PFNGLDELETERENDERBUFFERSPROC) (GLsizei n, const GLuint *renderbuffers);
typedef void (__attribute__((__stdcall__))* PFNGLDELETESHADERPROC) (GLuint shader);
typedef void (__attribute__((__stdcall__))* PFNGLDELETETEXTURESPROC) (GLsizei n, const GLuint *textures);
typedef void (__attribute__((__stdcall__))* PFNGLDEPTHFUNCPROC) (GLenum func);
typedef void (__attribute__((__stdcall__))* PFNGLDEPTHMASKPROC) (GLboolean flag);
typedef void (__attribute__((__stdcall__))* PFNGLDEPTHRANGEFPROC) (GLfloat n, GLfloat f);
typedef void (__attribute__((__stdcall__))* PFNGLDETACHSHADERPROC) (GLuint program, GLuint shader);
typedef void (__attribute__((__stdcall__))* PFNGLDISABLEPROC) (GLenum cap);
typedef void (__attribute__((__stdcall__))* PFNGLDISABLEVERTEXATTRIBARRAYPROC) (GLuint index);
typedef void (__attribute__((__stdcall__))* PFNGLDRAWARRAYSPROC) (GLenum mode, GLint first, GLsizei count);
typedef void (__attribute__((__stdcall__))* PFNGLDRAWELEMENTSPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices);
typedef void (__attribute__((__stdcall__))* PFNGLENABLEPROC) (GLenum cap);
typedef void (__attribute__((__stdcall__))* PFNGLENABLEVERTEXATTRIBARRAYPROC) (GLuint index);
typedef void (__attribute__((__stdcall__))* PFNGLFINISHPROC) (void);
typedef void (__attribute__((__stdcall__))* PFNGLFLUSHPROC) (void);
typedef void (__attribute__((__stdcall__))* PFNGLFRAMEBUFFERRENDERBUFFERPROC) (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef void (__attribute__((__stdcall__))* PFNGLFRAMEBUFFERTEXTURE2DPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (__attribute__((__stdcall__))* PFNGLFRONTFACEPROC) (GLenum mode);
typedef void (__attribute__((__stdcall__))* PFNGLGENBUFFERSPROC) (GLsizei n, GLuint *buffers);
typedef void (__attribute__((__stdcall__))* PFNGLGENERATEMIPMAPPROC) (GLenum target);
typedef void (__attribute__((__stdcall__))* PFNGLGENFRAMEBUFFERSPROC) (GLsizei n, GLuint *framebuffers);
typedef void (__attribute__((__stdcall__))* PFNGLGENRENDERBUFFERSPROC) (GLsizei n, GLuint *renderbuffers);
typedef void (__attribute__((__stdcall__))* PFNGLGENTEXTURESPROC) (GLsizei n, GLuint *textures);
typedef void (__attribute__((__stdcall__))* PFNGLGETACTIVEATTRIBPROC) (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
typedef void (__attribute__((__stdcall__))* PFNGLGETACTIVEUNIFORMPROC) (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
typedef void (__attribute__((__stdcall__))* PFNGLGETATTACHEDSHADERSPROC) (GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders);
typedef GLint (__attribute__((__stdcall__))* PFNGLGETATTRIBLOCATIONPROC) (GLuint program, const GLchar *name);
typedef void (__attribute__((__stdcall__))* PFNGLGETBOOLEANVPROC) (GLenum pname, GLboolean *data);
typedef void (__attribute__((__stdcall__))* PFNGLGETBUFFERPARAMETERIVPROC) (GLenum target, GLenum pname, GLint *params);
typedef GLenum (__attribute__((__stdcall__))* PFNGLGETERRORPROC) (void);
typedef void (__attribute__((__stdcall__))* PFNGLGETFLOATVPROC) (GLenum pname, GLfloat *data);
typedef void (__attribute__((__stdcall__))* PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC) (GLenum target, GLenum attachment, GLenum pname, GLint *params);
typedef void (__attribute__((__stdcall__))* PFNGLGETINTEGERVPROC) (GLenum pname, GLint *data);
typedef void (__attribute__((__stdcall__))* PFNGLGETPROGRAMIVPROC) (GLuint program, GLenum pname, GLint *params);
typedef void (__attribute__((__stdcall__))* PFNGLGETPROGRAMINFOLOGPROC) (GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
typedef void (__attribute__((__stdcall__))* PFNGLGETRENDERBUFFERPARAMETERIVPROC) (GLenum target, GLenum pname, GLint *params);
typedef void (__attribute__((__stdcall__))* PFNGLGETSHADERIVPROC) (GLuint shader, GLenum pname, GLint *params);
typedef void (__attribute__((__stdcall__))* PFNGLGETSHADERINFOLOGPROC) (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
typedef void (__attribute__((__stdcall__))* PFNGLGETSHADERPRECISIONFORMATPROC) (GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision);
typedef void (__attribute__((__stdcall__))* PFNGLGETSHADERSOURCEPROC) (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source);
typedef const GLubyte *(__attribute__((__stdcall__))* PFNGLGETSTRINGPROC) (GLenum name);
typedef void (__attribute__((__stdcall__))* PFNGLGETTEXPARAMETERFVPROC) (GLenum target, GLenum pname, GLfloat *params);
typedef void (__attribute__((__stdcall__))* PFNGLGETTEXPARAMETERIVPROC) (GLenum target, GLenum pname, GLint *params);
typedef void (__attribute__((__stdcall__))* PFNGLGETUNIFORMFVPROC) (GLuint program, GLint location, GLfloat *params);
typedef void (__attribute__((__stdcall__))* PFNGLGETUNIFORMIVPROC) (GLuint program, GLint location, GLint *params);
typedef GLint (__attribute__((__stdcall__))* PFNGLGETUNIFORMLOCATIONPROC) (GLuint program, const GLchar *name);
typedef void (__attribute__((__stdcall__))* PFNGLGETVERTEXATTRIBFVPROC) (GLuint index, GLenum pname, GLfloat *params);
typedef void (__attribute__((__stdcall__))* PFNGLGETVERTEXATTRIBIVPROC) (GLuint index, GLenum pname, GLint *params);
typedef void (__attribute__((__stdcall__))* PFNGLGETVERTEXATTRIBPOINTERVPROC) (GLuint index, GLenum pname, void **pointer);
typedef void (__attribute__((__stdcall__))* PFNGLHINTPROC) (GLenum target, GLenum mode);
typedef GLboolean (__attribute__((__stdcall__))* PFNGLISBUFFERPROC) (GLuint buffer);
typedef GLboolean (__attribute__((__stdcall__))* PFNGLISENABLEDPROC) (GLenum cap);
typedef GLboolean (__attribute__((__stdcall__))* PFNGLISFRAMEBUFFERPROC) (GLuint framebuffer);
typedef GLboolean (__attribute__((__stdcall__))* PFNGLISPROGRAMPROC) (GLuint program);
typedef GLboolean (__attribute__((__stdcall__))* PFNGLISRENDERBUFFERPROC) (GLuint renderbuffer);
typedef GLboolean (__attribute__((__stdcall__))* PFNGLISSHADERPROC) (GLuint shader);
typedef GLboolean (__attribute__((__stdcall__))* PFNGLISTEXTUREPROC) (GLuint texture);
typedef void (__attribute__((__stdcall__))* PFNGLLINEWIDTHPROC) (GLfloat width);
typedef void (__attribute__((__stdcall__))* PFNGLLINKPROGRAMPROC) (GLuint program);
typedef void (__attribute__((__stdcall__))* PFNGLPIXELSTOREIPROC) (GLenum pname, GLint param);
typedef void (__attribute__((__stdcall__))* PFNGLPOLYGONOFFSETPROC) (GLfloat factor, GLfloat units);
typedef void (__attribute__((__stdcall__))* PFNGLREADPIXELSPROC) (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void *pixels);
typedef void (__attribute__((__stdcall__))* PFNGLRELEASESHADERCOMPILERPROC) (void);
typedef void (__attribute__((__stdcall__))* PFNGLRENDERBUFFERSTORAGEPROC) (GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (__attribute__((__stdcall__))* PFNGLSAMPLECOVERAGEPROC) (GLfloat value, GLboolean invert);
typedef void (__attribute__((__stdcall__))* PFNGLSCISSORPROC) (GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (__attribute__((__stdcall__))* PFNGLSHADERBINARYPROC) (GLsizei count, const GLuint *shaders, GLenum binaryformat, const void *binary, GLsizei length);
typedef void (__attribute__((__stdcall__))* PFNGLSHADERSOURCEPROC) (GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length);
typedef void (__attribute__((__stdcall__))* PFNGLSTENCILFUNCPROC) (GLenum func, GLint ref, GLuint mask);
typedef void (__attribute__((__stdcall__))* PFNGLSTENCILFUNCSEPARATEPROC) (GLenum face, GLenum func, GLint ref, GLuint mask);
typedef void (__attribute__((__stdcall__))* PFNGLSTENCILMASKPROC) (GLuint mask);
typedef void (__attribute__((__stdcall__))* PFNGLSTENCILMASKSEPARATEPROC) (GLenum face, GLuint mask);
typedef void (__attribute__((__stdcall__))* PFNGLSTENCILOPPROC) (GLenum fail, GLenum zfail, GLenum zpass);
typedef void (__attribute__((__stdcall__))* PFNGLSTENCILOPSEPARATEPROC) (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
typedef void (__attribute__((__stdcall__))* PFNGLTEXIMAGE2DPROC) (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels);
typedef void (__attribute__((__stdcall__))* PFNGLTEXPARAMETERFPROC) (GLenum target, GLenum pname, GLfloat param);
typedef void (__attribute__((__stdcall__))* PFNGLTEXPARAMETERFVPROC) (GLenum target, GLenum pname, const GLfloat *params);
typedef void (__attribute__((__stdcall__))* PFNGLTEXPARAMETERIPROC) (GLenum target, GLenum pname, GLint param);
typedef void (__attribute__((__stdcall__))* PFNGLTEXPARAMETERIVPROC) (GLenum target, GLenum pname, const GLint *params);
typedef void (__attribute__((__stdcall__))* PFNGLTEXSUBIMAGE2DPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
typedef void (__attribute__((__stdcall__))* PFNGLUNIFORM1FPROC) (GLint location, GLfloat v0);
typedef void (__attribute__((__stdcall__))* PFNGLUNIFORM1FVPROC) (GLint location, GLsizei count, const GLfloat *value);
typedef void (__attribute__((__stdcall__))* PFNGLUNIFORM1IPROC) (GLint location, GLint v0);
typedef void (__attribute__((__stdcall__))* PFNGLUNIFORM1IVPROC) (GLint location, GLsizei count, const GLint *value);
typedef void (__attribute__((__stdcall__))* PFNGLUNIFORM2FPROC) (GLint location, GLfloat v0, GLfloat v1);
typedef void (__attribute__((__stdcall__))* PFNGLUNIFORM2FVPROC) (GLint location, GLsizei count, const GLfloat *value);
typedef void (__attribute__((__stdcall__))* PFNGLUNIFORM2IPROC) (GLint location, GLint v0, GLint v1);
typedef void (__attribute__((__stdcall__))* PFNGLUNIFORM2IVPROC) (GLint location, GLsizei count, const GLint *value);
typedef void (__attribute__((__stdcall__))* PFNGLUNIFORM3FPROC) (GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void (__attribute__((__stdcall__))* PFNGLUNIFORM3FVPROC) (GLint location, GLsizei count, const GLfloat *value);
typedef void (__attribute__((__stdcall__))* PFNGLUNIFORM3IPROC) (GLint location, GLint v0, GLint v1, GLint v2);
typedef void (__attribute__((__stdcall__))* PFNGLUNIFORM3IVPROC) (GLint location, GLsizei count, const GLint *value);
typedef void (__attribute__((__stdcall__))* PFNGLUNIFORM4FPROC) (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void (__attribute__((__stdcall__))* PFNGLUNIFORM4FVPROC) (GLint location, GLsizei count, const GLfloat *value);
typedef void (__attribute__((__stdcall__))* PFNGLUNIFORM4IPROC) (GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void (__attribute__((__stdcall__))* PFNGLUNIFORM4IVPROC) (GLint location, GLsizei count, const GLint *value);
typedef void (__attribute__((__stdcall__))* PFNGLUNIFORMMATRIX2FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (__attribute__((__stdcall__))* PFNGLUNIFORMMATRIX3FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (__attribute__((__stdcall__))* PFNGLUNIFORMMATRIX4FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (__attribute__((__stdcall__))* PFNGLUSEPROGRAMPROC) (GLuint program);
typedef void (__attribute__((__stdcall__))* PFNGLVALIDATEPROGRAMPROC) (GLuint program);
typedef void (__attribute__((__stdcall__))* PFNGLVERTEXATTRIB1FPROC) (GLuint index, GLfloat x);
typedef void (__attribute__((__stdcall__))* PFNGLVERTEXATTRIB1FVPROC) (GLuint index, const GLfloat *v);
typedef void (__attribute__((__stdcall__))* PFNGLVERTEXATTRIB2FPROC) (GLuint index, GLfloat x, GLfloat y);
typedef void (__attribute__((__stdcall__))* PFNGLVERTEXATTRIB2FVPROC) (GLuint index, const GLfloat *v);
typedef void (__attribute__((__stdcall__))* PFNGLVERTEXATTRIB3FPROC) (GLuint index, GLfloat x, GLfloat y, GLfloat z);
typedef void (__attribute__((__stdcall__))* PFNGLVERTEXATTRIB3FVPROC) (GLuint index, const GLfloat *v);
typedef void (__attribute__((__stdcall__))* PFNGLVERTEXATTRIB4FPROC) (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (__attribute__((__stdcall__))* PFNGLVERTEXATTRIB4FVPROC) (GLuint index, const GLfloat *v);
typedef void (__attribute__((__stdcall__))* PFNGLVERTEXATTRIBPOINTERPROC) (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer);
typedef void (__attribute__((__stdcall__))* PFNGLVIEWPORTPROC) (GLint x, GLint y, GLsizei width, GLsizei height);

__attribute__((dllimport)) void __attribute__((__stdcall__)) glActiveTexture (GLenum texture);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glAttachShader (GLuint program, GLuint shader);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glBindAttribLocation (GLuint program, GLuint index, const GLchar *name);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glBindBuffer (GLenum target, GLuint buffer);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glBindFramebuffer (GLenum target, GLuint framebuffer);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glBindRenderbuffer (GLenum target, GLuint renderbuffer);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glBindTexture (GLenum target, GLuint texture);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glBlendColor (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glBlendEquation (GLenum mode);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glBlendEquationSeparate (GLenum modeRGB, GLenum modeAlpha);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glBlendFunc (GLenum sfactor, GLenum dfactor);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glBlendFuncSeparate (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glBufferData (GLenum target, GLsizeiptr size, const void *data, GLenum usage);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const void *data);
__attribute__((dllimport)) GLenum __attribute__((__stdcall__)) glCheckFramebufferStatus (GLenum target);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glClear (GLbitfield mask);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glClearColor (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glClearDepthf (GLfloat d);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glClearStencil (GLint s);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glColorMask (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glCompileShader (GLuint shader);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glCompressedTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glCompressedTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glCopyTexImage2D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glCopyTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
__attribute__((dllimport)) GLuint __attribute__((__stdcall__)) glCreateProgram (void);
__attribute__((dllimport)) GLuint __attribute__((__stdcall__)) glCreateShader (GLenum type);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glCullFace (GLenum mode);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glDeleteBuffers (GLsizei n, const GLuint *buffers);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glDeleteFramebuffers (GLsizei n, const GLuint *framebuffers);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glDeleteProgram (GLuint program);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glDeleteRenderbuffers (GLsizei n, const GLuint *renderbuffers);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glDeleteShader (GLuint shader);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glDeleteTextures (GLsizei n, const GLuint *textures);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glDepthFunc (GLenum func);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glDepthMask (GLboolean flag);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glDepthRangef (GLfloat n, GLfloat f);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glDetachShader (GLuint program, GLuint shader);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glDisable (GLenum cap);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glDisableVertexAttribArray (GLuint index);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glDrawArrays (GLenum mode, GLint first, GLsizei count);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glDrawElements (GLenum mode, GLsizei count, GLenum type, const void *indices);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glEnable (GLenum cap);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glEnableVertexAttribArray (GLuint index);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glFinish (void);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glFlush (void);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glFramebufferRenderbuffer (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glFramebufferTexture2D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glFrontFace (GLenum mode);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGenBuffers (GLsizei n, GLuint *buffers);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGenerateMipmap (GLenum target);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGenFramebuffers (GLsizei n, GLuint *framebuffers);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGenRenderbuffers (GLsizei n, GLuint *renderbuffers);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGenTextures (GLsizei n, GLuint *textures);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetActiveAttrib (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetActiveUniform (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetAttachedShaders (GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders);
__attribute__((dllimport)) GLint __attribute__((__stdcall__)) glGetAttribLocation (GLuint program, const GLchar *name);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetBooleanv (GLenum pname, GLboolean *data);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetBufferParameteriv (GLenum target, GLenum pname, GLint *params);
__attribute__((dllimport)) GLenum __attribute__((__stdcall__)) glGetError (void);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetFloatv (GLenum pname, GLfloat *data);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetFramebufferAttachmentParameteriv (GLenum target, GLenum attachment, GLenum pname, GLint *params);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetIntegerv (GLenum pname, GLint *data);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetProgramiv (GLuint program, GLenum pname, GLint *params);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetProgramInfoLog (GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetRenderbufferParameteriv (GLenum target, GLenum pname, GLint *params);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetShaderiv (GLuint shader, GLenum pname, GLint *params);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetShaderInfoLog (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetShaderPrecisionFormat (GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetShaderSource (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source);
__attribute__((dllimport)) const GLubyte *__attribute__((__stdcall__)) glGetString (GLenum name);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetTexParameterfv (GLenum target, GLenum pname, GLfloat *params);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetTexParameteriv (GLenum target, GLenum pname, GLint *params);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetUniformfv (GLuint program, GLint location, GLfloat *params);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetUniformiv (GLuint program, GLint location, GLint *params);
__attribute__((dllimport)) GLint __attribute__((__stdcall__)) glGetUniformLocation (GLuint program, const GLchar *name);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetVertexAttribfv (GLuint index, GLenum pname, GLfloat *params);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetVertexAttribiv (GLuint index, GLenum pname, GLint *params);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetVertexAttribPointerv (GLuint index, GLenum pname, void **pointer);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glHint (GLenum target, GLenum mode);
__attribute__((dllimport)) GLboolean __attribute__((__stdcall__)) glIsBuffer (GLuint buffer);
__attribute__((dllimport)) GLboolean __attribute__((__stdcall__)) glIsEnabled (GLenum cap);
__attribute__((dllimport)) GLboolean __attribute__((__stdcall__)) glIsFramebuffer (GLuint framebuffer);
__attribute__((dllimport)) GLboolean __attribute__((__stdcall__)) glIsProgram (GLuint program);
__attribute__((dllimport)) GLboolean __attribute__((__stdcall__)) glIsRenderbuffer (GLuint renderbuffer);
__attribute__((dllimport)) GLboolean __attribute__((__stdcall__)) glIsShader (GLuint shader);
__attribute__((dllimport)) GLboolean __attribute__((__stdcall__)) glIsTexture (GLuint texture);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glLineWidth (GLfloat width);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glLinkProgram (GLuint program);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glPixelStorei (GLenum pname, GLint param);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glPolygonOffset (GLfloat factor, GLfloat units);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void *pixels);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glReleaseShaderCompiler (void);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glRenderbufferStorage (GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glSampleCoverage (GLfloat value, GLboolean invert);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glScissor (GLint x, GLint y, GLsizei width, GLsizei height);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glShaderBinary (GLsizei count, const GLuint *shaders, GLenum binaryformat, const void *binary, GLsizei length);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glShaderSource (GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glStencilFunc (GLenum func, GLint ref, GLuint mask);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glStencilFuncSeparate (GLenum face, GLenum func, GLint ref, GLuint mask);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glStencilMask (GLuint mask);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glStencilMaskSeparate (GLenum face, GLuint mask);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glStencilOp (GLenum fail, GLenum zfail, GLenum zpass);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glStencilOpSeparate (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glTexImage2D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glTexParameterf (GLenum target, GLenum pname, GLfloat param);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glTexParameterfv (GLenum target, GLenum pname, const GLfloat *params);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glTexParameteri (GLenum target, GLenum pname, GLint param);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glTexParameteriv (GLenum target, GLenum pname, const GLint *params);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glUniform1f (GLint location, GLfloat v0);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glUniform1fv (GLint location, GLsizei count, const GLfloat *value);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glUniform1i (GLint location, GLint v0);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glUniform1iv (GLint location, GLsizei count, const GLint *value);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glUniform2f (GLint location, GLfloat v0, GLfloat v1);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glUniform2fv (GLint location, GLsizei count, const GLfloat *value);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glUniform2i (GLint location, GLint v0, GLint v1);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glUniform2iv (GLint location, GLsizei count, const GLint *value);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glUniform3f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glUniform3fv (GLint location, GLsizei count, const GLfloat *value);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glUniform3i (GLint location, GLint v0, GLint v1, GLint v2);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glUniform3iv (GLint location, GLsizei count, const GLint *value);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glUniform4f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glUniform4fv (GLint location, GLsizei count, const GLfloat *value);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glUniform4i (GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glUniform4iv (GLint location, GLsizei count, const GLint *value);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glUniformMatrix2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glUniformMatrix3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glUniformMatrix4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glUseProgram (GLuint program);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glValidateProgram (GLuint program);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glVertexAttrib1f (GLuint index, GLfloat x);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glVertexAttrib1fv (GLuint index, const GLfloat *v);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glVertexAttrib2f (GLuint index, GLfloat x, GLfloat y);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glVertexAttrib2fv (GLuint index, const GLfloat *v);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glVertexAttrib3f (GLuint index, GLfloat x, GLfloat y, GLfloat z);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glVertexAttrib3fv (GLuint index, const GLfloat *v);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glVertexAttrib4f (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glVertexAttrib4fv (GLuint index, const GLfloat *v);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glVertexAttribPointer (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glViewport (GLint x, GLint y, GLsizei width, GLsizei height);
# 4 "inc/tgl.h" 2

__attribute__((dllimport)) 
# 5 "inc/tgl.h"
          void __attribute__((__stdcall__)) tgl_init();
__attribute__((
# 6 "inc/tgl.h" 3
dllimport)) 
# 6 "inc/tgl.h"
          void __attribute__((__stdcall__)) tgl_exit();
# 4 "test/test.h" 2
# 1 "C:/msys64/mingw32/i686-w64-mingw32/include/stdio.h" 1 3
# 11 "C:/msys64/mingw32/i686-w64-mingw32/include/stdio.h" 3
# 1 "C:/msys64/mingw32/i686-w64-mingw32/include/_mingw_print_push.h" 1 3
# 12 "C:/msys64/mingw32/i686-w64-mingw32/include/stdio.h" 2 3

#pragma pack(push,_CRT_PACKING)
# 26 "C:/msys64/mingw32/i686-w64-mingw32/include/stdio.h" 3
  
# 26 "C:/msys64/mingw32/i686-w64-mingw32/include/stdio.h" 3
 struct _iobuf {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
  };
  typedef struct _iobuf FILE;
# 80 "C:/msys64/mingw32/i686-w64-mingw32/include/stdio.h" 3
# 1 "C:/msys64/mingw32/i686-w64-mingw32/include/_mingw_off_t.h" 1 3




  typedef long _off_t;

  typedef long off32_t;





  __extension__ typedef long long _off64_t;

  __extension__ typedef long long off64_t;
# 26 "C:/msys64/mingw32/i686-w64-mingw32/include/_mingw_off_t.h" 3
typedef off32_t off_t;
# 81 "C:/msys64/mingw32/i686-w64-mingw32/include/stdio.h" 2 3

__attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) __acrt_iob_func(unsigned index);
# 92 "C:/msys64/mingw32/i686-w64-mingw32/include/stdio.h" 3
extern FILE (* _imp___iob)[];
# 104 "C:/msys64/mingw32/i686-w64-mingw32/include/stdio.h" 3
  __extension__ typedef long long fpos_t;
# 162 "C:/msys64/mingw32/i686-w64-mingw32/include/stdio.h" 3
extern
  __attribute__((__format__ (gnu_scanf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_sscanf(const char * __restrict__ _Src,const char * __restrict__ _Format,...);
extern
  __attribute__((__format__ (gnu_scanf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vsscanf (const char * __restrict__ _Str,const char * __restrict__ Format,va_list argp);
extern
  __attribute__((__format__ (gnu_scanf, 1, 2))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_scanf(const char * __restrict__ _Format,...);
extern
  __attribute__((__format__ (gnu_scanf, 1, 0))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_vscanf(const char * __restrict__ Format, va_list argp);
extern
  __attribute__((__format__ (gnu_scanf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_fscanf(FILE * __restrict__ _File,const char * __restrict__ _Format,...);
extern
  __attribute__((__format__ (gnu_scanf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vfscanf (FILE * __restrict__ fp, const char * __restrict__ Format,va_list argp);

extern
  __attribute__((__format__ (gnu_printf, 3, 0))) __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __mingw_vsnprintf(char * __restrict__ _DstBuf,size_t _MaxCount,const char * __restrict__ _Format,
                               va_list _ArgList);
extern
  __attribute__((__format__ (gnu_printf, 3, 4))) __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __mingw_snprintf(char * __restrict__ s, size_t n, const char * __restrict__ format, ...);
extern
  __attribute__((__format__ (gnu_printf, 1, 2))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_printf(const char * __restrict__ , ... ) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 1, 0))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_vprintf (const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_fprintf (FILE * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vfprintf (FILE * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_sprintf (char * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vsprintf (char * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__((nonnull (1,2)))
  int __attribute__((__cdecl__)) __mingw_asprintf(char ** __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__((nonnull (1,2)))
  int __attribute__((__cdecl__)) __mingw_vasprintf(char ** __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
# 506 "C:/msys64/mingw32/i686-w64-mingw32/include/stdio.h" 3
  __attribute__((__format__ (ms_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) fprintf(FILE * __restrict__ _File,const char * __restrict__ _Format,...);
  __attribute__((__format__ (ms_printf, 1, 2))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) printf(const char * __restrict__ _Format,...);
  __attribute__((__format__ (ms_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) sprintf(char * __restrict__ _Dest,const char * __restrict__ _Format,...) ;

  __attribute__((__format__ (ms_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) vfprintf(FILE * __restrict__ _File,const char * __restrict__ _Format,va_list _ArgList);
  __attribute__((__format__ (ms_printf, 1, 0))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) vprintf(const char * __restrict__ _Format,va_list _ArgList);
  __attribute__((__format__ (ms_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) vsprintf(char * __restrict__ _Dest,const char * __restrict__ _Format,va_list _Args) ;

  __attribute__((__format__ (ms_scanf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) fscanf(FILE * __restrict__ _File,const char * __restrict__ _Format,...) ;
  __attribute__((__format__ (ms_scanf, 1, 2))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) scanf(const char * __restrict__ _Format,...) ;
  __attribute__((__format__ (ms_scanf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) sscanf(const char * __restrict__ _Src,const char * __restrict__ _Format,...) ;






#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wshadow"


  __attribute__((__format__ (ms_scanf, 1, 0))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __ms_vscanf(const char * __restrict__ Format, va_list argp);
  __attribute__((__format__ (ms_scanf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_vfscanf (FILE * __restrict__ fp, const char * __restrict__ Format,va_list argp);
  __attribute__((__format__ (ms_scanf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_vsscanf (const char * __restrict__ _Str,const char * __restrict__ Format,va_list argp);

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  __attribute__((__format__ (ms_scanf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int vfscanf (FILE *__stream, const char *__format, __builtin_va_list __local_argv)
  {
    return __ms_vfscanf (__stream, __format, __local_argv);
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  __attribute__((__format__ (ms_scanf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int vsscanf (const char * __restrict__ __source, const char * __restrict__ __format, __builtin_va_list __local_argv)
  {
    return __ms_vsscanf( __source, __format, __local_argv );
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  __attribute__((__format__ (ms_scanf, 1, 0))) __attribute__ ((__nonnull__ (1)))
  int vscanf(const char *__format, __builtin_va_list __local_argv)
  {
    return __ms_vscanf (__format, __local_argv);
  }


#pragma GCC diagnostic pop






  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _filbuf(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _flsbuf(int _Ch,FILE *_File);



  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _fsopen(const char *_Filename,const char *_Mode,int _ShFlag);

  void __attribute__((__cdecl__)) clearerr(FILE *_File);
  int __attribute__((__cdecl__)) fclose(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fcloseall(void);



  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _fdopen(int _FileHandle,const char *_Mode);

  int __attribute__((__cdecl__)) feof(FILE *_File);
  int __attribute__((__cdecl__)) ferror(FILE *_File);
  int __attribute__((__cdecl__)) fflush(FILE *_File);
  int __attribute__((__cdecl__)) fgetc(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fgetchar(void);
  int __attribute__((__cdecl__)) fgetpos(FILE * __restrict__ _File ,fpos_t * __restrict__ _Pos);
  int __attribute__((__cdecl__)) fgetpos64(FILE * __restrict__ _File ,fpos_t * __restrict__ _Pos);
  char *__attribute__((__cdecl__)) fgets(char * __restrict__ _Buf,int _MaxCount,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fileno(FILE *_File);



  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _tempnam(const char *_DirName,const char *_FilePrefix);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _flushall(void);
  FILE *__attribute__((__cdecl__)) fopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode) ;
  FILE *fopen64(const char * __restrict__ filename,const char * __restrict__ mode);
  int __attribute__((__cdecl__)) fputc(int _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fputchar(int _Ch);
  int __attribute__((__cdecl__)) fputs(const char * __restrict__ _Str,FILE * __restrict__ _File);
  size_t __attribute__((__cdecl__)) fread(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restrict__ _File);
  FILE *__attribute__((__cdecl__)) freopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode,FILE * __restrict__ _File) ;
  int __attribute__((__cdecl__)) fsetpos(FILE *_File,const fpos_t *_Pos);
  int __attribute__((__cdecl__)) fsetpos64(FILE *_File,const fpos_t *_Pos);
  int __attribute__((__cdecl__)) fseek(FILE *_File,long _Offset,int _Origin);
  long __attribute__((__cdecl__)) ftell(FILE *_File);
# 631 "C:/msys64/mingw32/i686-w64-mingw32/include/stdio.h" 3
  __extension__ int __attribute__((__cdecl__)) _fseeki64(FILE *_File,long long _Offset,int _Origin);
  __extension__ long long __attribute__((__cdecl__)) _ftelli64(FILE *_File);
  int fseeko64(FILE* stream, _off64_t offset, int whence);
  int fseeko(FILE* stream, _off_t offset, int whence);

  _off_t ftello(FILE * stream);
  _off64_t ftello64(FILE * stream);
# 654 "C:/msys64/mingw32/i686-w64-mingw32/include/stdio.h" 3
  size_t __attribute__((__cdecl__)) fwrite(const void * __restrict__ _Str,size_t _Size,size_t _Count,FILE * __restrict__ _File);
  int __attribute__((__cdecl__)) getc(FILE *_File);
  int __attribute__((__cdecl__)) getchar(void);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _getmaxstdio(void);
  char *__attribute__((__cdecl__)) gets(char *_Buffer) ;
  int __attribute__((__cdecl__)) _getw(FILE *_File);


  void __attribute__((__cdecl__)) perror(const char *_ErrMsg);

  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _pclose(FILE *_File);
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _popen(const char *_Command,const char *_Mode);




  int __attribute__((__cdecl__)) putc(int _Ch,FILE *_File);
  int __attribute__((__cdecl__)) putchar(int _Ch);
  int __attribute__((__cdecl__)) puts(const char *_Str);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _putw(int _Word,FILE *_File);


  int __attribute__((__cdecl__)) remove(const char *_Filename);
  int __attribute__((__cdecl__)) rename(const char *_OldFilename,const char *_NewFilename);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _unlink(const char *_Filename);

  int __attribute__((__cdecl__)) unlink(const char *_Filename) ;


  void __attribute__((__cdecl__)) rewind(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _rmtmp(void);
  void __attribute__((__cdecl__)) setbuf(FILE * __restrict__ _File,char * __restrict__ _Buffer) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _setmaxstdio(int _Max);
  __attribute__ ((__dllimport__)) unsigned int __attribute__((__cdecl__)) _set_output_format(unsigned int _Format);
  __attribute__ ((__dllimport__)) unsigned int __attribute__((__cdecl__)) _get_output_format(void);
  int __attribute__((__cdecl__)) setvbuf(FILE * __restrict__ _File,char * __restrict__ _Buf,int _Mode,size_t _Size);
# 712 "C:/msys64/mingw32/i686-w64-mingw32/include/stdio.h" 3
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scprintf(const char * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snscanf(const char * __restrict__ _Src,size_t _MaxCount,const char * __restrict__ _Format,...) ;

  FILE *__attribute__((__cdecl__)) tmpfile(void) ;
  char *__attribute__((__cdecl__)) tmpnam(char *_Buffer);
  int __attribute__((__cdecl__)) ungetc(int _Ch,FILE *_File);
# 734 "C:/msys64/mingw32/i686-w64-mingw32/include/stdio.h" 3
  __attribute__((__format__ (ms_printf, 3, 4))) __attribute__ ((__nonnull__ (3)))
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,...) ;
  __attribute__((__format__ (ms_printf, 3, 0))) __attribute__ ((__nonnull__ (3)))
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,va_list _Args) ;
# 761 "C:/msys64/mingw32/i686-w64-mingw32/include/stdio.h" 3
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wshadow"


       
       


  __attribute__((__format__ (ms_printf, 3, 0))) __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __ms_vsnprintf(char * __restrict__ d,size_t n,const char * __restrict__ format,va_list arg)
    ;

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  __attribute__((__format__ (ms_printf, 3, 0))) __attribute__ ((__nonnull__ (3)))
  int vsnprintf (char * __restrict__ __stream, size_t __n, const char * __restrict__ __format, va_list __local_argv)
  {
    return __ms_vsnprintf (__stream, __n, __format, __local_argv);
  }

  __attribute__((__format__ (ms_printf, 3, 4))) __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __ms_snprintf(char * __restrict__ s, size_t n, const char * __restrict__ format, ...);


static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
__attribute__((__format__ (ms_printf, 3, 4))) __attribute__ ((__nonnull__ (3)))
int snprintf (char * __restrict__ __stream, size_t __n, const char * __restrict__ __format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __ms_vsnprintf (__stream, __n, __format, __local_argv);
  __builtin_va_end( __local_argv );
  return __retval;
}


       
       

#pragma GCC diagnostic pop
# 811 "C:/msys64/mingw32/i686-w64-mingw32/include/stdio.h" 3
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscprintf(const char * __restrict__ _Format,va_list _ArgList);


  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _set_printf_count_output(int _Value);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _get_printf_count_output(void);




                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_swscanf(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,...);
                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vswscanf (const wchar_t * __restrict__ _Str,const wchar_t * __restrict__ Format,va_list argp);
                                                     __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_wscanf(const wchar_t * __restrict__ _Format,...);
                                                     __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_vwscanf(const wchar_t * __restrict__ Format, va_list argp);
                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_fwscanf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vfwscanf (FILE * __restrict__ fp, const wchar_t * __restrict__ Format,va_list argp);

                                                      __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_fwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
                                                      __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_wprintf(const wchar_t * __restrict__ _Format,...);
                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vfwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
                                                     __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_vwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
                                                      __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __mingw_snwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, ...);
                                                      __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __mingw_vsnwprintf (wchar_t * __restrict__ , size_t, const wchar_t * __restrict__ , va_list);
                                                      __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_swprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ , ...);
                                                      __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vswprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ ,va_list);
# 1061 "C:/msys64/mingw32/i686-w64-mingw32/include/stdio.h" 3
  int __attribute__((__cdecl__)) fwscanf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...) ;
  int __attribute__((__cdecl__)) swscanf(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,...) ;
  int __attribute__((__cdecl__)) wscanf(const wchar_t * __restrict__ _Format,...) ;

  int __attribute__((__cdecl__)) __ms_vwscanf (const wchar_t * __restrict__ , va_list);
  int __attribute__((__cdecl__)) __ms_vfwscanf (FILE * __restrict__ ,const wchar_t * __restrict__ ,va_list);
  int __attribute__((__cdecl__)) __ms_vswscanf (const wchar_t * __restrict__ ,const wchar_t * __restrict__ ,va_list);

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  __attribute__ ((__nonnull__ (2)))
  int vfwscanf (FILE *__stream, const wchar_t *__format, __builtin_va_list __local_argv)
  {
    return __ms_vfwscanf (__stream, __format, __local_argv);
  }

  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  __attribute__ ((__nonnull__ (2)))
  int vswscanf (const wchar_t * __restrict__ __source, const wchar_t * __restrict__ __format, __builtin_va_list __local_argv)
  {
    return __ms_vswscanf( __source, __format, __local_argv );
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  __attribute__ ((__nonnull__ (1)))
  int vwscanf(const wchar_t *__format, __builtin_va_list __local_argv)
  {
    return __ms_vwscanf (__format, __local_argv);
  }



  int __attribute__((__cdecl__)) fwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
  int __attribute__((__cdecl__)) wprintf(const wchar_t * __restrict__ _Format,...);
  int __attribute__((__cdecl__)) vfwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
  int __attribute__((__cdecl__)) vwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
# 1105 "C:/msys64/mingw32/i686-w64-mingw32/include/stdio.h" 3
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wfsopen(const wchar_t *_Filename,const wchar_t *_Mode,int _ShFlag);


  wint_t __attribute__((__cdecl__)) fgetwc(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _fgetwchar(void);
  wint_t __attribute__((__cdecl__)) fputwc(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _fputwchar(wchar_t _Ch);
  wint_t __attribute__((__cdecl__)) getwc(FILE *_File);
  wint_t __attribute__((__cdecl__)) getwchar(void);
  wint_t __attribute__((__cdecl__)) putwc(wchar_t _Ch,FILE *_File);
  wint_t __attribute__((__cdecl__)) putwchar(wchar_t _Ch);
  wint_t __attribute__((__cdecl__)) ungetwc(wint_t _Ch,FILE *_File);
  wchar_t *__attribute__((__cdecl__)) fgetws(wchar_t * __restrict__ _Dst,int _SizeInWords,FILE * __restrict__ _File);
  int __attribute__((__cdecl__)) fputws(const wchar_t * __restrict__ _Str,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _getws(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _putws(const wchar_t *_Str);
# 1183 "C:/msys64/mingw32/i686-w64-mingw32/include/stdio.h" 3
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scwprintf(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,va_list _Args) ;




       
       


  int __attribute__((__cdecl__)) __ms_snwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, ...);
  int __attribute__((__cdecl__)) __ms_vsnwprintf (wchar_t * __restrict__ , size_t, const wchar_t * __restrict__ , va_list);
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  int snwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, ...)
  {
    int r;
    va_list argp;
    __builtin_va_start (argp, format);
    r = _vsnwprintf (s, n, format, argp);
    __builtin_va_end (argp);
    return r;
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  int __attribute__((__cdecl__)) vsnwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, va_list arg)
  {
    return _vsnwprintf(s,n,format,arg);
  }
       
       



  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,va_list _Args);



# 1 "C:/msys64/mingw32/i686-w64-mingw32/include/swprintf.inl" 1 3
# 25 "C:/msys64/mingw32/i686-w64-mingw32/include/swprintf.inl" 3
static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                      __attribute__ ((__nonnull__ (3)))
int vswprintf (wchar_t *__stream, size_t __count, const wchar_t *__format, __builtin_va_list __local_argv)
{
  return vsnwprintf( __stream, __count, __format, __local_argv );
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                      __attribute__ ((__nonnull__ (3)))
int swprintf (wchar_t *__stream, size_t __count, const wchar_t *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv;

  __builtin_va_start( __local_argv, __format );
  __retval = vswprintf( __stream, __count, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}
# 1224 "C:/msys64/mingw32/i686-w64-mingw32/include/stdio.h" 2 3
# 1233 "C:/msys64/mingw32/i686-w64-mingw32/include/stdio.h" 3
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wtempnam(const wchar_t *_Directory,const wchar_t *_FilePrefix);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwscanf(const wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wfdopen(int _FileHandle ,const wchar_t *_Mode);
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wfopen(const wchar_t * __restrict__ _Filename,const wchar_t *__restrict__ _Mode) ;
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wfreopen(const wchar_t * __restrict__ _Filename,const wchar_t * __restrict__ _Mode,FILE * __restrict__ _OldFile) ;



  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _wperror(const wchar_t *_ErrMsg);

  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wpopen(const wchar_t *_Command,const wchar_t *_Mode);




  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wremove(const wchar_t *_Filename);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wtmpnam(wchar_t *_Buffer);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _fgetwc_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _fputwc_nolock(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _ungetwc_nolock(wint_t _Ch,FILE *_File);
# 1290 "C:/msys64/mingw32/i686-w64-mingw32/include/stdio.h" 3
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _lock_file(FILE *_File);
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _unlock_file(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fclose_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fflush_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _fread_nolock(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fseek_nolock(FILE *_File,long _Offset,int _Origin);
  __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _ftell_nolock(FILE *_File);
  __extension__ __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fseeki64_nolock(FILE *_File,long long _Offset,int _Origin);
  __extension__ __attribute__ ((__dllimport__)) long long __attribute__((__cdecl__)) _ftelli64_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _fwrite_nolock(const void * __restrict__ _DstBuf,size_t _Size,size_t _Count,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _ungetc_nolock(int _Ch,FILE *_File);





  char *__attribute__((__cdecl__)) tempnam(const char *_Directory,const char *_FilePrefix) ;
  int __attribute__((__cdecl__)) fcloseall(void) ;
  FILE *__attribute__((__cdecl__)) fdopen(int _FileHandle,const char *_Format) ;
  int __attribute__((__cdecl__)) fgetchar(void) ;
  int __attribute__((__cdecl__)) fileno(FILE *_File) ;
  int __attribute__((__cdecl__)) flushall(void) ;
  int __attribute__((__cdecl__)) fputchar(int _Ch) ;
  int __attribute__((__cdecl__)) getw(FILE *_File) ;
  int __attribute__((__cdecl__)) putw(int _Ch,FILE *_File) ;
  int __attribute__((__cdecl__)) rmtmp(void) ;
# 1332 "C:/msys64/mingw32/i686-w64-mingw32/include/stdio.h" 3
int __attribute__((__cdecl__)) __mingw_str_wide_utf8 (const wchar_t * const wptr, char **mbptr, size_t * buflen);
# 1346 "C:/msys64/mingw32/i686-w64-mingw32/include/stdio.h" 3
int __attribute__((__cdecl__)) __mingw_str_utf8_wide (const char *const mbptr, wchar_t ** wptr, size_t * buflen);
# 1355 "C:/msys64/mingw32/i686-w64-mingw32/include/stdio.h" 3
void __attribute__((__cdecl__)) __mingw_str_free(void *ptr);





  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnl(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnle(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnlp(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnlpe(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnv(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnve(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnvp(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnvpe(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
# 1385 "C:/msys64/mingw32/i686-w64-mingw32/include/stdio.h" 3
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _spawnv(int _Mode,const char *_Filename,const char *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _spawnve(int _Mode,const char *_Filename,const char *const *_ArgList,const char *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _spawnvp(int _Mode,const char *_Filename,const char *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _spawnvpe(int _Mode,const char *_Filename,const char *const *_ArgList,const char *const *_Env);






#pragma pack(pop)

# 1 "C:/msys64/mingw32/i686-w64-mingw32/include/sec_api/stdio_s.h" 1 3
# 9 "C:/msys64/mingw32/i686-w64-mingw32/include/sec_api/stdio_s.h" 3
# 1 "C:/msys64/mingw32/i686-w64-mingw32/include/stdio.h" 1 3
# 10 "C:/msys64/mingw32/i686-w64-mingw32/include/sec_api/stdio_s.h" 2 3
# 28 "C:/msys64/mingw32/i686-w64-mingw32/include/sec_api/stdio_s.h" 3
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) clearerr_s(FILE *_File);

  size_t __attribute__((__cdecl__)) fread_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File);
# 471 "C:/msys64/mingw32/i686-w64-mingw32/include/sec_api/stdio_s.h" 3
  int __attribute__((__cdecl__)) fprintf_s(FILE *_File,const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fscanf_s_l(FILE *_File,const char *_Format,_locale_t _Locale,...);
  int __attribute__((__cdecl__)) printf_s(const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scanf_l(const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scanf_s_l(const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snprintf_c(char *_DstBuf,size_t _MaxCount,const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnprintf_c(char *_DstBuf,size_t _MaxCount,const char *_Format,va_list _ArgList);

  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fscanf_l(FILE *_File,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _sscanf_l(const char *_Src,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _sscanf_s_l(const char *_Src,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) sscanf_s(const char *_Src,const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snscanf_s(const char *_Src,size_t _MaxCount,const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snscanf_l(const char *_Src,size_t _MaxCount,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snscanf_s_l(const char *_Src,size_t _MaxCount,const char *_Format,_locale_t _Locale,...);
  int __attribute__((__cdecl__)) vfprintf_s(FILE *_File,const char *_Format,va_list _ArgList);
  int __attribute__((__cdecl__)) vprintf_s(const char *_Format,va_list _ArgList);

  int __attribute__((__cdecl__)) vsnprintf_s(char *_DstBuf,size_t _DstSize,size_t _MaxCount,const char *_Format,va_list _ArgList);

  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnprintf_s(char *_DstBuf,size_t _DstSize,size_t _MaxCount,const char *_Format,va_list _ArgList);

  __attribute__((dllimport)) int __attribute__((__cdecl__)) vsprintf_s(char *_DstBuf,size_t _Size,const char *_Format,va_list _ArgList);

  __attribute__((dllimport)) int __attribute__((__cdecl__)) sprintf_s(char *_DstBuf,size_t _DstSize,const char *_Format,...);

  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snprintf_s(char *_DstBuf,size_t _DstSize,size_t _MaxCount,const char *_Format,...);

  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fprintf_p(FILE *_File,const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _printf_p(const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _sprintf_p(char *_Dst,size_t _MaxCount,const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfprintf_p(FILE *_File,const char *_Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vprintf_p(const char *_Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsprintf_p(char *_Dst,size_t _MaxCount,const char *_Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scprintf_p(const char *_Format,...);
  __attribute__((dllimport)) int __attribute__((__cdecl__)) _vscprintf_p(const char *_Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _printf_l(const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _printf_p_l(const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vprintf_l(const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vprintf_p_l(const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fprintf_l(FILE *_File,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fprintf_p_l(FILE *_File,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfprintf_l(FILE *_File,const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfprintf_p_l(FILE *_File,const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _sprintf_l(char *_DstBuf,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _sprintf_p_l(char *_DstBuf,size_t _MaxCount,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsprintf_l(char *_DstBuf,const char *_Format,_locale_t,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsprintf_p_l(char *_DstBuf,size_t _MaxCount,const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scprintf_l(const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scprintf_p_l(const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscprintf_l(const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscprintf_p_l(const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _printf_s_l(const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vprintf_s_l(const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fprintf_s_l(FILE *_File,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfprintf_s_l(FILE *_File,const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _sprintf_s_l(char *_DstBuf,size_t _DstSize,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsprintf_s_l(char *_DstBuf,size_t _DstSize,const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snprintf_s_l(char *_DstBuf,size_t _DstSize,size_t _MaxCount,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnprintf_s_l(char *_DstBuf,size_t _DstSize,size_t _MaxCount,const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snprintf_l(char *_DstBuf,size_t _MaxCount,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snprintf_c_l(char *_DstBuf,size_t _MaxCount,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnprintf_l(char *_DstBuf,size_t _MaxCount,const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnprintf_c_l(char *_DstBuf,size_t _MaxCount,const char *,_locale_t _Locale,va_list _ArgList);


 
 
 
 
 

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) fopen_s(FILE **_File,const char *_Filename,const char *_Mode);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) freopen_s(FILE** _File, const char *_Filename, const char *_Mode, FILE *_Stream);

  __attribute__ ((__dllimport__)) char* __attribute__((__cdecl__)) gets_s(char*,rsize_t);
 

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) tmpnam_s(char*,rsize_t);
 




  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _getws_s(wchar_t *_Str,size_t _SizeInWords);
 
# 739 "C:/msys64/mingw32/i686-w64-mingw32/include/sec_api/stdio_s.h" 3
  int __attribute__((__cdecl__)) fwprintf_s(FILE *_File,const wchar_t *_Format,...);
  int __attribute__((__cdecl__)) wprintf_s(const wchar_t *_Format,...);
  int __attribute__((__cdecl__)) vfwprintf_s(FILE *_File,const wchar_t *_Format,va_list _ArgList);
  int __attribute__((__cdecl__)) vwprintf_s(const wchar_t *_Format,va_list _ArgList);

  int __attribute__((__cdecl__)) vswprintf_s(wchar_t *_Dst,size_t _SizeInWords,const wchar_t *_Format,va_list _ArgList);

  int __attribute__((__cdecl__)) swprintf_s(wchar_t *_Dst,size_t _SizeInWords,const wchar_t *_Format,...);

  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnwprintf_s(wchar_t *_DstBuf,size_t _DstSizeInWords,size_t _MaxCount,const wchar_t *_Format,va_list _ArgList);

  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwprintf_s(wchar_t *_DstBuf,size_t _DstSizeInWords,size_t _MaxCount,const wchar_t *_Format,...);


  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wprintf_s_l(const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vwprintf_s_l(const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwprintf_s_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfwprintf_s_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf_s_l(wchar_t *_DstBuf,size_t _DstSize,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf_s_l(wchar_t *_DstBuf,size_t _DstSize,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwprintf_s_l(wchar_t *_DstBuf,size_t _DstSize,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnwprintf_s_l(wchar_t *_DstBuf,size_t _DstSize,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwscanf_s_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swscanf_s_l(const wchar_t *_Src,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) swscanf_s(const wchar_t *_Src,const wchar_t *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwscanf_s(const wchar_t *_Src,size_t _MaxCount,const wchar_t *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwscanf_s_l(const wchar_t *_Src,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wscanf_s_l(const wchar_t *_Format,_locale_t _Locale,...);


 
 
 
 

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wfopen_s(FILE **_File,const wchar_t *_Filename,const wchar_t *_Mode);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wfreopen_s(FILE **_File,const wchar_t *_Filename,const wchar_t *_Mode,FILE *_OldFile);

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wtmpnam_s(wchar_t *_DstBuf,size_t _SizeInWords);
 


  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwprintf_p(FILE *_File,const wchar_t *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wprintf_p(const wchar_t *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfwprintf_p(FILE *_File,const wchar_t *_Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vwprintf_p(const wchar_t *_Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf_p(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,...);
  __attribute__((dllimport)) int __attribute__((__cdecl__)) _vswprintf_p(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scwprintf_p(const wchar_t *_Format,...);
  __attribute__((dllimport)) int __attribute__((__cdecl__)) _vscwprintf_p(const wchar_t *_Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wprintf_l(const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wprintf_p_l(const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vwprintf_l(const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vwprintf_p_l(const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwprintf_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwprintf_p_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfwprintf_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfwprintf_p_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf_c_l(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf_p_l(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf_c_l(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf_p_l(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scwprintf_l(const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scwprintf_p_l(const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscwprintf_p_l(const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwprintf_l(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnwprintf_l(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __swprintf_l(wchar_t *_Dest,const wchar_t *_Format,_locale_t _Plocinfo,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __vswprintf_l(wchar_t *_Dest,const wchar_t *_Format,_locale_t _Plocinfo,va_list _Args);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscwprintf_l(const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwscanf_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swscanf_l(const wchar_t *_Src,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwscanf_l(const wchar_t *_Src,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wscanf_l(const wchar_t *_Format,_locale_t _Locale,...);





  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _fread_nolock_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File);
# 1398 "C:/msys64/mingw32/i686-w64-mingw32/include/stdio.h" 2 3

# 1 "C:/msys64/mingw32/i686-w64-mingw32/include/_mingw_print_pop.h" 1 3
# 1400 "C:/msys64/mingw32/i686-w64-mingw32/include/stdio.h" 2 3
# 5 "test/test.h" 2


# 6 "test/test.h"
extern int g_test_total;
extern int g_test_pass;
# 2 "test/error.c" 2

static void __attribute__((constructor)) test_glGetError() {
  printf("test/error.c" "[" "3" "]: " "glGetError", ); tgl_init();

do { ++g_test_total; if (glGetError() == 
# 5 "test/error.c" 3
0
# 5 "test/error.c"
) { ++g_test_pass; } else { printf("test/error.c" "[" "5" "]: " "! " "glGetError() == " "GL_NO_ERROR", ); } } while (0);

glGenBuffers(-1, 
# 7 "test/error.c" 3 4
                ((void *)0)
# 7 "test/error.c"
                    );
do { ++g_test_total; if (glGetError() == 
# 8 "test/error.c" 3
0x0501
# 8 "test/error.c"
) { ++g_test_pass; } else { printf("test/error.c" "[" "8" "]: " "! " "glGetError() == " "GL_INVALID_VALUE", ); } } while (0);
do { ++g_test_total; if (glGetError() == 
# 9 "test/error.c" 3
0
# 9 "test/error.c"
) { ++g_test_pass; } else { printf("test/error.c" "[" "9" "]: " "! " "glGetError() == " "GL_NO_ERROR", ); } } while (0);
do { ++g_test_total; if (glGetError() == 
# 10 "test/error.c" 3
0x0501
# 10 "test/error.c"
) { ++g_test_pass; } else { printf("test/error.c" "[" "10" "]: " "! " "glGetError() == " "GL_INVALID_VALUE", ); } } while (0);

tgl_exit(); }
