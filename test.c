#pragma pack(push,_CRT_PACKING)
  typedef __builtin_va_list __gnuc_va_list;
  typedef __gnuc_va_list va_list;
#pragma pack(pop)
void __attribute__((__cdecl__)) __debugbreak(void);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) void __attribute__((__cdecl__)) __debugbreak(void)
{
  __asm__ __volatile__("int {$}3":);
}
const char *__mingw_get_crt_info (void);
#pragma pack(push,_CRT_PACKING)
typedef unsigned int size_t;
typedef int ssize_t;
typedef size_t rsize_t;
typedef int intptr_t;
typedef unsigned int uintptr_t;
typedef int ptrdiff_t;
typedef unsigned short wchar_t;
typedef unsigned short wint_t;
typedef unsigned short wctype_t;
typedef int errno_t;
typedef long __time32_t;
__extension__ typedef long long __time64_t;
typedef __time32_t time_t;
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
  __attribute__ ((__dllimport__)) extern int *__attribute__((__cdecl__)) _errno(void);
  errno_t __attribute__((__cdecl__)) _set_errno(int _Value);
  errno_t __attribute__((__cdecl__)) _get_errno(int *_Value);
  __attribute__ ((__dllimport__)) extern unsigned long __attribute__((__cdecl__)) __threadid(void);
  __attribute__ ((__dllimport__)) extern uintptr_t __attribute__((__cdecl__)) __threadhandle(void);
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
  __float128 __max_align_f128 __attribute__((__aligned__(__alignof(__float128))));
} max_align_t;
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
typedef int32_t khronos_int32_t;
typedef uint32_t khronos_uint32_t;
typedef int64_t khronos_int64_t;
typedef uint64_t khronos_uint64_t;
typedef signed char khronos_int8_t;
typedef unsigned char khronos_uint8_t;
typedef signed short int khronos_int16_t;
typedef unsigned short int khronos_uint16_t;
typedef signed long int khronos_intptr_t;
typedef unsigned long int khronos_uintptr_t;
typedef signed long int khronos_ssize_t;
typedef unsigned long int khronos_usize_t;
typedef float khronos_float_t;
typedef khronos_uint64_t khronos_utime_nanoseconds_t;
typedef khronos_int64_t khronos_stime_nanoseconds_t;
typedef enum {
    KHRONOS_FALSE = 0,
    KHRONOS_TRUE = 1,
    KHRONOS_BOOLEAN_ENUM_FORCE_SIZE = 0x7FFFFFFF
} khronos_boolean_enum_t;
#pragma pack(push,_CRT_PACKING)
  struct _EXCEPTION_POINTERS;
  struct _EXCEPTION_RECORD;
  struct _CONTEXT;
  int __attribute__((__cdecl__)) _except_handler(struct _EXCEPTION_RECORD *_ExceptionRecord,void *_EstablisherFrame,struct _CONTEXT *_ContextRecord,void *_DispatcherContext);
  unsigned long __attribute__((__cdecl__)) _exception_code(void);
  void *__attribute__((__cdecl__)) _exception_info(void);
  int __attribute__((__cdecl__)) _abnormal_termination(void);
  typedef void (__attribute__((__cdecl__)) * _PHNDLR)(int);
  struct _XCPT_ACTION {
    unsigned long XcptNum;
    int SigNum;
    _PHNDLR XcptAction;
  };
  extern struct _XCPT_ACTION _XcptActTab[];
  extern int _XcptActTabCount;
  extern int _XcptActTabSize;
  extern int _First_FPE_Indx;
  extern int _Num_FPE;
  int __attribute__((__cdecl__)) __CppXcptFilter(unsigned long _ExceptionNum,struct _EXCEPTION_POINTERS * _ExceptionPtr);
  int __attribute__((__cdecl__)) _XcptFilter(unsigned long _ExceptionNum,struct _EXCEPTION_POINTERS * _ExceptionPtr);
  typedef int (*PEXCEPTION_HANDLER)(struct _EXCEPTION_RECORD*, void*, struct _CONTEXT*, void*);
#pragma pack(pop)
  typedef unsigned long ULONG;
  typedef ULONG *PULONG;
  typedef unsigned short USHORT;
  typedef USHORT *PUSHORT;
  typedef unsigned char UCHAR;
  typedef UCHAR *PUCHAR;
  typedef char *PSZ;
typedef int WINBOOL;
       
  typedef int BOOL;
typedef WINBOOL *PBOOL;
typedef WINBOOL *LPBOOL;
       
  typedef unsigned char BYTE;
  typedef unsigned short WORD;
  typedef unsigned long DWORD;
  typedef float FLOAT;
  typedef FLOAT *PFLOAT;
  typedef BYTE *PBYTE;
  typedef BYTE *LPBYTE;
  typedef int *PINT;
  typedef int *LPINT;
  typedef WORD *PWORD;
  typedef WORD *LPWORD;
  typedef long *LPLONG;
  typedef DWORD *PDWORD;
  typedef DWORD *LPDWORD;
  typedef void *LPVOID;
  typedef const void *LPCVOID;
  typedef int INT;
  typedef unsigned int UINT;
  typedef unsigned int *PUINT;
  extern unsigned short ** _imp___pctype;
  extern unsigned short ** _imp___wctype;
  extern unsigned short ** _imp___pwctype;
  extern const unsigned char __newclmap[];
  extern const unsigned char __newcumap[];
  extern pthreadlocinfo __ptlocinfo;
  extern pthreadmbcinfo __ptmbcinfo;
  extern int __globallocalestatus;
  extern int __locale_changed;
  extern struct threadlocaleinfostruct __initiallocinfo;
  extern _locale_tstruct __initiallocalestructinfo;
  pthreadlocinfo __attribute__((__cdecl__)) __updatetlocinfo(void);
  pthreadmbcinfo __attribute__((__cdecl__)) __updatetmbcinfo(void);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isctype(int _C,int _Type);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isctype_l(int _C,int _Type,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isalpha(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isalpha_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isupper(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isupper_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) islower(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _islower_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isdigit(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isdigit_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isxdigit(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isxdigit_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isspace(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isspace_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) ispunct(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _ispunct_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isalnum(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isalnum_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isprint(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isprint_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isgraph(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isgraph_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) iscntrl(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iscntrl_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) toupper(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) tolower(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _tolower(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _tolower_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _toupper(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _toupper_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __isascii(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __toascii(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __iscsymf(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __iscsym(int _C);
int __attribute__((__cdecl__)) isblank(int _C);
  int __attribute__((__cdecl__)) iswalpha(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswalpha_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswupper(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswupper_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswlower(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswlower_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswdigit(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswdigit_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswxdigit(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswxdigit_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswspace(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswspace_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswpunct(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswpunct_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswalnum(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswalnum_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswprint(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswprint_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswgraph(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswgraph_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswcntrl(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswcntrl_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswascii(wint_t _C);
  int __attribute__((__cdecl__)) isleadbyte(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isleadbyte_l(int _C,_locale_t _Locale);
  wint_t __attribute__((__cdecl__)) towupper(wint_t _C);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _towupper_l(wint_t _C,_locale_t _Locale);
  wint_t __attribute__((__cdecl__)) towlower(wint_t _C);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _towlower_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswctype(wint_t _C,wctype_t _Type);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswctype_l(wint_t _C,wctype_t _Type,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __iswcsymf(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswcsymf_l(wint_t _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __iswcsym(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswcsym_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) is_wctype(wint_t _C,wctype_t _Type);
int __attribute__((__cdecl__)) iswblank(wint_t _C);
  extern int * _imp____mb_cur_max;
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) ___mb_cur_max_func(void);
       
long _InterlockedAnd(long volatile *, long);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
long _InterlockedAnd(volatile long *Destination, long Value) { return __sync_fetch_and_and(Destination, Value); }
long _InterlockedOr(long volatile *, long);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
long _InterlockedOr(volatile long *Destination, long Value) { return __sync_fetch_and_or(Destination, Value); }
long _InterlockedXor(long volatile *, long);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
long _InterlockedXor(volatile long *Destination, long Value) { return __sync_fetch_and_xor(Destination, Value); }
short _InterlockedIncrement16(short volatile *Addend);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
short _InterlockedIncrement16(short volatile *Addend) {
    return __sync_add_and_fetch(Addend, 1);
}
short _InterlockedDecrement16(short volatile *Addend);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
short _InterlockedDecrement16(short volatile *Addend) {
    return __sync_sub_and_fetch(Addend, 1);
}
short _InterlockedCompareExchange16(short volatile *Destination, short ExChange, short Comperand);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
short _InterlockedCompareExchange16(short volatile *Destination, short ExChange, short Comperand) {
    return __sync_val_compare_and_swap(Destination, Comperand, ExChange);
}
long _InterlockedExchangeAdd(long volatile *Addend, long Value);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
long _InterlockedExchangeAdd(long volatile *Addend, long Value) {
    return __sync_fetch_and_add(Addend, Value);
}
long _InterlockedCompareExchange(long volatile *Destination, long ExChange, long Comperand);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
long _InterlockedCompareExchange(long volatile *Destination, long ExChange, long Comperand) {
    return __sync_val_compare_and_swap(Destination, Comperand, ExChange);
}
long _InterlockedIncrement(long volatile *Addend);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
long _InterlockedIncrement(long volatile *Addend) {
   return __sync_add_and_fetch(Addend, 1);
}
long _InterlockedDecrement(long volatile *Addend);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
long _InterlockedDecrement(long volatile *Addend) {
   return __sync_sub_and_fetch(Addend, 1);
}
long _InterlockedAdd(long volatile *Addend, long Value);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
long _InterlockedAdd(long volatile *Addend, long Value) {
    return __sync_add_and_fetch(Addend, Value);
}
__extension__ long long _InterlockedAdd64(long long volatile *Addend, long long Value);
__extension__ extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
long long _InterlockedAdd64(long long volatile *Addend, long long Value) {
    return __sync_add_and_fetch(Addend, Value);
}
long _InterlockedExchange(long volatile *Target, long Value);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
long _InterlockedExchange(long volatile *Target, long Value) {
    return __sync_lock_test_and_set(Target, Value);
}
__extension__ long long _InterlockedCompareExchange64(long long volatile *Destination, long long ExChange, long long Comperand);
__extension__ extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
long long _InterlockedCompareExchange64(long long volatile *Destination, long long ExChange, long long Comperand) {
    return __sync_val_compare_and_swap(Destination, Comperand, ExChange);
}
void *_InterlockedCompareExchangePointer(void * volatile *Destination, void *ExChange, void *Comperand);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
void *_InterlockedCompareExchangePointer(void *volatile *Destination, void *ExChange, void *Comperand) {
    return __sync_val_compare_and_swap(Destination, Comperand, ExChange);
}
void *_InterlockedExchangePointer(void *volatile *Target,void *Value);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
void *_InterlockedExchangePointer(void *volatile *Target,void *Value) {
    return __sync_lock_test_and_set(Target, Value);
}
void __int2c(void);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
void __int2c(void) {
    __asm__ __volatile__("int {$}" "0x2c" :);
}
void __stosb(unsigned char *, unsigned char, size_t);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
void __stosb(unsigned char *Dest, unsigned char Data, size_t Count) { __asm__ __volatile__ ("rep stos{" "b|b" "}" : "+D" (Dest), "+c" (Count) : [Data] "a" (Data) : "memory"); }
void __stosw(unsigned short *, unsigned short, size_t);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
void __stosw(unsigned short *Dest, unsigned short Data, size_t Count) { __asm__ __volatile__ ("rep stos{" "w|w" "}" : "+D" (Dest), "+c" (Count) : [Data] "a" (Data) : "memory"); }
void __stosd(unsigned long *, unsigned long, size_t);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
void __stosd(unsigned long *Dest, unsigned long Data, size_t Count) { __asm__ __volatile__ ("rep stos{" "l|d" "}" : "+D" (Dest), "+c" (Count) : [Data] "a" (Data) : "memory"); }
unsigned char _interlockedbittestandset(long volatile *a, long b);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
unsigned char _interlockedbittestandset(long volatile *Base, long Offset) { unsigned char old; __asm__ __volatile__ ("lock bts{l %[Offset],%[Base] | %[Base],%[Offset]}" : [old] "=@ccc" (old), [Base] "+m" (*Base) : [Offset] "I" "r" (Offset) : "memory" ); return old; }
unsigned char _interlockedbittestandreset(long volatile *a, long b);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
unsigned char _interlockedbittestandreset(long volatile *Base, long Offset) { unsigned char old; __asm__ __volatile__ ("lock btr{l %[Offset],%[Base] | %[Base],%[Offset]}" : [old] "=@ccc" (old), [Base] "+m" (*Base) : [Offset] "I" "r" (Offset) : "memory" ); return old; }
unsigned char _interlockedbittestandcomplement(long volatile *a, long b);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
unsigned char _interlockedbittestandcomplement(long volatile *Base, long Offset) { unsigned char old; __asm__ __volatile__ ("lock btc{l %[Offset],%[Base] | %[Base],%[Offset]}" : [old] "=@ccc" (old), [Base] "+m" (*Base) : [Offset] "I" "r" (Offset) : "memory" ); return old; }
unsigned char InterlockedBitTestAndSet(volatile long *a, long b);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
unsigned char InterlockedBitTestAndSet(long volatile *Base, long Offset) { unsigned char old; __asm__ __volatile__ ("lock bts{l %[Offset],%[Base] | %[Base],%[Offset]}" : [old] "=@ccc" (old), [Base] "+m" (*Base) : [Offset] "I" "r" (Offset) : "memory" ); return old; }
unsigned char InterlockedBitTestAndReset(volatile long *a, long b);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
unsigned char InterlockedBitTestAndReset(long volatile *Base, long Offset) { unsigned char old; __asm__ __volatile__ ("lock btr{l %[Offset],%[Base] | %[Base],%[Offset]}" : [old] "=@ccc" (old), [Base] "+m" (*Base) : [Offset] "I" "r" (Offset) : "memory" ); return old; }
unsigned char InterlockedBitTestAndComplement(volatile long *a, long b);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
unsigned char InterlockedBitTestAndComplement(long volatile *Base, long Offset) { unsigned char old; __asm__ __volatile__ ("lock btc{l %[Offset],%[Base] | %[Base],%[Offset]}" : [old] "=@ccc" (old), [Base] "+m" (*Base) : [Offset] "I" "r" (Offset) : "memory" ); return old; }
unsigned char _BitScanForward(unsigned long *Index, unsigned long Mask);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
unsigned char _BitScanForward(unsigned long *Index, unsigned long Mask) { unsigned long n; unsigned char old; __asm__ ("bsf{l %[Mask],%[Index] | %[Index],%[Mask]}" : "=@ccnz" (old), [Index] "=r" (n) : [Mask] "r" (Mask)); *Index = n; return old; }
unsigned char _BitScanReverse(unsigned long *Index, unsigned long Mask);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
unsigned char _BitScanReverse(unsigned long *Index, unsigned long Mask) { unsigned long n; unsigned char old; __asm__ ("bsr{l %[Mask],%[Index] | %[Index],%[Mask]}" : "=@ccnz" (old), [Index] "=r" (n) : [Mask] "r" (Mask)); *Index = n; return old; }
unsigned char _bittest(long const *a, long b);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
unsigned char _bittest(const long *Base, long Offset) { unsigned char old; __asm__ ("bt{" "l" " %[Offset],%[Base] | %[Base],%[Offset]}" : [old] "=@ccc" (old) : [Offset] "I" "r" (Offset), [Base] "rm" (*Base) : ); return old; }
unsigned char _bittestandset(long *a, long b);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
unsigned char _bittestandset(long *Base, long Offset) { unsigned char old; __asm__ ("bts" "{" "l" " %[Offset],%[Base] | %[Base],%[Offset]}" : [old] "=@ccc" (old), [Base] "+rm" (*Base) : [Offset] "I" "r" (Offset) : ); return old; }
unsigned char _bittestandreset(long *a, long b);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
unsigned char _bittestandreset(long *Base, long Offset) { unsigned char old; __asm__ ("btr" "{" "l" " %[Offset],%[Base] | %[Base],%[Offset]}" : [old] "=@ccc" (old), [Base] "+rm" (*Base) : [Offset] "I" "r" (Offset) : ); return old; }
unsigned char _bittestandcomplement(long *a, long b);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
unsigned char _bittestandcomplement(long *Base, long Offset) { unsigned char old; __asm__ ("btc" "{" "l" " %[Offset],%[Base] | %[Base],%[Offset]}" : [old] "=@ccc" (old), [Base] "+rm" (*Base) : [Offset] "I" "r" (Offset) : ); return old; }
void __movsb(unsigned char *Destination, unsigned char const *Source, size_t Count);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
void __movsb(unsigned char *Destination, unsigned char const *Source, size_t Count) { __asm__ __volatile__ ( "rep movs" "b" : "=D" (Destination), "=S" (Source), "=c" (Count) : "0" (Destination), "1" (Source), "2" (Count) : "memory"); }
void __movsw(unsigned short *Dest, unsigned short const *Source, size_t Count);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
void __movsw(unsigned short *Destination, unsigned short const *Source, size_t Count) { __asm__ __volatile__ ( "rep movs" "w" : "=D" (Destination), "=S" (Source), "=c" (Count) : "0" (Destination), "1" (Source), "2" (Count) : "memory"); }
void __movsd(unsigned long *Dest, unsigned long const *Source, size_t Count);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
void __movsd(unsigned long *Destination, unsigned long const *Source, size_t Count) { __asm__ __volatile__ ( "rep movs" "d" : "=D" (Destination), "=S" (Source), "=c" (Count) : "0" (Destination), "1" (Source), "2" (Count) : "memory"); }
unsigned char __readfsbyte(unsigned long Offset);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
unsigned char __readfsbyte(unsigned long Offset) { unsigned char ret; __asm__ ("mov{" "b" " %%" "fs" ":%[offset], %[ret] | %[ret], %%" "fs" ":%[offset]}" : [ret] "=r" (ret) : [offset] "m" ((*(unsigned char *) (size_t) Offset))); return ret; }
unsigned short __readfsword(unsigned long Offset);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
unsigned short __readfsword(unsigned long Offset) { unsigned short ret; __asm__ ("mov{" "w" " %%" "fs" ":%[offset], %[ret] | %[ret], %%" "fs" ":%[offset]}" : [ret] "=r" (ret) : [offset] "m" ((*(unsigned short *) (size_t) Offset))); return ret; }
unsigned long __readfsdword(unsigned long Offset);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
unsigned long __readfsdword(unsigned long Offset) { unsigned long ret; __asm__ ("mov{" "l" " %%" "fs" ":%[offset], %[ret] | %[ret], %%" "fs" ":%[offset]}" : [ret] "=r" (ret) : [offset] "m" ((*(unsigned long *) (size_t) Offset))); return ret; }
void __writefsbyte(unsigned long Offset,unsigned char Data);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
void __writefsbyte(unsigned long Offset, unsigned char Data) { __asm__ ("mov{" "b" " %[Data], %%" "fs" ":%[offset] | %%" "fs" ":%[offset], %[Data]}" : [offset] "=m" ((*(unsigned char *) (size_t) Offset)) : [Data] "ri" (Data)); }
void __writefsword(unsigned long Offset,unsigned short Data);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
void __writefsword(unsigned long Offset, unsigned short Data) { __asm__ ("mov{" "w" " %[Data], %%" "fs" ":%[offset] | %%" "fs" ":%[offset], %[Data]}" : [offset] "=m" ((*(unsigned short *) (size_t) Offset)) : [Data] "ri" (Data)); }
void __writefsdword(unsigned long Offset,unsigned long Data);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
void __writefsdword(unsigned long Offset, unsigned long Data) { __asm__ ("mov{" "l" " %[Data], %%" "fs" ":%[offset] | %%" "fs" ":%[offset], %[Data]}" : [offset] "=m" ((*(unsigned long *) (size_t) Offset)) : [Data] "ri" (Data)); }
       
typedef unsigned long POINTER_64_INT;
  typedef signed char INT8,*PINT8;
  typedef signed short INT16,*PINT16;
  typedef signed int INT32,*PINT32;
  __extension__ typedef signed long long INT64,*PINT64;
  typedef unsigned char UINT8,*PUINT8;
  typedef unsigned short UINT16,*PUINT16;
  typedef unsigned int UINT32,*PUINT32;
  __extension__ typedef unsigned long long UINT64,*PUINT64;
  typedef signed int LONG32,*PLONG32;
  typedef unsigned int ULONG32,*PULONG32;
  typedef unsigned int DWORD32,*PDWORD32;
  typedef int INT_PTR,*PINT_PTR;
  typedef unsigned int UINT_PTR,*PUINT_PTR;
  typedef long LONG_PTR,*PLONG_PTR;
  typedef unsigned long ULONG_PTR,*PULONG_PTR;
  typedef unsigned short UHALF_PTR,*PUHALF_PTR;
  typedef short HALF_PTR,*PHALF_PTR;
  typedef long SHANDLE_PTR;
  typedef unsigned long HANDLE_PTR;
  static __inline void * PtrToPtr64 (const void *p) { return ((void *) (ULONG_PTR) p); }
  static __inline void *Ptr64ToPtr (const void * p) { return ((void *) (ULONG_PTR) p); }
  static __inline void * HandleToHandle64 (const void *h) { return ((void *) (LONG_PTR) h); }
  static __inline void *Handle64ToHandle (const void * h) { return ((void *) (ULONG_PTR) h); }
  __extension__ typedef ULONG_PTR SIZE_T,*PSIZE_T;
  __extension__ typedef LONG_PTR SSIZE_T,*PSSIZE_T;
  __extension__ typedef ULONG_PTR DWORD_PTR,*PDWORD_PTR;
  __extension__ typedef long long LONG64,*PLONG64;
  __extension__ typedef unsigned long long ULONG64,*PULONG64;
  __extension__ typedef unsigned long long DWORD64,*PDWORD64;
  __extension__ typedef ULONG_PTR KAFFINITY;
  __extension__ typedef KAFFINITY *PKAFFINITY;
  typedef void *PVOID;
  typedef void *PVOID64;
  typedef char CHAR;
  typedef short SHORT;
  typedef long LONG;
  typedef int INT;
  typedef wchar_t WCHAR;
  typedef WCHAR *PWCHAR,*LPWCH,*PWCH;
  typedef const WCHAR *LPCWCH,*PCWCH;
  typedef WCHAR *NWPSTR,*LPWSTR,*PWSTR;
  typedef PWSTR *PZPWSTR;
  typedef const PWSTR *PCZPWSTR;
  typedef WCHAR *LPUWSTR,*PUWSTR;
  typedef const WCHAR *LPCWSTR,*PCWSTR;
  typedef PCWSTR *PZPCWSTR;
  typedef const WCHAR *LPCUWSTR,*PCUWSTR;
  typedef WCHAR *PZZWSTR;
  typedef const WCHAR *PCZZWSTR;
  typedef WCHAR *PUZZWSTR;
  typedef const WCHAR *PCUZZWSTR;
  typedef WCHAR *PNZWCH;
  typedef const WCHAR *PCNZWCH;
  typedef WCHAR *PUNZWCH;
  typedef const WCHAR *PCUNZWCH;
  typedef const WCHAR *LPCWCHAR,*PCWCHAR;
  typedef const WCHAR *LPCUWCHAR,*PCUWCHAR;
  typedef unsigned long UCSCHAR;
  typedef UCSCHAR *PUCSCHAR;
  typedef const UCSCHAR *PCUCSCHAR;
  typedef UCSCHAR *PUCSSTR;
  typedef UCSCHAR *PUUCSSTR;
  typedef const UCSCHAR *PCUCSSTR;
  typedef const UCSCHAR *PCUUCSSTR;
  typedef UCSCHAR *PUUCSCHAR;
  typedef const UCSCHAR *PCUUCSCHAR;
  typedef CHAR *PCHAR,*LPCH,*PCH;
  typedef const CHAR *LPCCH,*PCCH;
  typedef CHAR *NPSTR,*LPSTR,*PSTR;
  typedef PSTR *PZPSTR;
  typedef const PSTR *PCZPSTR;
  typedef const CHAR *LPCSTR,*PCSTR;
  typedef PCSTR *PZPCSTR;
  typedef CHAR *PZZSTR;
  typedef const CHAR *PCZZSTR;
  typedef CHAR *PNZCH;
  typedef const CHAR *PCNZCH;
  typedef char TCHAR, *PTCHAR;
  typedef unsigned char TBYTE, *PTBYTE;
  typedef LPSTR LPTCH,PTCH;
  typedef LPCCH LPCTCH,PCTCH;
  typedef LPSTR PTSTR,LPTSTR,PUTSTR,LPUTSTR;
  typedef LPCSTR PCTSTR,LPCTSTR,PCUTSTR,LPCUTSTR;
  typedef PZZSTR PZZTSTR, PUZZTSTR;
  typedef PCZZSTR PCZZTSTR, PCUZZTSTR;
  typedef PZPSTR PZPTSTR;
  typedef PNZCH PNZTCH, PUNZTCH;
  typedef PCNZCH PCNZTCH, PCUNZTCH;
  typedef SHORT *PSHORT;
  typedef LONG *PLONG;
typedef struct _GROUP_AFFINITY {
  KAFFINITY Mask;
  WORD Group;
  WORD Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY;
  typedef void *HANDLE;
  typedef HANDLE *PHANDLE;
  typedef BYTE FCHAR;
  typedef WORD FSHORT;
  typedef DWORD FLONG;
  typedef LONG HRESULT;
  typedef char CCHAR;
typedef DWORD LCID;
  typedef PDWORD PLCID;
  typedef WORD LANGID;
typedef enum {
  UNSPECIFIED_COMPARTMENT_ID = 0,
  DEFAULT_COMPARTMENT_ID
} COMPARTMENT_ID,*PCOMPARTMENT_ID;
    typedef struct _FLOAT128 {
      __extension__ long long LowPart;
      __extension__ long long HighPart;
  } FLOAT128;
  typedef FLOAT128 *PFLOAT128;
  __extension__ typedef long long LONGLONG;
  __extension__ typedef unsigned long long ULONGLONG;
  typedef LONGLONG *PLONGLONG;
  typedef ULONGLONG *PULONGLONG;
  typedef LONGLONG USN;
  typedef union _LARGE_INTEGER {
    __extension__ struct {
      DWORD LowPart;
      LONG HighPart;
    } ;
    struct {
      DWORD LowPart;
      LONG HighPart;
    } u;
    LONGLONG QuadPart;
  } LARGE_INTEGER;
  typedef LARGE_INTEGER *PLARGE_INTEGER;
  typedef union _ULARGE_INTEGER {
    __extension__ struct {
      DWORD LowPart;
      DWORD HighPart;
    } ;
    struct {
      DWORD LowPart;
      DWORD HighPart;
    } u;
    ULONGLONG QuadPart;
  } ULARGE_INTEGER;
  typedef ULARGE_INTEGER *PULARGE_INTEGER;
  typedef struct _LUID {
    DWORD LowPart;
    LONG HighPart;
  } LUID,*PLUID;
  typedef ULONGLONG DWORDLONG;
  typedef DWORDLONG *PDWORDLONG;
       
       
    unsigned int __attribute__((__cdecl__)) _rotl(unsigned int Value,int Shift);
    unsigned int __attribute__((__cdecl__)) _rotr(unsigned int Value,int Shift);
       
       
       
       
    __extension__ unsigned long long __attribute__((__cdecl__)) _rotl64(unsigned long long Value,int Shift);
    __extension__ unsigned long long __attribute__((__cdecl__)) _rotr64(unsigned long long Value,int Shift);
       
       
  typedef BYTE BOOLEAN;
  typedef BOOLEAN *PBOOLEAN;
  typedef struct _LIST_ENTRY {
    struct _LIST_ENTRY *Flink;
    struct _LIST_ENTRY *Blink;
  } LIST_ENTRY,*PLIST_ENTRY,* PRLIST_ENTRY;
  typedef struct _SINGLE_LIST_ENTRY {
    struct _SINGLE_LIST_ENTRY *Next;
  } SINGLE_LIST_ENTRY,*PSINGLE_LIST_ENTRY;
  typedef struct LIST_ENTRY32 {
    DWORD Flink;
    DWORD Blink;
  } LIST_ENTRY32;
  typedef LIST_ENTRY32 *PLIST_ENTRY32;
  typedef struct LIST_ENTRY64 {
    ULONGLONG Flink;
    ULONGLONG Blink;
  } LIST_ENTRY64;
  typedef LIST_ENTRY64 *PLIST_ENTRY64;
typedef struct _GUID {
  unsigned long Data1;
  unsigned short Data2;
  unsigned short Data3;
  unsigned char Data4[8];
} GUID;
typedef GUID *LPGUID;
typedef const GUID *LPCGUID;
typedef GUID IID;
typedef IID *LPIID;
typedef GUID CLSID;
typedef CLSID *LPCLSID;
typedef GUID FMTID;
typedef FMTID *LPFMTID;
  __attribute__ ((__dllimport__)) void *__attribute__((__cdecl__)) _memccpy(void *_Dst,const void *_Src,int _Val,size_t _MaxCount);
  void *__attribute__((__cdecl__)) memchr(const void *_Buf ,int _Val,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _memicmp(const void *_Buf1,const void *_Buf2,size_t _Size);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _memicmp_l(const void *_Buf1,const void *_Buf2,size_t _Size,_locale_t _Locale);
  int __attribute__((__cdecl__)) memcmp(const void *_Buf1,const void *_Buf2,size_t _Size);
  void * __attribute__((__cdecl__)) memcpy(void * __restrict__ _Dst,const void * __restrict__ _Src,size_t _Size) ;
  __attribute__((dllimport)) errno_t __attribute__((__cdecl__)) memcpy_s (void *_dest,size_t _numberOfElements,const void *_src,size_t _count);
  void * __attribute__((__cdecl__)) mempcpy (void *_Dst, const void *_Src, size_t _Size);
  void * __attribute__((__cdecl__)) memset(void *_Dst,int _Val,size_t _Size);
  void * __attribute__((__cdecl__)) memccpy(void *_Dst,const void *_Src,int _Val,size_t _Size) ;
  int __attribute__((__cdecl__)) memicmp(const void *_Buf1,const void *_Buf2,size_t _Size) ;
  char * __attribute__((__cdecl__)) _strset(char *_Str,int _Val) ;
  char * __attribute__((__cdecl__)) _strset_l(char *_Str,int _Val,_locale_t _Locale) ;
  char * __attribute__((__cdecl__)) strcpy(char * __restrict__ _Dest,const char * __restrict__ _Source);
  char * __attribute__((__cdecl__)) strcat(char * __restrict__ _Dest,const char * __restrict__ _Source);
  int __attribute__((__cdecl__)) strcmp(const char *_Str1,const char *_Str2);
  size_t __attribute__((__cdecl__)) strlen(const char *_Str);
  size_t __attribute__((__cdecl__)) strnlen(const char *_Str,size_t _MaxCount);
  void *__attribute__((__cdecl__)) memmove(void *_Dst,const void *_Src,size_t _Size) ;
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _strdup(const char *_Src);
  char *__attribute__((__cdecl__)) strchr(const char *_Str,int _Val);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _stricmp(const char *_Str1,const char *_Str2);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _strcmpi(const char *_Str1,const char *_Str2);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _stricmp_l(const char *_Str1,const char *_Str2,_locale_t _Locale);
  int __attribute__((__cdecl__)) strcoll(const char *_Str1,const char *_Str2);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _strcoll_l(const char *_Str1,const char *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _stricoll(const char *_Str1,const char *_Str2);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _stricoll_l(const char *_Str1,const char *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _strncoll (const char *_Str1,const char *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _strncoll_l(const char *_Str1,const char *_Str2,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _strnicoll (const char *_Str1,const char *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _strnicoll_l(const char *_Str1,const char *_Str2,size_t _MaxCount,_locale_t _Locale);
  size_t __attribute__((__cdecl__)) strcspn(const char *_Str,const char *_Control);
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _strerror(const char *_ErrMsg) ;
  char *__attribute__((__cdecl__)) strerror(int) ;
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _strlwr(char *_String) ;
  char *strlwr_l(char *_String,_locale_t _Locale) ;
  char *__attribute__((__cdecl__)) strncat(char * __restrict__ _Dest,const char * __restrict__ _Source,size_t _Count) ;
  int __attribute__((__cdecl__)) strncmp(const char *_Str1,const char *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _strnicmp(const char *_Str1,const char *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _strnicmp_l(const char *_Str1,const char *_Str2,size_t _MaxCount,_locale_t _Locale);
  char *strncpy(char * __restrict__ _Dest,const char * __restrict__ _Source,size_t _Count) ;
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _strnset(char *_Str,int _Val,size_t _MaxCount) ;
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _strnset_l(char *str,int c,size_t count,_locale_t _Locale) ;
  char *__attribute__((__cdecl__)) strpbrk(const char *_Str,const char *_Control);
  char *__attribute__((__cdecl__)) strrchr(const char *_Str,int _Ch);
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _strrev(char *_Str);
  size_t __attribute__((__cdecl__)) strspn(const char *_Str,const char *_Control);
  char *__attribute__((__cdecl__)) strstr(const char *_Str,const char *_SubStr);
  char *__attribute__((__cdecl__)) strtok(char * __restrict__ _Str,const char * __restrict__ _Delim) ;
       
  char *strtok_r(char * __restrict__ _Str, const char * __restrict__ _Delim, char ** __restrict__ __last);
       
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _strupr(char *_String) ;
  __attribute__ ((__dllimport__)) char *_strupr_l(char *_String,_locale_t _Locale) ;
  size_t __attribute__((__cdecl__)) strxfrm(char * __restrict__ _Dst,const char * __restrict__ _Src,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _strxfrm_l(char * __restrict__ _Dst,const char * __restrict__ _Src,size_t _MaxCount,_locale_t _Locale);
  char *__attribute__((__cdecl__)) strdup(const char *_Src) ;
  int __attribute__((__cdecl__)) strcmpi(const char *_Str1,const char *_Str2) ;
  int __attribute__((__cdecl__)) stricmp(const char *_Str1,const char *_Str2) ;
  char *__attribute__((__cdecl__)) strlwr(char *_Str) ;
  int __attribute__((__cdecl__)) strnicmp(const char *_Str1,const char *_Str,size_t _MaxCount) ;
  int __attribute__((__cdecl__)) strncasecmp (const char *, const char *, size_t);
  int __attribute__((__cdecl__)) strcasecmp (const char *, const char *);
  char *__attribute__((__cdecl__)) strnset(char *_Str,int _Val,size_t _MaxCount) ;
  char *__attribute__((__cdecl__)) strrev(char *_Str) ;
  char *__attribute__((__cdecl__)) strset(char *_Str,int _Val) ;
  char *__attribute__((__cdecl__)) strupr(char *_Str) ;
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wcsdup(const wchar_t *_Str);
  wchar_t *__attribute__((__cdecl__)) wcscat(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source) ;
  wchar_t *__attribute__((__cdecl__)) wcschr(const wchar_t *_Str,wchar_t _Ch);
  int __attribute__((__cdecl__)) wcscmp(const wchar_t *_Str1,const wchar_t *_Str2);
  wchar_t *__attribute__((__cdecl__)) wcscpy(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source) ;
  size_t __attribute__((__cdecl__)) wcscspn(const wchar_t *_Str,const wchar_t *_Control);
  size_t __attribute__((__cdecl__)) wcslen(const wchar_t *_Str);
  size_t __attribute__((__cdecl__)) wcsnlen(const wchar_t *_Src,size_t _MaxCount);
  wchar_t *wcsncat(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count) ;
  int __attribute__((__cdecl__)) wcsncmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  wchar_t *wcsncpy(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count) ;
  wchar_t *__attribute__((__cdecl__)) _wcsncpy_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count,_locale_t _Locale) ;
  wchar_t *__attribute__((__cdecl__)) wcspbrk(const wchar_t *_Str,const wchar_t *_Control);
  wchar_t *__attribute__((__cdecl__)) wcsrchr(const wchar_t *_Str,wchar_t _Ch);
  size_t __attribute__((__cdecl__)) wcsspn(const wchar_t *_Str,const wchar_t *_Control);
  wchar_t *__attribute__((__cdecl__)) wcsstr(const wchar_t *_Str,const wchar_t *_SubStr);
  wchar_t *__attribute__((__cdecl__)) wcstok(wchar_t * __restrict__ _Str,const wchar_t * __restrict__ _Delim) ;
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wcserror(int _ErrNum) ;
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) __wcserror(const wchar_t *_Str) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsicmp(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsicmp_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsnicmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsnicmp_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wcsnset(wchar_t *_Str,wchar_t _Val,size_t _MaxCount) ;
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wcsrev(wchar_t *_Str);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wcsset(wchar_t *_Str,wchar_t _Val) ;
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wcslwr(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) wchar_t *_wcslwr_l(wchar_t *_String,_locale_t _Locale) ;
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wcsupr(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) wchar_t *_wcsupr_l(wchar_t *_String,_locale_t _Locale) ;
  size_t __attribute__((__cdecl__)) wcsxfrm(wchar_t * __restrict__ _Dst,const wchar_t * __restrict__ _Src,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _wcsxfrm_l(wchar_t * __restrict__ _Dst,const wchar_t * __restrict__ _Src,size_t _MaxCount,_locale_t _Locale);
  int __attribute__((__cdecl__)) wcscoll(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcscoll_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsicoll(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsicoll_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsncoll(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsncoll_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsnicoll(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsnicoll_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);
  wchar_t *__attribute__((__cdecl__)) wcsdup(const wchar_t *_Str) ;
  int __attribute__((__cdecl__)) wcsicmp(const wchar_t *_Str1,const wchar_t *_Str2) ;
  int __attribute__((__cdecl__)) wcsnicmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount) ;
  wchar_t *__attribute__((__cdecl__)) wcsnset(wchar_t *_Str,wchar_t _Val,size_t _MaxCount) ;
  wchar_t *__attribute__((__cdecl__)) wcsrev(wchar_t *_Str) ;
  wchar_t *__attribute__((__cdecl__)) wcsset(wchar_t *_Str,wchar_t _Val) ;
  wchar_t *__attribute__((__cdecl__)) wcslwr(wchar_t *_Str) ;
  wchar_t *__attribute__((__cdecl__)) wcsupr(wchar_t *_Str) ;
  int __attribute__((__cdecl__)) wcsicoll(const wchar_t *_Str1,const wchar_t *_Str2) ;
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _strset_s(char *_Dst,size_t _DstSize,int _Value);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _strerror_s(char *_Buf,size_t _SizeInBytes,const char *_ErrMsg);
  __attribute__((dllimport)) errno_t __attribute__((__cdecl__)) strerror_s(char *_Buf,size_t _SizeInBytes,int _ErrNum);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _strlwr_s(char *_Str,size_t _Size);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _strlwr_s_l(char *_Str,size_t _Size,_locale_t _Locale);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _strnset_s(char *_Str,size_t _Size,int _Val,size_t _MaxCount);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _strupr_s(char *_Str,size_t _Size);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _strupr_s_l(char *_Str,size_t _Size,_locale_t _Locale);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) strncat_s(char *_Dst,size_t _DstSizeInChars,const char *_Src,size_t _MaxCount);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _strncat_s_l(char *_Dst,size_t _DstSizeInChars,const char *_Src,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) strcpy_s(char *_Dst, rsize_t _SizeInBytes, const char *_Src);
 
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) strncpy_s(char *_Dst, size_t _DstSizeInChars, const char *_Src, size_t _MaxCount);
 
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _strncpy_s_l(char *_Dst, size_t _DstSizeInChars, const char *_Src, size_t _MaxCount, _locale_t _Locale);
  ;
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) strtok_s(char *_Str,const char *_Delim,char **_Context);
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _strtok_s_l(char *_Str,const char *_Delim,char **_Context,_locale_t _Locale);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) strcat_s(char *_Dst, rsize_t _SizeInBytes, const char * _Src);
 
  __attribute__((dllimport)) errno_t __attribute__((__cdecl__)) memmove_s(void *_dest,size_t _numberOfElements,const void *_src,size_t _count);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) wcstok_s(wchar_t *_Str,const wchar_t *_Delim,wchar_t **_Context);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcserror_s(wchar_t *_Buf,size_t _SizeInWords,int _ErrNum);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) __wcserror_s(wchar_t *_Buffer,size_t _SizeInWords,const wchar_t *_ErrMsg);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcsnset_s(wchar_t *_Dst,size_t _DstSizeInWords,wchar_t _Val,size_t _MaxCount);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcsset_s(wchar_t *_Str,size_t _SizeInWords,wchar_t _Val);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcslwr_s(wchar_t *_Str,size_t _SizeInWords);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcslwr_s_l(wchar_t *_Str,size_t _SizeInWords,_locale_t _Locale);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcsupr_s(wchar_t *_Str,size_t _Size);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcsupr_s_l(wchar_t *_Str,size_t _Size,_locale_t _Locale);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) wcscpy_s(wchar_t *_Dst, rsize_t _SizeInWords, const wchar_t *_Src);
 
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) wcscat_s(wchar_t * _Dst, rsize_t _SizeInWords, const wchar_t *_Src);
 
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) wcsncat_s(wchar_t *_Dst,size_t _DstSizeInChars,const wchar_t *_Src,size_t _MaxCount);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcsncat_s_l(wchar_t *_Dst,size_t _DstSizeInChars,const wchar_t *_Src,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) wcsncpy_s(wchar_t *_Dst, size_t _DstSizeInChars, const wchar_t *_Src, size_t _MaxCount);
  ;
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcsncpy_s_l(wchar_t *_Dst, size_t _DstSizeInChars, const wchar_t *_Src, size_t _MaxCount, _locale_t _Locale);
  ;
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wcstok_s_l(wchar_t *_Str,const wchar_t *_Delim,wchar_t **_Context,_locale_t _Locale);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcsset_s_l(wchar_t *_Str,size_t _SizeInChars,unsigned int _Val,_locale_t _Locale);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcsnset_s_l(wchar_t *_Str,size_t _SizeInChars,unsigned int _Val, size_t _Count,_locale_t _Locale);
  extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) size_t __attribute__((__cdecl__)) wcsnlen_s(const wchar_t * _src, size_t _count) {
    return _src ? wcsnlen(_src, _count) : 0;
  }
  typedef struct _OBJECTID {
    GUID Lineage;
    DWORD Uniquifier;
  } OBJECTID;
    typedef int __attribute__((__stdcall__)) EXCEPTION_ROUTINE (struct _EXCEPTION_RECORD *ExceptionRecord, PVOID EstablisherFrame, struct _CONTEXT *ContextRecord, PVOID DispatcherContext);
    typedef EXCEPTION_ROUTINE *PEXCEPTION_ROUTINE;
  typedef ULONG_PTR KSPIN_LOCK;
  typedef KSPIN_LOCK *PKSPIN_LOCK;
    typedef struct __attribute__ ((__aligned__ (16))) _M128A {
      ULONGLONG Low;
      LONGLONG High;
    } M128A,*PM128A;
    typedef struct __attribute__ ((__aligned__ (16))) _XSAVE_FORMAT {
      WORD ControlWord;
      WORD StatusWord;
      BYTE TagWord;
      BYTE Reserved1;
      WORD ErrorOpcode;
      DWORD ErrorOffset;
      WORD ErrorSelector;
      WORD Reserved2;
      DWORD DataOffset;
      WORD DataSelector;
      WORD Reserved3;
      DWORD MxCsr;
      DWORD MxCsr_Mask;
      M128A FloatRegisters[8];
      M128A XmmRegisters[8];
      BYTE Reserved4[220];
      DWORD Cr0NpxState;
    } XSAVE_FORMAT,*PXSAVE_FORMAT;
    typedef struct __attribute__ ((__aligned__ (8))) _XSAVE_AREA_HEADER {
      DWORD64 Mask;
      DWORD64 Reserved[7];
    } XSAVE_AREA_HEADER,*PXSAVE_AREA_HEADER;
    typedef struct __attribute__ ((__aligned__ (16))) _XSAVE_AREA {
      XSAVE_FORMAT LegacyState;
      XSAVE_AREA_HEADER Header;
    } XSAVE_AREA,*PXSAVE_AREA;
    typedef struct _XSTATE_CONTEXT {
      DWORD64 Mask;
      DWORD Length;
      DWORD Reserved1;
      PXSAVE_AREA Area;
      DWORD Reserved2;
      PVOID Buffer;
      DWORD Reserved3;
    } XSTATE_CONTEXT,*PXSTATE_CONTEXT;
    typedef struct _SCOPE_TABLE_AMD64 {
      DWORD Count;
      struct {
 DWORD BeginAddress;
 DWORD EndAddress;
 DWORD HandlerAddress;
 DWORD JumpTarget;
      } ScopeRecord[1];
    } SCOPE_TABLE_AMD64,*PSCOPE_TABLE_AMD64;
void MemoryBarrier(void);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) void MemoryBarrier(void)
{ unsigned char Barrier; __asm__ __volatile__("xchg{b %%| }al, %0" :"=m" (Barrier) : : "eax", "memory"); }
  struct _TEB *NtCurrentTeb(void);
  PVOID GetCurrentFiber(void);
  PVOID GetFiberData(void);
  extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) struct _TEB *NtCurrentTeb(void)
  {
    return (struct _TEB *)__readfsdword(0x18);
  }
  extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) PVOID GetCurrentFiber(void)
  {
    return(PVOID)__readfsdword(0x10);
  }
  extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) PVOID GetFiberData(void)
  {
      return *(PVOID *)GetCurrentFiber();
  }
    typedef struct _FLOATING_SAVE_AREA {
      DWORD ControlWord;
      DWORD StatusWord;
      DWORD TagWord;
      DWORD ErrorOffset;
      DWORD ErrorSelector;
      DWORD DataOffset;
      DWORD DataSelector;
      BYTE RegisterArea[80];
      DWORD Cr0NpxState;
    } FLOATING_SAVE_AREA;
    typedef FLOATING_SAVE_AREA *PFLOATING_SAVE_AREA;
    typedef struct _CONTEXT {
      DWORD ContextFlags;
      DWORD Dr0;
      DWORD Dr1;
      DWORD Dr2;
      DWORD Dr3;
      DWORD Dr6;
      DWORD Dr7;
      FLOATING_SAVE_AREA FloatSave;
      DWORD SegGs;
      DWORD SegFs;
      DWORD SegEs;
      DWORD SegDs;
      DWORD Edi;
      DWORD Esi;
      DWORD Ebx;
      DWORD Edx;
      DWORD Ecx;
      DWORD Eax;
      DWORD Ebp;
      DWORD Eip;
      DWORD SegCs;
      DWORD EFlags;
      DWORD Esp;
      DWORD SegSs;
      BYTE ExtendedRegisters[512];
    } CONTEXT;
    typedef CONTEXT *PCONTEXT;
    typedef struct _LDT_ENTRY {
      WORD LimitLow;
      WORD BaseLow;
      union {
 struct {
   BYTE BaseMid;
   BYTE Flags1;
   BYTE Flags2;
   BYTE BaseHi;
 } Bytes;
 struct {
   DWORD BaseMid : 8;
   DWORD Type : 5;
   DWORD Dpl : 2;
   DWORD Pres : 1;
   DWORD LimitHi : 4;
   DWORD Sys : 1;
   DWORD Reserved_0 : 1;
   DWORD Default_Big : 1;
   DWORD Granularity : 1;
   DWORD BaseHi : 8;
 } Bits;
      } HighWord;
    } LDT_ENTRY,*PLDT_ENTRY;
    typedef struct _EXCEPTION_RECORD {
      DWORD ExceptionCode;
      DWORD ExceptionFlags;
      struct _EXCEPTION_RECORD *ExceptionRecord;
      PVOID ExceptionAddress;
      DWORD NumberParameters;
      ULONG_PTR ExceptionInformation[15];
    } EXCEPTION_RECORD;
    typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;
    typedef struct _EXCEPTION_RECORD32 {
      DWORD ExceptionCode;
      DWORD ExceptionFlags;
      DWORD ExceptionRecord;
      DWORD ExceptionAddress;
      DWORD NumberParameters;
      DWORD ExceptionInformation[15];
    } EXCEPTION_RECORD32,*PEXCEPTION_RECORD32;
    typedef struct _EXCEPTION_RECORD64 {
      DWORD ExceptionCode;
      DWORD ExceptionFlags;
      DWORD64 ExceptionRecord;
      DWORD64 ExceptionAddress;
      DWORD NumberParameters;
      DWORD __unusedAlignment;
      DWORD64 ExceptionInformation[15];
    } EXCEPTION_RECORD64,*PEXCEPTION_RECORD64;
    typedef struct _EXCEPTION_POINTERS {
      PEXCEPTION_RECORD ExceptionRecord;
      PCONTEXT ContextRecord;
    } EXCEPTION_POINTERS,*PEXCEPTION_POINTERS;
    typedef PVOID PACCESS_TOKEN;
    typedef PVOID PSECURITY_DESCRIPTOR;
    typedef PVOID PSID;
    typedef PVOID PCLAIMS_BLOB;
    typedef DWORD ACCESS_MASK;
    typedef ACCESS_MASK *PACCESS_MASK;
    typedef struct _GENERIC_MAPPING {
      ACCESS_MASK GenericRead;
      ACCESS_MASK GenericWrite;
      ACCESS_MASK GenericExecute;
      ACCESS_MASK GenericAll;
    } GENERIC_MAPPING;
    typedef GENERIC_MAPPING *PGENERIC_MAPPING;
#pragma pack(push,4)
    typedef struct _LUID_AND_ATTRIBUTES {
      LUID Luid;
      DWORD Attributes;
    } LUID_AND_ATTRIBUTES,*PLUID_AND_ATTRIBUTES;
    typedef LUID_AND_ATTRIBUTES LUID_AND_ATTRIBUTES_ARRAY[1];
    typedef LUID_AND_ATTRIBUTES_ARRAY *PLUID_AND_ATTRIBUTES_ARRAY;
#pragma pack(pop)
    typedef struct _SID_IDENTIFIER_AUTHORITY {
      BYTE Value[6];
    } SID_IDENTIFIER_AUTHORITY,*PSID_IDENTIFIER_AUTHORITY;
    typedef struct _SID {
      BYTE Revision;
      BYTE SubAuthorityCount;
      SID_IDENTIFIER_AUTHORITY IdentifierAuthority;
      DWORD SubAuthority[1];
    } SID,*PISID;
    typedef enum _SID_NAME_USE {
      SidTypeUser = 1,SidTypeGroup,SidTypeDomain,SidTypeAlias,SidTypeWellKnownGroup,SidTypeDeletedAccount,SidTypeInvalid,SidTypeUnknown,SidTypeComputer,SidTypeLabel,SidTypeLogonSession
    } SID_NAME_USE,*PSID_NAME_USE;
    typedef struct _SID_AND_ATTRIBUTES {
      PSID Sid;
      DWORD Attributes;
    } SID_AND_ATTRIBUTES,*PSID_AND_ATTRIBUTES;
    typedef SID_AND_ATTRIBUTES SID_AND_ATTRIBUTES_ARRAY[1];
    typedef SID_AND_ATTRIBUTES_ARRAY *PSID_AND_ATTRIBUTES_ARRAY;
    typedef ULONG_PTR SID_HASH_ENTRY, *PSID_HASH_ENTRY;
    typedef struct _SID_AND_ATTRIBUTES_HASH {
      DWORD SidCount;
      PSID_AND_ATTRIBUTES SidAttr;
      SID_HASH_ENTRY Hash[32];
    } SID_AND_ATTRIBUTES_HASH, *PSID_AND_ATTRIBUTES_HASH;
    typedef enum {
      WinNullSid = 0,WinWorldSid = 1,WinLocalSid = 2,WinCreatorOwnerSid = 3,
      WinCreatorGroupSid = 4,WinCreatorOwnerServerSid = 5,
      WinCreatorGroupServerSid = 6,WinNtAuthoritySid = 7,WinDialupSid = 8,
      WinNetworkSid = 9,WinBatchSid = 10,WinInteractiveSid = 11,
      WinServiceSid = 12,WinAnonymousSid = 13,WinProxySid = 14,
      WinEnterpriseControllersSid = 15,WinSelfSid = 16,
      WinAuthenticatedUserSid = 17,WinRestrictedCodeSid = 18,
      WinTerminalServerSid = 19,WinRemoteLogonIdSid = 20,WinLogonIdsSid = 21,
      WinLocalSystemSid = 22,WinLocalServiceSid = 23,WinNetworkServiceSid = 24,
      WinBuiltinDomainSid = 25,WinBuiltinAdministratorsSid = 26,
      WinBuiltinUsersSid = 27,WinBuiltinGuestsSid = 28,
      WinBuiltinPowerUsersSid = 29,WinBuiltinAccountOperatorsSid = 30,
      WinBuiltinSystemOperatorsSid = 31,WinBuiltinPrintOperatorsSid = 32,
      WinBuiltinBackupOperatorsSid = 33,WinBuiltinReplicatorSid = 34,
      WinBuiltinPreWindows2000CompatibleAccessSid = 35,
      WinBuiltinRemoteDesktopUsersSid = 36,
      WinBuiltinNetworkConfigurationOperatorsSid = 37,
      WinAccountAdministratorSid = 38,WinAccountGuestSid = 39,
      WinAccountKrbtgtSid = 40,WinAccountDomainAdminsSid = 41,
      WinAccountDomainUsersSid = 42,WinAccountDomainGuestsSid = 43,
      WinAccountComputersSid = 44,WinAccountControllersSid = 45,
      WinAccountCertAdminsSid = 46,WinAccountSchemaAdminsSid = 47,
      WinAccountEnterpriseAdminsSid = 48,WinAccountPolicyAdminsSid = 49,
      WinAccountRasAndIasServersSid = 50,WinNTLMAuthenticationSid = 51,
      WinDigestAuthenticationSid = 52,WinSChannelAuthenticationSid = 53,
      WinThisOrganizationSid = 54,WinOtherOrganizationSid = 55,
      WinBuiltinIncomingForestTrustBuildersSid = 56,
      WinBuiltinPerfMonitoringUsersSid = 57,WinBuiltinPerfLoggingUsersSid = 58,
      WinBuiltinAuthorizationAccessSid = 59,
      WinBuiltinTerminalServerLicenseServersSid = 60,
      WinBuiltinDCOMUsersSid = 61,WinBuiltinIUsersSid = 62,
      WinIUserSid = 63, WinBuiltinCryptoOperatorsSid = 64,
      WinUntrustedLabelSid = 65, WinLowLabelSid = 66, WinMediumLabelSid = 67,
      WinHighLabelSid = 68, WinSystemLabelSid = 69, WinWriteRestrictedCodeSid = 70,
      WinCreatorOwnerRightsSid = 71, WinCacheablePrincipalsGroupSid = 72,
      WinNonCacheablePrincipalsGroupSid = 73, WinEnterpriseReadonlyControllersSid = 74,
      WinAccountReadonlyControllersSid = 75, WinBuiltinEventLogReadersGroup = 76,
      WinNewEnterpriseReadonlyControllersSid = 77, WinBuiltinCertSvcDComAccessGroup = 78,
      WinMediumPlusLabelSid = 79, WinLocalLogonSid = 80, WinConsoleLogonSid = 81,
      WinThisOrganizationCertificateSid = 82, WinApplicationPackageAuthoritySid = 83,
      WinBuiltinAnyPackageSid = 84, WinCapabilityInternetClientSid = 85,
      WinCapabilityInternetClientServerSid = 86,
      WinCapabilityPrivateNetworkClientServerSid = 87,
      WinCapabilityPicturesLibrarySid = 88, WinCapabilityVideosLibrarySid = 89,
      WinCapabilityMusicLibrarySid = 90, WinCapabilityDocumentsLibrarySid = 91,
      WinCapabilitySharedUserCertificatesSid = 92, WinCapabilityEnterpriseAuthenticationSid = 93,
      WinCapabilityRemovableStorageSid = 94, WinBuiltinRDSRemoteAccessServersSid = 95,
      WinBuiltinRDSEndpointServersSid = 96, WinBuiltinRDSManagementServersSid = 97,
      WinUserModeDriversSid = 98, WinBuiltinHyperVAdminsSid = 99,
      WinAccountCloneableControllersSid = 100,
      WinBuiltinAccessControlAssistanceOperatorsSid = 101,
      WinBuiltinRemoteManagementUsersSid = 102, WinAuthenticationAuthorityAssertedSid = 103,
      WinAuthenticationServiceAssertedSid = 104,
      WinLocalAccountSid = 105,
      WinLocalAccountAndAdministratorSid = 106,
      WinAccountProtectedUsersSid = 107,
      WinCapabilityAppointmentsSid = 108,
      WinCapabilityContactsSid = 109,
      WinAccountDefaultSystemManagedSid = 110,
      WinBuiltinDefaultSystemManagedGroupSid = 111,
      WinBuiltinStorageReplicaAdminsSid = 112,
      WinAccountKeyAdminsSid = 113,
      WinAccountEnterpriseKeyAdminsSid = 114,
      WinAuthenticationKeyTrustSid = 115,
      WinAuthenticationKeyPropertyMFASid = 116,
      WinAuthenticationKeyPropertyAttestationSid = 117
} WELL_KNOWN_SID_TYPE;
    typedef struct _ACL {
      BYTE AclRevision;
      BYTE Sbz1;
      WORD AclSize;
      WORD AceCount;
      WORD Sbz2;
    } ACL;
    typedef ACL *PACL;
    typedef struct _ACE_HEADER {
      BYTE AceType;
      BYTE AceFlags;
      WORD AceSize;
    } ACE_HEADER;
    typedef ACE_HEADER *PACE_HEADER;
    typedef struct _ACCESS_ALLOWED_ACE {
      ACE_HEADER Header;
      ACCESS_MASK Mask;
      DWORD SidStart;
    } ACCESS_ALLOWED_ACE;
    typedef ACCESS_ALLOWED_ACE *PACCESS_ALLOWED_ACE;
    typedef struct _ACCESS_DENIED_ACE {
      ACE_HEADER Header;
      ACCESS_MASK Mask;
      DWORD SidStart;
    } ACCESS_DENIED_ACE;
    typedef ACCESS_DENIED_ACE *PACCESS_DENIED_ACE;
    typedef struct _SYSTEM_AUDIT_ACE {
      ACE_HEADER Header;
      ACCESS_MASK Mask;
      DWORD SidStart;
    } SYSTEM_AUDIT_ACE;
    typedef SYSTEM_AUDIT_ACE *PSYSTEM_AUDIT_ACE;
    typedef struct _SYSTEM_ALARM_ACE {
      ACE_HEADER Header;
      ACCESS_MASK Mask;
      DWORD SidStart;
    } SYSTEM_ALARM_ACE;
    typedef SYSTEM_ALARM_ACE *PSYSTEM_ALARM_ACE;
    typedef struct _SYSTEM_RESOURCE_ATTRIBUTE_ACE {
      ACE_HEADER Header;
      ACCESS_MASK Mask;
      DWORD SidStart;
    } SYSTEM_RESOURCE_ATTRIBUTE_ACE,*PSYSTEM_RESOURCE_ATTRIBUTE_ACE;
    typedef struct _SYSTEM_SCOPED_POLICY_ID_ACE {
      ACE_HEADER Header;
      ACCESS_MASK Mask;
      DWORD SidStart;
    } SYSTEM_SCOPED_POLICY_ID_ACE,*PSYSTEM_SCOPED_POLICY_ID_ACE;
    typedef struct _SYSTEM_MANDATORY_LABEL_ACE {
      ACE_HEADER Header;
      ACCESS_MASK Mask;
      DWORD SidStart;
    } SYSTEM_MANDATORY_LABEL_ACE, *PSYSTEM_MANDATORY_LABEL_ACE;
    typedef struct _ACCESS_ALLOWED_OBJECT_ACE {
      ACE_HEADER Header;
      ACCESS_MASK Mask;
      DWORD Flags;
      GUID ObjectType;
      GUID InheritedObjectType;
      DWORD SidStart;
    } ACCESS_ALLOWED_OBJECT_ACE,*PACCESS_ALLOWED_OBJECT_ACE;
    typedef struct _ACCESS_DENIED_OBJECT_ACE {
      ACE_HEADER Header;
      ACCESS_MASK Mask;
      DWORD Flags;
      GUID ObjectType;
      GUID InheritedObjectType;
      DWORD SidStart;
    } ACCESS_DENIED_OBJECT_ACE,*PACCESS_DENIED_OBJECT_ACE;
    typedef struct _SYSTEM_AUDIT_OBJECT_ACE {
      ACE_HEADER Header;
      ACCESS_MASK Mask;
      DWORD Flags;
      GUID ObjectType;
      GUID InheritedObjectType;
      DWORD SidStart;
    } SYSTEM_AUDIT_OBJECT_ACE,*PSYSTEM_AUDIT_OBJECT_ACE;
    typedef struct _SYSTEM_ALARM_OBJECT_ACE {
      ACE_HEADER Header;
      ACCESS_MASK Mask;
      DWORD Flags;
      GUID ObjectType;
      GUID InheritedObjectType;
      DWORD SidStart;
    } SYSTEM_ALARM_OBJECT_ACE,*PSYSTEM_ALARM_OBJECT_ACE;
    typedef struct _ACCESS_ALLOWED_CALLBACK_ACE {
      ACE_HEADER Header;
      ACCESS_MASK Mask;
      DWORD SidStart;
    } ACCESS_ALLOWED_CALLBACK_ACE,*PACCESS_ALLOWED_CALLBACK_ACE;
    typedef struct _ACCESS_DENIED_CALLBACK_ACE {
      ACE_HEADER Header;
      ACCESS_MASK Mask;
      DWORD SidStart;
    } ACCESS_DENIED_CALLBACK_ACE,*PACCESS_DENIED_CALLBACK_ACE;
    typedef struct _SYSTEM_AUDIT_CALLBACK_ACE {
      ACE_HEADER Header;
      ACCESS_MASK Mask;
      DWORD SidStart;
    } SYSTEM_AUDIT_CALLBACK_ACE,*PSYSTEM_AUDIT_CALLBACK_ACE;
    typedef struct _SYSTEM_ALARM_CALLBACK_ACE {
      ACE_HEADER Header;
      ACCESS_MASK Mask;
      DWORD SidStart;
    } SYSTEM_ALARM_CALLBACK_ACE,*PSYSTEM_ALARM_CALLBACK_ACE;
    typedef struct _ACCESS_ALLOWED_CALLBACK_OBJECT_ACE {
      ACE_HEADER Header;
      ACCESS_MASK Mask;
      DWORD Flags;
      GUID ObjectType;
      GUID InheritedObjectType;
      DWORD SidStart;
    } ACCESS_ALLOWED_CALLBACK_OBJECT_ACE,*PACCESS_ALLOWED_CALLBACK_OBJECT_ACE;
    typedef struct _ACCESS_DENIED_CALLBACK_OBJECT_ACE {
      ACE_HEADER Header;
      ACCESS_MASK Mask;
      DWORD Flags;
      GUID ObjectType;
      GUID InheritedObjectType;
      DWORD SidStart;
    } ACCESS_DENIED_CALLBACK_OBJECT_ACE,*PACCESS_DENIED_CALLBACK_OBJECT_ACE;
    typedef struct _SYSTEM_AUDIT_CALLBACK_OBJECT_ACE {
      ACE_HEADER Header;
      ACCESS_MASK Mask;
      DWORD Flags;
      GUID ObjectType;
      GUID InheritedObjectType;
      DWORD SidStart;
    } SYSTEM_AUDIT_CALLBACK_OBJECT_ACE,*PSYSTEM_AUDIT_CALLBACK_OBJECT_ACE;
    typedef struct _SYSTEM_ALARM_CALLBACK_OBJECT_ACE {
      ACE_HEADER Header;
      ACCESS_MASK Mask;
      DWORD Flags;
      GUID ObjectType;
      GUID InheritedObjectType;
      DWORD SidStart;
    } SYSTEM_ALARM_CALLBACK_OBJECT_ACE,*PSYSTEM_ALARM_CALLBACK_OBJECT_ACE;
    typedef enum _ACL_INFORMATION_CLASS {
      AclRevisionInformation = 1,AclSizeInformation
    } ACL_INFORMATION_CLASS;
    typedef struct _ACL_REVISION_INFORMATION {
      DWORD AclRevision;
    } ACL_REVISION_INFORMATION;
    typedef ACL_REVISION_INFORMATION *PACL_REVISION_INFORMATION;
    typedef struct _ACL_SIZE_INFORMATION {
      DWORD AceCount;
      DWORD AclBytesInUse;
      DWORD AclBytesFree;
    } ACL_SIZE_INFORMATION;
    typedef ACL_SIZE_INFORMATION *PACL_SIZE_INFORMATION;
    typedef WORD SECURITY_DESCRIPTOR_CONTROL,*PSECURITY_DESCRIPTOR_CONTROL;
    typedef struct _SECURITY_DESCRIPTOR_RELATIVE {
      BYTE Revision;
      BYTE Sbz1;
      SECURITY_DESCRIPTOR_CONTROL Control;
      DWORD Owner;
      DWORD Group;
      DWORD Sacl;
      DWORD Dacl;
    } SECURITY_DESCRIPTOR_RELATIVE,*PISECURITY_DESCRIPTOR_RELATIVE;
    typedef struct _SECURITY_DESCRIPTOR {
      BYTE Revision;
      BYTE Sbz1;
      SECURITY_DESCRIPTOR_CONTROL Control;
      PSID Owner;
      PSID Group;
      PACL Sacl;
      PACL Dacl;
    } SECURITY_DESCRIPTOR,*PISECURITY_DESCRIPTOR;
    typedef struct _OBJECT_TYPE_LIST {
      WORD Level;
      WORD Sbz;
      GUID *ObjectType;
    } OBJECT_TYPE_LIST,*POBJECT_TYPE_LIST;
    typedef enum _AUDIT_EVENT_TYPE {
      AuditEventObjectAccess,AuditEventDirectoryServiceAccess
    } AUDIT_EVENT_TYPE,*PAUDIT_EVENT_TYPE;
    typedef struct _PRIVILEGE_SET {
      DWORD PrivilegeCount;
      DWORD Control;
      LUID_AND_ATTRIBUTES Privilege[1];
    } PRIVILEGE_SET,*PPRIVILEGE_SET;
    typedef enum _ACCESS_REASON_TYPE {
      AccessReasonNone = 0x00000000,
      AccessReasonAllowedAce = 0x00010000,
      AccessReasonDeniedAce = 0x00020000,
      AccessReasonAllowedParentAce = 0x00030000,
      AccessReasonDeniedParentAce = 0x00040000,
      AccessReasonNotGrantedByCape = 0x00050000,
      AccessReasonNotGrantedByParentCape = 0x00060000,
      AccessReasonNotGrantedToAppContainer = 0x00070000,
      AccessReasonMissingPrivilege = 0x00100000,
      AccessReasonFromPrivilege = 0x00200000,
      AccessReasonIntegrityLevel = 0x00300000,
      AccessReasonOwnership = 0x00400000,
      AccessReasonNullDacl = 0x00500000,
      AccessReasonEmptyDacl = 0x00600000,
      AccessReasonNoSD = 0x00700000,
      AccessReasonNoGrant = 0x00800000
    } ACCESS_REASON_TYPE;
    typedef DWORD ACCESS_REASON;
    typedef struct _ACCESS_REASONS {
      ACCESS_REASON Data[32];
    } ACCESS_REASONS,*PACCESS_REASONS;
    typedef struct _SE_SECURITY_DESCRIPTOR {
      DWORD Size;
      DWORD Flags;
      PSECURITY_DESCRIPTOR SecurityDescriptor;
    } SE_SECURITY_DESCRIPTOR,*PSE_SECURITY_DESCRIPTOR;
    typedef struct _SE_ACCESS_REQUEST {
      DWORD Size;
      PSE_SECURITY_DESCRIPTOR SeSecurityDescriptor;
      ACCESS_MASK DesiredAccess;
      ACCESS_MASK PreviouslyGrantedAccess;
      PSID PrincipalSelfSid;
      PGENERIC_MAPPING GenericMapping;
      DWORD ObjectTypeListCount;
      POBJECT_TYPE_LIST ObjectTypeList;
    } SE_ACCESS_REQUEST,*PSE_ACCESS_REQUEST;
    typedef struct _SE_ACCESS_REPLY {
      DWORD Size;
      DWORD ResultListCount;
      PACCESS_MASK GrantedAccess;
      PDWORD AccessStatus;
      PACCESS_REASONS AccessReason;
      PPRIVILEGE_SET *Privileges;
    } SE_ACCESS_REPLY,*PSE_ACCESS_REPLY;
    typedef enum _SECURITY_IMPERSONATION_LEVEL {
      SecurityAnonymous,SecurityIdentification,SecurityImpersonation,SecurityDelegation
    } SECURITY_IMPERSONATION_LEVEL,*PSECURITY_IMPERSONATION_LEVEL;
    typedef enum _TOKEN_TYPE {
      TokenPrimary = 1,TokenImpersonation
    } TOKEN_TYPE;
    typedef TOKEN_TYPE *PTOKEN_TYPE;
    typedef enum _TOKEN_ELEVATION_TYPE {
      TokenElevationTypeDefault = 1,
      TokenElevationTypeFull,
      TokenElevationTypeLimited
    } TOKEN_ELEVATION_TYPE, *PTOKEN_ELEVATION_TYPE;
    typedef enum _TOKEN_INFORMATION_CLASS {
      TokenUser = 1,
      TokenGroups,
      TokenPrivileges,
      TokenOwner,
      TokenPrimaryGroup,
      TokenDefaultDacl,
      TokenSource,
      TokenType,
      TokenImpersonationLevel,
      TokenStatistics,
      TokenRestrictedSids,
      TokenSessionId,
      TokenGroupsAndPrivileges,
      TokenSessionReference,
      TokenSandBoxInert,
      TokenAuditPolicy,
      TokenOrigin,
      TokenElevationType,
      TokenLinkedToken,
      TokenElevation,
      TokenHasRestrictions,
      TokenAccessInformation,
      TokenVirtualizationAllowed,
      TokenVirtualizationEnabled,
      TokenIntegrityLevel,
      TokenUIAccess,
      TokenMandatoryPolicy,
      TokenLogonSid,
      TokenIsAppContainer,
      TokenCapabilities,
      TokenAppContainerSid,
      TokenAppContainerNumber,
      TokenUserClaimAttributes,
      TokenDeviceClaimAttributes,
      TokenRestrictedUserClaimAttributes,
      TokenRestrictedDeviceClaimAttributes,
      TokenDeviceGroups,
      TokenRestrictedDeviceGroups,
      TokenSecurityAttributes,
      TokenIsRestricted,
      MaxTokenInfoClass
    } TOKEN_INFORMATION_CLASS,*PTOKEN_INFORMATION_CLASS;
    typedef struct _TOKEN_USER {
      SID_AND_ATTRIBUTES User;
    } TOKEN_USER,*PTOKEN_USER;
    typedef struct _TOKEN_GROUPS {
      DWORD GroupCount;
      SID_AND_ATTRIBUTES Groups[1];
    } TOKEN_GROUPS,*PTOKEN_GROUPS;
    typedef struct _TOKEN_PRIVILEGES {
      DWORD PrivilegeCount;
      LUID_AND_ATTRIBUTES Privileges[1];
    } TOKEN_PRIVILEGES,*PTOKEN_PRIVILEGES;
    typedef struct _TOKEN_OWNER {
      PSID Owner;
    } TOKEN_OWNER,*PTOKEN_OWNER;
    typedef struct _TOKEN_PRIMARY_GROUP {
      PSID PrimaryGroup;
    } TOKEN_PRIMARY_GROUP,*PTOKEN_PRIMARY_GROUP;
    typedef struct _TOKEN_DEFAULT_DACL {
      PACL DefaultDacl;
    } TOKEN_DEFAULT_DACL,*PTOKEN_DEFAULT_DACL;
    typedef struct _TOKEN_USER_CLAIMS {
      PCLAIMS_BLOB UserClaims;
    } TOKEN_USER_CLAIMS,*PTOKEN_USER_CLAIMS;
    typedef struct _TOKEN_DEVICE_CLAIMS {
      PCLAIMS_BLOB DeviceClaims;
    } TOKEN_DEVICE_CLAIMS,*PTOKEN_DEVICE_CLAIMS;
    typedef struct _TOKEN_GROUPS_AND_PRIVILEGES {
      DWORD SidCount;
      DWORD SidLength;
      PSID_AND_ATTRIBUTES Sids;
      DWORD RestrictedSidCount;
      DWORD RestrictedSidLength;
      PSID_AND_ATTRIBUTES RestrictedSids;
      DWORD PrivilegeCount;
      DWORD PrivilegeLength;
      PLUID_AND_ATTRIBUTES Privileges;
      LUID AuthenticationId;
    } TOKEN_GROUPS_AND_PRIVILEGES,*PTOKEN_GROUPS_AND_PRIVILEGES;
    typedef struct _TOKEN_LINKED_TOKEN {
      HANDLE LinkedToken;
    } TOKEN_LINKED_TOKEN,*PTOKEN_LINKED_TOKEN;
    typedef struct _TOKEN_ELEVATION {
      DWORD TokenIsElevated;
    } TOKEN_ELEVATION,*PTOKEN_ELEVATION;
    typedef struct _TOKEN_MANDATORY_LABEL {
      SID_AND_ATTRIBUTES Label;
    } TOKEN_MANDATORY_LABEL,*PTOKEN_MANDATORY_LABEL;
    typedef struct _TOKEN_MANDATORY_POLICY {
      DWORD Policy;
    } TOKEN_MANDATORY_POLICY,*PTOKEN_MANDATORY_POLICY;
    typedef struct _TOKEN_ACCESS_INFORMATION {
      PSID_AND_ATTRIBUTES_HASH SidHash;
      PSID_AND_ATTRIBUTES_HASH RestrictedSidHash;
      PTOKEN_PRIVILEGES Privileges;
      LUID AuthenticationId;
      TOKEN_TYPE TokenType;
      SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
      TOKEN_MANDATORY_POLICY MandatoryPolicy;
      DWORD Flags;
      DWORD AppContainerNumber;
      PSID PackageSid;
      PSID_AND_ATTRIBUTES_HASH CapabilitiesHash;
    } TOKEN_ACCESS_INFORMATION,*PTOKEN_ACCESS_INFORMATION;
    typedef struct _TOKEN_AUDIT_POLICY {
      UCHAR PerUserPolicy[(((56)) >> 1) + 1];
    } TOKEN_AUDIT_POLICY, *PTOKEN_AUDIT_POLICY;
    typedef struct _TOKEN_SOURCE {
      CHAR SourceName[8];
      LUID SourceIdentifier;
    } TOKEN_SOURCE,*PTOKEN_SOURCE;
    typedef struct _TOKEN_STATISTICS {
      LUID TokenId;
      LUID AuthenticationId;
      LARGE_INTEGER ExpirationTime;
      TOKEN_TYPE TokenType;
      SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
      DWORD DynamicCharged;
      DWORD DynamicAvailable;
      DWORD GroupCount;
      DWORD PrivilegeCount;
      LUID ModifiedId;
    } TOKEN_STATISTICS,*PTOKEN_STATISTICS;
    typedef struct _TOKEN_CONTROL {
      LUID TokenId;
      LUID AuthenticationId;
      LUID ModifiedId;
      TOKEN_SOURCE TokenSource;
    } TOKEN_CONTROL,*PTOKEN_CONTROL;
    typedef struct _TOKEN_ORIGIN {
      LUID OriginatingLogonSession;
    } TOKEN_ORIGIN,*PTOKEN_ORIGIN;
    typedef enum _MANDATORY_LEVEL {
      MandatoryLevelUntrusted = 0,
      MandatoryLevelLow,
      MandatoryLevelMedium,
      MandatoryLevelHigh,
      MandatoryLevelSystem,
      MandatoryLevelSecureProcess,
      MandatoryLevelCount
    } MANDATORY_LEVEL,*PMANDATORY_LEVEL;
    typedef struct _TOKEN_APPCONTAINER_INFORMATION {
      PSID TokenAppContainer;
    } TOKEN_APPCONTAINER_INFORMATION,*PTOKEN_APPCONTAINER_INFORMATION;
    typedef struct _CLAIM_SECURITY_ATTRIBUTE_FQBN_VALUE {
      DWORD64 Version;
      PWSTR Name;
    } CLAIM_SECURITY_ATTRIBUTE_FQBN_VALUE,*PCLAIM_SECURITY_ATTRIBUTE_FQBN_VALUE;
    typedef struct _CLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_VALUE {
      PVOID pValue;
      DWORD ValueLength;
    } CLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_VALUE, *PCLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_VALUE;
    typedef struct _CLAIM_SECURITY_ATTRIBUTE_V1 {
      PWSTR Name;
      WORD ValueType;
      WORD Reserved;
      DWORD Flags;
      DWORD ValueCount;
      union {
 PLONG64 pInt64;
 PDWORD64 pUint64;
 PWSTR *ppString;
 PCLAIM_SECURITY_ATTRIBUTE_FQBN_VALUE pFqbn;
 PCLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_VALUE pOctetString;
      } Values;
    } CLAIM_SECURITY_ATTRIBUTE_V1,*PCLAIM_SECURITY_ATTRIBUTE_V1;
    typedef struct _CLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1 {
      DWORD Name;
      WORD ValueType;
      WORD Reserved;
      DWORD Flags;
      DWORD ValueCount;
      union {
 DWORD pInt64[1];
 DWORD pUint64[1];
 DWORD ppString[1];
 DWORD pFqbn[1];
 DWORD pOctetString[1];
      } Values;
    } CLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1,*PCLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1;
    typedef struct _CLAIM_SECURITY_ATTRIBUTES_INFORMATION {
      WORD Version;
      WORD Reserved;
      DWORD AttributeCount;
      union {
 PCLAIM_SECURITY_ATTRIBUTE_V1 pAttributeV1;
      } Attribute;
    } CLAIM_SECURITY_ATTRIBUTES_INFORMATION,*PCLAIM_SECURITY_ATTRIBUTES_INFORMATION;
    typedef BOOLEAN SECURITY_CONTEXT_TRACKING_MODE,*PSECURITY_CONTEXT_TRACKING_MODE;
    typedef struct _SECURITY_QUALITY_OF_SERVICE {
      DWORD Length;
      SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
      SECURITY_CONTEXT_TRACKING_MODE ContextTrackingMode;
      BOOLEAN EffectiveOnly;
    } SECURITY_QUALITY_OF_SERVICE,*PSECURITY_QUALITY_OF_SERVICE;
    typedef struct _SE_IMPERSONATION_STATE {
      PACCESS_TOKEN Token;
      BOOLEAN CopyOnOpen;
      BOOLEAN EffectiveOnly;
      SECURITY_IMPERSONATION_LEVEL Level;
    } SE_IMPERSONATION_STATE,*PSE_IMPERSONATION_STATE;
    typedef DWORD SECURITY_INFORMATION,*PSECURITY_INFORMATION;
    typedef enum _SE_LEARNING_MODE_DATA_TYPE {
      SeLearningModeInvalidType = 0,
      SeLearningModeSettings,
      SeLearningModeMax
    } SE_LEARNING_MODE_DATA_TYPE;
    typedef struct _SECURITY_CAPABILITIES {
      PSID AppContainerSid;
      PSID_AND_ATTRIBUTES Capabilities;
      DWORD CapabilityCount;
      DWORD Reserved;
    } SECURITY_CAPABILITIES,*PSECURITY_CAPABILITIES,*LPSECURITY_CAPABILITIES;
    typedef struct _JOB_SET_ARRAY {
      HANDLE JobHandle;
      DWORD MemberLevel;
      DWORD Flags;
    } JOB_SET_ARRAY,*PJOB_SET_ARRAY;
    typedef struct _EXCEPTION_REGISTRATION_RECORD {
      __extension__ union {
        struct _EXCEPTION_REGISTRATION_RECORD *Next;
        struct _EXCEPTION_REGISTRATION_RECORD *prev;
      };
      __extension__ union {
        PEXCEPTION_ROUTINE Handler;
        PEXCEPTION_ROUTINE handler;
      };
    } EXCEPTION_REGISTRATION_RECORD;
    typedef EXCEPTION_REGISTRATION_RECORD *PEXCEPTION_REGISTRATION_RECORD;
    typedef EXCEPTION_REGISTRATION_RECORD EXCEPTION_REGISTRATION;
    typedef PEXCEPTION_REGISTRATION_RECORD PEXCEPTION_REGISTRATION;
    __extension__ typedef struct _NT_TIB {
      struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList;
      PVOID StackBase;
      PVOID StackLimit;
      PVOID SubSystemTib;
      __extension__ union {
 PVOID FiberData;
 DWORD Version;
      };
      PVOID ArbitraryUserPointer;
      struct _NT_TIB *Self;
    } NT_TIB;
    typedef NT_TIB *PNT_TIB;
    __extension__ typedef struct _NT_TIB32 {
      DWORD ExceptionList;
      DWORD StackBase;
      DWORD StackLimit;
      DWORD SubSystemTib;
      __extension__ union {
 DWORD FiberData;
 DWORD Version;
      };
      DWORD ArbitraryUserPointer;
      DWORD Self;
    } NT_TIB32,*PNT_TIB32;
    __extension__ typedef struct _NT_TIB64 {
      DWORD64 ExceptionList;
      DWORD64 StackBase;
      DWORD64 StackLimit;
      DWORD64 SubSystemTib;
      __extension__ union {
 DWORD64 FiberData;
 DWORD Version;
      };
      DWORD64 ArbitraryUserPointer;
      DWORD64 Self;
    } NT_TIB64,*PNT_TIB64;
    typedef struct _UMS_CREATE_THREAD_ATTRIBUTES {
      DWORD UmsVersion;
      PVOID UmsContext;
      PVOID UmsCompletionList;
    } UMS_CREATE_THREAD_ATTRIBUTES,*PUMS_CREATE_THREAD_ATTRIBUTES;
    typedef struct _QUOTA_LIMITS {
      SIZE_T PagedPoolLimit;
      SIZE_T NonPagedPoolLimit;
      SIZE_T MinimumWorkingSetSize;
      SIZE_T MaximumWorkingSetSize;
      SIZE_T PagefileLimit;
      LARGE_INTEGER TimeLimit;
    } QUOTA_LIMITS,*PQUOTA_LIMITS;
    typedef union _RATE_QUOTA_LIMIT {
      DWORD RateData;
      __extension__ struct {
        DWORD RatePercent : 7;
        DWORD Reserved0 : 25;
      } ;
    } RATE_QUOTA_LIMIT, *PRATE_QUOTA_LIMIT;
    typedef struct _QUOTA_LIMITS_EX {
      SIZE_T PagedPoolLimit;
      SIZE_T NonPagedPoolLimit;
      SIZE_T MinimumWorkingSetSize;
      SIZE_T MaximumWorkingSetSize;
      SIZE_T PagefileLimit;
      LARGE_INTEGER TimeLimit;
      SIZE_T WorkingSetLimit;
      SIZE_T Reserved2;
      SIZE_T Reserved3;
      SIZE_T Reserved4;
      DWORD Flags;
      RATE_QUOTA_LIMIT CpuRateLimit;
    } QUOTA_LIMITS_EX,*PQUOTA_LIMITS_EX;
    typedef struct _IO_COUNTERS {
      ULONGLONG ReadOperationCount;
      ULONGLONG WriteOperationCount;
      ULONGLONG OtherOperationCount;
      ULONGLONG ReadTransferCount;
      ULONGLONG WriteTransferCount;
      ULONGLONG OtherTransferCount;
    } IO_COUNTERS;
    typedef IO_COUNTERS *PIO_COUNTERS;
    typedef enum _HARDWARE_COUNTER_TYPE {
      PMCCounter,
      MaxHardwareCounterType
    } HARDWARE_COUNTER_TYPE, *PHARDWARE_COUNTER_TYPE;
    typedef enum _PROCESS_MITIGATION_POLICY {
      ProcessDEPPolicy,
      ProcessASLRPolicy,
      ProcessDynamicCodePolicy,
      ProcessStrictHandleCheckPolicy,
      ProcessSystemCallDisablePolicy,
      ProcessMitigationOptionsMask,
      ProcessExtensionPointDisablePolicy,
      ProcessControlFlowGuardPolicy,
      ProcessSignaturePolicy,
      ProcessFontDisablePolicy,
      ProcessImageLoadPolicy,
      MaxProcessMitigationPolicy
    } PROCESS_MITIGATION_POLICY,*PPROCESS_MITIGATION_POLICY;
    typedef struct _PROCESS_MITIGATION_ASLR_POLICY {
      __extension__ union {
        DWORD Flags;
        __extension__ struct {
          DWORD EnableBottomUpRandomization : 1;
          DWORD EnableForceRelocateImages : 1;
          DWORD EnableHighEntropy : 1;
          DWORD DisallowStrippedImages : 1;
          DWORD ReservedFlags : 28;
        };
      };
    } PROCESS_MITIGATION_ASLR_POLICY,*PPROCESS_MITIGATION_ASLR_POLICY;
    typedef struct _PROCESS_MITIGATION_DEP_POLICY {
      __extension__ union {
        DWORD Flags;
        __extension__ struct {
          DWORD Enable : 1;
          DWORD DisableAtlThunkEmulation : 1;
          DWORD ReservedFlags : 30;
        };
      };
      BOOLEAN Permanent;
    } PROCESS_MITIGATION_DEP_POLICY,*PPROCESS_MITIGATION_DEP_POLICY;
    typedef struct _PROCESS_MITIGATION_STRICT_HANDLE_CHECK_POLICY {
      __extension__ union {
        DWORD Flags;
        __extension__ struct {
          DWORD RaiseExceptionOnInvalidHandleReference : 1;
          DWORD HandleExceptionsPermanentlyEnabled : 1;
          DWORD ReservedFlags : 30;
        };
      };
    } PROCESS_MITIGATION_STRICT_HANDLE_CHECK_POLICY,*PPROCESS_MITIGATION_STRICT_HANDLE_CHECK_POLICY;
    typedef struct _PROCESS_MITIGATION_SYSTEM_CALL_DISABLE_POLICY {
      __extension__ union {
        DWORD Flags;
        __extension__ struct {
          DWORD DisallowWin32kSystemCalls : 1;
          DWORD ReservedFlags : 31;
        };
      };
    } PROCESS_MITIGATION_SYSTEM_CALL_DISABLE_POLICY,*PPROCESS_MITIGATION_SYSTEM_CALL_DISABLE_POLICY;
    typedef struct _PROCESS_MITIGATION_EXTENSION_POINT_DISABLE_POLICY {
      __extension__ union {
        DWORD Flags;
        __extension__ struct {
          DWORD DisableExtensionPoints : 1;
          DWORD ReservedFlags : 31;
        };
      };
    } PROCESS_MITIGATION_EXTENSION_POINT_DISABLE_POLICY,*PPROCESS_MITIGATION_EXTENSION_POINT_DISABLE_POLICY;
    typedef struct _PROCESS_MITIGATION_CONTROL_FLOW_GUARD_POLICY {
      __extension__ union {
        DWORD Flags;
        __extension__ struct {
          DWORD EnableControlFlowGuard :1;
          DWORD EnableExportSuppression :1;
          DWORD StrictMode :1;
          DWORD ReservedFlags :29;
        };
      };
    } PROCESS_MITIGATION_CONTROL_FLOW_GUARD_POLICY, *PPROCESS_MITIGATION_CONTROL_FLOW_GUARD_POLICY;
    typedef struct _PROCESS_MITIGATION_BINARY_SIGNATURE_POLICY {
      __extension__ union {
        DWORD Flags;
        __extension__ struct {
          DWORD MicrosoftSignedOnly :1;
          DWORD StoreSignedOnly :1;
          DWORD MitigationOptIn :1;
          DWORD ReservedFlags :29;
        };
      };
    } PROCESS_MITIGATION_BINARY_SIGNATURE_POLICY, *PPROCESS_MITIGATION_BINARY_SIGNATURE_POLICY;
    typedef struct _PROCESS_MITIGATION_DYNAMIC_CODE_POLICY {
      __extension__ union {
        DWORD Flags;
        __extension__ struct {
          DWORD ProhibitDynamicCode :1;
          DWORD AllowThreadOptOut :1;
          DWORD AllowRemoteDowngrade :1;
          DWORD ReservedFlags :30;
        };
      };
    } PROCESS_MITIGATION_DYNAMIC_CODE_POLICY, *PPROCESS_MITIGATION_DYNAMIC_CODE_POLICY;
    typedef struct _PROCESS_MITIGATION_FONT_DISABLE_POLICY {
      __extension__ union {
        DWORD Flags;
        __extension__ struct {
          DWORD DisableNonSystemFonts :1;
          DWORD AuditNonSystemFontLoading :1;
          DWORD ReservedFlags :30;
        };
      };
    } PROCESS_MITIGATION_FONT_DISABLE_POLICY, *PPROCESS_MITIGATION_FONT_DISABLE_POLICY;
    typedef struct _PROCESS_MITIGATION_IMAGE_LOAD_POLICY {
      __extension__ union {
        DWORD Flags;
        __extension__ struct {
          DWORD NoRemoteImages :1;
          DWORD NoLowMandatoryLabelImages :1;
          DWORD PreferSystem32Images :1;
          DWORD ReservedFlags :29;
        };
      };
    } PROCESS_MITIGATION_IMAGE_LOAD_POLICY, *PPROCESS_MITIGATION_IMAGE_LOAD_POLICY;
    typedef struct _JOBOBJECT_BASIC_ACCOUNTING_INFORMATION {
      LARGE_INTEGER TotalUserTime;
      LARGE_INTEGER TotalKernelTime;
      LARGE_INTEGER ThisPeriodTotalUserTime;
      LARGE_INTEGER ThisPeriodTotalKernelTime;
      DWORD TotalPageFaultCount;
      DWORD TotalProcesses;
      DWORD ActiveProcesses;
      DWORD TotalTerminatedProcesses;
    } JOBOBJECT_BASIC_ACCOUNTING_INFORMATION,*PJOBOBJECT_BASIC_ACCOUNTING_INFORMATION;
    typedef struct _JOBOBJECT_BASIC_LIMIT_INFORMATION {
      LARGE_INTEGER PerProcessUserTimeLimit;
      LARGE_INTEGER PerJobUserTimeLimit;
      DWORD LimitFlags;
      SIZE_T MinimumWorkingSetSize;
      SIZE_T MaximumWorkingSetSize;
      DWORD ActiveProcessLimit;
      ULONG_PTR Affinity;
      DWORD PriorityClass;
      DWORD SchedulingClass;
    } JOBOBJECT_BASIC_LIMIT_INFORMATION,*PJOBOBJECT_BASIC_LIMIT_INFORMATION;
    typedef struct _JOBOBJECT_EXTENDED_LIMIT_INFORMATION {
      JOBOBJECT_BASIC_LIMIT_INFORMATION BasicLimitInformation;
      IO_COUNTERS IoInfo;
      SIZE_T ProcessMemoryLimit;
      SIZE_T JobMemoryLimit;
      SIZE_T PeakProcessMemoryUsed;
      SIZE_T PeakJobMemoryUsed;
    } JOBOBJECT_EXTENDED_LIMIT_INFORMATION,*PJOBOBJECT_EXTENDED_LIMIT_INFORMATION;
    typedef struct _JOBOBJECT_BASIC_PROCESS_ID_LIST {
      DWORD NumberOfAssignedProcesses;
      DWORD NumberOfProcessIdsInList;
      ULONG_PTR ProcessIdList[1];
    } JOBOBJECT_BASIC_PROCESS_ID_LIST,*PJOBOBJECT_BASIC_PROCESS_ID_LIST;
    typedef struct _JOBOBJECT_BASIC_UI_RESTRICTIONS {
      DWORD UIRestrictionsClass;
    } JOBOBJECT_BASIC_UI_RESTRICTIONS,*PJOBOBJECT_BASIC_UI_RESTRICTIONS;
    typedef struct _JOBOBJECT_SECURITY_LIMIT_INFORMATION {
      DWORD SecurityLimitFlags;
      HANDLE JobToken;
      PTOKEN_GROUPS SidsToDisable;
      PTOKEN_PRIVILEGES PrivilegesToDelete;
      PTOKEN_GROUPS RestrictedSids;
    } JOBOBJECT_SECURITY_LIMIT_INFORMATION,*PJOBOBJECT_SECURITY_LIMIT_INFORMATION;
    typedef struct _JOBOBJECT_END_OF_JOB_TIME_INFORMATION {
      DWORD EndOfJobTimeAction;
    } JOBOBJECT_END_OF_JOB_TIME_INFORMATION,*PJOBOBJECT_END_OF_JOB_TIME_INFORMATION;
    typedef struct _JOBOBJECT_ASSOCIATE_COMPLETION_PORT {
      PVOID CompletionKey;
      HANDLE CompletionPort;
    } JOBOBJECT_ASSOCIATE_COMPLETION_PORT,*PJOBOBJECT_ASSOCIATE_COMPLETION_PORT;
    typedef struct _JOBOBJECT_BASIC_AND_IO_ACCOUNTING_INFORMATION {
      JOBOBJECT_BASIC_ACCOUNTING_INFORMATION BasicInfo;
      IO_COUNTERS IoInfo;
    } JOBOBJECT_BASIC_AND_IO_ACCOUNTING_INFORMATION,*PJOBOBJECT_BASIC_AND_IO_ACCOUNTING_INFORMATION;
    typedef struct _JOBOBJECT_JOBSET_INFORMATION {
      DWORD MemberLevel;
    } JOBOBJECT_JOBSET_INFORMATION,*PJOBOBJECT_JOBSET_INFORMATION;
    typedef enum _JOBOBJECT_RATE_CONTROL_TOLERANCE {
      ToleranceLow = 1,
      ToleranceMedium,
      ToleranceHigh
    } JOBOBJECT_RATE_CONTROL_TOLERANCE;
    typedef enum _JOBOBJECT_RATE_CONTROL_TOLERANCE_INTERVAL {
      ToleranceIntervalShort = 1,
      ToleranceIntervalMedium,
      ToleranceIntervalLong
    } JOBOBJECT_RATE_CONTROL_TOLERANCE_INTERVAL;
    typedef struct _JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION {
      DWORD64 IoReadBytesLimit;
      DWORD64 IoWriteBytesLimit;
      LARGE_INTEGER PerJobUserTimeLimit;
      DWORD64 JobMemoryLimit;
      JOBOBJECT_RATE_CONTROL_TOLERANCE RateControlTolerance;
      JOBOBJECT_RATE_CONTROL_TOLERANCE_INTERVAL RateControlToleranceInterval;
      DWORD LimitFlags;
    } JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION,*PJOBOBJECT_NOTIFICATION_LIMIT_INFORMATION;
    typedef struct _JOBOBJECT_LIMIT_VIOLATION_INFORMATION {
      DWORD LimitFlags;
      DWORD ViolationLimitFlags;
      DWORD64 IoReadBytes;
      DWORD64 IoReadBytesLimit;
      DWORD64 IoWriteBytes;
      DWORD64 IoWriteBytesLimit;
      LARGE_INTEGER PerJobUserTime;
      LARGE_INTEGER PerJobUserTimeLimit;
      DWORD64 JobMemory;
      DWORD64 JobMemoryLimit;
      JOBOBJECT_RATE_CONTROL_TOLERANCE RateControlTolerance;
      JOBOBJECT_RATE_CONTROL_TOLERANCE_INTERVAL RateControlToleranceLimit;
    } JOBOBJECT_LIMIT_VIOLATION_INFORMATION,*PJOBOBJECT_LIMIT_VIOLATION_INFORMATION;
    typedef struct _JOBOBJECT_CPU_RATE_CONTROL_INFORMATION {
      DWORD ControlFlags;
      __extension__ union {
 DWORD CpuRate;
 DWORD Weight;
      };
    } JOBOBJECT_CPU_RATE_CONTROL_INFORMATION,*PJOBOBJECT_CPU_RATE_CONTROL_INFORMATION;
    typedef enum _JOBOBJECTINFOCLASS {
      JobObjectBasicAccountingInformation = 1, JobObjectBasicLimitInformation,
      JobObjectBasicProcessIdList, JobObjectBasicUIRestrictions,
      JobObjectSecurityLimitInformation, JobObjectEndOfJobTimeInformation,
      JobObjectAssociateCompletionPortInformation, JobObjectBasicAndIoAccountingInformation,
      JobObjectExtendedLimitInformation, JobObjectJobSetInformation,
      JobObjectGroupInformation,
      JobObjectNotificationLimitInformation,
      JobObjectLimitViolationInformation,
      JobObjectGroupInformationEx,
      JobObjectCpuRateControlInformation,
      JobObjectCompletionFilter,
      JobObjectCompletionCounter,
      JobObjectReserved1Information = 18,
      JobObjectReserved2Information,
      JobObjectReserved3Information,
      JobObjectReserved4Information,
      JobObjectReserved5Information,
      JobObjectReserved6Information,
      JobObjectReserved7Information,
      JobObjectReserved8Information,
      MaxJobObjectInfoClass
    } JOBOBJECTINFOCLASS;
    typedef enum _FIRMWARE_TYPE {
      FirmwareTypeUnknown,
      FirmwareTypeBios,
      FirmwareTypeUefi,
      FirmwareTypeMax
    } FIRMWARE_TYPE,*PFIRMWARE_TYPE;
    typedef enum _LOGICAL_PROCESSOR_RELATIONSHIP {
      RelationProcessorCore,RelationNumaNode,RelationCache,
      RelationProcessorPackage,RelationGroup,RelationAll=0xffff
    } LOGICAL_PROCESSOR_RELATIONSHIP;
    typedef enum _PROCESSOR_CACHE_TYPE {
      CacheUnified,CacheInstruction,CacheData,CacheTrace
    } PROCESSOR_CACHE_TYPE;
    typedef struct _CACHE_DESCRIPTOR {
      BYTE Level;
      BYTE Associativity;
      WORD LineSize;
      DWORD Size;
      PROCESSOR_CACHE_TYPE Type;
    } CACHE_DESCRIPTOR,*PCACHE_DESCRIPTOR;
    typedef struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION {
      ULONG_PTR ProcessorMask;
      LOGICAL_PROCESSOR_RELATIONSHIP Relationship;
      __extension__ union {
 struct {
   BYTE Flags;
 } ProcessorCore;
 struct {
   DWORD NodeNumber;
 } NumaNode;
 CACHE_DESCRIPTOR Cache;
 ULONGLONG Reserved[2];
      } ;
    } SYSTEM_LOGICAL_PROCESSOR_INFORMATION,*PSYSTEM_LOGICAL_PROCESSOR_INFORMATION;
    typedef struct _PROCESSOR_RELATIONSHIP {
      BYTE Flags;
      BYTE Reserved[21];
      WORD GroupCount;
      GROUP_AFFINITY GroupMask[1];
    } PROCESSOR_RELATIONSHIP,*PPROCESSOR_RELATIONSHIP;
    typedef struct _NUMA_NODE_RELATIONSHIP {
      DWORD NodeNumber;
      BYTE Reserved[20];
      GROUP_AFFINITY GroupMask;
    } NUMA_NODE_RELATIONSHIP,*PNUMA_NODE_RELATIONSHIP;
    typedef struct _CACHE_RELATIONSHIP {
      BYTE Level;
      BYTE Associativity;
      WORD LineSize;
      DWORD CacheSize;
      PROCESSOR_CACHE_TYPE Type;
      BYTE Reserved[20];
      GROUP_AFFINITY GroupMask;
    } CACHE_RELATIONSHIP,*PCACHE_RELATIONSHIP;
    typedef struct _PROCESSOR_GROUP_INFO {
      BYTE MaximumProcessorCount;
      BYTE ActiveProcessorCount;
      BYTE Reserved[38];
      KAFFINITY ActiveProcessorMask;
    } PROCESSOR_GROUP_INFO,*PPROCESSOR_GROUP_INFO;
    typedef struct _GROUP_RELATIONSHIP {
      WORD MaximumGroupCount;
      WORD ActiveGroupCount;
      BYTE Reserved[20];
      PROCESSOR_GROUP_INFO GroupInfo[1];
    } GROUP_RELATIONSHIP,*PGROUP_RELATIONSHIP;
    struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX {
      LOGICAL_PROCESSOR_RELATIONSHIP Relationship;
      DWORD Size;
      __extension__ union {
 PROCESSOR_RELATIONSHIP Processor;
 NUMA_NODE_RELATIONSHIP NumaNode;
 CACHE_RELATIONSHIP Cache;
 GROUP_RELATIONSHIP Group;
      } ;
    };
    typedef struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX,*PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX;
    typedef struct _SYSTEM_PROCESSOR_CYCLE_TIME_INFORMATION {
      DWORD64 CycleTime;
    } SYSTEM_PROCESSOR_CYCLE_TIME_INFORMATION,*PSYSTEM_PROCESSOR_CYCLE_TIME_INFORMATION;
    typedef struct _XSTATE_FEATURE {
      DWORD Offset;
      DWORD Size;
    } XSTATE_FEATURE,*PXSTATE_FEATURE;
    typedef struct _XSTATE_CONFIGURATION {
      DWORD64 EnabledFeatures;
      DWORD64 EnabledVolatileFeatures;
      DWORD Size;
      DWORD OptimizedSave : 1;
      XSTATE_FEATURE Features[(64)];
    } XSTATE_CONFIGURATION,*PXSTATE_CONFIGURATION;
    typedef struct _MEMORY_BASIC_INFORMATION {
      PVOID BaseAddress;
      PVOID AllocationBase;
      DWORD AllocationProtect;
      SIZE_T RegionSize;
      DWORD State;
      DWORD Protect;
      DWORD Type;
    } MEMORY_BASIC_INFORMATION,*PMEMORY_BASIC_INFORMATION;
    typedef struct _MEMORY_BASIC_INFORMATION32 {
      DWORD BaseAddress;
      DWORD AllocationBase;
      DWORD AllocationProtect;
      DWORD RegionSize;
      DWORD State;
      DWORD Protect;
      DWORD Type;
    } MEMORY_BASIC_INFORMATION32,*PMEMORY_BASIC_INFORMATION32;
    typedef struct __attribute__ ((__aligned__ (16))) _MEMORY_BASIC_INFORMATION64 {
      ULONGLONG BaseAddress;
      ULONGLONG AllocationBase;
      DWORD AllocationProtect;
      DWORD __alignment1;
      ULONGLONG RegionSize;
      DWORD State;
      DWORD Protect;
      DWORD Type;
      DWORD __alignment2;
    } MEMORY_BASIC_INFORMATION64,*PMEMORY_BASIC_INFORMATION64;
    typedef struct FILE_ID_128 {
      BYTE Identifier[16];
    } FILE_ID_128, *PFILE_ID_128;
    typedef struct _FILE_NOTIFY_INFORMATION {
      DWORD NextEntryOffset;
      DWORD Action;
      DWORD FileNameLength;
      WCHAR FileName[1];
    } FILE_NOTIFY_INFORMATION,*PFILE_NOTIFY_INFORMATION;
    typedef union _FILE_SEGMENT_ELEMENT {
      PVOID64 Buffer;
      ULONGLONG Alignment;
    } FILE_SEGMENT_ELEMENT,*PFILE_SEGMENT_ELEMENT;
    typedef struct _REPARSE_GUID_DATA_BUFFER {
      DWORD ReparseTag;
      WORD ReparseDataLength;
      WORD Reserved;
      GUID ReparseGuid;
      struct {
 BYTE DataBuffer[1];
      } GenericReparseBuffer;
    } REPARSE_GUID_DATA_BUFFER,*PREPARSE_GUID_DATA_BUFFER;
    extern const GUID GUID_MAX_POWER_SAVINGS;
    extern const GUID GUID_MIN_POWER_SAVINGS;
    extern const GUID GUID_TYPICAL_POWER_SAVINGS;
    extern const GUID NO_SUBGROUP_GUID;
    extern const GUID ALL_POWERSCHEMES_GUID;
    extern const GUID GUID_POWERSCHEME_PERSONALITY;
    extern const GUID GUID_ACTIVE_POWERSCHEME;
    extern const GUID GUID_IDLE_RESILIENCY_SUBGROUP;
    extern const GUID GUID_IDLE_RESILIENCY_PERIOD;
    extern const GUID GUID_DISK_COALESCING_POWERDOWN_TIMEOUT;
    extern const GUID GUID_EXECUTION_REQUIRED_REQUEST_TIMEOUT;
    extern const GUID GUID_VIDEO_SUBGROUP;
    extern const GUID GUID_VIDEO_POWERDOWN_TIMEOUT;
    extern const GUID GUID_VIDEO_ANNOYANCE_TIMEOUT;
    extern const GUID GUID_VIDEO_ADAPTIVE_PERCENT_INCREASE;
    extern const GUID GUID_VIDEO_DIM_TIMEOUT;
    extern const GUID GUID_VIDEO_ADAPTIVE_POWERDOWN;
    extern const GUID GUID_MONITOR_POWER_ON;
    extern const GUID GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS;
    extern const GUID GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS;
    extern const GUID GUID_VIDEO_CURRENT_MONITOR_BRIGHTNESS;
    extern const GUID GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS;
    extern const GUID GUID_CONSOLE_DISPLAY_STATE;
    extern const GUID GUID_ALLOW_DISPLAY_REQUIRED;
    extern const GUID GUID_VIDEO_CONSOLE_LOCK_TIMEOUT;
    extern const GUID GUID_ADAPTIVE_POWER_BEHAVIOR_SUBGROUP;
    extern const GUID GUID_NON_ADAPTIVE_INPUT_TIMEOUT;
    extern const GUID GUID_DISK_SUBGROUP;
    extern const GUID GUID_DISK_POWERDOWN_TIMEOUT;
    extern const GUID GUID_DISK_IDLE_TIMEOUT;
    extern const GUID GUID_DISK_BURST_IGNORE_THRESHOLD;
    extern const GUID GUID_DISK_ADAPTIVE_POWERDOWN;
    extern const GUID GUID_SLEEP_SUBGROUP;
    extern const GUID GUID_SLEEP_IDLE_THRESHOLD;
    extern const GUID GUID_STANDBY_TIMEOUT;
    extern const GUID GUID_UNATTEND_SLEEP_TIMEOUT;
    extern const GUID GUID_HIBERNATE_TIMEOUT;
    extern const GUID GUID_HIBERNATE_FASTS4_POLICY;
    extern const GUID GUID_CRITICAL_POWER_TRANSITION;
    extern const GUID GUID_SYSTEM_AWAYMODE;
    extern const GUID GUID_ALLOW_AWAYMODE;
    extern const GUID GUID_ALLOW_STANDBY_STATES;
    extern const GUID GUID_ALLOW_RTC_WAKE;
    extern const GUID GUID_ALLOW_SYSTEM_REQUIRED;
    extern const GUID GUID_SYSTEM_BUTTON_SUBGROUP;
    extern const GUID GUID_POWERBUTTON_ACTION;
    extern const GUID GUID_SLEEPBUTTON_ACTION;
    extern const GUID GUID_USERINTERFACEBUTTON_ACTION;
    extern const GUID GUID_LIDCLOSE_ACTION;
    extern const GUID GUID_LIDOPEN_POWERSTATE;
    extern const GUID GUID_BATTERY_SUBGROUP;
    extern const GUID GUID_BATTERY_DISCHARGE_ACTION_0;
    extern const GUID GUID_BATTERY_DISCHARGE_LEVEL_0;
    extern const GUID GUID_BATTERY_DISCHARGE_FLAGS_0;
    extern const GUID GUID_BATTERY_DISCHARGE_ACTION_1;
    extern const GUID GUID_BATTERY_DISCHARGE_LEVEL_1;
    extern const GUID GUID_BATTERY_DISCHARGE_FLAGS_1;
    extern const GUID GUID_BATTERY_DISCHARGE_ACTION_2;
    extern const GUID GUID_BATTERY_DISCHARGE_LEVEL_2;
    extern const GUID GUID_BATTERY_DISCHARGE_FLAGS_2;
    extern const GUID GUID_BATTERY_DISCHARGE_ACTION_3;
    extern const GUID GUID_BATTERY_DISCHARGE_LEVEL_3;
    extern const GUID GUID_BATTERY_DISCHARGE_FLAGS_3;
    extern const GUID GUID_PROCESSOR_SETTINGS_SUBGROUP;
    extern const GUID GUID_PROCESSOR_THROTTLE_POLICY;
    extern const GUID GUID_PROCESSOR_THROTTLE_MAXIMUM;
    extern const GUID GUID_PROCESSOR_THROTTLE_MINIMUM;
    extern const GUID GUID_PROCESSOR_ALLOW_THROTTLING;
    extern const GUID GUID_PROCESSOR_IDLESTATE_POLICY;
    extern const GUID GUID_PROCESSOR_PERFSTATE_POLICY;
    extern const GUID GUID_PROCESSOR_PERF_INCREASE_THRESHOLD;
    extern const GUID GUID_PROCESSOR_PERF_DECREASE_THRESHOLD;
    extern const GUID GUID_PROCESSOR_PERF_INCREASE_POLICY;
    extern const GUID GUID_PROCESSOR_PERF_DECREASE_POLICY;
    extern const GUID GUID_PROCESSOR_PERF_INCREASE_TIME;
    extern const GUID GUID_PROCESSOR_PERF_DECREASE_TIME;
    extern const GUID GUID_PROCESSOR_PERF_TIME_CHECK;
    extern const GUID GUID_PROCESSOR_PERF_BOOST_POLICY;
    extern const GUID GUID_PROCESSOR_PERF_BOOST_MODE;
    extern const GUID GUID_PROCESSOR_IDLE_ALLOW_SCALING;
    extern const GUID GUID_PROCESSOR_IDLE_DISABLE;
    extern const GUID GUID_PROCESSOR_IDLE_STATE_MAXIMUM;
    extern const GUID GUID_PROCESSOR_IDLE_TIME_CHECK;
    extern const GUID GUID_PROCESSOR_IDLE_DEMOTE_THRESHOLD;
    extern const GUID GUID_PROCESSOR_IDLE_PROMOTE_THRESHOLD;
    extern const GUID GUID_PROCESSOR_CORE_PARKING_INCREASE_THRESHOLD;
    extern const GUID GUID_PROCESSOR_CORE_PARKING_DECREASE_THRESHOLD;
    extern const GUID GUID_PROCESSOR_CORE_PARKING_INCREASE_POLICY;
    extern const GUID GUID_PROCESSOR_CORE_PARKING_DECREASE_POLICY;
    extern const GUID GUID_PROCESSOR_CORE_PARKING_MAX_CORES;
    extern const GUID GUID_PROCESSOR_CORE_PARKING_MIN_CORES;
    extern const GUID GUID_PROCESSOR_CORE_PARKING_INCREASE_TIME;
    extern const GUID GUID_PROCESSOR_CORE_PARKING_DECREASE_TIME;
    extern const GUID GUID_PROCESSOR_CORE_PARKING_AFFINITY_HISTORY_DECREASE_FACTOR;
    extern const GUID GUID_PROCESSOR_CORE_PARKING_AFFINITY_HISTORY_THRESHOLD;
    extern const GUID GUID_PROCESSOR_CORE_PARKING_AFFINITY_WEIGHTING;
    extern const GUID GUID_PROCESSOR_CORE_PARKING_OVER_UTILIZATION_HISTORY_DECREASE_FACTOR;
    extern const GUID GUID_PROCESSOR_CORE_PARKING_OVER_UTILIZATION_HISTORY_THRESHOLD;
    extern const GUID GUID_PROCESSOR_CORE_PARKING_OVER_UTILIZATION_WEIGHTING;
    extern const GUID GUID_PROCESSOR_CORE_PARKING_OVER_UTILIZATION_THRESHOLD;
    extern const GUID GUID_PROCESSOR_PARKING_CORE_OVERRIDE;
    extern const GUID GUID_PROCESSOR_PARKING_PERF_STATE;
    extern const GUID GUID_PROCESSOR_PARKING_CONCURRENCY_THRESHOLD;
    extern const GUID GUID_PROCESSOR_PARKING_HEADROOM_THRESHOLD;
    extern const GUID GUID_PROCESSOR_PERF_HISTORY;
    extern const GUID GUID_PROCESSOR_PERF_LATENCY_HINT;
    extern const GUID GUID_PROCESSOR_DISTRIBUTE_UTILITY;
    extern const GUID GUID_SYSTEM_COOLING_POLICY;
    extern const GUID GUID_LOCK_CONSOLE_ON_WAKE;
    extern const GUID GUID_DEVICE_IDLE_POLICY;
    extern const GUID GUID_ACDC_POWER_SOURCE;
    extern const GUID GUID_LIDSWITCH_STATE_CHANGE;
    extern const GUID GUID_BATTERY_PERCENTAGE_REMAINING;
    extern const GUID GUID_GLOBAL_USER_PRESENCE;
    extern const GUID GUID_SESSION_DISPLAY_STATUS;
    extern const GUID GUID_SESSION_USER_PRESENCE;
    extern const GUID GUID_IDLE_BACKGROUND_TASK;
    extern const GUID GUID_BACKGROUND_TASK_NOTIFICATION;
    extern const GUID GUID_APPLAUNCH_BUTTON;
    extern const GUID GUID_PCIEXPRESS_SETTINGS_SUBGROUP;
    extern const GUID GUID_PCIEXPRESS_ASPM_POLICY;
    extern const GUID GUID_ENABLE_SWITCH_FORCED_SHUTDOWN;
  typedef enum _SYSTEM_POWER_STATE {
    PowerSystemUnspecified = 0,PowerSystemWorking = 1,PowerSystemSleeping1 = 2,PowerSystemSleeping2 = 3,PowerSystemSleeping3 = 4,PowerSystemHibernate = 5,PowerSystemShutdown = 6,PowerSystemMaximum = 7
  } SYSTEM_POWER_STATE,*PSYSTEM_POWER_STATE;
  typedef enum {
    PowerActionNone = 0, PowerActionReserved, PowerActionSleep, PowerActionHibernate,
    PowerActionShutdown, PowerActionShutdownReset, PowerActionShutdownOff,
    PowerActionWarmEject
  } POWER_ACTION,*PPOWER_ACTION;
  typedef enum _DEVICE_POWER_STATE {
    PowerDeviceUnspecified = 0, PowerDeviceD0, PowerDeviceD1, PowerDeviceD2, PowerDeviceD3,
    PowerDeviceMaximum
  } DEVICE_POWER_STATE,*PDEVICE_POWER_STATE;
  typedef enum _MONITOR_DISPLAY_STATE {
    PowerMonitorOff = 0, PowerMonitorOn, PowerMonitorDim
  } MONITOR_DISPLAY_STATE, *PMONITOR_DISPLAY_STATE;
  typedef enum _USER_ACTIVITY_PRESENCE {
    PowerUserPresent = 0,
    PowerUserNotPresent,
    PowerUserInactive,
    PowerUserMaximum,
    PowerUserInvalid = PowerUserMaximum
  } USER_ACTIVITY_PRESENCE,*PUSER_ACTIVITY_PRESENCE;
  typedef DWORD EXECUTION_STATE, *PEXECUTION_STATE;
  typedef enum {
    LT_DONT_CARE,LT_LOWEST_LATENCY
  } LATENCY_TIME;
  typedef enum _POWER_REQUEST_TYPE {
    PowerRequestDisplayRequired,
    PowerRequestSystemRequired,
    PowerRequestAwayModeRequired,
    PowerRequestExecutionRequired
  } POWER_REQUEST_TYPE,*PPOWER_REQUEST_TYPE;
    typedef struct CM_Power_Data_s {
      DWORD PD_Size;
      DEVICE_POWER_STATE PD_MostRecentPowerState;
      DWORD PD_Capabilities;
      DWORD PD_D1Latency;
      DWORD PD_D2Latency;
      DWORD PD_D3Latency;
      DEVICE_POWER_STATE PD_PowerStateMapping[7];
      SYSTEM_POWER_STATE PD_DeepestSystemWake;
    } CM_POWER_DATA,*PCM_POWER_DATA;
    typedef enum {
      SystemPowerPolicyAc,
      SystemPowerPolicyDc,
      VerifySystemPolicyAc,
      VerifySystemPolicyDc,
      SystemPowerCapabilities,
      SystemBatteryState,
      SystemPowerStateHandler,
      ProcessorStateHandler,
      SystemPowerPolicyCurrent,
      AdministratorPowerPolicy,
      SystemReserveHiberFile,
      ProcessorInformation,
      SystemPowerInformation,
      ProcessorStateHandler2,
      LastWakeTime,
      LastSleepTime,
      SystemExecutionState,
      SystemPowerStateNotifyHandler,
      ProcessorPowerPolicyAc,
      ProcessorPowerPolicyDc,
      VerifyProcessorPowerPolicyAc,
      VerifyProcessorPowerPolicyDc,
      ProcessorPowerPolicyCurrent,
      SystemPowerStateLogging,
      SystemPowerLoggingEntry,
      SetPowerSettingValue,
      NotifyUserPowerSetting,
      PowerInformationLevelUnused0,
      SystemMonitorHiberBootPowerOff,
      SystemVideoState,
      TraceApplicationPowerMessage,
      TraceApplicationPowerMessageEnd,
      ProcessorPerfStates,
      ProcessorIdleStates,
      ProcessorCap,
      SystemWakeSource,
      SystemHiberFileInformation,
      TraceServicePowerMessage,
      ProcessorLoad,
      PowerShutdownNotification,
      MonitorCapabilities,
      SessionPowerInit,
      SessionDisplayState,
      PowerRequestCreate,
      PowerRequestAction,
      GetPowerRequestList,
      ProcessorInformationEx,
      NotifyUserModeLegacyPowerEvent,
      GroupPark,
      ProcessorIdleDomains,
      WakeTimerList,
      SystemHiberFileSize,
      ProcessorIdleStatesHv,
      ProcessorPerfStatesHv,
      ProcessorPerfCapHv,
      ProcessorSetIdle,
      LogicalProcessorIdling,
      UserPresence,
      PowerSettingNotificationName,
      GetPowerSettingValue,
      IdleResiliency,
      SessionRITState,
      SessionConnectNotification,
      SessionPowerCleanup,
      SessionLockState,
      SystemHiberbootState,
      PlatformInformation,
      PdcInvocation,
      MonitorInvocation,
      FirmwareTableInformationRegistered,
      SetShutdownSelectedTime,
      SuspendResumeInvocation,
      PlmPowerRequestCreate,
      ScreenOff,
      CsDeviceNotification,
      PlatformRole,
      LastResumePerformance,
      DisplayBurst,
      ExitLatencySamplingPercentage,
      ApplyLowPowerScenarioSettings,
      PowerInformationLevelMaximum
    } POWER_INFORMATION_LEVEL;
    typedef enum {
      UserNotPresent = 0,
      UserPresent = 1,
      UserUnknown = 0xff
    } POWER_USER_PRESENCE_TYPE,*PPOWER_USER_PRESENCE_TYPE;
    typedef struct _POWER_USER_PRESENCE {
      POWER_USER_PRESENCE_TYPE UserPresence;
    } POWER_USER_PRESENCE,*PPOWER_USER_PRESENCE;
    typedef struct _POWER_SESSION_CONNECT {
      BOOLEAN Connected;
      BOOLEAN Console;
    } POWER_SESSION_CONNECT,*PPOWER_SESSION_CONNECT;
    typedef struct _POWER_SESSION_TIMEOUTS {
      DWORD InputTimeout;
      DWORD DisplayTimeout;
    } POWER_SESSION_TIMEOUTS,*PPOWER_SESSION_TIMEOUTS;
    typedef struct _POWER_SESSION_RIT_STATE {
      BOOLEAN Active;
      DWORD LastInputTime;
    } POWER_SESSION_RIT_STATE,*PPOWER_SESSION_RIT_STATE;
    typedef struct _POWER_SESSION_WINLOGON {
      DWORD SessionId;
      BOOLEAN Console;
      BOOLEAN Locked;
    } POWER_SESSION_WINLOGON,*PPOWER_SESSION_WINLOGON;
    typedef struct _POWER_IDLE_RESILIENCY {
      DWORD CoalescingTimeout;
      DWORD IdleResiliencyPeriod;
    } POWER_IDLE_RESILIENCY,*PPOWER_IDLE_RESILIENCY;
    typedef enum {
      MonitorRequestReasonUnknown,
      MonitorRequestReasonPowerButton,
      MonitorRequestReasonRemoteConnection,
      MonitorRequestReasonScMonitorpower,
      MonitorRequestReasonUserInput,
      MonitorRequestReasonAcDcDisplayBurst,
      MonitorRequestReasonUserDisplayBurst,
      MonitorRequestReasonPoSetSystemState,
      MonitorRequestReasonSetThreadExecutionState,
      MonitorRequestReasonFullWake,
      MonitorRequestReasonSessionUnlock,
      MonitorRequestReasonScreenOffRequest,
      MonitorRequestReasonIdleTimeout,
      MonitorRequestReasonPolicyChange,
      MonitorRequestReasonMax
    } POWER_MONITOR_REQUEST_REASON;
    typedef struct _POWER_MONITOR_INVOCATION {
      BOOLEAN On;
      BOOLEAN Console;
      POWER_MONITOR_REQUEST_REASON RequestReason;
    } POWER_MONITOR_INVOCATION,*PPOWER_MONITOR_INVOCATION;
    typedef struct _RESUME_PERFORMANCE {
      DWORD PostTimeMs;
      ULONGLONG TotalResumeTimeMs;
      ULONGLONG ResumeCompleteTimestamp;
    } RESUME_PERFORMANCE,*PRESUME_PERFORMANCE;
    typedef enum {
      PoAc,
      PoDc,
      PoHot,
      PoConditionMaximum
    } SYSTEM_POWER_CONDITION;
    typedef struct {
      DWORD Version;
      GUID Guid;
      SYSTEM_POWER_CONDITION PowerCondition;
      DWORD DataLength;
      BYTE Data[1];
    } SET_POWER_SETTING_VALUE,*PSET_POWER_SETTING_VALUE;
    typedef struct {
      GUID Guid;
    } NOTIFY_USER_POWER_SETTING,*PNOTIFY_USER_POWER_SETTING;
    typedef struct _APPLICATIONLAUNCH_SETTING_VALUE {
      LARGE_INTEGER ActivationTime;
      DWORD Flags;
      DWORD ButtonInstanceID;
    } APPLICATIONLAUNCH_SETTING_VALUE,*PAPPLICATIONLAUNCH_SETTING_VALUE;
    typedef enum _POWER_PLATFORM_ROLE {
      PlatformRoleUnspecified = 0,
      PlatformRoleDesktop,
      PlatformRoleMobile,
      PlatformRoleWorkstation,
      PlatformRoleEnterpriseServer,
      PlatformRoleSOHOServer,
      PlatformRoleAppliancePC,
      PlatformRolePerformanceServer,
      PlatformRoleSlate,
      PlatformRoleMaximum
    } POWER_PLATFORM_ROLE,*PPOWER_PLATFORM_ROLE;
    typedef struct _POWER_PLATFORM_INFORMATION {
      BOOLEAN AoAc;
    } POWER_PLATFORM_INFORMATION,*PPOWER_PLATFORM_INFORMATION;
    typedef struct {
      DWORD Granularity;
      DWORD Capacity;
    } BATTERY_REPORTING_SCALE,*PBATTERY_REPORTING_SCALE;
    typedef struct {
      DWORD Frequency;
      DWORD Flags;
      DWORD PercentFrequency;
    } PPM_WMI_LEGACY_PERFSTATE,*PPPM_WMI_LEGACY_PERFSTATE;
    typedef struct {
      DWORD Latency;
      DWORD Power;
      DWORD TimeCheck;
      BYTE PromotePercent;
      BYTE DemotePercent;
      BYTE StateType;
      BYTE Reserved;
      DWORD StateFlags;
      DWORD Context;
      DWORD IdleHandler;
      DWORD Reserved1;
    } PPM_WMI_IDLE_STATE,*PPPM_WMI_IDLE_STATE;
    typedef struct {
      DWORD Type;
      DWORD Count;
      DWORD TargetState;
      DWORD OldState;
      DWORD64 TargetProcessors;
      PPM_WMI_IDLE_STATE State[1];
    } PPM_WMI_IDLE_STATES,*PPPM_WMI_IDLE_STATES;
    typedef struct {
      DWORD Type;
      DWORD Count;
      DWORD TargetState;
      DWORD OldState;
      PVOID TargetProcessors;
      PPM_WMI_IDLE_STATE State[1];
    } PPM_WMI_IDLE_STATES_EX,*PPPM_WMI_IDLE_STATES_EX;
    typedef struct {
      DWORD Frequency;
      DWORD Power;
      BYTE PercentFrequency;
      BYTE IncreaseLevel;
      BYTE DecreaseLevel;
      BYTE Type;
      DWORD IncreaseTime;
      DWORD DecreaseTime;
      DWORD64 Control;
      DWORD64 Status;
      DWORD HitCount;
      DWORD Reserved1;
      DWORD64 Reserved2;
      DWORD64 Reserved3;
    } PPM_WMI_PERF_STATE,*PPPM_WMI_PERF_STATE;
    typedef struct {
      DWORD Count;
      DWORD MaxFrequency;
      DWORD CurrentState;
      DWORD MaxPerfState;
      DWORD MinPerfState;
      DWORD LowestPerfState;
      DWORD ThermalConstraint;
      BYTE BusyAdjThreshold;
      BYTE PolicyType;
      BYTE Type;
      BYTE Reserved;
      DWORD TimerInterval;
      DWORD64 TargetProcessors;
      DWORD PStateHandler;
      DWORD PStateContext;
      DWORD TStateHandler;
      DWORD TStateContext;
      DWORD FeedbackHandler;
      DWORD Reserved1;
      DWORD64 Reserved2;
      PPM_WMI_PERF_STATE State[1];
    } PPM_WMI_PERF_STATES,*PPPM_WMI_PERF_STATES;
    typedef struct {
      DWORD Count;
      DWORD MaxFrequency;
      DWORD CurrentState;
      DWORD MaxPerfState;
      DWORD MinPerfState;
      DWORD LowestPerfState;
      DWORD ThermalConstraint;
      BYTE BusyAdjThreshold;
      BYTE PolicyType;
      BYTE Type;
      BYTE Reserved;
      DWORD TimerInterval;
      PVOID TargetProcessors;
      DWORD PStateHandler;
      DWORD PStateContext;
      DWORD TStateHandler;
      DWORD TStateContext;
      DWORD FeedbackHandler;
      DWORD Reserved1;
      DWORD64 Reserved2;
      PPM_WMI_PERF_STATE State[1];
    } PPM_WMI_PERF_STATES_EX,*PPPM_WMI_PERF_STATES_EX;
    typedef struct {
      DWORD IdleTransitions;
      DWORD FailedTransitions;
      DWORD InvalidBucketIndex;
      DWORD64 TotalTime;
      DWORD IdleTimeBuckets[6];
    } PPM_IDLE_STATE_ACCOUNTING,*PPPM_IDLE_STATE_ACCOUNTING;
    typedef struct {
      DWORD StateCount;
      DWORD TotalTransitions;
      DWORD ResetCount;
      DWORD64 StartTime;
      PPM_IDLE_STATE_ACCOUNTING State[1];
    } PPM_IDLE_ACCOUNTING,*PPPM_IDLE_ACCOUNTING;
    typedef struct {
      DWORD64 TotalTimeUs;
      DWORD MinTimeUs;
      DWORD MaxTimeUs;
      DWORD Count;
    } PPM_IDLE_STATE_BUCKET_EX,*PPPM_IDLE_STATE_BUCKET_EX;
    typedef struct {
      DWORD64 TotalTime;
      DWORD IdleTransitions;
      DWORD FailedTransitions;
      DWORD InvalidBucketIndex;
      DWORD MinTimeUs;
      DWORD MaxTimeUs;
      DWORD CancelledTransitions;
      PPM_IDLE_STATE_BUCKET_EX IdleTimeBuckets[16];
    } PPM_IDLE_STATE_ACCOUNTING_EX,*PPPM_IDLE_STATE_ACCOUNTING_EX;
    typedef struct {
      DWORD StateCount;
      DWORD TotalTransitions;
      DWORD ResetCount;
      DWORD AbortCount;
      DWORD64 StartTime;
      PPM_IDLE_STATE_ACCOUNTING_EX State[1];
    } PPM_IDLE_ACCOUNTING_EX,*PPPM_IDLE_ACCOUNTING_EX;
    typedef struct {
      DWORD State;
      DWORD Status;
      DWORD Latency;
      DWORD Speed;
      DWORD Processor;
    } PPM_PERFSTATE_EVENT,*PPPM_PERFSTATE_EVENT;
    typedef struct {
      DWORD State;
      DWORD Latency;
      DWORD Speed;
      DWORD64 Processors;
    } PPM_PERFSTATE_DOMAIN_EVENT,*PPPM_PERFSTATE_DOMAIN_EVENT;
    typedef struct {
      DWORD NewState;
      DWORD OldState;
      DWORD64 Processors;
    } PPM_IDLESTATE_EVENT,*PPPM_IDLESTATE_EVENT;
    typedef struct {
      DWORD ThermalConstraint;
      DWORD64 Processors;
    } PPM_THERMALCHANGE_EVENT,*PPPM_THERMALCHANGE_EVENT;
    typedef struct {
      BYTE Mode;
      DWORD64 Processors;
    } PPM_THERMAL_POLICY_EVENT,*PPPM_THERMAL_POLICY_EVENT;
    extern const GUID PPM_PERFSTATE_CHANGE_GUID;
    extern const GUID PPM_PERFSTATE_DOMAIN_CHANGE_GUID;
    extern const GUID PPM_IDLESTATE_CHANGE_GUID;
    extern const GUID PPM_PERFSTATES_DATA_GUID;
    extern const GUID PPM_IDLESTATES_DATA_GUID;
    extern const GUID PPM_IDLE_ACCOUNTING_GUID;
    extern const GUID PPM_IDLE_ACCOUNTING_EX_GUID;
    extern const GUID PPM_THERMALCONSTRAINT_GUID;
    extern const GUID PPM_PERFMON_PERFSTATE_GUID;
    extern const GUID PPM_THERMAL_POLICY_CHANGE_GUID;
    typedef struct {
      POWER_ACTION Action;
      DWORD Flags;
      DWORD EventCode;
    } POWER_ACTION_POLICY,*PPOWER_ACTION_POLICY;
    typedef struct {
      DWORD TimeCheck;
      BYTE DemotePercent;
      BYTE PromotePercent;
      BYTE Spare[2];
    } PROCESSOR_IDLESTATE_INFO,*PPROCESSOR_IDLESTATE_INFO;
    typedef struct {
      BOOLEAN Enable;
      BYTE Spare[3];
      DWORD BatteryLevel;
      POWER_ACTION_POLICY PowerPolicy;
      SYSTEM_POWER_STATE MinSystemState;
    } SYSTEM_POWER_LEVEL,*PSYSTEM_POWER_LEVEL;
    typedef struct _SYSTEM_POWER_POLICY {
      DWORD Revision;
      POWER_ACTION_POLICY PowerButton;
      POWER_ACTION_POLICY SleepButton;
      POWER_ACTION_POLICY LidClose;
      SYSTEM_POWER_STATE LidOpenWake;
      DWORD Reserved;
      POWER_ACTION_POLICY Idle;
      DWORD IdleTimeout;
      BYTE IdleSensitivity;
      BYTE DynamicThrottle;
      BYTE Spare2[2];
      SYSTEM_POWER_STATE MinSleep;
      SYSTEM_POWER_STATE MaxSleep;
      SYSTEM_POWER_STATE ReducedLatencySleep;
      DWORD WinLogonFlags;
      DWORD Spare3;
      DWORD DozeS4Timeout;
      DWORD BroadcastCapacityResolution;
      SYSTEM_POWER_LEVEL DischargePolicy[4];
      DWORD VideoTimeout;
      BOOLEAN VideoDimDisplay;
      DWORD VideoReserved[3];
      DWORD SpindownTimeout;
      BOOLEAN OptimizeForPower;
      BYTE FanThrottleTolerance;
      BYTE ForcedThrottle;
      BYTE MinThrottle;
      POWER_ACTION_POLICY OverThrottled;
    } SYSTEM_POWER_POLICY,*PSYSTEM_POWER_POLICY;
    typedef struct {
      WORD Revision;
      union {
 WORD AsWORD;
 __extension__ struct {
   WORD AllowScaling : 1;
   WORD Disabled : 1;
   WORD Reserved : 14;
 } ;
      } Flags;
      DWORD PolicyCount;
      PROCESSOR_IDLESTATE_INFO Policy[0x3];
    } PROCESSOR_IDLESTATE_POLICY,*PPROCESSOR_IDLESTATE_POLICY;
    typedef struct _PROCESSOR_POWER_POLICY_INFO {
      DWORD TimeCheck;
      DWORD DemoteLimit;
      DWORD PromoteLimit;
      BYTE DemotePercent;
      BYTE PromotePercent;
      BYTE Spare[2];
      DWORD AllowDemotion:1;
      DWORD AllowPromotion:1;
      DWORD Reserved:30;
    } PROCESSOR_POWER_POLICY_INFO,*PPROCESSOR_POWER_POLICY_INFO;
    typedef struct _PROCESSOR_POWER_POLICY {
      DWORD Revision;
      BYTE DynamicThrottle;
      BYTE Spare[3];
      DWORD DisableCStates:1;
      DWORD Reserved:31;
      DWORD PolicyCount;
      PROCESSOR_POWER_POLICY_INFO Policy[3];
    } PROCESSOR_POWER_POLICY,*PPROCESSOR_POWER_POLICY;
    typedef struct {
      DWORD Revision;
      BYTE MaxThrottle;
      BYTE MinThrottle;
      BYTE BusyAdjThreshold;
      __extension__ union {
 BYTE Spare;
 union {
   BYTE AsBYTE;
   __extension__ struct {
     BYTE NoDomainAccounting : 1;
     BYTE IncreasePolicy: 2;
     BYTE DecreasePolicy: 2;
     BYTE Reserved : 3;
   } ;
 } Flags;
      } ;
      DWORD TimeCheck;
      DWORD IncreaseTime;
      DWORD DecreaseTime;
      DWORD IncreasePercent;
      DWORD DecreasePercent;
    } PROCESSOR_PERFSTATE_POLICY,*PPROCESSOR_PERFSTATE_POLICY;
    typedef struct _ADMINISTRATOR_POWER_POLICY {
      SYSTEM_POWER_STATE MinSleep;
      SYSTEM_POWER_STATE MaxSleep;
      DWORD MinVideoTimeout;
      DWORD MaxVideoTimeout;
      DWORD MinSpindownTimeout;
      DWORD MaxSpindownTimeout;
    } ADMINISTRATOR_POWER_POLICY,*PADMINISTRATOR_POWER_POLICY;
    typedef struct {
      BOOLEAN PowerButtonPresent;
      BOOLEAN SleepButtonPresent;
      BOOLEAN LidPresent;
      BOOLEAN SystemS1;
      BOOLEAN SystemS2;
      BOOLEAN SystemS3;
      BOOLEAN SystemS4;
      BOOLEAN SystemS5;
      BOOLEAN HiberFilePresent;
      BOOLEAN FullWake;
      BOOLEAN VideoDimPresent;
      BOOLEAN ApmPresent;
      BOOLEAN UpsPresent;
      BOOLEAN ThermalControl;
      BOOLEAN ProcessorThrottle;
      BYTE ProcessorMinThrottle;
      BYTE ProcessorMaxThrottle;
      BOOLEAN FastSystemS4;
      BYTE spare2[3];
      BOOLEAN DiskSpinDown;
      BYTE spare3[8];
      BOOLEAN SystemBatteriesPresent;
      BOOLEAN BatteriesAreShortTerm;
      BATTERY_REPORTING_SCALE BatteryScale[3];
      SYSTEM_POWER_STATE AcOnLineWake;
      SYSTEM_POWER_STATE SoftLidWake;
      SYSTEM_POWER_STATE RtcWake;
      SYSTEM_POWER_STATE MinDeviceWakeState;
      SYSTEM_POWER_STATE DefaultLowLatencyWake;
    } SYSTEM_POWER_CAPABILITIES,*PSYSTEM_POWER_CAPABILITIES;
    typedef struct {
      BOOLEAN AcOnLine;
      BOOLEAN BatteryPresent;
      BOOLEAN Charging;
      BOOLEAN Discharging;
      BOOLEAN Spare1[4];
      DWORD MaxCapacity;
      DWORD RemainingCapacity;
      DWORD Rate;
      DWORD EstimatedTime;
      DWORD DefaultAlert1;
      DWORD DefaultAlert2;
    } SYSTEM_BATTERY_STATE,*PSYSTEM_BATTERY_STATE;
#pragma pack(push,4)
#pragma pack(push,2)
    typedef struct _IMAGE_DOS_HEADER {
      WORD e_magic;
      WORD e_cblp;
      WORD e_cp;
      WORD e_crlc;
      WORD e_cparhdr;
      WORD e_minalloc;
      WORD e_maxalloc;
      WORD e_ss;
      WORD e_sp;
      WORD e_csum;
      WORD e_ip;
      WORD e_cs;
      WORD e_lfarlc;
      WORD e_ovno;
      WORD e_res[4];
      WORD e_oemid;
      WORD e_oeminfo;
      WORD e_res2[10];
      LONG e_lfanew;
    } IMAGE_DOS_HEADER,*PIMAGE_DOS_HEADER;
    typedef struct _IMAGE_OS2_HEADER {
      WORD ne_magic;
      CHAR ne_ver;
      CHAR ne_rev;
      WORD ne_enttab;
      WORD ne_cbenttab;
      LONG ne_crc;
      WORD ne_flags;
      WORD ne_autodata;
      WORD ne_heap;
      WORD ne_stack;
      LONG ne_csip;
      LONG ne_sssp;
      WORD ne_cseg;
      WORD ne_cmod;
      WORD ne_cbnrestab;
      WORD ne_segtab;
      WORD ne_rsrctab;
      WORD ne_restab;
      WORD ne_modtab;
      WORD ne_imptab;
      LONG ne_nrestab;
      WORD ne_cmovent;
      WORD ne_align;
      WORD ne_cres;
      BYTE ne_exetyp;
      BYTE ne_flagsothers;
      WORD ne_pretthunks;
      WORD ne_psegrefbytes;
      WORD ne_swaparea;
      WORD ne_expver;
    } IMAGE_OS2_HEADER,*PIMAGE_OS2_HEADER;
    typedef struct _IMAGE_VXD_HEADER {
      WORD e32_magic;
      BYTE e32_border;
      BYTE e32_worder;
      DWORD e32_level;
      WORD e32_cpu;
      WORD e32_os;
      DWORD e32_ver;
      DWORD e32_mflags;
      DWORD e32_mpages;
      DWORD e32_startobj;
      DWORD e32_eip;
      DWORD e32_stackobj;
      DWORD e32_esp;
      DWORD e32_pagesize;
      DWORD e32_lastpagesize;
      DWORD e32_fixupsize;
      DWORD e32_fixupsum;
      DWORD e32_ldrsize;
      DWORD e32_ldrsum;
      DWORD e32_objtab;
      DWORD e32_objcnt;
      DWORD e32_objmap;
      DWORD e32_itermap;
      DWORD e32_rsrctab;
      DWORD e32_rsrccnt;
      DWORD e32_restab;
      DWORD e32_enttab;
      DWORD e32_dirtab;
      DWORD e32_dircnt;
      DWORD e32_fpagetab;
      DWORD e32_frectab;
      DWORD e32_impmod;
      DWORD e32_impmodcnt;
      DWORD e32_impproc;
      DWORD e32_pagesum;
      DWORD e32_datapage;
      DWORD e32_preload;
      DWORD e32_nrestab;
      DWORD e32_cbnrestab;
      DWORD e32_nressum;
      DWORD e32_autodata;
      DWORD e32_debuginfo;
      DWORD e32_debuglen;
      DWORD e32_instpreload;
      DWORD e32_instdemand;
      DWORD e32_heapsize;
      BYTE e32_res3[12];
      DWORD e32_winresoff;
      DWORD e32_winreslen;
      WORD e32_devid;
      WORD e32_ddkver;
    } IMAGE_VXD_HEADER,*PIMAGE_VXD_HEADER;
#pragma pack(pop)
    typedef struct _IMAGE_FILE_HEADER {
      WORD Machine;
      WORD NumberOfSections;
      DWORD TimeDateStamp;
      DWORD PointerToSymbolTable;
      DWORD NumberOfSymbols;
      WORD SizeOfOptionalHeader;
      WORD Characteristics;
    } IMAGE_FILE_HEADER,*PIMAGE_FILE_HEADER;
    typedef struct _IMAGE_DATA_DIRECTORY {
      DWORD VirtualAddress;
      DWORD Size;
    } IMAGE_DATA_DIRECTORY,*PIMAGE_DATA_DIRECTORY;
    typedef struct _IMAGE_OPTIONAL_HEADER {
      WORD Magic;
      BYTE MajorLinkerVersion;
      BYTE MinorLinkerVersion;
      DWORD SizeOfCode;
      DWORD SizeOfInitializedData;
      DWORD SizeOfUninitializedData;
      DWORD AddressOfEntryPoint;
      DWORD BaseOfCode;
      DWORD BaseOfData;
      DWORD ImageBase;
      DWORD SectionAlignment;
      DWORD FileAlignment;
      WORD MajorOperatingSystemVersion;
      WORD MinorOperatingSystemVersion;
      WORD MajorImageVersion;
      WORD MinorImageVersion;
      WORD MajorSubsystemVersion;
      WORD MinorSubsystemVersion;
      DWORD Win32VersionValue;
      DWORD SizeOfImage;
      DWORD SizeOfHeaders;
      DWORD CheckSum;
      WORD Subsystem;
      WORD DllCharacteristics;
      DWORD SizeOfStackReserve;
      DWORD SizeOfStackCommit;
      DWORD SizeOfHeapReserve;
      DWORD SizeOfHeapCommit;
      DWORD LoaderFlags;
      DWORD NumberOfRvaAndSizes;
      IMAGE_DATA_DIRECTORY DataDirectory[16];
    } IMAGE_OPTIONAL_HEADER32,*PIMAGE_OPTIONAL_HEADER32;
    typedef struct _IMAGE_ROM_OPTIONAL_HEADER {
      WORD Magic;
      BYTE MajorLinkerVersion;
      BYTE MinorLinkerVersion;
      DWORD SizeOfCode;
      DWORD SizeOfInitializedData;
      DWORD SizeOfUninitializedData;
      DWORD AddressOfEntryPoint;
      DWORD BaseOfCode;
      DWORD BaseOfData;
      DWORD BaseOfBss;
      DWORD GprMask;
      DWORD CprMask[4];
      DWORD GpValue;
    } IMAGE_ROM_OPTIONAL_HEADER,*PIMAGE_ROM_OPTIONAL_HEADER;
    typedef struct _IMAGE_OPTIONAL_HEADER64 {
      WORD Magic;
      BYTE MajorLinkerVersion;
      BYTE MinorLinkerVersion;
      DWORD SizeOfCode;
      DWORD SizeOfInitializedData;
      DWORD SizeOfUninitializedData;
      DWORD AddressOfEntryPoint;
      DWORD BaseOfCode;
      ULONGLONG ImageBase;
      DWORD SectionAlignment;
      DWORD FileAlignment;
      WORD MajorOperatingSystemVersion;
      WORD MinorOperatingSystemVersion;
      WORD MajorImageVersion;
      WORD MinorImageVersion;
      WORD MajorSubsystemVersion;
      WORD MinorSubsystemVersion;
      DWORD Win32VersionValue;
      DWORD SizeOfImage;
      DWORD SizeOfHeaders;
      DWORD CheckSum;
      WORD Subsystem;
      WORD DllCharacteristics;
      ULONGLONG SizeOfStackReserve;
      ULONGLONG SizeOfStackCommit;
      ULONGLONG SizeOfHeapReserve;
      ULONGLONG SizeOfHeapCommit;
      DWORD LoaderFlags;
      DWORD NumberOfRvaAndSizes;
      IMAGE_DATA_DIRECTORY DataDirectory[16];
    } IMAGE_OPTIONAL_HEADER64,*PIMAGE_OPTIONAL_HEADER64;
    typedef IMAGE_OPTIONAL_HEADER32 IMAGE_OPTIONAL_HEADER;
    typedef PIMAGE_OPTIONAL_HEADER32 PIMAGE_OPTIONAL_HEADER;
    typedef struct _IMAGE_NT_HEADERS64 {
      DWORD Signature;
      IMAGE_FILE_HEADER FileHeader;
      IMAGE_OPTIONAL_HEADER64 OptionalHeader;
    } IMAGE_NT_HEADERS64,*PIMAGE_NT_HEADERS64;
    typedef struct _IMAGE_NT_HEADERS {
      DWORD Signature;
      IMAGE_FILE_HEADER FileHeader;
      IMAGE_OPTIONAL_HEADER32 OptionalHeader;
    } IMAGE_NT_HEADERS32,*PIMAGE_NT_HEADERS32;
    typedef struct _IMAGE_ROM_HEADERS {
      IMAGE_FILE_HEADER FileHeader;
      IMAGE_ROM_OPTIONAL_HEADER OptionalHeader;
    } IMAGE_ROM_HEADERS,*PIMAGE_ROM_HEADERS;
    typedef IMAGE_NT_HEADERS32 IMAGE_NT_HEADERS;
    typedef PIMAGE_NT_HEADERS32 PIMAGE_NT_HEADERS;
    typedef struct ANON_OBJECT_HEADER {
      WORD Sig1;
      WORD Sig2;
      WORD Version;
      WORD Machine;
      DWORD TimeDateStamp;
      CLSID ClassID;
      DWORD SizeOfData;
    } ANON_OBJECT_HEADER;
    typedef struct ANON_OBJECT_HEADER_V2 {
      WORD Sig1;
      WORD Sig2;
      WORD Version;
      WORD Machine;
      DWORD TimeDateStamp;
      CLSID ClassID;
      DWORD SizeOfData;
      DWORD Flags;
      DWORD MetaDataSize;
      DWORD MetaDataOffset;
    } ANON_OBJECT_HEADER_V2;
    typedef struct ANON_OBJECT_HEADER_BIGOBJ {
      WORD Sig1;
      WORD Sig2;
      WORD Version;
      WORD Machine;
      DWORD TimeDateStamp;
      CLSID ClassID;
      DWORD SizeOfData;
      DWORD Flags;
      DWORD MetaDataSize;
      DWORD MetaDataOffset;
      DWORD NumberOfSections;
      DWORD PointerToSymbolTable;
      DWORD NumberOfSymbols;
    } ANON_OBJECT_HEADER_BIGOBJ;
    typedef struct _IMAGE_SECTION_HEADER {
      BYTE Name[8];
      union {
 DWORD PhysicalAddress;
 DWORD VirtualSize;
      } Misc;
      DWORD VirtualAddress;
      DWORD SizeOfRawData;
      DWORD PointerToRawData;
      DWORD PointerToRelocations;
      DWORD PointerToLinenumbers;
      WORD NumberOfRelocations;
      WORD NumberOfLinenumbers;
      DWORD Characteristics;
    } IMAGE_SECTION_HEADER,*PIMAGE_SECTION_HEADER;
#pragma pack(push,2)
    typedef struct _IMAGE_SYMBOL {
      union {
 BYTE ShortName[8];
 struct {
   DWORD Short;
   DWORD Long;
 } Name;
 DWORD LongName[2];
      } N;
      DWORD Value;
      SHORT SectionNumber;
      WORD Type;
      BYTE StorageClass;
      BYTE NumberOfAuxSymbols;
    } IMAGE_SYMBOL;
    typedef IMAGE_SYMBOL *PIMAGE_SYMBOL;
    typedef struct _IMAGE_SYMBOL_EX {
      union {
 BYTE ShortName[8];
 struct {
   DWORD Short;
   DWORD Long;
 } Name;
 DWORD LongName[2];
      } N;
      DWORD Value;
      LONG SectionNumber;
      WORD Type;
      BYTE StorageClass;
      BYTE NumberOfAuxSymbols;
    } IMAGE_SYMBOL_EX, *PIMAGE_SYMBOL_EX;
#pragma pack(push,2)
    typedef struct IMAGE_AUX_SYMBOL_TOKEN_DEF {
      BYTE bAuxType;
      BYTE bReserved;
      DWORD SymbolTableIndex;
      BYTE rgbReserved[12];
    } IMAGE_AUX_SYMBOL_TOKEN_DEF, *PIMAGE_AUX_SYMBOL_TOKEN_DEF;
#pragma pack(pop)
    typedef union _IMAGE_AUX_SYMBOL {
      struct {
 DWORD TagIndex;
 union {
   struct {
     WORD Linenumber;
     WORD Size;
   } LnSz;
   DWORD TotalSize;
 } Misc;
 union {
   struct {
     DWORD PointerToLinenumber;
     DWORD PointerToNextFunction;
   } Function;
   struct {
     WORD Dimension[4];
   } Array;
 } FcnAry;
 WORD TvIndex;
      } Sym;
      struct {
 BYTE Name[18];
      } File;
      struct {
 DWORD Length;
 WORD NumberOfRelocations;
 WORD NumberOfLinenumbers;
 DWORD CheckSum;
 SHORT Number;
 BYTE Selection;
      } Section;
      IMAGE_AUX_SYMBOL_TOKEN_DEF TokenDef;
      struct {
 DWORD crc;
 BYTE rgbReserved[14];
      } CRC;
    } IMAGE_AUX_SYMBOL, *PIMAGE_AUX_SYMBOL;
    typedef union _IMAGE_AUX_SYMBOL_EX {
      struct {
 DWORD WeakDefaultSymIndex;
 DWORD WeakSearchType;
 BYTE rgbReserved[12];
      } Sym;
      struct {
 BYTE Name[sizeof (IMAGE_SYMBOL_EX)];
      } File;
      struct {
 DWORD Length;
 WORD NumberOfRelocations;
 WORD NumberOfLinenumbers;
 DWORD CheckSum;
 SHORT Number;
 BYTE Selection;
 BYTE bReserved;
 SHORT HighNumber;
 BYTE rgbReserved[2];
      } Section;
      __extension__ struct {
 IMAGE_AUX_SYMBOL_TOKEN_DEF TokenDef;
 BYTE rgbReserved[2];
      };
      struct {
 DWORD crc;
 BYTE rgbReserved[16];
      } CRC;
    } IMAGE_AUX_SYMBOL_EX, *PIMAGE_AUX_SYMBOL_EX;
    typedef enum IMAGE_AUX_SYMBOL_TYPE {
      IMAGE_AUX_SYMBOL_TYPE_TOKEN_DEF = 1
    } IMAGE_AUX_SYMBOL_TYPE;
    typedef struct _IMAGE_RELOCATION {
      __extension__ union {
 DWORD VirtualAddress;
 DWORD RelocCount;
      } ;
      DWORD SymbolTableIndex;
      WORD Type;
    } IMAGE_RELOCATION;
    typedef IMAGE_RELOCATION *PIMAGE_RELOCATION;
    typedef struct _IMAGE_LINENUMBER {
      union {
 DWORD SymbolTableIndex;
 DWORD VirtualAddress;
      } Type;
      WORD Linenumber;
    } IMAGE_LINENUMBER;
    typedef IMAGE_LINENUMBER *PIMAGE_LINENUMBER;
#pragma pack(pop)
    typedef struct _IMAGE_BASE_RELOCATION {
      DWORD VirtualAddress;
      DWORD SizeOfBlock;
    } IMAGE_BASE_RELOCATION;
    typedef IMAGE_BASE_RELOCATION *PIMAGE_BASE_RELOCATION;
    typedef struct _IMAGE_ARCHIVE_MEMBER_HEADER {
      BYTE Name[16];
      BYTE Date[12];
      BYTE UserID[6];
      BYTE GroupID[6];
      BYTE Mode[8];
      BYTE Size[10];
      BYTE EndHeader[2];
    } IMAGE_ARCHIVE_MEMBER_HEADER,*PIMAGE_ARCHIVE_MEMBER_HEADER;
    typedef struct _IMAGE_EXPORT_DIRECTORY {
      DWORD Characteristics;
      DWORD TimeDateStamp;
      WORD MajorVersion;
      WORD MinorVersion;
      DWORD Name;
      DWORD Base;
      DWORD NumberOfFunctions;
      DWORD NumberOfNames;
      DWORD AddressOfFunctions;
      DWORD AddressOfNames;
      DWORD AddressOfNameOrdinals;
    } IMAGE_EXPORT_DIRECTORY,*PIMAGE_EXPORT_DIRECTORY;
    typedef struct _IMAGE_IMPORT_BY_NAME {
      WORD Hint;
      CHAR Name[1];
    } IMAGE_IMPORT_BY_NAME,*PIMAGE_IMPORT_BY_NAME;
#pragma pack(push,8)
    typedef struct _IMAGE_THUNK_DATA64 {
      union {
 ULONGLONG ForwarderString;
 ULONGLONG Function;
 ULONGLONG Ordinal;
 ULONGLONG AddressOfData;
      } u1;
    } IMAGE_THUNK_DATA64;
    typedef IMAGE_THUNK_DATA64 *PIMAGE_THUNK_DATA64;
#pragma pack(pop)
    typedef struct _IMAGE_THUNK_DATA32 {
      union {
 DWORD ForwarderString;
 DWORD Function;
 DWORD Ordinal;
 DWORD AddressOfData;
      } u1;
    } IMAGE_THUNK_DATA32;
    typedef IMAGE_THUNK_DATA32 *PIMAGE_THUNK_DATA32;
    typedef void (__attribute__((__stdcall__)) *PIMAGE_TLS_CALLBACK)(PVOID DllHandle,DWORD Reason,PVOID Reserved);
    typedef struct _IMAGE_TLS_DIRECTORY64 {
      ULONGLONG StartAddressOfRawData;
      ULONGLONG EndAddressOfRawData;
      ULONGLONG AddressOfIndex;
      ULONGLONG AddressOfCallBacks;
      DWORD SizeOfZeroFill;
      DWORD Characteristics;
    } IMAGE_TLS_DIRECTORY64;
    typedef IMAGE_TLS_DIRECTORY64 *PIMAGE_TLS_DIRECTORY64;
    typedef struct _IMAGE_TLS_DIRECTORY32 {
      DWORD StartAddressOfRawData;
      DWORD EndAddressOfRawData;
      DWORD AddressOfIndex;
      DWORD AddressOfCallBacks;
      DWORD SizeOfZeroFill;
      DWORD Characteristics;
    } IMAGE_TLS_DIRECTORY32;
    typedef IMAGE_TLS_DIRECTORY32 *PIMAGE_TLS_DIRECTORY32;
    typedef IMAGE_THUNK_DATA32 IMAGE_THUNK_DATA;
    typedef PIMAGE_THUNK_DATA32 PIMAGE_THUNK_DATA;
    typedef IMAGE_TLS_DIRECTORY32 IMAGE_TLS_DIRECTORY;
    typedef PIMAGE_TLS_DIRECTORY32 PIMAGE_TLS_DIRECTORY;
    typedef struct _IMAGE_IMPORT_DESCRIPTOR {
      __extension__ union {
 DWORD Characteristics;
 DWORD OriginalFirstThunk;
      } ;
      DWORD TimeDateStamp;
      DWORD ForwarderChain;
      DWORD Name;
      DWORD FirstThunk;
    } IMAGE_IMPORT_DESCRIPTOR;
    typedef IMAGE_IMPORT_DESCRIPTOR *PIMAGE_IMPORT_DESCRIPTOR;
    typedef struct _IMAGE_BOUND_IMPORT_DESCRIPTOR {
      DWORD TimeDateStamp;
      WORD OffsetModuleName;
      WORD NumberOfModuleForwarderRefs;
    } IMAGE_BOUND_IMPORT_DESCRIPTOR,*PIMAGE_BOUND_IMPORT_DESCRIPTOR;
    typedef struct _IMAGE_BOUND_FORWARDER_REF {
      DWORD TimeDateStamp;
      WORD OffsetModuleName;
      WORD Reserved;
    } IMAGE_BOUND_FORWARDER_REF,*PIMAGE_BOUND_FORWARDER_REF;
    typedef struct _IMAGE_DELAYLOAD_DESCRIPTOR {
      union {
 DWORD AllAttributes;
 __extension__ struct {
   DWORD RvaBased : 1;
   DWORD ReservedAttributes : 31;
 };
      } Attributes;
      DWORD DllNameRVA;
      DWORD ModuleHandleRVA;
      DWORD ImportAddressTableRVA;
      DWORD ImportNameTableRVA;
      DWORD BoundImportAddressTableRVA;
      DWORD UnloadInformationTableRVA;
      DWORD TimeDateStamp;
    } IMAGE_DELAYLOAD_DESCRIPTOR,*PIMAGE_DELAYLOAD_DESCRIPTOR;
    typedef const IMAGE_DELAYLOAD_DESCRIPTOR *PCIMAGE_DELAYLOAD_DESCRIPTOR;
    typedef struct _IMAGE_RESOURCE_DIRECTORY {
      DWORD Characteristics;
      DWORD TimeDateStamp;
      WORD MajorVersion;
      WORD MinorVersion;
      WORD NumberOfNamedEntries;
      WORD NumberOfIdEntries;
    } IMAGE_RESOURCE_DIRECTORY,*PIMAGE_RESOURCE_DIRECTORY;
    typedef struct _IMAGE_RESOURCE_DIRECTORY_ENTRY {
      __extension__ union {
 __extension__ struct {
   DWORD NameOffset:31;
   DWORD NameIsString:1;
 } ;
 DWORD Name;
 WORD Id;
      } ;
      __extension__ union {
 DWORD OffsetToData;
 __extension__ struct {
   DWORD OffsetToDirectory:31;
   DWORD DataIsDirectory:1;
 } ;
      } ;
    } IMAGE_RESOURCE_DIRECTORY_ENTRY,*PIMAGE_RESOURCE_DIRECTORY_ENTRY;
    typedef struct _IMAGE_RESOURCE_DIRECTORY_STRING {
      WORD Length;
      CHAR NameString[1];
    } IMAGE_RESOURCE_DIRECTORY_STRING,*PIMAGE_RESOURCE_DIRECTORY_STRING;
    typedef struct _IMAGE_RESOURCE_DIR_STRING_U {
      WORD Length;
      WCHAR NameString[1];
    } IMAGE_RESOURCE_DIR_STRING_U,*PIMAGE_RESOURCE_DIR_STRING_U;
    typedef struct _IMAGE_RESOURCE_DATA_ENTRY {
      DWORD OffsetToData;
      DWORD Size;
      DWORD CodePage;
      DWORD Reserved;
    } IMAGE_RESOURCE_DATA_ENTRY,*PIMAGE_RESOURCE_DATA_ENTRY;
    typedef struct {
      DWORD Size;
      DWORD TimeDateStamp;
      WORD MajorVersion;
      WORD MinorVersion;
      DWORD GlobalFlagsClear;
      DWORD GlobalFlagsSet;
      DWORD CriticalSectionDefaultTimeout;
      DWORD DeCommitFreeBlockThreshold;
      DWORD DeCommitTotalFreeThreshold;
      DWORD LockPrefixTable;
      DWORD MaximumAllocationSize;
      DWORD VirtualMemoryThreshold;
      DWORD ProcessHeapFlags;
      DWORD ProcessAffinityMask;
      WORD CSDVersion;
      WORD Reserved1;
      DWORD EditList;
      DWORD SecurityCookie;
      DWORD SEHandlerTable;
      DWORD SEHandlerCount;
    } IMAGE_LOAD_CONFIG_DIRECTORY32,*PIMAGE_LOAD_CONFIG_DIRECTORY32;
    typedef struct {
      DWORD Size;
      DWORD TimeDateStamp;
      WORD MajorVersion;
      WORD MinorVersion;
      DWORD GlobalFlagsClear;
      DWORD GlobalFlagsSet;
      DWORD CriticalSectionDefaultTimeout;
      ULONGLONG DeCommitFreeBlockThreshold;
      ULONGLONG DeCommitTotalFreeThreshold;
      ULONGLONG LockPrefixTable;
      ULONGLONG MaximumAllocationSize;
      ULONGLONG VirtualMemoryThreshold;
      ULONGLONG ProcessAffinityMask;
      DWORD ProcessHeapFlags;
      WORD CSDVersion;
      WORD Reserved1;
      ULONGLONG EditList;
      ULONGLONG SecurityCookie;
      ULONGLONG SEHandlerTable;
      ULONGLONG SEHandlerCount;
    } IMAGE_LOAD_CONFIG_DIRECTORY64,*PIMAGE_LOAD_CONFIG_DIRECTORY64;
    typedef IMAGE_LOAD_CONFIG_DIRECTORY32 IMAGE_LOAD_CONFIG_DIRECTORY;
    typedef PIMAGE_LOAD_CONFIG_DIRECTORY32 PIMAGE_LOAD_CONFIG_DIRECTORY;
    typedef struct _IMAGE_CE_RUNTIME_FUNCTION_ENTRY {
      DWORD FuncStart;
      DWORD PrologLen : 8;
      DWORD FuncLen : 22;
      DWORD ThirtyTwoBit : 1;
      DWORD ExceptionFlag : 1;
    } IMAGE_CE_RUNTIME_FUNCTION_ENTRY,*PIMAGE_CE_RUNTIME_FUNCTION_ENTRY;
    typedef struct _IMAGE_ALPHA64_RUNTIME_FUNCTION_ENTRY {
      ULONGLONG BeginAddress;
      ULONGLONG EndAddress;
      ULONGLONG ExceptionHandler;
      ULONGLONG HandlerData;
      ULONGLONG PrologEndAddress;
    } IMAGE_ALPHA64_RUNTIME_FUNCTION_ENTRY,*PIMAGE_ALPHA64_RUNTIME_FUNCTION_ENTRY;
    typedef struct _IMAGE_ALPHA_RUNTIME_FUNCTION_ENTRY {
      DWORD BeginAddress;
      DWORD EndAddress;
      DWORD ExceptionHandler;
      DWORD HandlerData;
      DWORD PrologEndAddress;
    } IMAGE_ALPHA_RUNTIME_FUNCTION_ENTRY,*PIMAGE_ALPHA_RUNTIME_FUNCTION_ENTRY;
    typedef struct _IMAGE_ARM_RUNTIME_FUNCTION_ENTRY {
      DWORD BeginAddress;
      __extension__ union {
 DWORD UnwindData;
 __extension__ struct {
   DWORD Flag : 2;
   DWORD FunctionLength : 11;
   DWORD Ret : 2;
   DWORD H : 1;
   DWORD Reg : 3;
   DWORD R : 1;
   DWORD L : 1;
   DWORD C : 1;
   DWORD StackAdjust : 10;
 } ;
      } ;
    } IMAGE_ARM_RUNTIME_FUNCTION_ENTRY,*PIMAGE_ARM_RUNTIME_FUNCTION_ENTRY;
    typedef struct _IMAGE_ARM64_RUNTIME_FUNCTION_ENTRY {
      DWORD BeginAddress;
      __extension__ union {
 DWORD UnwindData;
 __extension__ struct {
   DWORD Flag : 2;
   DWORD FunctionLength : 11;
   DWORD RegF : 3;
   DWORD RegI : 4;
   DWORD H : 1;
   DWORD CR : 2;
   DWORD FrameSize : 9;
 } ;
      } ;
    } IMAGE_ARM64_RUNTIME_FUNCTION_ENTRY,*PIMAGE_ARM64_RUNTIME_FUNCTION_ENTRY;
    typedef struct _IMAGE_RUNTIME_FUNCTION_ENTRY {
      DWORD BeginAddress;
      DWORD EndAddress;
      __extension__ union {
 DWORD UnwindInfoAddress;
 DWORD UnwindData;
      } ;
    } _IMAGE_RUNTIME_FUNCTION_ENTRY,*_PIMAGE_RUNTIME_FUNCTION_ENTRY;
    typedef _IMAGE_RUNTIME_FUNCTION_ENTRY IMAGE_IA64_RUNTIME_FUNCTION_ENTRY;
    typedef _PIMAGE_RUNTIME_FUNCTION_ENTRY PIMAGE_IA64_RUNTIME_FUNCTION_ENTRY;
    typedef _IMAGE_RUNTIME_FUNCTION_ENTRY IMAGE_RUNTIME_FUNCTION_ENTRY;
    typedef _PIMAGE_RUNTIME_FUNCTION_ENTRY PIMAGE_RUNTIME_FUNCTION_ENTRY;
    typedef struct _IMAGE_DEBUG_DIRECTORY {
      DWORD Characteristics;
      DWORD TimeDateStamp;
      WORD MajorVersion;
      WORD MinorVersion;
      DWORD Type;
      DWORD SizeOfData;
      DWORD AddressOfRawData;
      DWORD PointerToRawData;
    } IMAGE_DEBUG_DIRECTORY,*PIMAGE_DEBUG_DIRECTORY;
    typedef struct _IMAGE_COFF_SYMBOLS_HEADER {
      DWORD NumberOfSymbols;
      DWORD LvaToFirstSymbol;
      DWORD NumberOfLinenumbers;
      DWORD LvaToFirstLinenumber;
      DWORD RvaToFirstByteOfCode;
      DWORD RvaToLastByteOfCode;
      DWORD RvaToFirstByteOfData;
      DWORD RvaToLastByteOfData;
    } IMAGE_COFF_SYMBOLS_HEADER,*PIMAGE_COFF_SYMBOLS_HEADER;
    typedef struct _FPO_DATA {
      DWORD ulOffStart;
      DWORD cbProcSize;
      DWORD cdwLocals;
      WORD cdwParams;
      WORD cbProlog : 8;
      WORD cbRegs : 3;
      WORD fHasSEH : 1;
      WORD fUseBP : 1;
      WORD reserved : 1;
      WORD cbFrame : 2;
    } FPO_DATA,*PFPO_DATA;
    typedef struct _IMAGE_DEBUG_MISC {
      DWORD DataType;
      DWORD Length;
      BOOLEAN Unicode;
      BYTE Reserved[3];
      BYTE Data[1];
    } IMAGE_DEBUG_MISC,*PIMAGE_DEBUG_MISC;
    typedef struct _IMAGE_FUNCTION_ENTRY {
      DWORD StartingAddress;
      DWORD EndingAddress;
      DWORD EndOfPrologue;
    } IMAGE_FUNCTION_ENTRY,*PIMAGE_FUNCTION_ENTRY;
    typedef struct _IMAGE_FUNCTION_ENTRY64 {
      ULONGLONG StartingAddress;
      ULONGLONG EndingAddress;
      __extension__ union {
 ULONGLONG EndOfPrologue;
 ULONGLONG UnwindInfoAddress;
      } ;
    } IMAGE_FUNCTION_ENTRY64,*PIMAGE_FUNCTION_ENTRY64;
    typedef struct _IMAGE_SEPARATE_DEBUG_HEADER {
      WORD Signature;
      WORD Flags;
      WORD Machine;
      WORD Characteristics;
      DWORD TimeDateStamp;
      DWORD CheckSum;
      DWORD ImageBase;
      DWORD SizeOfImage;
      DWORD NumberOfSections;
      DWORD ExportedNamesSize;
      DWORD DebugDirectorySize;
      DWORD SectionAlignment;
      DWORD Reserved[2];
    } IMAGE_SEPARATE_DEBUG_HEADER,*PIMAGE_SEPARATE_DEBUG_HEADER;
    typedef struct _NON_PAGED_DEBUG_INFO {
      WORD Signature;
      WORD Flags;
      DWORD Size;
      WORD Machine;
      WORD Characteristics;
      DWORD TimeDateStamp;
      DWORD CheckSum;
      DWORD SizeOfImage;
      ULONGLONG ImageBase;
    } NON_PAGED_DEBUG_INFO,*PNON_PAGED_DEBUG_INFO;
    typedef struct _ImageArchitectureHeader {
      unsigned int AmaskValue: 1;
      int Adummy1 : 7;
      unsigned int AmaskShift : 8;
      int Adummy2 : 16;
      DWORD FirstEntryRVA;
    } IMAGE_ARCHITECTURE_HEADER,*PIMAGE_ARCHITECTURE_HEADER;
    typedef struct _ImageArchitectureEntry {
      DWORD FixupInstRVA;
      DWORD NewInst;
    } IMAGE_ARCHITECTURE_ENTRY,*PIMAGE_ARCHITECTURE_ENTRY;
#pragma pack(pop)
    typedef struct IMPORT_OBJECT_HEADER {
      WORD Sig1;
      WORD Sig2;
      WORD Version;
      WORD Machine;
      DWORD TimeDateStamp;
      DWORD SizeOfData;
      __extension__ union {
 WORD Ordinal;
 WORD Hint;
      };
      WORD Type : 2;
      WORD NameType : 3;
      WORD Reserved : 11;
    } IMPORT_OBJECT_HEADER;
    typedef enum IMPORT_OBJECT_TYPE {
      IMPORT_OBJECT_CODE = 0,IMPORT_OBJECT_DATA = 1,IMPORT_OBJECT_CONST = 2
    } IMPORT_OBJECT_TYPE;
    typedef enum IMPORT_OBJECT_NAME_TYPE {
      IMPORT_OBJECT_ORDINAL = 0,IMPORT_OBJECT_NAME = 1,IMPORT_OBJECT_NAME_NO_PREFIX = 2,IMPORT_OBJECT_NAME_UNDECORATE = 3
    } IMPORT_OBJECT_NAME_TYPE;
    typedef enum ReplacesCorHdrNumericDefines {
      COMIMAGE_FLAGS_ILONLY = 0x00000001,COMIMAGE_FLAGS_32BITREQUIRED = 0x00000002,COMIMAGE_FLAGS_IL_LIBRARY = 0x00000004,
      COMIMAGE_FLAGS_STRONGNAMESIGNED = 0x00000008,COMIMAGE_FLAGS_TRACKDEBUGDATA = 0x00010000,COR_VERSION_MAJOR_V2 = 2,
      COR_VERSION_MAJOR = COR_VERSION_MAJOR_V2,COR_VERSION_MINOR = 0,COR_DELETED_NAME_LENGTH = 8,COR_VTABLEGAP_NAME_LENGTH = 8,
      NATIVE_TYPE_MAX_CB = 1,COR_ILMETHOD_SECT_SMALL_MAX_DATASIZE= 0xFF,IMAGE_COR_MIH_METHODRVA = 0x01,IMAGE_COR_MIH_EHRVA = 0x02,
      IMAGE_COR_MIH_BASICBLOCK = 0x08,COR_VTABLE_32BIT =0x01,COR_VTABLE_64BIT =0x02,COR_VTABLE_FROM_UNMANAGED = 0x04,
      COR_VTABLE_CALL_MOST_DERIVED = 0x10,IMAGE_COR_EATJ_THUNK_SIZE = 32,MAX_CLASS_NAME =1024,MAX_PACKAGE_NAME = 1024
    } ReplacesCorHdrNumericDefines;
    typedef struct IMAGE_COR20_HEADER {
      DWORD cb;
      WORD MajorRuntimeVersion;
      WORD MinorRuntimeVersion;
      IMAGE_DATA_DIRECTORY MetaData;
      DWORD Flags;
      __extension__ union {
 DWORD EntryPointToken;
 DWORD EntryPointRVA;
      } ;
      IMAGE_DATA_DIRECTORY Resources;
      IMAGE_DATA_DIRECTORY StrongNameSignature;
      IMAGE_DATA_DIRECTORY CodeManagerTable;
      IMAGE_DATA_DIRECTORY VTableFixups;
      IMAGE_DATA_DIRECTORY ExportAddressTableJumps;
      IMAGE_DATA_DIRECTORY ManagedNativeHeader;
    } IMAGE_COR20_HEADER,*PIMAGE_COR20_HEADER;
    __attribute__((dllimport)) WORD __attribute__((__stdcall__)) RtlCaptureStackBackTrace (DWORD FramesToSkip, DWORD FramesToCapture, PVOID *BackTrace, PDWORD BackTraceHash);
    __attribute__((dllimport)) void __attribute__((__stdcall__)) RtlCaptureContext (PCONTEXT ContextRecord);
    __attribute__((dllimport)) SIZE_T __attribute__((__stdcall__)) RtlCompareMemory (const void *Source1, const void *Source2, SIZE_T Length);
    __attribute__((dllimport)) void __attribute__((__stdcall__)) RtlUnwind (PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue);
    __attribute__((dllimport)) PVOID __attribute__((__stdcall__)) RtlPcToFileHeader (PVOID PcValue, PVOID *BaseOfImage);
    typedef struct _SINGLE_LIST_ENTRY SLIST_ENTRY,*PSLIST_ENTRY;
    typedef union _SLIST_HEADER {
      ULONGLONG Alignment;
      __extension__ struct {
 SLIST_ENTRY Next;
 WORD Depth;
 WORD Sequence;
      } ;
    } SLIST_HEADER,*PSLIST_HEADER;
    __attribute__((dllimport)) void __attribute__((__stdcall__)) RtlInitializeSListHead (PSLIST_HEADER ListHead);
    __attribute__((dllimport)) PSLIST_ENTRY __attribute__((__stdcall__)) RtlFirstEntrySList (const SLIST_HEADER *ListHead);
    __attribute__((dllimport)) PSLIST_ENTRY __attribute__((__stdcall__)) RtlInterlockedPopEntrySList (PSLIST_HEADER ListHead);
    __attribute__((dllimport)) PSLIST_ENTRY __attribute__((__stdcall__)) RtlInterlockedPushEntrySList (PSLIST_HEADER ListHead, PSLIST_ENTRY ListEntry);
    __attribute__((dllimport)) PSLIST_ENTRY __attribute__((__stdcall__)) RtlInterlockedPushListSListEx (PSLIST_HEADER ListHead, PSLIST_ENTRY List, PSLIST_ENTRY ListEnd, DWORD Count);
    __attribute__((dllimport)) PSLIST_ENTRY __attribute__((__stdcall__)) RtlInterlockedFlushSList (PSLIST_HEADER ListHead);
    __attribute__((dllimport)) WORD __attribute__((__stdcall__)) RtlQueryDepthSList (PSLIST_HEADER ListHead);
typedef struct _RTL_RUN_ONCE { PVOID Ptr; } RTL_RUN_ONCE, *PRTL_RUN_ONCE;
typedef DWORD (__attribute__((__stdcall__)) *PRTL_RUN_ONCE_INIT_FN)(PRTL_RUN_ONCE, PVOID, PVOID *);
  typedef struct _RTL_BARRIER {
    DWORD Reserved1;
    DWORD Reserved2;
    ULONG_PTR Reserved3[2];
    DWORD Reserved4;
    DWORD Reserved5;
  } RTL_BARRIER,*PRTL_BARRIER;
    PVOID __attribute__((__stdcall__)) RtlSecureZeroMemory(PVOID ptr,SIZE_T cnt);
    typedef struct _MESSAGE_RESOURCE_ENTRY {
      WORD Length;
      WORD Flags;
      BYTE Text[1];
    } MESSAGE_RESOURCE_ENTRY,*PMESSAGE_RESOURCE_ENTRY;
    typedef struct _MESSAGE_RESOURCE_BLOCK {
      DWORD LowId;
      DWORD HighId;
      DWORD OffsetToEntries;
    } MESSAGE_RESOURCE_BLOCK,*PMESSAGE_RESOURCE_BLOCK;
    typedef struct _MESSAGE_RESOURCE_DATA {
      DWORD NumberOfBlocks;
      MESSAGE_RESOURCE_BLOCK Blocks[1];
    } MESSAGE_RESOURCE_DATA,*PMESSAGE_RESOURCE_DATA;
    typedef struct _OSVERSIONINFOA {
      DWORD dwOSVersionInfoSize;
      DWORD dwMajorVersion;
      DWORD dwMinorVersion;
      DWORD dwBuildNumber;
      DWORD dwPlatformId;
      CHAR szCSDVersion[128];
    } OSVERSIONINFOA,*POSVERSIONINFOA,*LPOSVERSIONINFOA;
    typedef struct _OSVERSIONINFOW {
      DWORD dwOSVersionInfoSize;
      DWORD dwMajorVersion;
      DWORD dwMinorVersion;
      DWORD dwBuildNumber;
      DWORD dwPlatformId;
      WCHAR szCSDVersion[128];
    } OSVERSIONINFOW,*POSVERSIONINFOW,*LPOSVERSIONINFOW,RTL_OSVERSIONINFOW,*PRTL_OSVERSIONINFOW;
    typedef OSVERSIONINFOA OSVERSIONINFO;
    typedef POSVERSIONINFOA POSVERSIONINFO;
    typedef LPOSVERSIONINFOA LPOSVERSIONINFO;
    typedef struct _OSVERSIONINFOEXA {
      DWORD dwOSVersionInfoSize;
      DWORD dwMajorVersion;
      DWORD dwMinorVersion;
      DWORD dwBuildNumber;
      DWORD dwPlatformId;
      CHAR szCSDVersion[128];
      WORD wServicePackMajor;
      WORD wServicePackMinor;
      WORD wSuiteMask;
      BYTE wProductType;
      BYTE wReserved;
    } OSVERSIONINFOEXA,*POSVERSIONINFOEXA,*LPOSVERSIONINFOEXA;
    typedef struct _OSVERSIONINFOEXW {
      DWORD dwOSVersionInfoSize;
      DWORD dwMajorVersion;
      DWORD dwMinorVersion;
      DWORD dwBuildNumber;
      DWORD dwPlatformId;
      WCHAR szCSDVersion[128];
      WORD wServicePackMajor;
      WORD wServicePackMinor;
      WORD wSuiteMask;
      BYTE wProductType;
      BYTE wReserved;
    } OSVERSIONINFOEXW,*POSVERSIONINFOEXW,*LPOSVERSIONINFOEXW,RTL_OSVERSIONINFOEXW,*PRTL_OSVERSIONINFOEXW;
    typedef OSVERSIONINFOEXA OSVERSIONINFOEX;
    typedef POSVERSIONINFOEXA POSVERSIONINFOEX;
    typedef LPOSVERSIONINFOEXA LPOSVERSIONINFOEX;
    __attribute__((dllimport)) ULONGLONG __attribute__((__stdcall__)) VerSetConditionMask (ULONGLONG ConditionMask, DWORD TypeMask, BYTE Condition);
    __attribute__((dllimport)) BOOLEAN __attribute__((__stdcall__)) RtlGetProductInfo (DWORD OSMajorVersion, DWORD OSMinorVersion, DWORD SpMajorVersion, DWORD SpMinorVersion, PDWORD ReturnedProductType);
    typedef enum _RTL_UMS_THREAD_INFO_CLASS {
      UmsThreadInvalidInfoClass = 0,
      UmsThreadUserContext,
      UmsThreadPriority,
      UmsThreadAffinity,
      UmsThreadTeb,
      UmsThreadIsSuspended,
      UmsThreadIsTerminated,
      UmsThreadMaxInfoClass
    } RTL_UMS_THREAD_INFO_CLASS,*PRTL_UMS_THREAD_INFO_CLASS;
    typedef enum _RTL_UMS_SCHEDULER_REASON {
      UmsSchedulerStartup = 0,
      UmsSchedulerThreadBlocked,
      UmsSchedulerThreadYield,
    } RTL_UMS_SCHEDULER_REASON,*PRTL_UMS_SCHEDULER_REASON;
    typedef void __attribute__((__stdcall__)) RTL_UMS_SCHEDULER_ENTRY_POINT (RTL_UMS_SCHEDULER_REASON Reason, ULONG_PTR ActivationPayload, PVOID SchedulerParam);
    typedef RTL_UMS_SCHEDULER_ENTRY_POINT *PRTL_UMS_SCHEDULER_ENTRY_POINT;
    typedef struct _RTL_CRITICAL_SECTION_DEBUG {
      WORD Type;
      WORD CreatorBackTraceIndex;
      struct _RTL_CRITICAL_SECTION *CriticalSection;
      LIST_ENTRY ProcessLocksList;
      DWORD EntryCount;
      DWORD ContentionCount;
      DWORD Flags;
      WORD CreatorBackTraceIndexHigh;
      WORD SpareWORD;
    } RTL_CRITICAL_SECTION_DEBUG,*PRTL_CRITICAL_SECTION_DEBUG,RTL_RESOURCE_DEBUG,*PRTL_RESOURCE_DEBUG;
#pragma pack(push,8)
    typedef struct _RTL_CRITICAL_SECTION {
      PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
      LONG LockCount;
      LONG RecursionCount;
      HANDLE OwningThread;
      HANDLE LockSemaphore;
      ULONG_PTR SpinCount;
    } RTL_CRITICAL_SECTION,*PRTL_CRITICAL_SECTION;
#pragma pack(pop)
    typedef struct _RTL_SRWLOCK { PVOID Ptr; } RTL_SRWLOCK,*PRTL_SRWLOCK;
    typedef struct _RTL_CONDITION_VARIABLE { PVOID Ptr; } RTL_CONDITION_VARIABLE,*PRTL_CONDITION_VARIABLE;
    typedef void (__attribute__((__stdcall__)) *PAPCFUNC) (ULONG_PTR Parameter);
    typedef LONG (__attribute__((__stdcall__)) *PVECTORED_EXCEPTION_HANDLER) (struct _EXCEPTION_POINTERS *ExceptionInfo);
    typedef enum _HEAP_INFORMATION_CLASS {
      HeapCompatibilityInformation,
      HeapEnableTerminationOnCorruption
    } HEAP_INFORMATION_CLASS;
    typedef void (__attribute__((__stdcall__)) *WORKERCALLBACKFUNC) (PVOID);
    typedef void (__attribute__((__stdcall__)) *APC_CALLBACK_FUNCTION) (DWORD, PVOID, PVOID);
    typedef void (__attribute__((__stdcall__)) *WAITORTIMERCALLBACKFUNC) (PVOID, BOOLEAN);
    typedef WAITORTIMERCALLBACKFUNC WAITORTIMERCALLBACK;
    typedef void (__attribute__((__stdcall__)) *PFLS_CALLBACK_FUNCTION) (PVOID lpFlsData);
    typedef BOOLEAN (__attribute__((__stdcall__)) *PSECURE_MEMORY_CACHE_CALLBACK) (PVOID Addr, SIZE_T Range);
    typedef enum _ACTIVATION_CONTEXT_INFO_CLASS {
      ActivationContextBasicInformation = 1,
      ActivationContextDetailedInformation = 2,
      AssemblyDetailedInformationInActivationContext = 3,
      FileInformationInAssemblyOfAssemblyInActivationContext = 4,
      RunlevelInformationInActivationContext = 5,
      CompatibilityInformationInActivationContext = 6,
      ActivationContextManifestResourceName = 7,
      MaxActivationContextInfoClass,
      AssemblyDetailedInformationInActivationContxt = 3,
      FileInformationInAssemblyOfAssemblyInActivationContxt = 4
    } ACTIVATION_CONTEXT_INFO_CLASS;
    typedef enum {
      ACTCTX_RUN_LEVEL_UNSPECIFIED = 0,
      ACTCTX_RUN_LEVEL_AS_INVOKER,
      ACTCTX_RUN_LEVEL_HIGHEST_AVAILABLE,
      ACTCTX_RUN_LEVEL_REQUIRE_ADMIN,
      ACTCTX_RUN_LEVEL_NUMBERS
    } ACTCTX_REQUESTED_RUN_LEVEL;
    typedef enum {
      ACTCTX_COMPATIBILITY_ELEMENT_TYPE_UNKNOWN = 0,
      ACTCTX_COMPATIBILITY_ELEMENT_TYPE_OS,
      ACTCTX_COMPATIBILITY_ELEMENT_TYPE_MITIGATION
    } ACTCTX_COMPATIBILITY_ELEMENT_TYPE;
    typedef struct _ACTIVATION_CONTEXT_QUERY_INDEX {
      DWORD ulAssemblyIndex;
      DWORD ulFileIndexInAssembly;
    } ACTIVATION_CONTEXT_QUERY_INDEX,*PACTIVATION_CONTEXT_QUERY_INDEX;
    typedef struct _ASSEMBLY_FILE_DETAILED_INFORMATION {
      DWORD ulFlags;
      DWORD ulFilenameLength;
      DWORD ulPathLength;
      PCWSTR lpFileName;
      PCWSTR lpFilePath;
    } ASSEMBLY_FILE_DETAILED_INFORMATION,*PASSEMBLY_FILE_DETAILED_INFORMATION;
    typedef struct _ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION {
      DWORD ulFlags;
      DWORD ulEncodedAssemblyIdentityLength;
      DWORD ulManifestPathType;
      DWORD ulManifestPathLength;
      LARGE_INTEGER liManifestLastWriteTime;
      DWORD ulPolicyPathType;
      DWORD ulPolicyPathLength;
      LARGE_INTEGER liPolicyLastWriteTime;
      DWORD ulMetadataSatelliteRosterIndex;
      DWORD ulManifestVersionMajor;
      DWORD ulManifestVersionMinor;
      DWORD ulPolicyVersionMajor;
      DWORD ulPolicyVersionMinor;
      DWORD ulAssemblyDirectoryNameLength;
      PCWSTR lpAssemblyEncodedAssemblyIdentity;
      PCWSTR lpAssemblyManifestPath;
      PCWSTR lpAssemblyPolicyPath;
      PCWSTR lpAssemblyDirectoryName;
      DWORD ulFileCount;
    } ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION,*PACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION;
    typedef struct _ACTIVATION_CONTEXT_RUN_LEVEL_INFORMATION {
      DWORD ulFlags;
      ACTCTX_REQUESTED_RUN_LEVEL RunLevel;
      DWORD UiAccess;
    } ACTIVATION_CONTEXT_RUN_LEVEL_INFORMATION,*PACTIVATION_CONTEXT_RUN_LEVEL_INFORMATION;
    typedef struct _COMPATIBILITY_CONTEXT_ELEMENT {
      GUID Id;
      ACTCTX_COMPATIBILITY_ELEMENT_TYPE Type;
    } COMPATIBILITY_CONTEXT_ELEMENT,*PCOMPATIBILITY_CONTEXT_ELEMENT;
    typedef struct _ACTIVATION_CONTEXT_COMPATIBILITY_INFORMATION {
      DWORD ElementCount;
      COMPATIBILITY_CONTEXT_ELEMENT Elements[];
    } ACTIVATION_CONTEXT_COMPATIBILITY_INFORMATION,*PACTIVATION_CONTEXT_COMPATIBILITY_INFORMATION;
    typedef struct _SUPPORTED_OS_INFO {
      WORD OsCount;
      WORD MitigationExist;
      WORD OsList[(4)];
    } SUPPORTED_OS_INFO,*PSUPPORTED_OS_INFO;
    typedef struct _ACTIVATION_CONTEXT_DETAILED_INFORMATION {
      DWORD dwFlags;
      DWORD ulFormatVersion;
      DWORD ulAssemblyCount;
      DWORD ulRootManifestPathType;
      DWORD ulRootManifestPathChars;
      DWORD ulRootConfigurationPathType;
      DWORD ulRootConfigurationPathChars;
      DWORD ulAppDirPathType;
      DWORD ulAppDirPathChars;
      PCWSTR lpRootManifestPath;
      PCWSTR lpRootConfigurationPath;
      PCWSTR lpAppDirPath;
    } ACTIVATION_CONTEXT_DETAILED_INFORMATION,*PACTIVATION_CONTEXT_DETAILED_INFORMATION;
    typedef const struct _ACTIVATION_CONTEXT_QUERY_INDEX *PCACTIVATION_CONTEXT_QUERY_INDEX;
    typedef const ASSEMBLY_FILE_DETAILED_INFORMATION *PCASSEMBLY_FILE_DETAILED_INFORMATION;
    typedef const struct _ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION *PCACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION;
    typedef const struct _ACTIVATION_CONTEXT_RUN_LEVEL_INFORMATION *PCACTIVATION_CONTEXT_RUN_LEVEL_INFORMATION;
    typedef const struct _COMPATIBILITY_CONTEXT_ELEMENT *PCCOMPATIBILITY_CONTEXT_ELEMENT;
    typedef const struct _ACTIVATION_CONTEXT_COMPATIBILITY_INFORMATION *PCACTIVATION_CONTEXT_COMPATIBILITY_INFORMATION;
    typedef const struct _ACTIVATION_CONTEXT_DETAILED_INFORMATION *PCACTIVATION_CONTEXT_DETAILED_INFORMATION;
    typedef void (__attribute__((__stdcall__)) *RTL_VERIFIER_DLL_LOAD_CALLBACK) (PWSTR DllName,PVOID DllBase,SIZE_T DllSize,PVOID Reserved);
    typedef void (__attribute__((__stdcall__)) *RTL_VERIFIER_DLL_UNLOAD_CALLBACK) (PWSTR DllName,PVOID DllBase,SIZE_T DllSize,PVOID Reserved);
    typedef void (__attribute__((__stdcall__)) *RTL_VERIFIER_NTDLLHEAPFREE_CALLBACK)(PVOID AllocationBase,SIZE_T AllocationSize);
    typedef struct _RTL_VERIFIER_THUNK_DESCRIPTOR {
      PCHAR ThunkName;
      PVOID ThunkOldAddress;
      PVOID ThunkNewAddress;
    } RTL_VERIFIER_THUNK_DESCRIPTOR,*PRTL_VERIFIER_THUNK_DESCRIPTOR;
    typedef struct _RTL_VERIFIER_DLL_DESCRIPTOR {
      PWCHAR DllName;
      DWORD DllFlags;
      PVOID DllAddress;
      PRTL_VERIFIER_THUNK_DESCRIPTOR DllThunks;
    } RTL_VERIFIER_DLL_DESCRIPTOR,*PRTL_VERIFIER_DLL_DESCRIPTOR;
    typedef struct _RTL_VERIFIER_PROVIDER_DESCRIPTOR {
      DWORD Length;
      PRTL_VERIFIER_DLL_DESCRIPTOR ProviderDlls;
      RTL_VERIFIER_DLL_LOAD_CALLBACK ProviderDllLoadCallback;
      RTL_VERIFIER_DLL_UNLOAD_CALLBACK ProviderDllUnloadCallback;
      PWSTR VerifierImage;
      DWORD VerifierFlags;
      DWORD VerifierDebug;
      PVOID RtlpGetStackTraceAddress;
      PVOID RtlpDebugPageHeapCreate;
      PVOID RtlpDebugPageHeapDestroy;
      RTL_VERIFIER_NTDLLHEAPFREE_CALLBACK ProviderNtdllHeapFreeCallback;
    } RTL_VERIFIER_PROVIDER_DESCRIPTOR,*PRTL_VERIFIER_PROVIDER_DESCRIPTOR;
    void __attribute__((__stdcall__)) RtlApplicationVerifierStop(ULONG_PTR Code,PSTR Message,ULONG_PTR Param1,PSTR Description1,ULONG_PTR Param2,PSTR Description2,ULONG_PTR Param3,PSTR Description3,ULONG_PTR Param4,PSTR Description4);
    __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) RtlSetHeapInformation(PVOID HeapHandle,HEAP_INFORMATION_CLASS HeapInformationClass,PVOID HeapInformation,SIZE_T HeapInformationLength);
    __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) RtlQueryHeapInformation(PVOID HeapHandle,HEAP_INFORMATION_CLASS HeapInformationClass,PVOID HeapInformation,SIZE_T HeapInformationLength,PSIZE_T ReturnLength);
    DWORD __attribute__((__stdcall__)) RtlMultipleAllocateHeap(PVOID HeapHandle,DWORD Flags,SIZE_T Size,DWORD Count,PVOID *Array);
    DWORD __attribute__((__stdcall__)) RtlMultipleFreeHeap(PVOID HeapHandle,DWORD Flags,DWORD Count,PVOID *Array);
    typedef struct _HARDWARE_COUNTER_DATA {
      HARDWARE_COUNTER_TYPE Type;
      DWORD Reserved;
      DWORD64 Value;
    } HARDWARE_COUNTER_DATA,*PHARDWARE_COUNTER_DATA;
    typedef struct _PERFORMANCE_DATA {
      WORD Size;
      BYTE Version;
      BYTE HwCountersCount;
      DWORD ContextSwitchCount;
      DWORD64 WaitReasonBitMap;
      DWORD64 CycleTime;
      DWORD RetryCount;
      DWORD Reserved;
      HARDWARE_COUNTER_DATA HwCounters[16];
    } PERFORMANCE_DATA,*PPERFORMANCE_DATA;
    typedef struct _EVENTLOGRECORD {
      DWORD Length;
      DWORD Reserved;
      DWORD RecordNumber;
      DWORD TimeGenerated;
      DWORD TimeWritten;
      DWORD EventID;
      WORD EventType;
      WORD NumStrings;
      WORD EventCategory;
      WORD ReservedFlags;
      DWORD ClosingRecordNumber;
      DWORD StringOffset;
      DWORD UserSidLength;
      DWORD UserSidOffset;
      DWORD DataLength;
      DWORD DataOffset;
    } EVENTLOGRECORD,*PEVENTLOGRECORD;
    typedef struct _EVENTSFORLOGFILE {
      DWORD ulSize;
      WCHAR szLogicalLogFile[256];
      DWORD ulNumRecords;
      EVENTLOGRECORD pEventLogRecords[];
    } EVENTSFORLOGFILE,*PEVENTSFORLOGFILE;
    typedef struct _PACKEDEVENTINFO {
      DWORD ulSize;
      DWORD ulNumEventsForLogFile;
      DWORD ulOffsets[];
    } PACKEDEVENTINFO,*PPACKEDEVENTINFO;
    typedef enum _CM_SERVICE_NODE_TYPE {
      DriverType = 0x00000001,FileSystemType = 0x00000002,Win32ServiceOwnProcess = 0x00000010,
      Win32ServiceShareProcess = 0x00000020,AdapterType = 0x00000004,RecognizerType = 0x00000008
    } SERVICE_NODE_TYPE;
    typedef enum _CM_SERVICE_LOAD_TYPE {
      BootLoad = 0x00000000,SystemLoad = 0x00000001,AutoLoad = 0x00000002,DemandLoad = 0x00000003,
      DisableLoad = 0x00000004
    } SERVICE_LOAD_TYPE;
    typedef enum _CM_ERROR_CONTROL_TYPE {
      IgnoreError = 0x00000000,NormalError = 0x00000001,SevereError = 0x00000002,CriticalError = 0x00000003
    } SERVICE_ERROR_TYPE;
    typedef struct _TAPE_ERASE {
      DWORD Type;
      BOOLEAN Immediate;
    } TAPE_ERASE,*PTAPE_ERASE;
    typedef struct _TAPE_PREPARE {
      DWORD Operation;
      BOOLEAN Immediate;
    } TAPE_PREPARE,*PTAPE_PREPARE;
    typedef struct _TAPE_WRITE_MARKS {
      DWORD Type;
      DWORD Count;
      BOOLEAN Immediate;
    } TAPE_WRITE_MARKS,*PTAPE_WRITE_MARKS;
    typedef struct _TAPE_GET_POSITION {
      DWORD Type;
      DWORD Partition;
      LARGE_INTEGER Offset;
    } TAPE_GET_POSITION,*PTAPE_GET_POSITION;
    typedef struct _TAPE_SET_POSITION {
      DWORD Method;
      DWORD Partition;
      LARGE_INTEGER Offset;
      BOOLEAN Immediate;
    } TAPE_SET_POSITION,*PTAPE_SET_POSITION;
    typedef struct _TAPE_GET_DRIVE_PARAMETERS {
      BOOLEAN ECC;
      BOOLEAN Compression;
      BOOLEAN DataPadding;
      BOOLEAN ReportSetmarks;
      DWORD DefaultBlockSize;
      DWORD MaximumBlockSize;
      DWORD MinimumBlockSize;
      DWORD MaximumPartitionCount;
      DWORD FeaturesLow;
      DWORD FeaturesHigh;
      DWORD EOTWarningZoneSize;
    } TAPE_GET_DRIVE_PARAMETERS,*PTAPE_GET_DRIVE_PARAMETERS;
    typedef struct _TAPE_SET_DRIVE_PARAMETERS {
      BOOLEAN ECC;
      BOOLEAN Compression;
      BOOLEAN DataPadding;
      BOOLEAN ReportSetmarks;
      DWORD EOTWarningZoneSize;
    } TAPE_SET_DRIVE_PARAMETERS,*PTAPE_SET_DRIVE_PARAMETERS;
    typedef struct _TAPE_GET_MEDIA_PARAMETERS {
      LARGE_INTEGER Capacity;
      LARGE_INTEGER Remaining;
      DWORD BlockSize;
      DWORD PartitionCount;
      BOOLEAN WriteProtected;
    } TAPE_GET_MEDIA_PARAMETERS,*PTAPE_GET_MEDIA_PARAMETERS;
    typedef struct _TAPE_SET_MEDIA_PARAMETERS {
      DWORD BlockSize;
    } TAPE_SET_MEDIA_PARAMETERS,*PTAPE_SET_MEDIA_PARAMETERS;
    typedef struct _TAPE_CREATE_PARTITION {
      DWORD Method;
      DWORD Count;
      DWORD Size;
    } TAPE_CREATE_PARTITION,*PTAPE_CREATE_PARTITION;
    typedef struct _TAPE_WMI_OPERATIONS {
      DWORD Method;
      DWORD DataBufferSize;
      PVOID DataBuffer;
    } TAPE_WMI_OPERATIONS,*PTAPE_WMI_OPERATIONS;
    typedef enum _TAPE_DRIVE_PROBLEM_TYPE {
      TapeDriveProblemNone,TapeDriveReadWriteWarning,TapeDriveReadWriteError,TapeDriveReadWarning,TapeDriveWriteWarning,TapeDriveReadError,TapeDriveWriteError,TapeDriveHardwareError,TapeDriveUnsupportedMedia,TapeDriveScsiConnectionError,TapeDriveTimetoClean,TapeDriveCleanDriveNow,TapeDriveMediaLifeExpired,TapeDriveSnappedTape
    } TAPE_DRIVE_PROBLEM_TYPE;
  typedef DWORD TP_VERSION,*PTP_VERSION;
  typedef struct _TP_CALLBACK_INSTANCE TP_CALLBACK_INSTANCE,*PTP_CALLBACK_INSTANCE;
  typedef void (__attribute__((__stdcall__)) *PTP_SIMPLE_CALLBACK) (PTP_CALLBACK_INSTANCE Instance, PVOID Context);
  typedef struct _TP_POOL TP_POOL,*PTP_POOL;
  typedef enum _TP_CALLBACK_PRIORITY {
    TP_CALLBACK_PRIORITY_HIGH,
    TP_CALLBACK_PRIORITY_NORMAL,
    TP_CALLBACK_PRIORITY_LOW,
    TP_CALLBACK_PRIORITY_INVALID,
    TP_CALLBACK_PRIORITY_COUNT = TP_CALLBACK_PRIORITY_INVALID
  } TP_CALLBACK_PRIORITY;
  typedef struct _TP_POOL_STACK_INFORMATION {
    SIZE_T StackReserve;
    SIZE_T StackCommit;
  } TP_POOL_STACK_INFORMATION, *PTP_POOL_STACK_INFORMATION;
  typedef struct _TP_CLEANUP_GROUP TP_CLEANUP_GROUP,*PTP_CLEANUP_GROUP;
  typedef void (__attribute__((__stdcall__)) *PTP_CLEANUP_GROUP_CANCEL_CALLBACK) (PVOID ObjectContext, PVOID CleanupContext);
  typedef struct _TP_CALLBACK_ENVIRON_V3 {
    TP_VERSION Version;
    PTP_POOL Pool;
    PTP_CLEANUP_GROUP CleanupGroup;
    PTP_CLEANUP_GROUP_CANCEL_CALLBACK CleanupGroupCancelCallback;
    PVOID RaceDll;
    struct _ACTIVATION_CONTEXT *ActivationContext;
    PTP_SIMPLE_CALLBACK FinalizationCallback;
    union {
      DWORD Flags;
      struct {
        DWORD LongFunction : 1;
        DWORD Persistent : 1;
        DWORD Private : 30;
      } s;
    } u;
    TP_CALLBACK_PRIORITY CallbackPriority;
    DWORD Size;
  } TP_CALLBACK_ENVIRON_V3;
  typedef TP_CALLBACK_ENVIRON_V3 TP_CALLBACK_ENVIRON, *PTP_CALLBACK_ENVIRON;
  typedef struct _TP_WORK TP_WORK,*PTP_WORK;
  typedef void (__attribute__((__stdcall__)) *PTP_WORK_CALLBACK) (PTP_CALLBACK_INSTANCE Instance, PVOID Context, PTP_WORK Work);
  typedef struct _TP_TIMER TP_TIMER,*PTP_TIMER;
  typedef void (__attribute__((__stdcall__)) *PTP_TIMER_CALLBACK) (PTP_CALLBACK_INSTANCE Instance, PVOID Context, PTP_TIMER Timer);
  typedef DWORD TP_WAIT_RESULT;
  typedef struct _TP_WAIT TP_WAIT,*PTP_WAIT;
  typedef void (__attribute__((__stdcall__)) *PTP_WAIT_CALLBACK) (PTP_CALLBACK_INSTANCE Instance, PVOID Context, PTP_WAIT Wait, TP_WAIT_RESULT WaitResult);
  typedef struct _TP_IO TP_IO,*PTP_IO;
    extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) void TpInitializeCallbackEnviron (PTP_CALLBACK_ENVIRON cbe) {
      cbe->Pool = ((void *)0);
      cbe->CleanupGroup = ((void *)0);
      cbe->CleanupGroupCancelCallback = ((void *)0);
      cbe->RaceDll = ((void *)0);
      cbe->ActivationContext = ((void *)0);
      cbe->FinalizationCallback = ((void *)0);
      cbe->u.Flags = 0;
      cbe->Version = 3;
      cbe->CallbackPriority = TP_CALLBACK_PRIORITY_NORMAL;
      cbe->Size = sizeof (TP_CALLBACK_ENVIRON);
    }
    extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) void TpSetCallbackThreadpool (PTP_CALLBACK_ENVIRON cbe, PTP_POOL pool) { cbe->Pool = pool; }
    extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) void TpSetCallbackCleanupGroup (PTP_CALLBACK_ENVIRON cbe, PTP_CLEANUP_GROUP cleanup_group, PTP_CLEANUP_GROUP_CANCEL_CALLBACK cleanup_group_cb) {
      cbe->CleanupGroup = cleanup_group;
      cbe->CleanupGroupCancelCallback = cleanup_group_cb;
    }
    extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) void TpSetCallbackActivationContext (PTP_CALLBACK_ENVIRON cbe, struct _ACTIVATION_CONTEXT *actx) { cbe->ActivationContext = actx; }
    extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) void TpSetCallbackNoActivationContext (PTP_CALLBACK_ENVIRON cbe) { cbe->ActivationContext = (struct _ACTIVATION_CONTEXT *) (LONG_PTR) -1; }
    extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) void TpSetCallbackLongFunction (PTP_CALLBACK_ENVIRON cbe) { cbe->u.s.LongFunction = 1; }
    extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) void TpSetCallbackRaceWithDll (PTP_CALLBACK_ENVIRON cbe, PVOID h) { cbe->RaceDll = h; }
    extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) void TpSetCallbackFinalizationCallback (PTP_CALLBACK_ENVIRON cbe, PTP_SIMPLE_CALLBACK fini_cb) { cbe->FinalizationCallback = fini_cb; }
    extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) void TpSetCallbackPriority (PTP_CALLBACK_ENVIRON cbe, TP_CALLBACK_PRIORITY prio) { cbe->CallbackPriority = prio; }
    extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) void TpSetCallbackPersistent (PTP_CALLBACK_ENVIRON cbe) { cbe->u.s.Persistent = 1; }
    extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) void TpDestroyCallbackEnviron (PTP_CALLBACK_ENVIRON cbe) { {(cbe) = (cbe);}; }
  typedef GUID CRM_PROTOCOL_ID,*PCRM_PROTOCOL_ID;
  typedef ULONG NOTIFICATION_MASK;
  typedef struct _TRANSACTION_NOTIFICATION {
    PVOID TransactionKey;
    ULONG TransactionNotification;
    LARGE_INTEGER TmVirtualClock;
    ULONG ArgumentLength;
  } TRANSACTION_NOTIFICATION,*PTRANSACTION_NOTIFICATION;
  typedef struct _TRANSACTION_NOTIFICATION_RECOVERY_ARGUMENT {
    GUID EnlistmentId;
    GUID UOW;
  } TRANSACTION_NOTIFICATION_RECOVERY_ARGUMENT,*PTRANSACTION_NOTIFICATION_RECOVERY_ARGUMENT;
  typedef struct _TRANSACTION_NOTIFICATION_TM_ONLINE_ARGUMENT {
    GUID TmIdentity;
    ULONG Flags;
  } TRANSACTION_NOTIFICATION_TM_ONLINE_ARGUMENT,*PTRANSACTION_NOTIFICATION_TM_ONLINE_ARGUMENT;
  typedef ULONG SAVEPOINT_ID,*PSAVEPOINT_ID;
  typedef struct _TRANSACTION_NOTIFICATION_SAVEPOINT_ARGUMENT {
    SAVEPOINT_ID SavepointId;
  } TRANSACTION_NOTIFICATION_SAVEPOINT_ARGUMENT,*PTRANSACTION_NOTIFICATION_SAVEPOINT_ARGUMENT;
  typedef struct _TRANSACTION_NOTIFICATION_PROPAGATE_ARGUMENT {
    ULONG PropagationCookie;
    GUID UOW;
    GUID TmIdentity;
    ULONG BufferLength;
  } TRANSACTION_NOTIFICATION_PROPAGATE_ARGUMENT,*PTRANSACTION_NOTIFICATION_PROPAGATE_ARGUMENT;
  typedef struct _TRANSACTION_NOTIFICATION_MARSHAL_ARGUMENT {
    ULONG MarshalCookie;
    GUID UOW;
  } TRANSACTION_NOTIFICATION_MARSHAL_ARGUMENT,*PTRANSACTION_NOTIFICATION_MARSHAL_ARGUMENT;
  typedef TRANSACTION_NOTIFICATION_PROPAGATE_ARGUMENT TRANSACTION_NOTIFICATION_PROMOTE_ARGUMENT,*PTRANSACTION_NOTIFICATION_PROMOTE_ARGUMENT;
  typedef struct _KCRM_MARSHAL_HEADER {
    ULONG VersionMajor;
    ULONG VersionMinor;
    ULONG NumProtocols;
    ULONG Unused;
  } KCRM_MARSHAL_HEADER,*PKCRM_MARSHAL_HEADER,* PRKCRM_MARSHAL_HEADER;
  typedef struct _KCRM_TRANSACTION_BLOB {
    GUID UOW;
    GUID TmIdentity;
    ULONG IsolationLevel;
    ULONG IsolationFlags;
    ULONG Timeout;
    WCHAR Description[64];
  } KCRM_TRANSACTION_BLOB,*PKCRM_TRANSACTION_BLOB,* PRKCRM_TRANSACTION_BLOB;
  typedef struct _KCRM_PROTOCOL_BLOB {
    CRM_PROTOCOL_ID ProtocolId;
    ULONG StaticInfoLength;
    ULONG TransactionIdInfoLength;
    ULONG Unused1;
    ULONG Unused2;
  } KCRM_PROTOCOL_BLOB,*PKCRM_PROTOCOL_BLOB,* PRKCRM_PROTOCOL_BLOB;
      typedef enum _TRANSACTION_OUTCOME {
 TransactionOutcomeUndetermined = 1,
 TransactionOutcomeCommitted,
 TransactionOutcomeAborted,
      } TRANSACTION_OUTCOME;
      typedef enum _TRANSACTION_STATE {
 TransactionStateNormal = 1,
 TransactionStateIndoubt,
 TransactionStateCommittedNotify,
      } TRANSACTION_STATE;
      typedef struct _TRANSACTION_BASIC_INFORMATION {
 GUID TransactionId;
 DWORD State;
 DWORD Outcome;
      } TRANSACTION_BASIC_INFORMATION,*PTRANSACTION_BASIC_INFORMATION;
      typedef struct _TRANSACTIONMANAGER_BASIC_INFORMATION {
 GUID TmIdentity;
 LARGE_INTEGER VirtualClock;
      } TRANSACTIONMANAGER_BASIC_INFORMATION,*PTRANSACTIONMANAGER_BASIC_INFORMATION;
      typedef struct _TRANSACTIONMANAGER_LOG_INFORMATION {
 GUID LogIdentity;
      } TRANSACTIONMANAGER_LOG_INFORMATION,*PTRANSACTIONMANAGER_LOG_INFORMATION;
      typedef struct _TRANSACTIONMANAGER_LOGPATH_INFORMATION {
 DWORD LogPathLength;
 WCHAR LogPath[1];
      } TRANSACTIONMANAGER_LOGPATH_INFORMATION,*PTRANSACTIONMANAGER_LOGPATH_INFORMATION;
      typedef struct _TRANSACTIONMANAGER_RECOVERY_INFORMATION {
 ULONGLONG LastRecoveredLsn;
      } TRANSACTIONMANAGER_RECOVERY_INFORMATION,*PTRANSACTIONMANAGER_RECOVERY_INFORMATION;
      typedef struct _TRANSACTIONMANAGER_OLDEST_INFORMATION {
 GUID OldestTransactionGuid;
      } TRANSACTIONMANAGER_OLDEST_INFORMATION,*PTRANSACTIONMANAGER_OLDEST_INFORMATION;
      typedef struct _TRANSACTION_PROPERTIES_INFORMATION {
 DWORD IsolationLevel;
 DWORD IsolationFlags;
 LARGE_INTEGER Timeout;
 DWORD Outcome;
 DWORD DescriptionLength;
 WCHAR Description[1];
      } TRANSACTION_PROPERTIES_INFORMATION,*PTRANSACTION_PROPERTIES_INFORMATION;
      typedef struct _TRANSACTION_BIND_INFORMATION {
 HANDLE TmHandle;
      } TRANSACTION_BIND_INFORMATION,*PTRANSACTION_BIND_INFORMATION;
      typedef struct _TRANSACTION_ENLISTMENT_PAIR {
 GUID EnlistmentId;
 GUID ResourceManagerId;
      } TRANSACTION_ENLISTMENT_PAIR,*PTRANSACTION_ENLISTMENT_PAIR;
      typedef struct _TRANSACTION_ENLISTMENTS_INFORMATION {
 DWORD NumberOfEnlistments;
 TRANSACTION_ENLISTMENT_PAIR EnlistmentPair[1];
      } TRANSACTION_ENLISTMENTS_INFORMATION,*PTRANSACTION_ENLISTMENTS_INFORMATION;
      typedef struct _TRANSACTION_SUPERIOR_ENLISTMENT_INFORMATION {
 TRANSACTION_ENLISTMENT_PAIR SuperiorEnlistmentPair;
      } TRANSACTION_SUPERIOR_ENLISTMENT_INFORMATION,*PTRANSACTION_SUPERIOR_ENLISTMENT_INFORMATION;
      typedef struct _RESOURCEMANAGER_BASIC_INFORMATION {
 GUID ResourceManagerId;
 DWORD DescriptionLength;
 WCHAR Description[1];
      } RESOURCEMANAGER_BASIC_INFORMATION,*PRESOURCEMANAGER_BASIC_INFORMATION;
      typedef struct _RESOURCEMANAGER_COMPLETION_INFORMATION {
 HANDLE IoCompletionPortHandle;
 ULONG_PTR CompletionKey;
      } RESOURCEMANAGER_COMPLETION_INFORMATION,*PRESOURCEMANAGER_COMPLETION_INFORMATION;
      typedef enum _TRANSACTION_INFORMATION_CLASS {
 TransactionBasicInformation,
 TransactionPropertiesInformation,
 TransactionEnlistmentInformation,
 TransactionSuperiorEnlistmentInformation,
 TransactionBindInformation,
 TransactionDTCPrivateInformation
      } TRANSACTION_INFORMATION_CLASS;
      typedef enum _TRANSACTIONMANAGER_INFORMATION_CLASS {
 TransactionManagerBasicInformation,
 TransactionManagerLogInformation,
 TransactionManagerLogPathInformation,
 TransactionManagerOnlineProbeInformation = 3,
 TransactionManagerRecoveryInformation = 4,
 TransactionManagerOldestTransactionInformation = 5
      } TRANSACTIONMANAGER_INFORMATION_CLASS;
      typedef enum _RESOURCEMANAGER_INFORMATION_CLASS {
 ResourceManagerBasicInformation,
 ResourceManagerCompletionInformation
      } RESOURCEMANAGER_INFORMATION_CLASS;
      typedef struct _ENLISTMENT_BASIC_INFORMATION {
 GUID EnlistmentId;
 GUID TransactionId;
 GUID ResourceManagerId;
      } ENLISTMENT_BASIC_INFORMATION,*PENLISTMENT_BASIC_INFORMATION;
      typedef struct _ENLISTMENT_CRM_INFORMATION {
 GUID CrmTransactionManagerId;
 GUID CrmResourceManagerId;
 GUID CrmEnlistmentId;
      } ENLISTMENT_CRM_INFORMATION,*PENLISTMENT_CRM_INFORMATION;
      typedef enum _ENLISTMENT_INFORMATION_CLASS {
 EnlistmentBasicInformation,
 EnlistmentRecoveryInformation,
 EnlistmentCrmInformation
      } ENLISTMENT_INFORMATION_CLASS;
      typedef struct _TRANSACTION_LIST_ENTRY {
         GUID UOW;
      } TRANSACTION_LIST_ENTRY,*PTRANSACTION_LIST_ENTRY;
      typedef struct _TRANSACTION_LIST_INFORMATION {
 DWORD NumberOfTransactions;
 TRANSACTION_LIST_ENTRY TransactionInformation[1];
      } TRANSACTION_LIST_INFORMATION,*PTRANSACTION_LIST_INFORMATION;
      typedef enum _KTMOBJECT_TYPE {
 KTMOBJECT_TRANSACTION,
 KTMOBJECT_TRANSACTION_MANAGER,
 KTMOBJECT_RESOURCE_MANAGER,
 KTMOBJECT_ENLISTMENT,
 KTMOBJECT_INVALID
      } KTMOBJECT_TYPE,*PKTMOBJECT_TYPE;
      typedef struct _KTMOBJECT_CURSOR {
 GUID LastQuery;
 DWORD ObjectIdCount;
 GUID ObjectIds[1];
      } KTMOBJECT_CURSOR,*PKTMOBJECT_CURSOR;
typedef struct _WOW64_FLOATING_SAVE_AREA {
  DWORD ControlWord;
  DWORD StatusWord;
  DWORD TagWord;
  DWORD ErrorOffset;
  DWORD ErrorSelector;
  DWORD DataOffset;
  DWORD DataSelector;
  BYTE RegisterArea[80];
  DWORD Cr0NpxState;
} WOW64_FLOATING_SAVE_AREA, *PWOW64_FLOATING_SAVE_AREA;
#pragma pack(push,4)
typedef struct _WOW64_CONTEXT {
  DWORD ContextFlags;
  DWORD Dr0;
  DWORD Dr1;
  DWORD Dr2;
  DWORD Dr3;
  DWORD Dr6;
  DWORD Dr7;
  WOW64_FLOATING_SAVE_AREA FloatSave;
  DWORD SegGs;
  DWORD SegFs;
  DWORD SegEs;
  DWORD SegDs;
  DWORD Edi;
  DWORD Esi;
  DWORD Ebx;
  DWORD Edx;
  DWORD Ecx;
  DWORD Eax;
  DWORD Ebp;
  DWORD Eip;
  DWORD SegCs;
  DWORD EFlags;
  DWORD Esp;
  DWORD SegSs;
  BYTE ExtendedRegisters[512];
} WOW64_CONTEXT, *PWOW64_CONTEXT;
#pragma pack(pop)
typedef struct _WOW64_LDT_ENTRY {
  WORD LimitLow;
  WORD BaseLow;
  __extension__ union {
    struct {
      BYTE BaseMid;
      BYTE Flags1;
      BYTE Flags2;
      BYTE BaseHi;
    } Bytes;
    struct {
      DWORD BaseMid :8;
      DWORD Type :5;
      DWORD Dpl :2;
      DWORD Pres :1;
      DWORD LimitHi :4;
      DWORD Sys :1;
      DWORD Reserved_0 :1;
      DWORD Default_Big :1;
      DWORD Granularity :1;
      DWORD BaseHi :8;
    } Bits;
  } HighWord;
} WOW64_LDT_ENTRY, *PWOW64_LDT_ENTRY;
    typedef struct _WOW64_DESCRIPTOR_TABLE_ENTRY {
      DWORD Selector;
      WOW64_LDT_ENTRY Descriptor;
    } WOW64_DESCRIPTOR_TABLE_ENTRY,*PWOW64_DESCRIPTOR_TABLE_ENTRY;
typedef struct _PROCESSOR_NUMBER {
  WORD Group;
  BYTE Number;
  BYTE Reserved;
} PROCESSOR_NUMBER, *PPROCESSOR_NUMBER;
  typedef UINT_PTR WPARAM;
  typedef LONG_PTR LPARAM;
  typedef LONG_PTR LRESULT;
  typedef HANDLE *SPHANDLE;
  typedef HANDLE *LPHANDLE;
  typedef HANDLE HGLOBAL;
  typedef HANDLE HLOCAL;
  typedef HANDLE GLOBALHANDLE;
  typedef HANDLE LOCALHANDLE;
  typedef int (__attribute__((__stdcall__)) *FARPROC) ();
  typedef int (__attribute__((__stdcall__)) *NEARPROC) ();
  typedef int (__attribute__((__stdcall__)) *PROC) ();
  typedef WORD ATOM;
  typedef int HFILE;
  struct HINSTANCE__ { int unused; }; typedef struct HINSTANCE__ *HINSTANCE;
  struct HKEY__ { int unused; }; typedef struct HKEY__ *HKEY;
  typedef HKEY *PHKEY;
  struct HKL__ { int unused; }; typedef struct HKL__ *HKL;
  struct HLSURF__ { int unused; }; typedef struct HLSURF__ *HLSURF;
  struct HMETAFILE__ { int unused; }; typedef struct HMETAFILE__ *HMETAFILE;
  typedef HINSTANCE HMODULE;
  struct HRGN__ { int unused; }; typedef struct HRGN__ *HRGN;
  struct HRSRC__ { int unused; }; typedef struct HRSRC__ *HRSRC;
  struct HSPRITE__ { int unused; }; typedef struct HSPRITE__ *HSPRITE;
  struct HSTR__ { int unused; }; typedef struct HSTR__ *HSTR;
  struct HTASK__ { int unused; }; typedef struct HTASK__ *HTASK;
  struct HWINSTA__ { int unused; }; typedef struct HWINSTA__ *HWINSTA;
  typedef struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
  } FILETIME,*PFILETIME,*LPFILETIME;
struct HWND__ { int unused; }; typedef struct HWND__ *HWND;
struct HHOOK__ { int unused; }; typedef struct HHOOK__ *HHOOK;
  typedef void *HGDIOBJ;
struct HACCEL__ { int unused; }; typedef struct HACCEL__ *HACCEL;
struct HBITMAP__ { int unused; }; typedef struct HBITMAP__ *HBITMAP;
struct HBRUSH__ { int unused; }; typedef struct HBRUSH__ *HBRUSH;
struct HCOLORSPACE__ { int unused; }; typedef struct HCOLORSPACE__ *HCOLORSPACE;
struct HDC__ { int unused; }; typedef struct HDC__ *HDC;
struct HGLRC__ { int unused; }; typedef struct HGLRC__ *HGLRC;
struct HDESK__ { int unused; }; typedef struct HDESK__ *HDESK;
struct HENHMETAFILE__ { int unused; }; typedef struct HENHMETAFILE__ *HENHMETAFILE;
struct HFONT__ { int unused; }; typedef struct HFONT__ *HFONT;
struct HICON__ { int unused; }; typedef struct HICON__ *HICON;
struct HMENU__ { int unused; }; typedef struct HMENU__ *HMENU;
struct HPALETTE__ { int unused; }; typedef struct HPALETTE__ *HPALETTE;
struct HPEN__ { int unused; }; typedef struct HPEN__ *HPEN;
struct HMONITOR__ { int unused; }; typedef struct HMONITOR__ *HMONITOR;
struct HWINEVENTHOOK__ { int unused; }; typedef struct HWINEVENTHOOK__ *HWINEVENTHOOK;
typedef HICON HCURSOR;
typedef DWORD COLORREF;
struct HUMPD__ { int unused; }; typedef struct HUMPD__ *HUMPD;
typedef DWORD *LPCOLORREF;
typedef struct tagRECT {
  LONG left;
  LONG top;
  LONG right;
  LONG bottom;
} RECT,*PRECT,*NPRECT,*LPRECT;
typedef const RECT *LPCRECT;
typedef struct _RECTL {
  LONG left;
  LONG top;
  LONG right;
  LONG bottom;
} RECTL,*PRECTL,*LPRECTL;
typedef const RECTL *LPCRECTL;
typedef struct tagPOINT {
  LONG x;
  LONG y;
} POINT,*PPOINT,*NPPOINT,*LPPOINT;
typedef struct _POINTL {
  LONG x;
  LONG y;
} POINTL,*PPOINTL;
typedef struct tagSIZE {
  LONG cx;
  LONG cy;
} SIZE,*PSIZE,*LPSIZE;
typedef SIZE SIZEL;
typedef SIZE *PSIZEL,*LPSIZEL;
typedef struct tagPOINTS {
  SHORT x;
  SHORT y;
} POINTS,*PPOINTS,*LPPOINTS;
  typedef struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    WINBOOL bInheritHandle;
  } SECURITY_ATTRIBUTES, *PSECURITY_ATTRIBUTES, *LPSECURITY_ATTRIBUTES;
  typedef struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    __extension__ union {
      struct {
 DWORD Offset;
 DWORD OffsetHigh;
      } ;
      PVOID Pointer;
    } ;
    HANDLE hEvent;
  } OVERLAPPED, *LPOVERLAPPED;
  typedef struct _OVERLAPPED_ENTRY {
    ULONG_PTR lpCompletionKey;
    LPOVERLAPPED lpOverlapped;
    ULONG_PTR Internal;
    DWORD dwNumberOfBytesTransferred;
  } OVERLAPPED_ENTRY, *LPOVERLAPPED_ENTRY;
  typedef struct _SYSTEMTIME {
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    WORD wMilliseconds;
  } SYSTEMTIME, *PSYSTEMTIME, *LPSYSTEMTIME;
  typedef struct _WIN32_FIND_DATAA {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    CHAR cFileName[260];
    CHAR cAlternateFileName[14];
  } WIN32_FIND_DATAA, *PWIN32_FIND_DATAA, *LPWIN32_FIND_DATAA;
  typedef struct _WIN32_FIND_DATAW {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    WCHAR cFileName[260];
    WCHAR cAlternateFileName[14];
  } WIN32_FIND_DATAW, *PWIN32_FIND_DATAW, *LPWIN32_FIND_DATAW;
  typedef WIN32_FIND_DATAA WIN32_FIND_DATA;
  typedef PWIN32_FIND_DATAA PWIN32_FIND_DATA;
  typedef LPWIN32_FIND_DATAA LPWIN32_FIND_DATA;
  typedef enum _FINDEX_INFO_LEVELS {
    FindExInfoStandard,
    FindExInfoBasic,
    FindExInfoMaxInfoLevel
  } FINDEX_INFO_LEVELS;
  typedef enum _FINDEX_SEARCH_OPS {
    FindExSearchNameMatch,
    FindExSearchLimitToDirectories,
    FindExSearchLimitToDevices,
    FindExSearchMaxSearchOp
  } FINDEX_SEARCH_OPS;
  typedef enum _GET_FILEEX_INFO_LEVELS {
    GetFileExInfoStandard,
    GetFileExMaxInfoLevel
  } GET_FILEEX_INFO_LEVELS;
  typedef enum _FILE_INFO_BY_HANDLE_CLASS {
    FileBasicInfo ,
    FileStandardInfo,
    FileNameInfo,
    FileRenameInfo,
    FileDispositionInfo,
    FileAllocationInfo,
    FileEndOfFileInfo,
    FileStreamInfo,
    FileCompressionInfo,
    FileAttributeTagInfo,
    FileIdBothDirectoryInfo,
    FileIdBothDirectoryRestartInfo,
    FileIoPriorityHintInfo,
    FileRemoteProtocolInfo,
    FileFullDirectoryInfo,
    FileFullDirectoryRestartInfo,
    MaximumFileInfoByHandleClass
  } FILE_INFO_BY_HANDLE_CLASS, *PFILE_INFO_BY_HANDLE_CLASS;
  typedef RTL_CRITICAL_SECTION CRITICAL_SECTION;
  typedef PRTL_CRITICAL_SECTION PCRITICAL_SECTION;
  typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;
  typedef RTL_CRITICAL_SECTION_DEBUG CRITICAL_SECTION_DEBUG;
  typedef PRTL_CRITICAL_SECTION_DEBUG PCRITICAL_SECTION_DEBUG;
  typedef PRTL_CRITICAL_SECTION_DEBUG LPCRITICAL_SECTION_DEBUG;
  typedef void (__attribute__((__stdcall__)) *LPOVERLAPPED_COMPLETION_ROUTINE) (DWORD dwErrorCode, DWORD dwNumberOfBytesTransfered, LPOVERLAPPED lpOverlapped);
  typedef struct _PROCESS_HEAP_ENTRY {
    PVOID lpData;
    DWORD cbData;
    BYTE cbOverhead;
    BYTE iRegionIndex;
    WORD wFlags;
    __extension__ union {
      struct {
 HANDLE hMem;
 DWORD dwReserved[3];
      } Block;
      struct {
 DWORD dwCommittedSize;
 DWORD dwUnCommittedSize;
 LPVOID lpFirstBlock;
 LPVOID lpLastBlock;
      } Region;
    } ;
  } PROCESS_HEAP_ENTRY,*LPPROCESS_HEAP_ENTRY,*PPROCESS_HEAP_ENTRY;
  typedef struct _REASON_CONTEXT {
    ULONG Version;
    DWORD Flags;
    union {
      struct {
 HMODULE LocalizedReasonModule;
 ULONG LocalizedReasonId;
 ULONG ReasonStringCount;
 LPWSTR *ReasonStrings;
      } Detailed;
      LPWSTR SimpleReasonString;
    } Reason;
  } REASON_CONTEXT, *PREASON_CONTEXT;
  typedef DWORD (__attribute__((__stdcall__)) *PTHREAD_START_ROUTINE) (LPVOID lpThreadParameter);
  typedef PTHREAD_START_ROUTINE LPTHREAD_START_ROUTINE;
  typedef struct _EXCEPTION_DEBUG_INFO {
    EXCEPTION_RECORD ExceptionRecord;
    DWORD dwFirstChance;
  } EXCEPTION_DEBUG_INFO, *LPEXCEPTION_DEBUG_INFO;
  typedef struct _CREATE_THREAD_DEBUG_INFO {
    HANDLE hThread;
    LPVOID lpThreadLocalBase;
    LPTHREAD_START_ROUTINE lpStartAddress;
  } CREATE_THREAD_DEBUG_INFO, *LPCREATE_THREAD_DEBUG_INFO;
  typedef struct _CREATE_PROCESS_DEBUG_INFO {
    HANDLE hFile;
    HANDLE hProcess;
    HANDLE hThread;
    LPVOID lpBaseOfImage;
    DWORD dwDebugInfoFileOffset;
    DWORD nDebugInfoSize;
    LPVOID lpThreadLocalBase;
    LPTHREAD_START_ROUTINE lpStartAddress;
    LPVOID lpImageName;
    WORD fUnicode;
  } CREATE_PROCESS_DEBUG_INFO, *LPCREATE_PROCESS_DEBUG_INFO;
  typedef struct _EXIT_THREAD_DEBUG_INFO {
    DWORD dwExitCode;
  } EXIT_THREAD_DEBUG_INFO, *LPEXIT_THREAD_DEBUG_INFO;
  typedef struct _EXIT_PROCESS_DEBUG_INFO {
    DWORD dwExitCode;
  } EXIT_PROCESS_DEBUG_INFO, *LPEXIT_PROCESS_DEBUG_INFO;
  typedef struct _LOAD_DLL_DEBUG_INFO {
    HANDLE hFile;
    LPVOID lpBaseOfDll;
    DWORD dwDebugInfoFileOffset;
    DWORD nDebugInfoSize;
    LPVOID lpImageName;
    WORD fUnicode;
  } LOAD_DLL_DEBUG_INFO, *LPLOAD_DLL_DEBUG_INFO;
  typedef struct _UNLOAD_DLL_DEBUG_INFO {
    LPVOID lpBaseOfDll;
  } UNLOAD_DLL_DEBUG_INFO, *LPUNLOAD_DLL_DEBUG_INFO;
  typedef struct _OUTPUT_DEBUG_STRING_INFO {
    LPSTR lpDebugStringData;
    WORD fUnicode;
    WORD nDebugStringLength;
  } OUTPUT_DEBUG_STRING_INFO, *LPOUTPUT_DEBUG_STRING_INFO;
  typedef struct _RIP_INFO {
    DWORD dwError;
    DWORD dwType;
  } RIP_INFO, *LPRIP_INFO;
  typedef struct _DEBUG_EVENT {
    DWORD dwDebugEventCode;
    DWORD dwProcessId;
    DWORD dwThreadId;
    union {
      EXCEPTION_DEBUG_INFO Exception;
      CREATE_THREAD_DEBUG_INFO CreateThread;
      CREATE_PROCESS_DEBUG_INFO CreateProcessInfo;
      EXIT_THREAD_DEBUG_INFO ExitThread;
      EXIT_PROCESS_DEBUG_INFO ExitProcess;
      LOAD_DLL_DEBUG_INFO LoadDll;
      UNLOAD_DLL_DEBUG_INFO UnloadDll;
      OUTPUT_DEBUG_STRING_INFO DebugString;
      RIP_INFO RipInfo;
    } u;
  } DEBUG_EVENT, *LPDEBUG_EVENT;
  typedef PCONTEXT LPCONTEXT;
  typedef struct _CONTRACT_DESCRIPTION CONTRACT_DESCRIPTION;
  typedef struct _BEM_REFERENCE BEM_REFERENCE;
  typedef void (__attribute__((__stdcall__)) *BEM_FREE_INTERFACE_CALLBACK) (void *interfaceInstance);
  HRESULT __attribute__((__stdcall__)) BemCreateReference (const GUID *const iid, void *interfaceInstance, BEM_FREE_INTERFACE_CALLBACK freeCallback, BEM_REFERENCE **reference);
  HRESULT __attribute__((__stdcall__)) BemCreateContractFrom (LPCWSTR dllPath, const GUID *const extensionId, const CONTRACT_DESCRIPTION *contractDescription, void *hostContract, void **contract);
  HRESULT __attribute__((__stdcall__)) BemCopyReference (BEM_REFERENCE *reference, BEM_REFERENCE **copiedReference);
  void __attribute__((__stdcall__)) BemFreeReference (BEM_REFERENCE *reference);
  void __attribute__((__stdcall__)) BemFreeContract (void *contract);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsDebuggerPresent (void);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) OutputDebugStringA (LPCSTR lpOutputString);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) OutputDebugStringW (LPCWSTR lpOutputString);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) DebugBreak (void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ContinueDebugEvent (DWORD dwProcessId, DWORD dwThreadId, DWORD dwContinueStatus);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) WaitForDebugEvent (LPDEBUG_EVENT lpDebugEvent, DWORD dwMilliseconds);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DebugActiveProcess (DWORD dwProcessId);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DebugActiveProcessStop (DWORD dwProcessId);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CheckRemoteDebuggerPresent (HANDLE hProcess, PBOOL pbDebuggerPresent);
typedef LONG (__attribute__((__stdcall__)) *PTOP_LEVEL_EXCEPTION_FILTER) (struct _EXCEPTION_POINTERS *ExceptionInfo);
typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;
    __attribute__((dllimport)) UINT __attribute__((__stdcall__)) SetErrorMode (UINT uMode);
    __attribute__((dllimport)) LPTOP_LEVEL_EXCEPTION_FILTER __attribute__((__stdcall__)) SetUnhandledExceptionFilter (LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter);
    __attribute__((dllimport)) LONG __attribute__((__stdcall__)) UnhandledExceptionFilter (struct _EXCEPTION_POINTERS *ExceptionInfo);
    __attribute__((dllimport)) PVOID __attribute__((__stdcall__)) AddVectoredExceptionHandler (ULONG First, PVECTORED_EXCEPTION_HANDLER Handler);
  __attribute__((dllimport)) ULONG __attribute__((__stdcall__)) RemoveVectoredExceptionHandler (PVOID Handle);
  __attribute__((dllimport)) PVOID __attribute__((__stdcall__)) AddVectoredContinueHandler (ULONG First, PVECTORED_EXCEPTION_HANDLER Handler);
  __attribute__((dllimport)) ULONG __attribute__((__stdcall__)) RemoveVectoredContinueHandler (PVOID Handle);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetErrorMode (void);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) RaiseException (DWORD dwExceptionCode, DWORD dwExceptionFlags, DWORD nNumberOfArguments, const ULONG_PTR *lpArguments);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetLastError (void);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) SetLastError (DWORD dwErrCode);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) FlsAlloc (PFLS_CALLBACK_FUNCTION lpCallback);
  __attribute__((dllimport)) PVOID __attribute__((__stdcall__)) FlsGetValue (DWORD dwFlsIndex);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FlsSetValue (DWORD dwFlsIndex, PVOID lpFlsData);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FlsFree (DWORD dwFlsIndex);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsThreadAFiber (void);
__attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateFileW (LPCWSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile);
__attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetFileAttributesW (LPCWSTR lpFileName);
__attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetFileSize (HANDLE hFile, LPDWORD lpFileSizeHigh);
__attribute__((dllimport)) DWORD __attribute__((__stdcall__)) SetFilePointer (HANDLE hFile, LONG lDistanceToMove, PLONG lpDistanceToMoveHigh, DWORD dwMoveMethod);
  typedef struct _BY_HANDLE_FILE_INFORMATION {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD dwVolumeSerialNumber;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD nNumberOfLinks;
    DWORD nFileIndexHigh;
    DWORD nFileIndexLow;
  } BY_HANDLE_FILE_INFORMATION, *PBY_HANDLE_FILE_INFORMATION,
    *LPBY_HANDLE_FILE_INFORMATION;
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) CompareFileTime (const FILETIME *lpFileTime1, const FILETIME *lpFileTime2);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateFileA (LPCSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DefineDosDeviceW (DWORD dwFlags, LPCWSTR lpDeviceName, LPCWSTR lpTargetPath);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DeleteVolumeMountPointW (LPCWSTR lpszVolumeMountPoint);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FileTimeToLocalFileTime (const FILETIME *lpFileTime, LPFILETIME lpLocalFileTime);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FindCloseChangeNotification (HANDLE hChangeHandle);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) FindFirstChangeNotificationA (LPCSTR lpPathName, WINBOOL bWatchSubtree, DWORD dwNotifyFilter);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) FindFirstChangeNotificationW (LPCWSTR lpPathName, WINBOOL bWatchSubtree, DWORD dwNotifyFilter);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) FindFirstFileA (LPCSTR lpFileName, LPWIN32_FIND_DATAA lpFindFileData);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) FindFirstFileW (LPCWSTR lpFileName, LPWIN32_FIND_DATAW lpFindFileData);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) FindFirstVolumeW (LPWSTR lpszVolumeName, DWORD cchBufferLength);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FindNextChangeNotification (HANDLE hChangeHandle);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FindNextVolumeW (HANDLE hFindVolume, LPWSTR lpszVolumeName, DWORD cchBufferLength);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FindVolumeClose (HANDLE hFindVolume);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetDiskFreeSpaceA (LPCSTR lpRootPathName, LPDWORD lpSectorsPerCluster, LPDWORD lpBytesPerSector, LPDWORD lpNumberOfFreeClusters, LPDWORD lpTotalNumberOfClusters);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetDiskFreeSpaceW (LPCWSTR lpRootPathName, LPDWORD lpSectorsPerCluster, LPDWORD lpBytesPerSector, LPDWORD lpNumberOfFreeClusters, LPDWORD lpTotalNumberOfClusters);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetDriveTypeA (LPCSTR lpRootPathName);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetDriveTypeW (LPCWSTR lpRootPathName);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetFileAttributesA (LPCSTR lpFileName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetFileInformationByHandle (HANDLE hFile, LPBY_HANDLE_FILE_INFORMATION lpFileInformation);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetFileSizeEx (HANDLE hFile, PLARGE_INTEGER lpFileSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetFileTime (HANDLE hFile, LPFILETIME lpCreationTime, LPFILETIME lpLastAccessTime, LPFILETIME lpLastWriteTime);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetFileType (HANDLE hFile);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetFullPathNameA (LPCSTR lpFileName, DWORD nBufferLength, LPSTR lpBuffer, LPSTR *lpFilePart);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetFullPathNameW (LPCWSTR lpFileName, DWORD nBufferLength, LPWSTR lpBuffer, LPWSTR *lpFilePart);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetLogicalDrives (void);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetLogicalDriveStringsW (DWORD nBufferLength, LPWSTR lpBuffer);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetLongPathNameA (LPCSTR lpszShortPath, LPSTR lpszLongPath, DWORD cchBuffer);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetLongPathNameW (LPCWSTR lpszShortPath, LPWSTR lpszLongPath, DWORD cchBuffer);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetShortPathNameW (LPCWSTR lpszLongPath, LPWSTR lpszShortPath, DWORD cchBuffer);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetTempFileNameW (LPCWSTR lpPathName, LPCWSTR lpPrefixString, UINT uUnique, LPWSTR lpTempFileName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetVolumeInformationW (LPCWSTR lpRootPathName, LPWSTR lpVolumeNameBuffer, DWORD nVolumeNameSize, LPDWORD lpVolumeSerialNumber, LPDWORD lpMaximumComponentLength, LPDWORD lpFileSystemFlags, LPWSTR lpFileSystemNameBuffer, DWORD nFileSystemNameSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetVolumePathNameW (LPCWSTR lpszFileName, LPWSTR lpszVolumePathName, DWORD cchBufferLength);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) LocalFileTimeToFileTime (const FILETIME *lpLocalFileTime, LPFILETIME lpFileTime);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) LockFile (HANDLE hFile, DWORD dwFileOffsetLow, DWORD dwFileOffsetHigh, DWORD nNumberOfBytesToLockLow, DWORD nNumberOfBytesToLockHigh);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) QueryDosDeviceW (LPCWSTR lpDeviceName, LPWSTR lpTargetPath, DWORD ucchMax);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ReadFileEx (HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPOVERLAPPED lpOverlapped, LPOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ReadFileScatter (HANDLE hFile, FILE_SEGMENT_ELEMENT aSegmentArray[], DWORD nNumberOfBytesToRead, LPDWORD lpReserved, LPOVERLAPPED lpOverlapped);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetFileTime (HANDLE hFile, const FILETIME *lpCreationTime, const FILETIME *lpLastAccessTime, const FILETIME *lpLastWriteTime);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetFileValidData (HANDLE hFile, LONGLONG ValidDataLength);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) UnlockFile (HANDLE hFile, DWORD dwFileOffsetLow, DWORD dwFileOffsetHigh, DWORD nNumberOfBytesToUnlockLow, DWORD nNumberOfBytesToUnlockHigh);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) WriteFileEx (HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPOVERLAPPED lpOverlapped, LPOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) WriteFileGather (HANDLE hFile, FILE_SEGMENT_ELEMENT aSegmentArray[], DWORD nNumberOfBytesToWrite, LPDWORD lpReserved, LPOVERLAPPED lpOverlapped);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetVolumeNameForVolumeMountPointW (LPCWSTR lpszVolumeMountPoint, LPWSTR lpszVolumeName, DWORD cchBufferLength);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetVolumePathNamesForVolumeNameW (LPCWSTR lpszVolumeName, LPWCH lpszVolumePathNames, DWORD cchBufferLength, PDWORD lpcchReturnLength);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetFinalPathNameByHandleA (HANDLE hFile, LPSTR lpszFilePath, DWORD cchFilePath, DWORD dwFlags);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetFinalPathNameByHandleW (HANDLE hFile, LPWSTR lpszFilePath, DWORD cchFilePath, DWORD dwFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetVolumeInformationByHandleW (HANDLE hFile, LPWSTR lpVolumeNameBuffer, DWORD nVolumeNameSize, LPDWORD lpVolumeSerialNumber, LPDWORD lpMaximumComponentLength, LPDWORD lpFileSystemFlags, LPWSTR lpFileSystemNameBuffer, DWORD nFileSystemNameSize);
  typedef struct _WIN32_FILE_ATTRIBUTE_DATA {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
  } WIN32_FILE_ATTRIBUTE_DATA, *LPWIN32_FILE_ATTRIBUTE_DATA;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CreateDirectoryA (LPCSTR lpPathName, LPSECURITY_ATTRIBUTES lpSecurityAttributes);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CreateDirectoryW (LPCWSTR lpPathName, LPSECURITY_ATTRIBUTES lpSecurityAttributes);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DeleteFileA (LPCSTR lpFileName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DeleteFileW (LPCWSTR lpFileName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FindClose (HANDLE hFindFile);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) FindFirstFileExA (LPCSTR lpFileName, FINDEX_INFO_LEVELS fInfoLevelId, LPVOID lpFindFileData, FINDEX_SEARCH_OPS fSearchOp, LPVOID lpSearchFilter, DWORD dwAdditionalFlags);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) FindFirstFileExW (LPCWSTR lpFileName, FINDEX_INFO_LEVELS fInfoLevelId, LPVOID lpFindFileData, FINDEX_SEARCH_OPS fSearchOp, LPVOID lpSearchFilter, DWORD dwAdditionalFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FindNextFileA (HANDLE hFindFile, LPWIN32_FIND_DATAA lpFindFileData);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FindNextFileW (HANDLE hFindFile, LPWIN32_FIND_DATAW lpFindFileData);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FlushFileBuffers (HANDLE hFile);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetDiskFreeSpaceExA (LPCSTR lpDirectoryName, PULARGE_INTEGER lpFreeBytesAvailableToCaller, PULARGE_INTEGER lpTotalNumberOfBytes, PULARGE_INTEGER lpTotalNumberOfFreeBytes);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetDiskFreeSpaceExW (LPCWSTR lpDirectoryName, PULARGE_INTEGER lpFreeBytesAvailableToCaller, PULARGE_INTEGER lpTotalNumberOfBytes, PULARGE_INTEGER lpTotalNumberOfFreeBytes);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetFileType (HANDLE hFile);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetFileAttributesExA (LPCSTR lpFileName, GET_FILEEX_INFO_LEVELS fInfoLevelId, LPVOID lpFileInformation);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetFileAttributesExW (LPCWSTR lpFileName, GET_FILEEX_INFO_LEVELS fInfoLevelId, LPVOID lpFileInformation);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetTempPathW (DWORD nBufferLength, LPWSTR lpBuffer);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) LockFileEx (HANDLE hFile, DWORD dwFlags, DWORD dwReserved, DWORD nNumberOfBytesToLockLow, DWORD nNumberOfBytesToLockHigh, LPOVERLAPPED lpOverlapped);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ReadFile (HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) RemoveDirectoryA (LPCSTR lpPathName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) RemoveDirectoryW (LPCWSTR lpPathName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetEndOfFile (HANDLE hFile);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetFileAttributesA (LPCSTR lpFileName, DWORD dwFileAttributes);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetFileAttributesW (LPCWSTR lpFileName, DWORD dwFileAttributes);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetFilePointerEx (HANDLE hFile, LARGE_INTEGER liDistanceToMove, PLARGE_INTEGER lpNewFilePointer, DWORD dwMoveMethod);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) UnlockFileEx (HANDLE hFile, DWORD dwReserved, DWORD nNumberOfBytesToUnlockLow, DWORD nNumberOfBytesToUnlockHigh, LPOVERLAPPED lpOverlapped);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) WriteFile (HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetFileInformationByHandle (HANDLE hFile, FILE_INFO_BY_HANDLE_CLASS FileInformationClass, LPVOID lpFileInformation, DWORD dwBufferSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CloseHandle (HANDLE hObject);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DuplicateHandle (HANDLE hSourceProcessHandle, HANDLE hSourceHandle, HANDLE hTargetProcessHandle, LPHANDLE lpTargetHandle, DWORD dwDesiredAccess, WINBOOL bInheritHandle, DWORD dwOptions);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetHandleInformation (HANDLE hObject, LPDWORD lpdwFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetHandleInformation (HANDLE hObject, DWORD dwMask, DWORD dwFlags);
  typedef struct _HEAP_SUMMARY {
    DWORD cb;
    SIZE_T cbAllocated;
    SIZE_T cbCommitted;
    SIZE_T cbReserved;
    SIZE_T cbMaxReserve;
  } HEAP_SUMMARY,*PHEAP_SUMMARY;
  typedef PHEAP_SUMMARY LPHEAP_SUMMARY;
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) HeapCreate (DWORD flOptions, SIZE_T dwInitialSize, SIZE_T dwMaximumSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) HeapDestroy (HANDLE hHeap);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) HeapValidate (HANDLE hHeap, DWORD dwFlags, LPCVOID lpMem);
  __attribute__((dllimport)) SIZE_T __attribute__((__stdcall__)) HeapCompact (HANDLE hHeap, DWORD dwFlags);
  WINBOOL __attribute__((__stdcall__)) HeapSummary (HANDLE hHeap, DWORD dwFlags, LPHEAP_SUMMARY lpSummary);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetProcessHeaps (DWORD NumberOfHeaps, PHANDLE ProcessHeaps);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) HeapLock (HANDLE hHeap);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) HeapUnlock (HANDLE hHeap);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) HeapWalk (HANDLE hHeap, LPPROCESS_HEAP_ENTRY lpEntry);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) HeapSetInformation (HANDLE HeapHandle, HEAP_INFORMATION_CLASS HeapInformationClass, PVOID HeapInformation, SIZE_T HeapInformationLength);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) HeapQueryInformation (HANDLE HeapHandle, HEAP_INFORMATION_CLASS HeapInformationClass, PVOID HeapInformation, SIZE_T HeapInformationLength, PSIZE_T ReturnLength);
  __attribute__((dllimport)) LPVOID __attribute__((__stdcall__)) HeapAlloc (HANDLE hHeap, DWORD dwFlags, SIZE_T dwBytes);
  __attribute__((dllimport)) LPVOID __attribute__((__stdcall__)) HeapReAlloc (HANDLE hHeap, DWORD dwFlags, LPVOID lpMem, SIZE_T dwBytes);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) HeapFree (HANDLE hHeap, DWORD dwFlags, LPVOID lpMem);
  __attribute__((dllimport)) SIZE_T __attribute__((__stdcall__)) HeapSize (HANDLE hHeap, DWORD dwFlags, LPCVOID lpMem);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) GetProcessHeap (void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetOverlappedResult (HANDLE hFile, LPOVERLAPPED lpOverlapped, LPDWORD lpNumberOfBytesTransferred, WINBOOL bWait);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateIoCompletionPort (HANDLE FileHandle, HANDLE ExistingCompletionPort, ULONG_PTR CompletionKey, DWORD NumberOfConcurrentThreads);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetQueuedCompletionStatus (HANDLE CompletionPort, LPDWORD lpNumberOfBytesTransferred, PULONG_PTR lpCompletionKey, LPOVERLAPPED *lpOverlapped, DWORD dwMilliseconds);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PostQueuedCompletionStatus (HANDLE CompletionPort, DWORD dwNumberOfBytesTransferred, ULONG_PTR dwCompletionKey, LPOVERLAPPED lpOverlapped);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DeviceIoControl (HANDLE hDevice, DWORD dwIoControlCode, LPVOID lpInBuffer, DWORD nInBufferSize, LPVOID lpOutBuffer, DWORD nOutBufferSize, LPDWORD lpBytesReturned, LPOVERLAPPED lpOverlapped);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CancelIo (HANDLE hFile);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetQueuedCompletionStatusEx (HANDLE CompletionPort, LPOVERLAPPED_ENTRY lpCompletionPortEntries, ULONG ulCount, PULONG ulNumEntriesRemoved, DWORD dwMilliseconds, WINBOOL fAlertable);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CancelIoEx (HANDLE hFile, LPOVERLAPPED lpOverlapped);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CancelSynchronousIo (HANDLE hThread);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetOverlappedResultEx (HANDLE hFile, LPOVERLAPPED lpOverlapped, LPDWORD lpNumberOfBytesTransferred, DWORD dwMilliseconds, WINBOOL bAlertable);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) InitializeSListHead (PSLIST_HEADER ListHead);
  __attribute__((dllimport)) PSLIST_ENTRY __attribute__((__stdcall__)) InterlockedPopEntrySList (PSLIST_HEADER ListHead);
  __attribute__((dllimport)) PSLIST_ENTRY __attribute__((__stdcall__)) InterlockedPushEntrySList (PSLIST_HEADER ListHead, PSLIST_ENTRY ListEntry);
  __attribute__((dllimport)) PSLIST_ENTRY __attribute__((__stdcall__)) InterlockedFlushSList (PSLIST_HEADER ListHead);
  __attribute__((dllimport)) USHORT __attribute__((__stdcall__)) QueryDepthSList (PSLIST_HEADER ListHead);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsProcessInJob (HANDLE ProcessHandle, HANDLE JobHandle, PBOOL Result);
  typedef struct tagENUMUILANG {
    ULONG NumOfEnumUILang;
    ULONG SizeOfEnumUIBuffer;
    LANGID *pEnumUIBuffer;
  } ENUMUILANG, *PENUMUILANG;
  typedef WINBOOL (__attribute__((__stdcall__)) *ENUMRESLANGPROCA) (HMODULE hModule, LPCSTR lpType, LPCSTR lpName, WORD wLanguage, LONG_PTR lParam);
  typedef WINBOOL (__attribute__((__stdcall__)) *ENUMRESLANGPROCW) (HMODULE hModule, LPCWSTR lpType, LPCWSTR lpName, WORD wLanguage, LONG_PTR lParam);
  typedef WINBOOL (__attribute__((__stdcall__)) *ENUMRESNAMEPROCA) (HMODULE hModule, LPCSTR lpType, LPSTR lpName, LONG_PTR lParam);
  typedef WINBOOL (__attribute__((__stdcall__)) *ENUMRESNAMEPROCW) (HMODULE hModule, LPCWSTR lpType, LPWSTR lpName, LONG_PTR lParam);
  typedef WINBOOL (__attribute__((__stdcall__)) *ENUMRESTYPEPROCA) (HMODULE hModule, LPSTR lpType, LONG_PTR lParam);
  typedef WINBOOL (__attribute__((__stdcall__)) *ENUMRESTYPEPROCW) (HMODULE hModule, LPWSTR lpType, LONG_PTR lParam);
  typedef WINBOOL (__attribute__((__stdcall__)) *PGET_MODULE_HANDLE_EXA) (DWORD dwFlags, LPCSTR lpModuleName, HMODULE *phModule);
  typedef WINBOOL (__attribute__((__stdcall__)) *PGET_MODULE_HANDLE_EXW) (DWORD dwFlags, LPCWSTR lpModuleName, HMODULE *phModule);
  typedef PVOID DLL_DIRECTORY_COOKIE, *PDLL_DIRECTORY_COOKIE;
  __attribute__((dllimport)) HRSRC __attribute__((__stdcall__)) FindResourceExW (HMODULE hModule, LPCWSTR lpType, LPCWSTR lpName, WORD wLanguage);
  __attribute__((dllimport)) __attribute__((noreturn)) void __attribute__((__stdcall__)) FreeLibraryAndExitThread (HMODULE hLibModule, DWORD dwExitCode);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FreeResource (HGLOBAL hResData);
  __attribute__((dllimport)) HMODULE __attribute__((__stdcall__)) GetModuleHandleA (LPCSTR lpModuleName);
  __attribute__((dllimport)) HMODULE __attribute__((__stdcall__)) GetModuleHandleW (LPCWSTR lpModuleName);
  __attribute__((dllimport)) HMODULE __attribute__((__stdcall__)) LoadLibraryExA (LPCSTR lpLibFileName, HANDLE hFile, DWORD dwFlags);
  __attribute__((dllimport)) HMODULE __attribute__((__stdcall__)) LoadLibraryExW (LPCWSTR lpLibFileName, HANDLE hFile, DWORD dwFlags);
  __attribute__((dllimport)) HGLOBAL __attribute__((__stdcall__)) LoadResource (HMODULE hModule, HRSRC hResInfo);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) LoadStringA (HINSTANCE hInstance, UINT uID, LPSTR lpBuffer, int cchBufferMax);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) LoadStringW (HINSTANCE hInstance, UINT uID, LPWSTR lpBuffer, int cchBufferMax);
  __attribute__((dllimport)) LPVOID __attribute__((__stdcall__)) LockResource (HGLOBAL hResData);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) SizeofResource (HMODULE hModule, HRSRC hResInfo);
  __attribute__((dllimport)) DLL_DIRECTORY_COOKIE __attribute__((__stdcall__)) AddDllDirectory (PCWSTR NewDirectory);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) RemoveDllDirectory (DLL_DIRECTORY_COOKIE Cookie);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetDefaultDllDirectories (DWORD DirectoryFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetModuleHandleExA (DWORD dwFlags, LPCSTR lpModuleName, HMODULE *phModule);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetModuleHandleExW (DWORD dwFlags, LPCWSTR lpModuleName, HMODULE *phModule);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumResourceLanguagesA(HMODULE hModule,LPCSTR lpType,LPCSTR lpName,ENUMRESLANGPROCA lpEnumFunc,LONG_PTR lParam);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumResourceLanguagesW(HMODULE hModule,LPCWSTR lpType,LPCWSTR lpName,ENUMRESLANGPROCW lpEnumFunc,LONG_PTR lParam);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumResourceLanguagesExA (HMODULE hModule, LPCSTR lpType, LPCSTR lpName, ENUMRESLANGPROCA lpEnumFunc, LONG_PTR lParam, DWORD dwFlags, LANGID LangId);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumResourceLanguagesExW (HMODULE hModule, LPCWSTR lpType, LPCWSTR lpName, ENUMRESLANGPROCW lpEnumFunc, LONG_PTR lParam, DWORD dwFlags, LANGID LangId);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumResourceNamesExA (HMODULE hModule, LPCSTR lpType, ENUMRESNAMEPROCA lpEnumFunc, LONG_PTR lParam, DWORD dwFlags, LANGID LangId);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumResourceNamesExW (HMODULE hModule, LPCWSTR lpType, ENUMRESNAMEPROCW lpEnumFunc, LONG_PTR lParam, DWORD dwFlags, LANGID LangId);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumResourceTypesExA (HMODULE hModule, ENUMRESTYPEPROCA lpEnumFunc, LONG_PTR lParam, DWORD dwFlags, LANGID LangId);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumResourceTypesExW (HMODULE hModule, ENUMRESTYPEPROCW lpEnumFunc, LONG_PTR lParam, DWORD dwFlags, LANGID LangId);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) QueryOptionalDelayLoadedAPI (HMODULE CallerModule, LPCSTR lpDllName, LPCSTR lpProcName, DWORD Reserved);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DisableThreadLibraryCalls (HMODULE hLibModule);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FreeLibrary (HMODULE hLibModule);
  __attribute__((dllimport)) FARPROC __attribute__((__stdcall__)) GetProcAddress (HMODULE hModule, LPCSTR lpProcName);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetModuleFileNameA (HMODULE hModule, LPSTR lpFilename, DWORD nSize);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetModuleFileNameW (HMODULE hModule, LPWSTR lpFilename, DWORD nSize);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) FindStringOrdinal (DWORD dwFindStringOrdinalFlags, LPCWSTR lpStringSource, int cchSource, LPCWSTR lpStringValue, int cchValue, WINBOOL bIgnoreCase);
  typedef enum _MEMORY_RESOURCE_NOTIFICATION_TYPE {
    LowMemoryResourceNotification,
    HighMemoryResourceNotification
  } MEMORY_RESOURCE_NOTIFICATION_TYPE;
    __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) VirtualFree (LPVOID lpAddress, SIZE_T dwSize, DWORD dwFreeType);
  __attribute__((dllimport)) SIZE_T __attribute__((__stdcall__)) VirtualQuery (LPCVOID lpAddress, PMEMORY_BASIC_INFORMATION lpBuffer, SIZE_T dwLength);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FlushViewOfFile (LPCVOID lpBaseAddress, SIZE_T dwNumberOfBytesToFlush);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) UnmapViewOfFile (LPCVOID lpBaseAddress);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateFileMappingFromApp (HANDLE hFile, PSECURITY_ATTRIBUTES SecurityAttributes, ULONG PageProtection, ULONG64 MaximumSize, PCWSTR Name);
  __attribute__((dllimport)) PVOID __attribute__((__stdcall__)) MapViewOfFileFromApp (HANDLE hFileMappingObject, ULONG DesiredAccess, ULONG64 FileOffset, SIZE_T NumberOfBytesToMap);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) VirtualProtect (LPVOID lpAddress, SIZE_T dwSize, DWORD flNewProtect, PDWORD lpflOldProtect);
  __attribute__((dllimport)) LPVOID __attribute__((__stdcall__)) VirtualAlloc (LPVOID lpAddress, SIZE_T dwSize, DWORD flAllocationType, DWORD flProtect);
  __attribute__((dllimport)) LPVOID __attribute__((__stdcall__)) VirtualAllocEx (HANDLE hProcess, LPVOID lpAddress, SIZE_T dwSize, DWORD flAllocationType, DWORD flProtect);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) VirtualFreeEx (HANDLE hProcess, LPVOID lpAddress, SIZE_T dwSize, DWORD dwFreeType);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) VirtualProtectEx (HANDLE hProcess, LPVOID lpAddress, SIZE_T dwSize, DWORD flNewProtect, PDWORD lpflOldProtect);
  __attribute__((dllimport)) SIZE_T __attribute__((__stdcall__)) VirtualQueryEx (HANDLE hProcess, LPCVOID lpAddress, PMEMORY_BASIC_INFORMATION lpBuffer, SIZE_T dwLength);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ReadProcessMemory (HANDLE hProcess, LPCVOID lpBaseAddress, LPVOID lpBuffer, SIZE_T nSize, SIZE_T *lpNumberOfBytesRead);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) WriteProcessMemory (HANDLE hProcess, LPVOID lpBaseAddress, LPCVOID lpBuffer, SIZE_T nSize, SIZE_T *lpNumberOfBytesWritten);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateFileMappingW (HANDLE hFile, LPSECURITY_ATTRIBUTES lpFileMappingAttributes, DWORD flProtect, DWORD dwMaximumSizeHigh, DWORD dwMaximumSizeLow, LPCWSTR lpName);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) OpenFileMappingW (DWORD dwDesiredAccess, WINBOOL bInheritHandle, LPCWSTR lpName);
  __attribute__((dllimport)) LPVOID __attribute__((__stdcall__)) MapViewOfFile (HANDLE hFileMappingObject, DWORD dwDesiredAccess, DWORD dwFileOffsetHigh, DWORD dwFileOffsetLow, SIZE_T dwNumberOfBytesToMap);
  __attribute__((dllimport)) LPVOID __attribute__((__stdcall__)) MapViewOfFileEx (HANDLE hFileMappingObject, DWORD dwDesiredAccess, DWORD dwFileOffsetHigh, DWORD dwFileOffsetLow, SIZE_T dwNumberOfBytesToMap, LPVOID lpBaseAddress);
  __attribute__((dllimport)) SIZE_T __attribute__((__stdcall__)) GetLargePageMinimum (void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetProcessWorkingSetSizeEx (HANDLE hProcess, PSIZE_T lpMinimumWorkingSetSize, PSIZE_T lpMaximumWorkingSetSize, PDWORD Flags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetProcessWorkingSetSizeEx (HANDLE hProcess, SIZE_T dwMinimumWorkingSetSize, SIZE_T dwMaximumWorkingSetSize, DWORD Flags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) VirtualLock (LPVOID lpAddress, SIZE_T dwSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) VirtualUnlock (LPVOID lpAddress, SIZE_T dwSize);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetWriteWatch (DWORD dwFlags, PVOID lpBaseAddress, SIZE_T dwRegionSize, PVOID *lpAddresses, ULONG_PTR *lpdwCount, LPDWORD lpdwGranularity);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) ResetWriteWatch (LPVOID lpBaseAddress, SIZE_T dwRegionSize);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateMemoryResourceNotification (MEMORY_RESOURCE_NOTIFICATION_TYPE NotificationType);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) QueryMemoryResourceNotification (HANDLE ResourceNotificationHandle, PBOOL ResourceState);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetSystemFileCacheSize (PSIZE_T lpMinimumFileCacheSize, PSIZE_T lpMaximumFileCacheSize, PDWORD lpFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetSystemFileCacheSize (SIZE_T MinimumFileCacheSize, SIZE_T MaximumFileCacheSize, DWORD Flags);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateFileMappingNumaW (HANDLE hFile, LPSECURITY_ATTRIBUTES lpFileMappingAttributes, DWORD flProtect, DWORD dwMaximumSizeHigh, DWORD dwMaximumSizeLow, LPCWSTR lpName, DWORD nndPreferred);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ImpersonateNamedPipeClient (HANDLE hNamedPipe);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CreatePipe (PHANDLE hReadPipe, PHANDLE hWritePipe, LPSECURITY_ATTRIBUTES lpPipeAttributes, DWORD nSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ConnectNamedPipe (HANDLE hNamedPipe, LPOVERLAPPED lpOverlapped);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DisconnectNamedPipe (HANDLE hNamedPipe);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetNamedPipeHandleState (HANDLE hNamedPipe, LPDWORD lpMode, LPDWORD lpMaxCollectionCount, LPDWORD lpCollectDataTimeout);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PeekNamedPipe (HANDLE hNamedPipe, LPVOID lpBuffer, DWORD nBufferSize, LPDWORD lpBytesRead, LPDWORD lpTotalBytesAvail, LPDWORD lpBytesLeftThisMessage);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) TransactNamedPipe (HANDLE hNamedPipe, LPVOID lpInBuffer, DWORD nInBufferSize, LPVOID lpOutBuffer, DWORD nOutBufferSize, LPDWORD lpBytesRead, LPOVERLAPPED lpOverlapped);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateNamedPipeW (LPCWSTR lpName, DWORD dwOpenMode, DWORD dwPipeMode, DWORD nMaxInstances, DWORD nOutBufferSize, DWORD nInBufferSize, DWORD nDefaultTimeOut, LPSECURITY_ATTRIBUTES lpSecurityAttributes);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) WaitNamedPipeW (LPCWSTR lpNamedPipeName, DWORD nTimeOut);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetNamedPipeClientComputerNameW (HANDLE Pipe, LPWSTR ClientComputerName, ULONG ClientComputerNameLength);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreatePrivateNamespaceW (LPSECURITY_ATTRIBUTES lpPrivateNamespaceAttributes, LPVOID lpBoundaryDescriptor, LPCWSTR lpAliasPrefix);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) OpenPrivateNamespaceW (LPVOID lpBoundaryDescriptor, LPCWSTR lpAliasPrefix);
  __attribute__((dllimport)) BOOLEAN __attribute__((__stdcall__)) ClosePrivateNamespace (HANDLE Handle, ULONG Flags);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateBoundaryDescriptorW (LPCWSTR Name, ULONG Flags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AddSIDToBoundaryDescriptor (HANDLE *BoundaryDescriptor, PSID RequiredSid);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) DeleteBoundaryDescriptor (HANDLE BoundaryDescriptor);
  __attribute__((dllimport)) LPCH __attribute__((__stdcall__)) GetEnvironmentStrings (void);
  __attribute__((dllimport)) LPWCH __attribute__((__stdcall__)) GetEnvironmentStringsW (void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetEnvironmentStringsW (LPWCH NewEnvironment);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FreeEnvironmentStringsA (LPCH penv);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FreeEnvironmentStringsW (LPWCH penv);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) GetStdHandle (DWORD nStdHandle);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetStdHandle (DWORD nStdHandle, HANDLE hHandle);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetStdHandleEx (DWORD nStdHandle, HANDLE hHandle, PHANDLE phPrevValue);
  __attribute__((dllimport)) LPSTR __attribute__((__stdcall__)) GetCommandLineA (void);
  __attribute__((dllimport)) LPWSTR __attribute__((__stdcall__)) GetCommandLineW (void);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetEnvironmentVariableA (LPCSTR lpName, LPSTR lpBuffer, DWORD nSize);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetEnvironmentVariableW (LPCWSTR lpName, LPWSTR lpBuffer, DWORD nSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetEnvironmentVariableA (LPCSTR lpName, LPCSTR lpValue);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetEnvironmentVariableW (LPCWSTR lpName, LPCWSTR lpValue);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) ExpandEnvironmentStringsA (LPCSTR lpSrc, LPSTR lpDst, DWORD nSize);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) ExpandEnvironmentStringsW (LPCWSTR lpSrc, LPWSTR lpDst, DWORD nSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetCurrentDirectoryA (LPCSTR lpPathName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetCurrentDirectoryW (LPCWSTR lpPathName);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetCurrentDirectoryA (DWORD nBufferLength, LPSTR lpBuffer);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetCurrentDirectoryW (DWORD nBufferLength, LPWSTR lpBuffer);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) SearchPathW (LPCWSTR lpPath, LPCWSTR lpFileName, LPCWSTR lpExtension, DWORD nBufferLength, LPWSTR lpBuffer, LPWSTR *lpFilePart);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) SearchPathA (LPCSTR lpPath, LPCSTR lpFileName, LPCSTR lpExtension, DWORD nBufferLength, LPSTR lpBuffer, LPSTR *lpFilePart);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) NeedCurrentDirectoryForExePathA (LPCSTR ExeName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) NeedCurrentDirectoryForExePathW (LPCWSTR ExeName);
__attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) TerminateProcess (HANDLE hProcess, UINT uExitCode);
  typedef struct _PROCESS_INFORMATION {
    HANDLE hProcess;
    HANDLE hThread;
    DWORD dwProcessId;
    DWORD dwThreadId;
  } PROCESS_INFORMATION, *PPROCESS_INFORMATION, *LPPROCESS_INFORMATION;
  typedef struct _STARTUPINFOA {
    DWORD cb;
    LPSTR lpReserved;
    LPSTR lpDesktop;
    LPSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
  } STARTUPINFOA, *LPSTARTUPINFOA;
  typedef struct _STARTUPINFOW {
    DWORD cb;
    LPWSTR lpReserved;
    LPWSTR lpDesktop;
    LPWSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
  } STARTUPINFOW, *LPSTARTUPINFOW;
  typedef STARTUPINFOA STARTUPINFO;
  typedef LPSTARTUPINFOA LPSTARTUPINFO;
  typedef struct _PROC_THREAD_ATTRIBUTE_LIST *PPROC_THREAD_ATTRIBUTE_LIST, *LPPROC_THREAD_ATTRIBUTE_LIST;
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) QueueUserAPC (PAPCFUNC pfnAPC, HANDLE hThread, ULONG_PTR dwData);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetProcessTimes (HANDLE hProcess, LPFILETIME lpCreationTime, LPFILETIME lpExitTime, LPFILETIME lpKernelTime, LPFILETIME lpUserTime);
  __attribute__((dllimport)) __attribute__((noreturn)) void __attribute__((__stdcall__)) ExitProcess (UINT uExitCode);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetExitCodeProcess (HANDLE hProcess, LPDWORD lpExitCode);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SwitchToThread (void);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateRemoteThread (HANDLE hProcess, LPSECURITY_ATTRIBUTES lpThreadAttributes, SIZE_T dwStackSize, LPTHREAD_START_ROUTINE lpStartAddress, LPVOID lpParameter, DWORD dwCreationFlags, LPDWORD lpThreadId);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) OpenThread (DWORD dwDesiredAccess, WINBOOL bInheritHandle, DWORD dwThreadId);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetThreadPriorityBoost (HANDLE hThread, WINBOOL bDisablePriorityBoost);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetThreadPriorityBoost (HANDLE hThread, PBOOL pDisablePriorityBoost);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) TerminateThread (HANDLE hThread, DWORD dwExitCode);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetProcessShutdownParameters (DWORD dwLevel, DWORD dwFlags);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetProcessVersion (DWORD ProcessId);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) GetStartupInfoW (LPSTARTUPINFOW lpStartupInfo);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetThreadToken (PHANDLE Thread, HANDLE Token);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) OpenProcessToken (HANDLE ProcessHandle, DWORD DesiredAccess, PHANDLE TokenHandle);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) OpenThreadToken (HANDLE ThreadHandle, DWORD DesiredAccess, WINBOOL OpenAsSelf, PHANDLE TokenHandle);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetPriorityClass (HANDLE hProcess, DWORD dwPriorityClass);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetThreadStackGuarantee (PULONG StackSizeInBytes);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetPriorityClass (HANDLE hProcess);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ProcessIdToSessionId (DWORD dwProcessId, DWORD *pSessionId);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetProcessId (HANDLE Process);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetThreadId (HANDLE Thread);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateRemoteThreadEx (HANDLE hProcess, LPSECURITY_ATTRIBUTES lpThreadAttributes, SIZE_T dwStackSize, LPTHREAD_START_ROUTINE lpStartAddress, LPVOID lpParameter, DWORD dwCreationFlags, LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList, LPDWORD lpThreadId);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetThreadContext (HANDLE hThread, LPCONTEXT lpContext);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetThreadContext (HANDLE hThread, const CONTEXT *lpContext);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FlushInstructionCache (HANDLE hProcess, LPCVOID lpBaseAddress, SIZE_T dwSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetThreadTimes (HANDLE hThread, LPFILETIME lpCreationTime, LPFILETIME lpExitTime, LPFILETIME lpKernelTime, LPFILETIME lpUserTime);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) OpenProcess (DWORD dwDesiredAccess, WINBOOL bInheritHandle, DWORD dwProcessId);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetProcessHandleCount (HANDLE hProcess, PDWORD pdwHandleCount);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetCurrentProcessorNumber (void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CreateProcessA (LPCSTR lpApplicationName, LPSTR lpCommandLine, LPSECURITY_ATTRIBUTES lpProcessAttributes, LPSECURITY_ATTRIBUTES lpThreadAttributes, WINBOOL bInheritHandles, DWORD dwCreationFlags, LPVOID lpEnvironment, LPCSTR lpCurrentDirectory, LPSTARTUPINFOA lpStartupInfo, LPPROCESS_INFORMATION lpProcessInformation);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CreateProcessW (LPCWSTR lpApplicationName, LPWSTR lpCommandLine, LPSECURITY_ATTRIBUTES lpProcessAttributes, LPSECURITY_ATTRIBUTES lpThreadAttributes, WINBOOL bInheritHandles, DWORD dwCreationFlags, LPVOID lpEnvironment, LPCWSTR lpCurrentDirectory, LPSTARTUPINFOW lpStartupInfo, LPPROCESS_INFORMATION lpProcessInformation);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CreateProcessAsUserW (HANDLE hToken, LPCWSTR lpApplicationName, LPWSTR lpCommandLine, LPSECURITY_ATTRIBUTES lpProcessAttributes, LPSECURITY_ATTRIBUTES lpThreadAttributes, WINBOOL bInheritHandles, DWORD dwCreationFlags, LPVOID lpEnvironment, LPCWSTR lpCurrentDirectory, LPSTARTUPINFOW lpStartupInfo, LPPROCESS_INFORMATION lpProcessInformation);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetProcessIdOfThread (HANDLE Thread);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) InitializeProcThreadAttributeList (LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList, DWORD dwAttributeCount, DWORD dwFlags, PSIZE_T lpSize);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) DeleteProcThreadAttributeList (LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetProcessAffinityUpdateMode (HANDLE hProcess, DWORD dwFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) QueryProcessAffinityUpdateMode (HANDLE hProcess, LPDWORD lpdwFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) UpdateProcThreadAttribute (LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList, DWORD dwFlags, DWORD_PTR Attribute, PVOID lpValue, SIZE_T cbSize, PVOID lpPreviousValue, PSIZE_T lpReturnSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetThreadIdealProcessorEx (HANDLE hThread, PPROCESSOR_NUMBER lpIdealProcessor);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) GetCurrentProcessorNumberEx (PPROCESSOR_NUMBER ProcNumber);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) GetCurrentProcess (void);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetCurrentProcessId (void);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) GetCurrentThread (void);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetCurrentThreadId (void);
  WINBOOL __attribute__((__stdcall__)) IsProcessorFeaturePresent (DWORD ProcessorFeature);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) FlushProcessWriteBuffers (void);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateThread (LPSECURITY_ATTRIBUTES lpThreadAttributes, SIZE_T dwStackSize, LPTHREAD_START_ROUTINE lpStartAddress, LPVOID lpParameter, DWORD dwCreationFlags, LPDWORD lpThreadId);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetThreadPriority (HANDLE hThread, int nPriority);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetThreadPriority (HANDLE hThread);
  __attribute__((dllimport)) __attribute__((noreturn)) void __attribute__((__stdcall__)) ExitThread (DWORD dwExitCode);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetExitCodeThread (HANDLE hThread, LPDWORD lpExitCode);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) SuspendThread (HANDLE hThread);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) ResumeThread (HANDLE hThread);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) TlsAlloc (void);
  __attribute__((dllimport)) LPVOID __attribute__((__stdcall__)) TlsGetValue (DWORD dwTlsIndex);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) TlsSetValue (DWORD dwTlsIndex, LPVOID lpTlsValue);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) TlsFree (DWORD dwTlsIndex);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetThreadIdealProcessorEx (HANDLE hThread, PPROCESSOR_NUMBER lpIdealProcessor, PPROCESSOR_NUMBER lpPreviousIdealProcessor);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetProcessGroupAffinity (HANDLE hProcess, PUSHORT GroupCount, PUSHORT GroupArray);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetProcessGroupAffinity (HANDLE hProcess, const GROUP_AFFINITY *GroupAffinity, PGROUP_AFFINITY PreviousGroupAffinity);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetThreadGroupAffinity (HANDLE hThread, PGROUP_AFFINITY GroupAffinity);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetThreadGroupAffinity (HANDLE hThread, const GROUP_AFFINITY *GroupAffinity, PGROUP_AFFINITY PreviousGroupAffinity);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) QueryPerformanceCounter (LARGE_INTEGER *lpPerformanceCount);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) QueryPerformanceFrequency (LARGE_INTEGER *lpFrequency);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) QueryThreadCycleTime (HANDLE ThreadHandle, PULONG64 CycleTime);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) QueryProcessCycleTime (HANDLE ProcessHandle, PULONG64 CycleTime);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) QueryIdleProcessorCycleTime (PULONG BufferLength, PULONG64 ProcessorIdleCycleTime);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) QueryIdleProcessorCycleTimeEx (USHORT Group, PULONG BufferLength, PULONG64 ProcessorIdleCycleTime);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) QueryUnbiasedInterruptTime (PULONGLONG UnbiasedTime);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AccessCheck (PSECURITY_DESCRIPTOR pSecurityDescriptor, HANDLE ClientToken, DWORD DesiredAccess, PGENERIC_MAPPING GenericMapping, PPRIVILEGE_SET PrivilegeSet, LPDWORD PrivilegeSetLength, LPDWORD GrantedAccess, LPBOOL AccessStatus);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AccessCheckAndAuditAlarmW (LPCWSTR SubsystemName, LPVOID HandleId, LPWSTR ObjectTypeName, LPWSTR ObjectName, PSECURITY_DESCRIPTOR SecurityDescriptor, DWORD DesiredAccess, PGENERIC_MAPPING GenericMapping, WINBOOL ObjectCreation, LPDWORD GrantedAccess, LPBOOL AccessStatus, LPBOOL pfGenerateOnClose);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AccessCheckByType (PSECURITY_DESCRIPTOR pSecurityDescriptor, PSID PrincipalSelfSid, HANDLE ClientToken, DWORD DesiredAccess, POBJECT_TYPE_LIST ObjectTypeList, DWORD ObjectTypeListLength, PGENERIC_MAPPING GenericMapping, PPRIVILEGE_SET PrivilegeSet, LPDWORD PrivilegeSetLength, LPDWORD GrantedAccess, LPBOOL AccessStatus);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AccessCheckByTypeResultList (PSECURITY_DESCRIPTOR pSecurityDescriptor, PSID PrincipalSelfSid, HANDLE ClientToken, DWORD DesiredAccess, POBJECT_TYPE_LIST ObjectTypeList, DWORD ObjectTypeListLength, PGENERIC_MAPPING GenericMapping, PPRIVILEGE_SET PrivilegeSet, LPDWORD PrivilegeSetLength, LPDWORD GrantedAccessList, LPDWORD AccessStatusList);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AccessCheckByTypeAndAuditAlarmW (LPCWSTR SubsystemName, LPVOID HandleId, LPCWSTR ObjectTypeName, LPCWSTR ObjectName, PSECURITY_DESCRIPTOR SecurityDescriptor, PSID PrincipalSelfSid, DWORD DesiredAccess, AUDIT_EVENT_TYPE AuditType, DWORD Flags, POBJECT_TYPE_LIST ObjectTypeList, DWORD ObjectTypeListLength, PGENERIC_MAPPING GenericMapping, WINBOOL ObjectCreation, LPDWORD GrantedAccess, LPBOOL AccessStatus, LPBOOL pfGenerateOnClose);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AccessCheckByTypeResultListAndAuditAlarmW (LPCWSTR SubsystemName, LPVOID HandleId, LPCWSTR ObjectTypeName, LPCWSTR ObjectName, PSECURITY_DESCRIPTOR SecurityDescriptor, PSID PrincipalSelfSid, DWORD DesiredAccess, AUDIT_EVENT_TYPE AuditType, DWORD Flags, POBJECT_TYPE_LIST ObjectTypeList, DWORD ObjectTypeListLength, PGENERIC_MAPPING GenericMapping, WINBOOL ObjectCreation, LPDWORD GrantedAccessList, LPDWORD AccessStatusList, LPBOOL pfGenerateOnClose);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AccessCheckByTypeResultListAndAuditAlarmByHandleW (LPCWSTR SubsystemName, LPVOID HandleId, HANDLE ClientToken, LPCWSTR ObjectTypeName, LPCWSTR ObjectName, PSECURITY_DESCRIPTOR SecurityDescriptor, PSID PrincipalSelfSid, DWORD DesiredAccess, AUDIT_EVENT_TYPE AuditType, DWORD Flags, POBJECT_TYPE_LIST ObjectTypeList, DWORD ObjectTypeListLength, PGENERIC_MAPPING GenericMapping, WINBOOL ObjectCreation, LPDWORD GrantedAccessList, LPDWORD AccessStatusList, LPBOOL pfGenerateOnClose);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AddAccessAllowedAce (PACL pAcl, DWORD dwAceRevision, DWORD AccessMask, PSID pSid);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AddAccessAllowedAceEx (PACL pAcl, DWORD dwAceRevision, DWORD AceFlags, DWORD AccessMask, PSID pSid);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AddAccessAllowedObjectAce (PACL pAcl, DWORD dwAceRevision, DWORD AceFlags, DWORD AccessMask, GUID *ObjectTypeGuid, GUID *InheritedObjectTypeGuid, PSID pSid);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AddAccessDeniedAce (PACL pAcl, DWORD dwAceRevision, DWORD AccessMask, PSID pSid);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AddAccessDeniedAceEx (PACL pAcl, DWORD dwAceRevision, DWORD AceFlags, DWORD AccessMask, PSID pSid);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AddAccessDeniedObjectAce (PACL pAcl, DWORD dwAceRevision, DWORD AceFlags, DWORD AccessMask, GUID *ObjectTypeGuid, GUID *InheritedObjectTypeGuid, PSID pSid);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AddAce (PACL pAcl, DWORD dwAceRevision, DWORD dwStartingAceIndex, LPVOID pAceList, DWORD nAceListLength);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AddAuditAccessAce (PACL pAcl, DWORD dwAceRevision, DWORD dwAccessMask, PSID pSid, WINBOOL bAuditSuccess, WINBOOL bAuditFailure);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AddAuditAccessAceEx (PACL pAcl, DWORD dwAceRevision, DWORD AceFlags, DWORD dwAccessMask, PSID pSid, WINBOOL bAuditSuccess, WINBOOL bAuditFailure);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AddAuditAccessObjectAce (PACL pAcl, DWORD dwAceRevision, DWORD AceFlags, DWORD AccessMask, GUID *ObjectTypeGuid, GUID *InheritedObjectTypeGuid, PSID pSid, WINBOOL bAuditSuccess, WINBOOL bAuditFailure);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AddMandatoryAce (PACL pAcl, DWORD dwAceRevision, DWORD AceFlags, DWORD MandatoryPolicy, PSID pLabelSid);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AdjustTokenGroups (HANDLE TokenHandle, WINBOOL ResetToDefault, PTOKEN_GROUPS NewState, DWORD BufferLength, PTOKEN_GROUPS PreviousState, PDWORD ReturnLength);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AdjustTokenPrivileges (HANDLE TokenHandle, WINBOOL DisableAllPrivileges, PTOKEN_PRIVILEGES NewState, DWORD BufferLength, PTOKEN_PRIVILEGES PreviousState, PDWORD ReturnLength);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AllocateAndInitializeSid (PSID_IDENTIFIER_AUTHORITY pIdentifierAuthority, BYTE nSubAuthorityCount, DWORD nSubAuthority0, DWORD nSubAuthority1, DWORD nSubAuthority2, DWORD nSubAuthority3, DWORD nSubAuthority4, DWORD nSubAuthority5, DWORD nSubAuthority6, DWORD nSubAuthority7, PSID *pSid);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AllocateLocallyUniqueId (PLUID Luid);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AreAllAccessesGranted (DWORD GrantedAccess, DWORD DesiredAccess);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AreAnyAccessesGranted (DWORD GrantedAccess, DWORD DesiredAccess);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CheckTokenMembership (HANDLE TokenHandle, PSID SidToCheck, PBOOL IsMember);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ConvertToAutoInheritPrivateObjectSecurity (PSECURITY_DESCRIPTOR ParentDescriptor, PSECURITY_DESCRIPTOR CurrentSecurityDescriptor, PSECURITY_DESCRIPTOR *NewSecurityDescriptor, GUID *ObjectType, BOOLEAN IsDirectoryObject, PGENERIC_MAPPING GenericMapping);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CopySid (DWORD nDestinationSidLength, PSID pDestinationSid, PSID pSourceSid);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CreatePrivateObjectSecurity (PSECURITY_DESCRIPTOR ParentDescriptor, PSECURITY_DESCRIPTOR CreatorDescriptor, PSECURITY_DESCRIPTOR *NewDescriptor, WINBOOL IsDirectoryObject, HANDLE Token, PGENERIC_MAPPING GenericMapping);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CreatePrivateObjectSecurityEx (PSECURITY_DESCRIPTOR ParentDescriptor, PSECURITY_DESCRIPTOR CreatorDescriptor, PSECURITY_DESCRIPTOR *NewDescriptor, GUID *ObjectType, WINBOOL IsContainerObject, ULONG AutoInheritFlags, HANDLE Token, PGENERIC_MAPPING GenericMapping);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CreatePrivateObjectSecurityWithMultipleInheritance (PSECURITY_DESCRIPTOR ParentDescriptor, PSECURITY_DESCRIPTOR CreatorDescriptor, PSECURITY_DESCRIPTOR *NewDescriptor, GUID **ObjectTypes, ULONG GuidCount, WINBOOL IsContainerObject, ULONG AutoInheritFlags, HANDLE Token, PGENERIC_MAPPING GenericMapping);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CreateRestrictedToken (HANDLE ExistingTokenHandle, DWORD Flags, DWORD DisableSidCount, PSID_AND_ATTRIBUTES SidsToDisable, DWORD DeletePrivilegeCount, PLUID_AND_ATTRIBUTES PrivilegesToDelete, DWORD RestrictedSidCount, PSID_AND_ATTRIBUTES SidsToRestrict, PHANDLE NewTokenHandle);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CreateWellKnownSid (WELL_KNOWN_SID_TYPE WellKnownSidType, PSID DomainSid, PSID pSid, DWORD *cbSid);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EqualDomainSid (PSID pSid1, PSID pSid2, WINBOOL *pfEqual);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DeleteAce (PACL pAcl, DWORD dwAceIndex);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DestroyPrivateObjectSecurity (PSECURITY_DESCRIPTOR *ObjectDescriptor);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DuplicateToken (HANDLE ExistingTokenHandle, SECURITY_IMPERSONATION_LEVEL ImpersonationLevel, PHANDLE DuplicateTokenHandle);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DuplicateTokenEx (HANDLE hExistingToken, DWORD dwDesiredAccess, LPSECURITY_ATTRIBUTES lpTokenAttributes, SECURITY_IMPERSONATION_LEVEL ImpersonationLevel, TOKEN_TYPE TokenType, PHANDLE phNewToken);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EqualPrefixSid (PSID pSid1, PSID pSid2);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EqualSid (PSID pSid1, PSID pSid2);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FindFirstFreeAce (PACL pAcl, LPVOID *pAce);
  __attribute__((dllimport)) PVOID __attribute__((__stdcall__)) FreeSid (PSID pSid);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetAce (PACL pAcl, DWORD dwAceIndex, LPVOID *pAce);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetAclInformation (PACL pAcl, LPVOID pAclInformation, DWORD nAclInformationLength, ACL_INFORMATION_CLASS dwAclInformationClass);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetFileSecurityW (LPCWSTR lpFileName, SECURITY_INFORMATION RequestedInformation, PSECURITY_DESCRIPTOR pSecurityDescriptor, DWORD nLength, LPDWORD lpnLengthNeeded);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetKernelObjectSecurity (HANDLE Handle, SECURITY_INFORMATION RequestedInformation, PSECURITY_DESCRIPTOR pSecurityDescriptor, DWORD nLength, LPDWORD lpnLengthNeeded);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetLengthSid (PSID pSid);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetPrivateObjectSecurity (PSECURITY_DESCRIPTOR ObjectDescriptor, SECURITY_INFORMATION SecurityInformation, PSECURITY_DESCRIPTOR ResultantDescriptor, DWORD DescriptorLength, PDWORD ReturnLength);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetSecurityDescriptorControl (PSECURITY_DESCRIPTOR pSecurityDescriptor, PSECURITY_DESCRIPTOR_CONTROL pControl, LPDWORD lpdwRevision);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetSecurityDescriptorDacl (PSECURITY_DESCRIPTOR pSecurityDescriptor, LPBOOL lpbDaclPresent, PACL *pDacl, LPBOOL lpbDaclDefaulted);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetSecurityDescriptorGroup (PSECURITY_DESCRIPTOR pSecurityDescriptor, PSID *pGroup, LPBOOL lpbGroupDefaulted);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetSecurityDescriptorLength (PSECURITY_DESCRIPTOR pSecurityDescriptor);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetSecurityDescriptorOwner (PSECURITY_DESCRIPTOR pSecurityDescriptor, PSID *pOwner, LPBOOL lpbOwnerDefaulted);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetSecurityDescriptorRMControl (PSECURITY_DESCRIPTOR SecurityDescriptor, PUCHAR RMControl);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetSecurityDescriptorSacl (PSECURITY_DESCRIPTOR pSecurityDescriptor, LPBOOL lpbSaclPresent, PACL *pSacl, LPBOOL lpbSaclDefaulted);
  __attribute__((dllimport)) PSID_IDENTIFIER_AUTHORITY __attribute__((__stdcall__)) GetSidIdentifierAuthority (PSID pSid);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetSidLengthRequired (UCHAR nSubAuthorityCount);
  __attribute__((dllimport)) PDWORD __attribute__((__stdcall__)) GetSidSubAuthority (PSID pSid, DWORD nSubAuthority);
  __attribute__((dllimport)) PUCHAR __attribute__((__stdcall__)) GetSidSubAuthorityCount (PSID pSid);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetTokenInformation (HANDLE TokenHandle, TOKEN_INFORMATION_CLASS TokenInformationClass, LPVOID TokenInformation, DWORD TokenInformationLength, PDWORD ReturnLength);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetWindowsAccountDomainSid (PSID pSid, PSID pDomainSid, DWORD *cbDomainSid);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ImpersonateAnonymousToken (HANDLE ThreadHandle);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ImpersonateLoggedOnUser (HANDLE hToken);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ImpersonateSelf (SECURITY_IMPERSONATION_LEVEL ImpersonationLevel);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) InitializeAcl (PACL pAcl, DWORD nAclLength, DWORD dwAclRevision);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) InitializeSecurityDescriptor (PSECURITY_DESCRIPTOR pSecurityDescriptor, DWORD dwRevision);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) InitializeSid (PSID Sid, PSID_IDENTIFIER_AUTHORITY pIdentifierAuthority, BYTE nSubAuthorityCount);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsTokenRestricted (HANDLE TokenHandle);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsValidAcl (PACL pAcl);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsValidSecurityDescriptor (PSECURITY_DESCRIPTOR pSecurityDescriptor);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsValidSid (PSID pSid);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsWellKnownSid (PSID pSid, WELL_KNOWN_SID_TYPE WellKnownSidType);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) MakeAbsoluteSD (PSECURITY_DESCRIPTOR pSelfRelativeSecurityDescriptor, PSECURITY_DESCRIPTOR pAbsoluteSecurityDescriptor, LPDWORD lpdwAbsoluteSecurityDescriptorSize, PACL pDacl, LPDWORD lpdwDaclSize, PACL pSacl, LPDWORD lpdwSaclSize, PSID pOwner, LPDWORD lpdwOwnerSize, PSID pPrimaryGroup, LPDWORD lpdwPrimaryGroupSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) MakeSelfRelativeSD (PSECURITY_DESCRIPTOR pAbsoluteSecurityDescriptor, PSECURITY_DESCRIPTOR pSelfRelativeSecurityDescriptor, LPDWORD lpdwBufferLength);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) MapGenericMask (PDWORD AccessMask, PGENERIC_MAPPING GenericMapping);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ObjectCloseAuditAlarmW (LPCWSTR SubsystemName, LPVOID HandleId, WINBOOL GenerateOnClose);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ObjectDeleteAuditAlarmW (LPCWSTR SubsystemName, LPVOID HandleId, WINBOOL GenerateOnClose);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ObjectOpenAuditAlarmW (LPCWSTR SubsystemName, LPVOID HandleId, LPWSTR ObjectTypeName, LPWSTR ObjectName, PSECURITY_DESCRIPTOR pSecurityDescriptor, HANDLE ClientToken, DWORD DesiredAccess, DWORD GrantedAccess, PPRIVILEGE_SET Privileges, WINBOOL ObjectCreation, WINBOOL AccessGranted, LPBOOL GenerateOnClose);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ObjectPrivilegeAuditAlarmW (LPCWSTR SubsystemName, LPVOID HandleId, HANDLE ClientToken, DWORD DesiredAccess, PPRIVILEGE_SET Privileges, WINBOOL AccessGranted);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PrivilegeCheck (HANDLE ClientToken, PPRIVILEGE_SET RequiredPrivileges, LPBOOL pfResult);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PrivilegedServiceAuditAlarmW (LPCWSTR SubsystemName, LPCWSTR ServiceName, HANDLE ClientToken, PPRIVILEGE_SET Privileges, WINBOOL AccessGranted);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) QuerySecurityAccessMask (SECURITY_INFORMATION SecurityInformation, LPDWORD DesiredAccess);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) RevertToSelf (void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetAclInformation (PACL pAcl, LPVOID pAclInformation, DWORD nAclInformationLength, ACL_INFORMATION_CLASS dwAclInformationClass);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetFileSecurityW (LPCWSTR lpFileName, SECURITY_INFORMATION SecurityInformation, PSECURITY_DESCRIPTOR pSecurityDescriptor);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetKernelObjectSecurity (HANDLE Handle, SECURITY_INFORMATION SecurityInformation, PSECURITY_DESCRIPTOR SecurityDescriptor);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetPrivateObjectSecurity (SECURITY_INFORMATION SecurityInformation, PSECURITY_DESCRIPTOR ModificationDescriptor, PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor, PGENERIC_MAPPING GenericMapping, HANDLE Token);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetPrivateObjectSecurityEx (SECURITY_INFORMATION SecurityInformation, PSECURITY_DESCRIPTOR ModificationDescriptor, PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor, ULONG AutoInheritFlags, PGENERIC_MAPPING GenericMapping, HANDLE Token);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) SetSecurityAccessMask (SECURITY_INFORMATION SecurityInformation, LPDWORD DesiredAccess);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetSecurityDescriptorControl (PSECURITY_DESCRIPTOR pSecurityDescriptor, SECURITY_DESCRIPTOR_CONTROL ControlBitsOfInterest, SECURITY_DESCRIPTOR_CONTROL ControlBitsToSet);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetSecurityDescriptorDacl (PSECURITY_DESCRIPTOR pSecurityDescriptor, WINBOOL bDaclPresent, PACL pDacl, WINBOOL bDaclDefaulted);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetSecurityDescriptorGroup (PSECURITY_DESCRIPTOR pSecurityDescriptor, PSID pGroup, WINBOOL bGroupDefaulted);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetSecurityDescriptorOwner (PSECURITY_DESCRIPTOR pSecurityDescriptor, PSID pOwner, WINBOOL bOwnerDefaulted);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) SetSecurityDescriptorRMControl (PSECURITY_DESCRIPTOR SecurityDescriptor, PUCHAR RMControl);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetSecurityDescriptorSacl (PSECURITY_DESCRIPTOR pSecurityDescriptor, WINBOOL bSaclPresent, PACL pSacl, WINBOOL bSaclDefaulted);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetTokenInformation (HANDLE TokenHandle, TOKEN_INFORMATION_CLASS TokenInformationClass, LPVOID TokenInformation, DWORD TokenInformationLength);
  typedef RTL_SRWLOCK SRWLOCK, *PSRWLOCK;
  typedef RTL_RUN_ONCE INIT_ONCE;
  typedef PRTL_RUN_ONCE PINIT_ONCE;
  typedef PRTL_RUN_ONCE LPINIT_ONCE;
  typedef WINBOOL (__attribute__((__stdcall__)) *PINIT_ONCE_FN) (PINIT_ONCE InitOnce, PVOID Parameter, PVOID *Context);
  typedef RTL_CONDITION_VARIABLE CONDITION_VARIABLE, *PCONDITION_VARIABLE;
  __attribute__((dllimport)) void __attribute__((__stdcall__)) EnterCriticalSection (LPCRITICAL_SECTION lpCriticalSection);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) LeaveCriticalSection (LPCRITICAL_SECTION lpCriticalSection);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) TryEnterCriticalSection (LPCRITICAL_SECTION lpCriticalSection);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) DeleteCriticalSection (LPCRITICAL_SECTION lpCriticalSection);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetEvent (HANDLE hEvent);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ResetEvent (HANDLE hEvent);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ReleaseSemaphore (HANDLE hSemaphore, LONG lReleaseCount, LPLONG lpPreviousCount);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ReleaseMutex (HANDLE hMutex);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) WaitForSingleObjectEx (HANDLE hHandle, DWORD dwMilliseconds, WINBOOL bAlertable);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) WaitForMultipleObjectsEx (DWORD nCount, const HANDLE *lpHandles, WINBOOL bWaitAll, DWORD dwMilliseconds, WINBOOL bAlertable);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) OpenMutexW (DWORD dwDesiredAccess, WINBOOL bInheritHandle, LPCWSTR lpName);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) OpenEventA (DWORD dwDesiredAccess, WINBOOL bInheritHandle, LPCSTR lpName);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) OpenEventW (DWORD dwDesiredAccess, WINBOOL bInheritHandle, LPCWSTR lpName);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) OpenSemaphoreW (DWORD dwDesiredAccess, WINBOOL bInheritHandle, LPCWSTR lpName);
  WINBOOL __attribute__((__stdcall__)) WaitOnAddress (volatile void *Address, PVOID CompareAddress, SIZE_T AddressSize, DWORD dwMilliseconds);
  void __attribute__((__stdcall__)) WakeByAddressSingle (PVOID Address);
  void __attribute__((__stdcall__)) WakeByAddressAll (PVOID Address);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) InitializeSRWLock (PSRWLOCK SRWLock);
  void __attribute__((__stdcall__)) ReleaseSRWLockExclusive (PSRWLOCK SRWLock);
  void __attribute__((__stdcall__)) ReleaseSRWLockShared (PSRWLOCK SRWLock);
  void __attribute__((__stdcall__)) AcquireSRWLockExclusive (PSRWLOCK SRWLock);
  void __attribute__((__stdcall__)) AcquireSRWLockShared (PSRWLOCK SRWLock);
  __attribute__((dllimport)) BOOLEAN __attribute__((__stdcall__)) TryAcquireSRWLockExclusive (PSRWLOCK SRWLock);
  __attribute__((dllimport)) BOOLEAN __attribute__((__stdcall__)) TryAcquireSRWLockShared (PSRWLOCK SRWLock);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) InitializeCriticalSectionEx (LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount, DWORD Flags);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) InitOnceInitialize (PINIT_ONCE InitOnce);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) InitOnceExecuteOnce (PINIT_ONCE InitOnce, PINIT_ONCE_FN InitFn, PVOID Parameter, LPVOID *Context);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) InitOnceBeginInitialize (LPINIT_ONCE lpInitOnce, DWORD dwFlags, PBOOL fPending, LPVOID *lpContext);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) InitOnceComplete (LPINIT_ONCE lpInitOnce, DWORD dwFlags, LPVOID lpContext);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) InitializeConditionVariable (PCONDITION_VARIABLE ConditionVariable);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) WakeConditionVariable (PCONDITION_VARIABLE ConditionVariable);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) WakeAllConditionVariable (PCONDITION_VARIABLE ConditionVariable);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SleepConditionVariableCS (PCONDITION_VARIABLE ConditionVariable, PCRITICAL_SECTION CriticalSection, DWORD dwMilliseconds);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SleepConditionVariableSRW (PCONDITION_VARIABLE ConditionVariable, PSRWLOCK SRWLock, DWORD dwMilliseconds, ULONG Flags);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateMutexExA (LPSECURITY_ATTRIBUTES lpMutexAttributes, LPCSTR lpName, DWORD dwFlags, DWORD dwDesiredAccess);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateMutexExW (LPSECURITY_ATTRIBUTES lpMutexAttributes, LPCWSTR lpName, DWORD dwFlags, DWORD dwDesiredAccess);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateEventExA (LPSECURITY_ATTRIBUTES lpEventAttributes, LPCSTR lpName, DWORD dwFlags, DWORD dwDesiredAccess);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateEventExW (LPSECURITY_ATTRIBUTES lpEventAttributes, LPCWSTR lpName, DWORD dwFlags, DWORD dwDesiredAccess);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateSemaphoreExW (LPSECURITY_ATTRIBUTES lpSemaphoreAttributes, LONG lInitialCount, LONG lMaximumCount, LPCWSTR lpName, DWORD dwFlags, DWORD dwDesiredAccess);
  typedef void (__attribute__((__stdcall__)) *PTIMERAPCROUTINE) (LPVOID lpArgToCompletionRoutine, DWORD dwTimerLowValue, DWORD dwTimerHighValue);
  typedef RTL_BARRIER SYNCHRONIZATION_BARRIER;
  typedef PRTL_BARRIER PSYNCHRONIZATION_BARRIER;
  typedef PRTL_BARRIER LPSYNCHRONIZATION_BARRIER;
  __attribute__((dllimport)) void __attribute__((__stdcall__)) InitializeCriticalSection (LPCRITICAL_SECTION lpCriticalSection);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) InitializeCriticalSectionAndSpinCount (LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) SetCriticalSectionSpinCount (LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) WaitForSingleObject (HANDLE hHandle, DWORD dwMilliseconds);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) SleepEx (DWORD dwMilliseconds, WINBOOL bAlertable);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateMutexA (LPSECURITY_ATTRIBUTES lpMutexAttributes, WINBOOL bInitialOwner, LPCSTR lpName);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateMutexW (LPSECURITY_ATTRIBUTES lpMutexAttributes, WINBOOL bInitialOwner, LPCWSTR lpName);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateEventA (LPSECURITY_ATTRIBUTES lpEventAttributes, WINBOOL bManualReset, WINBOOL bInitialState, LPCSTR lpName);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateEventW (LPSECURITY_ATTRIBUTES lpEventAttributes, WINBOOL bManualReset, WINBOOL bInitialState, LPCWSTR lpName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetWaitableTimer (HANDLE hTimer, const LARGE_INTEGER *lpDueTime, LONG lPeriod, PTIMERAPCROUTINE pfnCompletionRoutine, LPVOID lpArgToCompletionRoutine, WINBOOL fResume);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CancelWaitableTimer (HANDLE hTimer);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) OpenWaitableTimerW (DWORD dwDesiredAccess, WINBOOL bInheritHandle, LPCWSTR lpTimerName);
  WINBOOL __attribute__((__stdcall__)) EnterSynchronizationBarrier (LPSYNCHRONIZATION_BARRIER lpBarrier, DWORD dwFlags);
  WINBOOL __attribute__((__stdcall__)) InitializeSynchronizationBarrier (LPSYNCHRONIZATION_BARRIER lpBarrier, LONG lTotalThreads, LONG lSpinCount);
  WINBOOL __attribute__((__stdcall__)) DeleteSynchronizationBarrier (LPSYNCHRONIZATION_BARRIER lpBarrier);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) Sleep (DWORD dwMilliseconds);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) SignalObjectAndWait (HANDLE hObjectToSignal, HANDLE hObjectToWaitOn, DWORD dwMilliseconds, WINBOOL bAlertable);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateWaitableTimerExW (LPSECURITY_ATTRIBUTES lpTimerAttributes, LPCWSTR lpTimerName, DWORD dwFlags, DWORD dwDesiredAccess);
  WINBOOL __attribute__((__stdcall__)) SetWaitableTimerEx (HANDLE hTimer, const LARGE_INTEGER *lpDueTime, LONG lPeriod, PTIMERAPCROUTINE pfnCompletionRoutine, LPVOID lpArgToCompletionRoutine, PREASON_CONTEXT WakeContext, ULONG TolerableDelay);
  typedef struct _SYSTEM_INFO {
    __extension__ union {
      DWORD dwOemId;
      __extension__ struct {
 WORD wProcessorArchitecture;
 WORD wReserved;
      } ;
    } ;
    DWORD dwPageSize;
    LPVOID lpMinimumApplicationAddress;
    LPVOID lpMaximumApplicationAddress;
    DWORD_PTR dwActiveProcessorMask;
    DWORD dwNumberOfProcessors;
    DWORD dwProcessorType;
    DWORD dwAllocationGranularity;
    WORD wProcessorLevel;
    WORD wProcessorRevision;
  } SYSTEM_INFO, *LPSYSTEM_INFO;
  __attribute__((dllimport)) void __attribute__((__stdcall__)) GetSystemTime (LPSYSTEMTIME lpSystemTime);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) GetSystemTimeAsFileTime (LPFILETIME lpSystemTimeAsFileTime);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) GetLocalTime (LPSYSTEMTIME lpSystemTime);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) GetNativeSystemInfo (LPSYSTEM_INFO lpSystemInfo);
  __attribute__((dllimport)) ULONGLONG __attribute__((__stdcall__)) GetTickCount64 (void);
  typedef struct _MEMORYSTATUSEX {
    DWORD dwLength;
    DWORD dwMemoryLoad;
    DWORDLONG ullTotalPhys;
    DWORDLONG ullAvailPhys;
    DWORDLONG ullTotalPageFile;
    DWORDLONG ullAvailPageFile;
    DWORDLONG ullTotalVirtual;
    DWORDLONG ullAvailVirtual;
    DWORDLONG ullAvailExtendedVirtual;
  } MEMORYSTATUSEX,*LPMEMORYSTATUSEX;
  __attribute__((dllimport)) void __attribute__((__stdcall__)) GetSystemInfo (LPSYSTEM_INFO lpSystemInfo);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GlobalMemoryStatusEx (LPMEMORYSTATUSEX lpBuffer);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetTickCount (void);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) GetSystemTimePreciseAsFileTime (LPFILETIME lpSystemTimeAsFileTime);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetVersionExA (LPOSVERSIONINFOA lpVersionInformation);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetVersionExW (LPOSVERSIONINFOW lpVersionInformation);
  typedef enum _COMPUTER_NAME_FORMAT {
    ComputerNameNetBIOS,
    ComputerNameDnsHostname,
    ComputerNameDnsDomain,
    ComputerNameDnsFullyQualified,
    ComputerNamePhysicalNetBIOS,
    ComputerNamePhysicalDnsHostname,
    ComputerNamePhysicalDnsDomain,
    ComputerNamePhysicalDnsFullyQualified,
    ComputerNameMax
  } COMPUTER_NAME_FORMAT;
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetVersion (void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetLocalTime (const SYSTEMTIME *lpSystemTime);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetSystemTimeAdjustment (PDWORD lpTimeAdjustment, PDWORD lpTimeIncrement, PBOOL lpTimeAdjustmentDisabled);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetSystemDirectoryA (LPSTR lpBuffer, UINT uSize);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetSystemDirectoryW (LPWSTR lpBuffer, UINT uSize);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetWindowsDirectoryA (LPSTR lpBuffer, UINT uSize);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetWindowsDirectoryW (LPWSTR lpBuffer, UINT uSize);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetSystemWindowsDirectoryA (LPSTR lpBuffer, UINT uSize);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetSystemWindowsDirectoryW (LPWSTR lpBuffer, UINT uSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetComputerNameExA (COMPUTER_NAME_FORMAT NameType, LPSTR lpBuffer, LPDWORD nSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetComputerNameExW (COMPUTER_NAME_FORMAT NameType, LPWSTR lpBuffer, LPDWORD nSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetComputerNameExW (COMPUTER_NAME_FORMAT NameType, LPCWSTR lpBuffer);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetSystemTime (const SYSTEMTIME *lpSystemTime);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetLogicalProcessorInformation (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION Buffer, PDWORD ReturnedLength);
  __attribute__((dllimport)) ULONGLONG __attribute__((__stdcall__)) VerSetConditionMask (ULONGLONG ConditionMask, ULONG TypeMask, UCHAR Condition);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) EnumSystemFirmwareTables (DWORD FirmwareTableProviderSignature, PVOID pFirmwareTableEnumBuffer, DWORD BufferSize);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetSystemFirmwareTable (DWORD FirmwareTableProviderSignature, DWORD FirmwareTableID, PVOID pFirmwareTableBuffer, DWORD BufferSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetProductInfo (DWORD dwOSMajorVersion, DWORD dwOSMinorVersion, DWORD dwSpMajorVersion, DWORD dwSpMinorVersion, PDWORD pdwReturnedProductType);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetLogicalProcessorInformationEx (LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType, PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Buffer, PDWORD ReturnedLength);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetOsSafeBootMode (PDWORD Flags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetNumaHighestNodeNumber (PULONG HighestNodeNumber);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetNumaNodeProcessorMaskEx (USHORT Node, PGROUP_AFFINITY ProcessorMask);
  typedef void (__attribute__((__stdcall__)) *PTP_WIN32_IO_CALLBACK) (PTP_CALLBACK_INSTANCE Instance, PVOID Context, PVOID Overlapped, ULONG IoResult, ULONG_PTR NumberOfBytesTransferred, PTP_IO Io);
  __attribute__((dllimport)) PTP_POOL __attribute__((__stdcall__)) CreateThreadpool (PVOID reserved);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) SetThreadpoolThreadMaximum (PTP_POOL ptpp, DWORD cthrdMost);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetThreadpoolThreadMinimum (PTP_POOL ptpp, DWORD cthrdMic);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetThreadpoolStackInformation (PTP_POOL ptpp, PTP_POOL_STACK_INFORMATION ptpsi);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) QueryThreadpoolStackInformation (PTP_POOL ptpp, PTP_POOL_STACK_INFORMATION ptpsi);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) CloseThreadpool (PTP_POOL ptpp);
  __attribute__((dllimport)) PTP_CLEANUP_GROUP __attribute__((__stdcall__)) CreateThreadpoolCleanupGroup (void);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) CloseThreadpoolCleanupGroupMembers (PTP_CLEANUP_GROUP ptpcg, WINBOOL fCancelPendingCallbacks, PVOID pvCleanupContext);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) CloseThreadpoolCleanupGroup (PTP_CLEANUP_GROUP ptpcg);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) SetEventWhenCallbackReturns (PTP_CALLBACK_INSTANCE pci, HANDLE evt);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) ReleaseSemaphoreWhenCallbackReturns (PTP_CALLBACK_INSTANCE pci, HANDLE sem, DWORD crel);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) ReleaseMutexWhenCallbackReturns (PTP_CALLBACK_INSTANCE pci, HANDLE mut);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) LeaveCriticalSectionWhenCallbackReturns (PTP_CALLBACK_INSTANCE pci, PCRITICAL_SECTION pcs);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) FreeLibraryWhenCallbackReturns (PTP_CALLBACK_INSTANCE pci, HMODULE mod);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CallbackMayRunLong (PTP_CALLBACK_INSTANCE pci);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) DisassociateCurrentThreadFromCallback (PTP_CALLBACK_INSTANCE pci);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) TrySubmitThreadpoolCallback (PTP_SIMPLE_CALLBACK pfns, PVOID pv, PTP_CALLBACK_ENVIRON pcbe);
  __attribute__((dllimport)) PTP_WORK __attribute__((__stdcall__)) CreateThreadpoolWork (PTP_WORK_CALLBACK pfnwk, PVOID pv, PTP_CALLBACK_ENVIRON pcbe);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) SubmitThreadpoolWork (PTP_WORK pwk);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) WaitForThreadpoolWorkCallbacks (PTP_WORK pwk, WINBOOL fCancelPendingCallbacks);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) CloseThreadpoolWork (PTP_WORK pwk);
  __attribute__((dllimport)) PTP_TIMER __attribute__((__stdcall__)) CreateThreadpoolTimer (PTP_TIMER_CALLBACK pfnti, PVOID pv, PTP_CALLBACK_ENVIRON pcbe);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) SetThreadpoolTimer (PTP_TIMER pti, PFILETIME pftDueTime, DWORD msPeriod, DWORD msWindowLength);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsThreadpoolTimerSet (PTP_TIMER pti);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) WaitForThreadpoolTimerCallbacks (PTP_TIMER pti, WINBOOL fCancelPendingCallbacks);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) CloseThreadpoolTimer (PTP_TIMER pti);
  __attribute__((dllimport)) PTP_WAIT __attribute__((__stdcall__)) CreateThreadpoolWait (PTP_WAIT_CALLBACK pfnwa, PVOID pv, PTP_CALLBACK_ENVIRON pcbe);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) SetThreadpoolWait (PTP_WAIT pwa, HANDLE h, PFILETIME pftTimeout);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) WaitForThreadpoolWaitCallbacks (PTP_WAIT pwa, WINBOOL fCancelPendingCallbacks);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) CloseThreadpoolWait (PTP_WAIT pwa);
  __attribute__((dllimport)) PTP_IO __attribute__((__stdcall__)) CreateThreadpoolIo (HANDLE fl, PTP_WIN32_IO_CALLBACK pfnio, PVOID pv, PTP_CALLBACK_ENVIRON pcbe);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) StartThreadpoolIo (PTP_IO pio);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) CancelThreadpoolIo (PTP_IO pio);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) WaitForThreadpoolIoCallbacks (PTP_IO pio, WINBOOL fCancelPendingCallbacks);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) CloseThreadpoolIo (PTP_IO pio);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetThreadpoolTimerEx (PTP_TIMER pti, PFILETIME pftDueTime, DWORD msPeriod, DWORD msWindowLength);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetThreadpoolWaitEx (PTP_WAIT pwa, HANDLE h, PFILETIME pftTimeout, PVOID Reserved);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CreateTimerQueueTimer (PHANDLE phNewTimer, HANDLE TimerQueue, WAITORTIMERCALLBACK Callback, PVOID Parameter, DWORD DueTime, DWORD Period, ULONG Flags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DeleteTimerQueueTimer (HANDLE TimerQueue, HANDLE Timer, HANDLE CompletionEvent);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) QueueUserWorkItem (LPTHREAD_START_ROUTINE Function, PVOID Context, ULONG Flags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) UnregisterWaitEx (HANDLE WaitHandle, HANDLE CompletionEvent);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateTimerQueue (void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ChangeTimerQueueTimer (HANDLE TimerQueue, HANDLE Timer, ULONG DueTime, ULONG Period);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DeleteTimerQueueEx (HANDLE TimerQueue, HANDLE CompletionEvent);
  __attribute__((dllimport)) PVOID __attribute__((__stdcall__)) EncodePointer (PVOID Ptr);
  __attribute__((dllimport)) PVOID __attribute__((__stdcall__)) DecodePointer (PVOID Ptr);
  __attribute__((dllimport)) PVOID __attribute__((__stdcall__)) EncodeSystemPointer (PVOID Ptr);
  __attribute__((dllimport)) PVOID __attribute__((__stdcall__)) DecodeSystemPointer (PVOID Ptr);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) Beep (DWORD dwFreq, DWORD dwDuration);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) Wow64DisableWow64FsRedirection (PVOID *OldValue);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) Wow64RevertWow64FsRedirection (PVOID OlValue);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsWow64Process (HANDLE hProcess, PBOOL Wow64Process);
       
       
  typedef void (__attribute__((__stdcall__)) *PFIBER_START_ROUTINE) (LPVOID lpFiberParameter);
  typedef PFIBER_START_ROUTINE LPFIBER_START_ROUTINE;
  typedef PLDT_ENTRY LPLDT_ENTRY;
  typedef struct _COMMPROP {
    WORD wPacketLength;
    WORD wPacketVersion;
    DWORD dwServiceMask;
    DWORD dwReserved1;
    DWORD dwMaxTxQueue;
    DWORD dwMaxRxQueue;
    DWORD dwMaxBaud;
    DWORD dwProvSubType;
    DWORD dwProvCapabilities;
    DWORD dwSettableParams;
    DWORD dwSettableBaud;
    WORD wSettableData;
    WORD wSettableStopParity;
    DWORD dwCurrentTxQueue;
    DWORD dwCurrentRxQueue;
    DWORD dwProvSpec1;
    DWORD dwProvSpec2;
    WCHAR wcProvChar[1];
  } COMMPROP,*LPCOMMPROP;
  typedef struct _COMSTAT {
    DWORD fCtsHold : 1;
    DWORD fDsrHold : 1;
    DWORD fRlsdHold : 1;
    DWORD fXoffHold : 1;
    DWORD fXoffSent : 1;
    DWORD fEof : 1;
    DWORD fTxim : 1;
    DWORD fReserved : 25;
    DWORD cbInQue;
    DWORD cbOutQue;
  } COMSTAT,*LPCOMSTAT;
  typedef struct _DCB {
    DWORD DCBlength;
    DWORD BaudRate;
    DWORD fBinary: 1;
    DWORD fParity: 1;
    DWORD fOutxCtsFlow:1;
    DWORD fOutxDsrFlow:1;
    DWORD fDtrControl:2;
    DWORD fDsrSensitivity:1;
    DWORD fTXContinueOnXoff: 1;
    DWORD fOutX: 1;
    DWORD fInX: 1;
    DWORD fErrorChar: 1;
    DWORD fNull: 1;
    DWORD fRtsControl:2;
    DWORD fAbortOnError:1;
    DWORD fDummy2:17;
    WORD wReserved;
    WORD XonLim;
    WORD XoffLim;
    BYTE ByteSize;
    BYTE Parity;
    BYTE StopBits;
    char XonChar;
    char XoffChar;
    char ErrorChar;
    char EofChar;
    char EvtChar;
    WORD wReserved1;
  } DCB,*LPDCB;
  typedef struct _COMMTIMEOUTS {
    DWORD ReadIntervalTimeout;
    DWORD ReadTotalTimeoutMultiplier;
    DWORD ReadTotalTimeoutConstant;
    DWORD WriteTotalTimeoutMultiplier;
    DWORD WriteTotalTimeoutConstant;
  } COMMTIMEOUTS,*LPCOMMTIMEOUTS;
  typedef struct _COMMCONFIG {
    DWORD dwSize;
    WORD wVersion;
    WORD wReserved;
    DCB dcb;
    DWORD dwProviderSubType;
    DWORD dwProviderOffset;
    DWORD dwProviderSize;
    WCHAR wcProviderData[1];
  } COMMCONFIG,*LPCOMMCONFIG;
  typedef struct _MEMORYSTATUS {
    DWORD dwLength;
    DWORD dwMemoryLoad;
    SIZE_T dwTotalPhys;
    SIZE_T dwAvailPhys;
    SIZE_T dwTotalPageFile;
    SIZE_T dwAvailPageFile;
    SIZE_T dwTotalVirtual;
    SIZE_T dwAvailVirtual;
  } MEMORYSTATUS,*LPMEMORYSTATUS;
  typedef struct _JIT_DEBUG_INFO {
    DWORD dwSize;
    DWORD dwProcessorArchitecture;
    DWORD dwThreadID;
    DWORD dwReserved0;
    ULONG64 lpExceptionAddress;
    ULONG64 lpExceptionRecord;
    ULONG64 lpContextRecord;
  } JIT_DEBUG_INFO,*LPJIT_DEBUG_INFO;
  typedef JIT_DEBUG_INFO JIT_DEBUG_INFO32, *LPJIT_DEBUG_INFO32;
  typedef JIT_DEBUG_INFO JIT_DEBUG_INFO64, *LPJIT_DEBUG_INFO64;
  typedef PEXCEPTION_RECORD LPEXCEPTION_RECORD;
  typedef PEXCEPTION_POINTERS LPEXCEPTION_POINTERS;
  typedef struct _OFSTRUCT {
    BYTE cBytes;
    BYTE fFixedDisk;
    WORD nErrCode;
    WORD Reserved1;
    WORD Reserved2;
    CHAR szPathName[128];
  } OFSTRUCT, *LPOFSTRUCT,*POFSTRUCT;
       
  extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) LONGLONG _InterlockedAnd64 (LONGLONG volatile *Destination, LONGLONG Value) {
    LONGLONG Old;
    do {
      Old = *Destination;
    } while (_InterlockedCompareExchange64 (Destination, Old &Value, Old) != Old);
    return Old;
  }
  extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) LONGLONG _InterlockedOr64 (LONGLONG volatile *Destination, LONGLONG Value) {
    LONGLONG Old;
    do {
      Old = *Destination;
    } while (_InterlockedCompareExchange64 (Destination, Old | Value, Old) != Old);
    return Old;
  }
  extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) LONGLONG _InterlockedXor64 (LONGLONG volatile *Destination, LONGLONG Value) {
    LONGLONG Old;
    do {
      Old = *Destination;
    } while (_InterlockedCompareExchange64 (Destination, Old ^ Value, Old) != Old);
    return Old;
  }
  extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) LONGLONG _InterlockedIncrement64 (LONGLONG volatile *Addend) {
    LONGLONG Old;
    do {
      Old = *Addend;
    } while (_InterlockedCompareExchange64 (Addend, Old + 1, Old) != Old);
    return Old + 1;
  }
  extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) LONGLONG _InterlockedDecrement64 (LONGLONG volatile *Addend) {
    LONGLONG Old;
    do {
      Old = *Addend;
    } while (_InterlockedCompareExchange64 (Addend, Old - 1, Old) != Old);
    return Old - 1;
  }
  extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) LONGLONG _InterlockedExchange64 (LONGLONG volatile *Target, LONGLONG Value) {
    LONGLONG Old;
    do {
      Old = *Target;
    } while (_InterlockedCompareExchange64 (Target, Value, Old) != Old);
    return Old;
  }
  extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) LONGLONG _InterlockedExchangeAdd64 (LONGLONG volatile *Addend, LONGLONG Value) {
    LONGLONG Old;
    do {
      Old = *Addend;
    } while (_InterlockedCompareExchange64 (Addend, Old + Value, Old) != Old);
    return Old;
  }
       
  __attribute__((dllimport)) HLOCAL __attribute__((__stdcall__)) LocalAlloc (UINT uFlags, SIZE_T uBytes);
  __attribute__((dllimport)) HLOCAL __attribute__((__stdcall__)) LocalFree (HLOCAL hMem);
  int __attribute__((__stdcall__)) WinMain (HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd);
  int __attribute__((__stdcall__)) wWinMain (HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nShowCmd);
  __attribute__((dllimport)) HGLOBAL __attribute__((__stdcall__)) GlobalAlloc (UINT uFlags, SIZE_T dwBytes);
  __attribute__((dllimport)) HGLOBAL __attribute__((__stdcall__)) GlobalReAlloc (HGLOBAL hMem, SIZE_T dwBytes, UINT uFlags);
  __attribute__((dllimport)) SIZE_T __attribute__((__stdcall__)) GlobalSize (HGLOBAL hMem);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GlobalFlags (HGLOBAL hMem);
  __attribute__((dllimport)) LPVOID __attribute__((__stdcall__)) GlobalLock (HGLOBAL hMem);
  __attribute__((dllimport)) HGLOBAL __attribute__((__stdcall__)) GlobalHandle (LPCVOID pMem);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GlobalUnlock (HGLOBAL hMem);
  __attribute__((dllimport)) HGLOBAL __attribute__((__stdcall__)) GlobalFree (HGLOBAL hMem);
  __attribute__((dllimport)) SIZE_T __attribute__((__stdcall__)) GlobalCompact (DWORD dwMinFree);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) GlobalFix (HGLOBAL hMem);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) GlobalUnfix (HGLOBAL hMem);
  __attribute__((dllimport)) LPVOID __attribute__((__stdcall__)) GlobalWire (HGLOBAL hMem);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GlobalUnWire (HGLOBAL hMem);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) GlobalMemoryStatus (LPMEMORYSTATUS lpBuffer);
  __attribute__((dllimport)) HLOCAL __attribute__((__stdcall__)) LocalReAlloc (HLOCAL hMem, SIZE_T uBytes, UINT uFlags);
  __attribute__((dllimport)) LPVOID __attribute__((__stdcall__)) LocalLock (HLOCAL hMem);
  __attribute__((dllimport)) HLOCAL __attribute__((__stdcall__)) LocalHandle (LPCVOID pMem);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) LocalUnlock (HLOCAL hMem);
  __attribute__((dllimport)) SIZE_T __attribute__((__stdcall__)) LocalSize (HLOCAL hMem);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) LocalFlags (HLOCAL hMem);
  __attribute__((dllimport)) SIZE_T __attribute__((__stdcall__)) LocalShrink (HLOCAL hMem, UINT cbNewSize);
  __attribute__((dllimport)) SIZE_T __attribute__((__stdcall__)) LocalCompact (UINT uMinFree);
  __attribute__((dllimport)) LPVOID __attribute__((__stdcall__)) VirtualAllocExNuma (HANDLE hProcess, LPVOID lpAddress, SIZE_T dwSize, DWORD flAllocationType, DWORD flProtect, DWORD nndPreferred);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetProcessorSystemCycleTime (USHORT Group, PSYSTEM_PROCESSOR_CYCLE_TIME_INFORMATION Buffer, PDWORD ReturnedLength);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetPhysicallyInstalledSystemMemory (PULONGLONG TotalMemoryInKilobytes);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetBinaryTypeA (LPCSTR lpApplicationName, LPDWORD lpBinaryType);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetBinaryTypeW (LPCWSTR lpApplicationName, LPDWORD lpBinaryType);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetShortPathNameA (LPCSTR lpszLongPath, LPSTR lpszShortPath, DWORD cchBuffer);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetLongPathNameTransactedA (LPCSTR lpszShortPath, LPSTR lpszLongPath, DWORD cchBuffer, HANDLE hTransaction);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetLongPathNameTransactedW (LPCWSTR lpszShortPath, LPWSTR lpszLongPath, DWORD cchBuffer, HANDLE hTransaction);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetProcessAffinityMask (HANDLE hProcess, PDWORD_PTR lpProcessAffinityMask, PDWORD_PTR lpSystemAffinityMask);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetProcessAffinityMask (HANDLE hProcess, DWORD_PTR dwProcessAffinityMask);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetProcessIoCounters (HANDLE hProcess, PIO_COUNTERS lpIoCounters);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetProcessWorkingSetSize (HANDLE hProcess, PSIZE_T lpMinimumWorkingSetSize, PSIZE_T lpMaximumWorkingSetSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetProcessWorkingSetSize (HANDLE hProcess, SIZE_T dwMinimumWorkingSetSize, SIZE_T dwMaximumWorkingSetSize);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) FatalExit (int ExitCode);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetEnvironmentStringsA (LPCH NewEnvironment);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) RaiseFailFastException (PEXCEPTION_RECORD pExceptionRecord, PCONTEXT pContextRecord, DWORD dwFlags);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) SetThreadIdealProcessor (HANDLE hThread, DWORD dwIdealProcessor);
  __attribute__((dllimport)) LPVOID __attribute__((__stdcall__)) CreateFiber (SIZE_T dwStackSize, LPFIBER_START_ROUTINE lpStartAddress, LPVOID lpParameter);
  __attribute__((dllimport)) LPVOID __attribute__((__stdcall__)) CreateFiberEx (SIZE_T dwStackCommitSize, SIZE_T dwStackReserveSize, DWORD dwFlags, LPFIBER_START_ROUTINE lpStartAddress, LPVOID lpParameter);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) DeleteFiber (LPVOID lpFiber);
  __attribute__((dllimport)) LPVOID __attribute__((__stdcall__)) ConvertThreadToFiber (LPVOID lpParameter);
  __attribute__((dllimport)) LPVOID __attribute__((__stdcall__)) ConvertThreadToFiberEx (LPVOID lpParameter, DWORD dwFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ConvertFiberToThread (void);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) SwitchToFiber (LPVOID lpFiber);
  __attribute__((dllimport)) DWORD_PTR __attribute__((__stdcall__)) SetThreadAffinityMask (HANDLE hThread, DWORD_PTR dwThreadAffinityMask);
  typedef enum _THREAD_INFORMATION_CLASS {
    ThreadMemoryPriority,
    ThreadAbsoluteCpuPriority,
    ThreadInformationClassMax
  } THREAD_INFORMATION_CLASS;
  typedef enum _PROCESS_INFORMATION_CLASS {
    ProcessMemoryPriority,
    ProcessInformationClassMax
  } PROCESS_INFORMATION_CLASS;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetProcessDEPPolicy (DWORD dwFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetProcessDEPPolicy (HANDLE hProcess, LPDWORD lpFlags, PBOOL lpPermanent);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetProcessPriorityBoost (HANDLE hProcess, WINBOOL bDisablePriorityBoost);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetProcessPriorityBoost (HANDLE hProcess, PBOOL pDisablePriorityBoost);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) RequestWakeupLatency (LATENCY_TIME latency);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsSystemResumeAutomatic (void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetThreadIOPendingFlag (HANDLE hThread, PBOOL lpIOIsPending);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetThreadSelectorEntry (HANDLE hThread, DWORD dwSelector, LPLDT_ENTRY lpSelectorEntry);
  __attribute__((dllimport)) EXECUTION_STATE __attribute__((__stdcall__)) SetThreadExecutionState (EXECUTION_STATE esFlags);
  typedef REASON_CONTEXT POWER_REQUEST_CONTEXT,*PPOWER_REQUEST_CONTEXT,*LPPOWER_REQUEST_CONTEXT;
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) PowerCreateRequest (PREASON_CONTEXT Context);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PowerSetRequest (HANDLE PowerRequest, POWER_REQUEST_TYPE RequestType);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PowerClearRequest (HANDLE PowerRequest, POWER_REQUEST_TYPE RequestType);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetFileCompletionNotificationModes (HANDLE FileHandle, UCHAR Flags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetFileIoOverlappedRange (HANDLE FileHandle, PUCHAR OverlappedRangeStart, ULONG Length);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetThreadErrorMode (void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetThreadErrorMode (DWORD dwNewMode, LPDWORD lpOldMode);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) Wow64GetThreadContext (HANDLE hThread, PWOW64_CONTEXT lpContext);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) Wow64SetThreadContext (HANDLE hThread, const WOW64_CONTEXT *lpContext);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) Wow64GetThreadSelectorEntry (HANDLE hThread, DWORD dwSelector, PWOW64_LDT_ENTRY lpSelectorEntry);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) Wow64SuspendThread (HANDLE hThread);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DebugSetProcessKillOnExit (WINBOOL KillOnExit);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DebugBreakProcess (HANDLE Process);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) WaitForMultipleObjects (DWORD nCount, const HANDLE *lpHandles, WINBOOL bWaitAll, DWORD dwMilliseconds);
  typedef enum _DEP_SYSTEM_POLICY_TYPE {
    DEPPolicyAlwaysOff = 0,
    DEPPolicyAlwaysOn,
    DEPPolicyOptIn,
    DEPPolicyOptOut,
    DEPTotalPolicyCount
  } DEP_SYSTEM_POLICY_TYPE;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PulseEvent (HANDLE hEvent);
  __attribute__((dllimport)) ATOM __attribute__((__stdcall__)) GlobalDeleteAtom (ATOM nAtom);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) InitAtomTable (DWORD nSize);
  __attribute__((dllimport)) ATOM __attribute__((__stdcall__)) DeleteAtom (ATOM nAtom);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) SetHandleCount (UINT uNumber);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) RequestDeviceWakeup (HANDLE hDevice);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CancelDeviceWakeupRequest (HANDLE hDevice);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetDevicePowerState (HANDLE hDevice, WINBOOL *pfOn);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetMessageWaitingIndicator (HANDLE hMsgIndicator, ULONG ulMsgCount);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetFileShortNameA (HANDLE hFile, LPCSTR lpShortName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetFileShortNameW (HANDLE hFile, LPCWSTR lpShortName);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) LoadModule (LPCSTR lpModuleName, LPVOID lpParameterBlock);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) WinExec (LPCSTR lpCmdLine, UINT uCmdShow);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ClearCommBreak (HANDLE hFile);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ClearCommError (HANDLE hFile, LPDWORD lpErrors, LPCOMSTAT lpStat);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetupComm (HANDLE hFile, DWORD dwInQueue, DWORD dwOutQueue);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EscapeCommFunction (HANDLE hFile, DWORD dwFunc);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetCommConfig (HANDLE hCommDev, LPCOMMCONFIG lpCC, LPDWORD lpdwSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetCommMask (HANDLE hFile, LPDWORD lpEvtMask);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetCommProperties (HANDLE hFile, LPCOMMPROP lpCommProp);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetCommModemStatus (HANDLE hFile, LPDWORD lpModemStat);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetCommState (HANDLE hFile, LPDCB lpDCB);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetCommTimeouts (HANDLE hFile, LPCOMMTIMEOUTS lpCommTimeouts);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PurgeComm (HANDLE hFile, DWORD dwFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetCommBreak (HANDLE hFile);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetCommConfig (HANDLE hCommDev, LPCOMMCONFIG lpCC, DWORD dwSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetCommMask (HANDLE hFile, DWORD dwEvtMask);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetCommState (HANDLE hFile, LPDCB lpDCB);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetCommTimeouts (HANDLE hFile, LPCOMMTIMEOUTS lpCommTimeouts);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) TransmitCommChar (HANDLE hFile, char cChar);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) WaitCommEvent (HANDLE hFile, LPDWORD lpEvtMask, LPOVERLAPPED lpOverlapped);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) SetTapePosition (HANDLE hDevice, DWORD dwPositionMethod, DWORD dwPartition, DWORD dwOffsetLow, DWORD dwOffsetHigh, WINBOOL bImmediate);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetTapePosition (HANDLE hDevice, DWORD dwPositionType, LPDWORD lpdwPartition, LPDWORD lpdwOffsetLow, LPDWORD lpdwOffsetHigh);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) PrepareTape (HANDLE hDevice, DWORD dwOperation, WINBOOL bImmediate);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) EraseTape (HANDLE hDevice, DWORD dwEraseType, WINBOOL bImmediate);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) CreateTapePartition (HANDLE hDevice, DWORD dwPartitionMethod, DWORD dwCount, DWORD dwSize);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) WriteTapemark (HANDLE hDevice, DWORD dwTapemarkType, DWORD dwTapemarkCount, WINBOOL bImmediate);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetTapeStatus (HANDLE hDevice);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetTapeParameters (HANDLE hDevice, DWORD dwOperation, LPDWORD lpdwSize, LPVOID lpTapeInformation);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) SetTapeParameters (HANDLE hDevice, DWORD dwOperation, LPVOID lpTapeInformation);
  __attribute__((dllimport)) DEP_SYSTEM_POLICY_TYPE __attribute__((__stdcall__)) GetSystemDEPPolicy (void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetSystemRegistryQuota (PDWORD pdwQuotaAllowed, PDWORD pdwQuotaUsed);
  WINBOOL __attribute__((__stdcall__)) GetSystemTimes (LPFILETIME lpIdleTime, LPFILETIME lpKernelTime, LPFILETIME lpUserTime);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FileTimeToDosDateTime (const FILETIME *lpFileTime, LPWORD lpFatDate, LPWORD lpFatTime);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DosDateTimeToFileTime (WORD wFatDate, WORD wFatTime, LPFILETIME lpFileTime);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetSystemTimeAdjustment (DWORD dwTimeAdjustment, WINBOOL bTimeAdjustmentDisabled);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) MulDiv (int nNumber, int nNumerator, int nDenominator);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) FormatMessageA (DWORD dwFlags, LPCVOID lpSource, DWORD dwMessageId, DWORD dwLanguageId, LPSTR lpBuffer, DWORD nSize, va_list *Arguments);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) FormatMessageW (DWORD dwFlags, LPCVOID lpSource, DWORD dwMessageId, DWORD dwLanguageId, LPWSTR lpBuffer, DWORD nSize, va_list *Arguments);
  typedef DWORD (__attribute__((__stdcall__)) *PFE_EXPORT_FUNC) (PBYTE pbData, PVOID pvCallbackContext, ULONG ulLength);
  typedef DWORD (__attribute__((__stdcall__)) *PFE_IMPORT_FUNC) (PBYTE pbData, PVOID pvCallbackContext, PULONG ulLength);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetNamedPipeInfo (HANDLE hNamedPipe, LPDWORD lpFlags, LPDWORD lpOutBufferSize, LPDWORD lpInBufferSize, LPDWORD lpMaxInstances);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateMailslotA (LPCSTR lpName, DWORD nMaxMessageSize, DWORD lReadTimeout, LPSECURITY_ATTRIBUTES lpSecurityAttributes);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateMailslotW (LPCWSTR lpName, DWORD nMaxMessageSize, DWORD lReadTimeout, LPSECURITY_ATTRIBUTES lpSecurityAttributes);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetMailslotInfo (HANDLE hMailslot, LPDWORD lpMaxMessageSize, LPDWORD lpNextSize, LPDWORD lpMessageCount, LPDWORD lpReadTimeout);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetMailslotInfo (HANDLE hMailslot, DWORD lReadTimeout);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EncryptFileA (LPCSTR lpFileName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EncryptFileW (LPCWSTR lpFileName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DecryptFileA (LPCSTR lpFileName, DWORD dwReserved);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DecryptFileW (LPCWSTR lpFileName, DWORD dwReserved);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FileEncryptionStatusA (LPCSTR lpFileName, LPDWORD lpStatus);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FileEncryptionStatusW (LPCWSTR lpFileName, LPDWORD lpStatus);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) OpenEncryptedFileRawA (LPCSTR lpFileName, ULONG ulFlags, PVOID *pvContext);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) OpenEncryptedFileRawW (LPCWSTR lpFileName, ULONG ulFlags, PVOID *pvContext);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) ReadEncryptedFileRaw (PFE_EXPORT_FUNC pfExportCallback, PVOID pvCallbackContext, PVOID pvContext);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) WriteEncryptedFileRaw (PFE_IMPORT_FUNC pfImportCallback, PVOID pvCallbackContext, PVOID pvContext);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) CloseEncryptedFileRaw (PVOID pvContext);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) lstrcmpA (LPCSTR lpString1, LPCSTR lpString2);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) lstrcmpW (LPCWSTR lpString1, LPCWSTR lpString2);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) lstrcmpiA (LPCSTR lpString1, LPCSTR lpString2);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) lstrcmpiW (LPCWSTR lpString1, LPCWSTR lpString2);
  __attribute__((dllimport)) LPSTR __attribute__((__stdcall__)) lstrcpynA (LPSTR lpString1, LPCSTR lpString2, int iMaxLength);
  __attribute__((dllimport)) LPWSTR __attribute__((__stdcall__)) lstrcpynW (LPWSTR lpString1, LPCWSTR lpString2, int iMaxLength);
  __attribute__((dllimport)) LPSTR __attribute__((__stdcall__)) lstrcpyA (LPSTR lpString1, LPCSTR lpString2);
  __attribute__((dllimport)) LPWSTR __attribute__((__stdcall__)) lstrcpyW (LPWSTR lpString1, LPCWSTR lpString2);
  __attribute__((dllimport)) LPSTR __attribute__((__stdcall__)) lstrcatA (LPSTR lpString1, LPCSTR lpString2);
  __attribute__((dllimport)) LPWSTR __attribute__((__stdcall__)) lstrcatW (LPWSTR lpString1, LPCWSTR lpString2);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) lstrlenA (LPCSTR lpString);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) lstrlenW (LPCWSTR lpString);
  __attribute__((dllimport)) HFILE __attribute__((__stdcall__)) OpenFile (LPCSTR lpFileName, LPOFSTRUCT lpReOpenBuff, UINT uStyle);
  __attribute__((dllimport)) HFILE __attribute__((__stdcall__)) _lopen (LPCSTR lpPathName, int iReadWrite);
  __attribute__((dllimport)) HFILE __attribute__((__stdcall__)) _lcreat (LPCSTR lpPathName, int iAttribute);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) _lread (HFILE hFile, LPVOID lpBuffer, UINT uBytes);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) _lwrite (HFILE hFile, LPCCH lpBuffer, UINT uBytes);
  __attribute__((dllimport)) long __attribute__((__stdcall__)) _hread (HFILE hFile, LPVOID lpBuffer, long lBytes);
  __attribute__((dllimport)) long __attribute__((__stdcall__)) _hwrite (HFILE hFile, LPCCH lpBuffer, long lBytes);
  __attribute__((dllimport)) HFILE __attribute__((__stdcall__)) _lclose (HFILE hFile);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) _llseek (HFILE hFile, LONG lOffset, int iOrigin);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsTextUnicode (const void *lpv, int iSize, LPINT lpiResult);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) SignalObjectAndWait (HANDLE hObjectToSignal, HANDLE hObjectToWaitOn, DWORD dwMilliseconds, WINBOOL bAlertable);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) BackupRead (HANDLE hFile, LPBYTE lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, WINBOOL bAbort, WINBOOL bProcessSecurity, LPVOID *lpContext);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) BackupSeek (HANDLE hFile, DWORD dwLowBytesToSeek, DWORD dwHighBytesToSeek, LPDWORD lpdwLowByteSeeked, LPDWORD lpdwHighByteSeeked, LPVOID *lpContext);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) BackupWrite (HANDLE hFile, LPBYTE lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, WINBOOL bAbort, WINBOOL bProcessSecurity, LPVOID *lpContext);
  typedef struct _WIN32_STREAM_ID {
    DWORD dwStreamId;
    DWORD dwStreamAttributes;
    LARGE_INTEGER Size;
    DWORD dwStreamNameSize;
    WCHAR cStreamName[1];
  } WIN32_STREAM_ID,*LPWIN32_STREAM_ID;
  typedef struct _STARTUPINFOEXA {
    STARTUPINFOA StartupInfo;
    LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList;
  } STARTUPINFOEXA,*LPSTARTUPINFOEXA;
  typedef struct _STARTUPINFOEXW {
    STARTUPINFOW StartupInfo;
    LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList;
  } STARTUPINFOEXW,*LPSTARTUPINFOEXW;
  typedef STARTUPINFOEXA STARTUPINFOEX;
  typedef LPSTARTUPINFOEXA LPSTARTUPINFOEX;
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateSemaphoreW (LPSECURITY_ATTRIBUTES lpSemaphoreAttributes, LONG lInitialCount, LONG lMaximumCount, LPCWSTR lpName);
  __attribute__((dllimport)) HMODULE __attribute__((__stdcall__)) LoadLibraryW (LPCWSTR lpLibFileName);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) OpenMutexA (DWORD dwDesiredAccess, WINBOOL bInheritHandle, LPCSTR lpName);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateSemaphoreA (LPSECURITY_ATTRIBUTES lpSemaphoreAttributes, LONG lInitialCount, LONG lMaximumCount, LPCSTR lpName);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) OpenSemaphoreA (DWORD dwDesiredAccess, WINBOOL bInheritHandle, LPCSTR lpName);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateWaitableTimerA (LPSECURITY_ATTRIBUTES lpTimerAttributes, WINBOOL bManualReset, LPCSTR lpTimerName);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateWaitableTimerW (LPSECURITY_ATTRIBUTES lpTimerAttributes, WINBOOL bManualReset, LPCWSTR lpTimerName);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) OpenWaitableTimerA (DWORD dwDesiredAccess, WINBOOL bInheritHandle, LPCSTR lpTimerName);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateFileMappingA (HANDLE hFile, LPSECURITY_ATTRIBUTES lpFileMappingAttributes, DWORD flProtect, DWORD dwMaximumSizeHigh, DWORD dwMaximumSizeLow, LPCSTR lpName);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateSemaphoreExA (LPSECURITY_ATTRIBUTES lpSemaphoreAttributes, LONG lInitialCount, LONG lMaximumCount, LPCSTR lpName, DWORD dwFlags, DWORD dwDesiredAccess);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateWaitableTimerExA (LPSECURITY_ATTRIBUTES lpTimerAttributes, LPCSTR lpTimerName, DWORD dwFlags, DWORD dwDesiredAccess);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateFileMappingNumaA (HANDLE hFile, LPSECURITY_ATTRIBUTES lpFileMappingAttributes, DWORD flProtect, DWORD dwMaximumSizeHigh, DWORD dwMaximumSizeLow, LPCSTR lpName, DWORD nndPreferred);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) OpenFileMappingA (DWORD dwDesiredAccess, WINBOOL bInheritHandle, LPCSTR lpName);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetLogicalDriveStringsA (DWORD nBufferLength, LPSTR lpBuffer);
  __attribute__((dllimport)) HMODULE __attribute__((__stdcall__)) LoadLibraryA (LPCSTR lpLibFileName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) QueryFullProcessImageNameA (HANDLE hProcess, DWORD dwFlags, LPSTR lpExeName, PDWORD lpdwSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) QueryFullProcessImageNameW (HANDLE hProcess, DWORD dwFlags, LPWSTR lpExeName, PDWORD lpdwSize);
  typedef enum _PROC_THREAD_ATTRIBUTE_NUM {
    ProcThreadAttributeParentProcess = 0,
    ProcThreadAttributeHandleList = 2
    ,ProcThreadAttributeGroupAffinity = 3,
    ProcThreadAttributePreferredNode = 4,
    ProcThreadAttributeIdealProcessor = 5,
    ProcThreadAttributeUmsThread = 6,
    ProcThreadAttributeMitigationPolicy = 7
  } PROC_THREAD_ATTRIBUTE_NUM;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetProcessShutdownParameters (LPDWORD lpdwLevel, LPDWORD lpdwFlags);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) FatalAppExitA (UINT uAction, LPCSTR lpMessageText);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) FatalAppExitW (UINT uAction, LPCWSTR lpMessageText);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) GetStartupInfoA (LPSTARTUPINFOA lpStartupInfo);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetFirmwareEnvironmentVariableA (LPCSTR lpName, LPCSTR lpGuid, PVOID pBuffer, DWORD nSize);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetFirmwareEnvironmentVariableW (LPCWSTR lpName, LPCWSTR lpGuid, PVOID pBuffer, DWORD nSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetFirmwareEnvironmentVariableA (LPCSTR lpName, LPCSTR lpGuid, PVOID pValue, DWORD nSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetFirmwareEnvironmentVariableW (LPCWSTR lpName, LPCWSTR lpGuid, PVOID pValue, DWORD nSize);
  __attribute__((dllimport)) HRSRC __attribute__((__stdcall__)) FindResourceA (HMODULE hModule, LPCSTR lpName, LPCSTR lpType);
  __attribute__((dllimport)) HRSRC __attribute__((__stdcall__)) FindResourceW (HMODULE hModule, LPCWSTR lpName, LPCWSTR lpType);
  __attribute__((dllimport)) HRSRC __attribute__((__stdcall__)) FindResourceExA (HMODULE hModule, LPCSTR lpType, LPCSTR lpName, WORD wLanguage);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumResourceTypesA (HMODULE hModule, ENUMRESTYPEPROCA lpEnumFunc, LONG_PTR lParam);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumResourceTypesW (HMODULE hModule, ENUMRESTYPEPROCW lpEnumFunc, LONG_PTR lParam);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumResourceNamesA (HMODULE hModule, LPCSTR lpType, ENUMRESNAMEPROCA lpEnumFunc, LONG_PTR lParam);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumResourceNamesW (HMODULE hModule, LPCWSTR lpType, ENUMRESNAMEPROCW lpEnumFunc, LONG_PTR lParam);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumResourceLanguagesA (HMODULE hModule, LPCSTR lpType, LPCSTR lpName, ENUMRESLANGPROCA lpEnumFunc, LONG_PTR lParam);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumResourceLanguagesW (HMODULE hModule, LPCWSTR lpType, LPCWSTR lpName, ENUMRESLANGPROCW lpEnumFunc, LONG_PTR lParam);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) BeginUpdateResourceA (LPCSTR pFileName, WINBOOL bDeleteExistingResources);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) BeginUpdateResourceW (LPCWSTR pFileName, WINBOOL bDeleteExistingResources);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) UpdateResourceA (HANDLE hUpdate, LPCSTR lpType, LPCSTR lpName, WORD wLanguage, LPVOID lpData, DWORD cb);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) UpdateResourceW (HANDLE hUpdate, LPCWSTR lpType, LPCWSTR lpName, WORD wLanguage, LPVOID lpData, DWORD cb);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EndUpdateResourceA (HANDLE hUpdate, WINBOOL fDiscard);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EndUpdateResourceW (HANDLE hUpdate, WINBOOL fDiscard);
  __attribute__((dllimport)) ATOM __attribute__((__stdcall__)) GlobalAddAtomA (LPCSTR lpString);
  __attribute__((dllimport)) ATOM __attribute__((__stdcall__)) GlobalAddAtomW (LPCWSTR lpString);
  __attribute__((dllimport)) ATOM __attribute__((__stdcall__)) GlobalAddAtomExA (LPCSTR lpString, DWORD Flags);
  __attribute__((dllimport)) ATOM __attribute__((__stdcall__)) GlobalAddAtomExW (LPCWSTR lpString, DWORD Flags);
  __attribute__((dllimport)) ATOM __attribute__((__stdcall__)) GlobalFindAtomA (LPCSTR lpString);
  __attribute__((dllimport)) ATOM __attribute__((__stdcall__)) GlobalFindAtomW (LPCWSTR lpString);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GlobalGetAtomNameA (ATOM nAtom, LPSTR lpBuffer, int nSize);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GlobalGetAtomNameW (ATOM nAtom, LPWSTR lpBuffer, int nSize);
  __attribute__((dllimport)) ATOM __attribute__((__stdcall__)) AddAtomA (LPCSTR lpString);
  __attribute__((dllimport)) ATOM __attribute__((__stdcall__)) AddAtomW (LPCWSTR lpString);
  __attribute__((dllimport)) ATOM __attribute__((__stdcall__)) FindAtomA (LPCSTR lpString);
  __attribute__((dllimport)) ATOM __attribute__((__stdcall__)) FindAtomW (LPCWSTR lpString);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetAtomNameA (ATOM nAtom, LPSTR lpBuffer, int nSize);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetAtomNameW (ATOM nAtom, LPWSTR lpBuffer, int nSize);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetProfileIntA (LPCSTR lpAppName, LPCSTR lpKeyName, INT nDefault);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetProfileIntW (LPCWSTR lpAppName, LPCWSTR lpKeyName, INT nDefault);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetProfileStringA (LPCSTR lpAppName, LPCSTR lpKeyName, LPCSTR lpDefault, LPSTR lpReturnedString, DWORD nSize);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetProfileStringW (LPCWSTR lpAppName, LPCWSTR lpKeyName, LPCWSTR lpDefault, LPWSTR lpReturnedString, DWORD nSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) WriteProfileStringA (LPCSTR lpAppName, LPCSTR lpKeyName, LPCSTR lpString);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) WriteProfileStringW (LPCWSTR lpAppName, LPCWSTR lpKeyName, LPCWSTR lpString);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetProfileSectionA (LPCSTR lpAppName, LPSTR lpReturnedString, DWORD nSize);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetProfileSectionW (LPCWSTR lpAppName, LPWSTR lpReturnedString, DWORD nSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) WriteProfileSectionA (LPCSTR lpAppName, LPCSTR lpString);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) WriteProfileSectionW (LPCWSTR lpAppName, LPCWSTR lpString);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetPrivateProfileIntA (LPCSTR lpAppName, LPCSTR lpKeyName, INT nDefault, LPCSTR lpFileName);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetPrivateProfileIntW (LPCWSTR lpAppName, LPCWSTR lpKeyName, INT nDefault, LPCWSTR lpFileName);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetPrivateProfileStringA (LPCSTR lpAppName, LPCSTR lpKeyName, LPCSTR lpDefault, LPSTR lpReturnedString, DWORD nSize, LPCSTR lpFileName);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetPrivateProfileStringW (LPCWSTR lpAppName, LPCWSTR lpKeyName, LPCWSTR lpDefault, LPWSTR lpReturnedString, DWORD nSize, LPCWSTR lpFileName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) WritePrivateProfileStringA (LPCSTR lpAppName, LPCSTR lpKeyName, LPCSTR lpString, LPCSTR lpFileName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) WritePrivateProfileStringW (LPCWSTR lpAppName, LPCWSTR lpKeyName, LPCWSTR lpString, LPCWSTR lpFileName);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetPrivateProfileSectionA (LPCSTR lpAppName, LPSTR lpReturnedString, DWORD nSize, LPCSTR lpFileName);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetPrivateProfileSectionW (LPCWSTR lpAppName, LPWSTR lpReturnedString, DWORD nSize, LPCWSTR lpFileName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) WritePrivateProfileSectionA (LPCSTR lpAppName, LPCSTR lpString, LPCSTR lpFileName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) WritePrivateProfileSectionW (LPCWSTR lpAppName, LPCWSTR lpString, LPCWSTR lpFileName);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetPrivateProfileSectionNamesA (LPSTR lpszReturnBuffer, DWORD nSize, LPCSTR lpFileName);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetPrivateProfileSectionNamesW (LPWSTR lpszReturnBuffer, DWORD nSize, LPCWSTR lpFileName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetPrivateProfileStructA (LPCSTR lpszSection, LPCSTR lpszKey, LPVOID lpStruct, UINT uSizeStruct, LPCSTR szFile);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetPrivateProfileStructW (LPCWSTR lpszSection, LPCWSTR lpszKey, LPVOID lpStruct, UINT uSizeStruct, LPCWSTR szFile);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) WritePrivateProfileStructA (LPCSTR lpszSection, LPCSTR lpszKey, LPVOID lpStruct, UINT uSizeStruct, LPCSTR szFile);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) WritePrivateProfileStructW (LPCWSTR lpszSection, LPCWSTR lpszKey, LPVOID lpStruct, UINT uSizeStruct, LPCWSTR szFile);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetTempPathA (DWORD nBufferLength, LPSTR lpBuffer);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetTempFileNameA (LPCSTR lpPathName, LPCSTR lpPrefixString, UINT uUnique, LPSTR lpTempFileName);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetSystemWow64DirectoryA (LPSTR lpBuffer, UINT uSize);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetSystemWow64DirectoryW (LPWSTR lpBuffer, UINT uSize);
  __attribute__((dllimport)) BOOLEAN __attribute__((__stdcall__)) Wow64EnableWow64FsRedirection (BOOLEAN Wow64FsEnableRedirection);
  typedef UINT (__attribute__((__stdcall__)) *PGET_SYSTEM_WOW64_DIRECTORY_A) (LPSTR lpBuffer, UINT uSize);
  typedef UINT (__attribute__((__stdcall__)) *PGET_SYSTEM_WOW64_DIRECTORY_W) (LPWSTR lpBuffer, UINT uSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetDllDirectoryA (LPCSTR lpPathName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetDllDirectoryW (LPCWSTR lpPathName);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetDllDirectoryA (DWORD nBufferLength, LPSTR lpBuffer);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetDllDirectoryW (DWORD nBufferLength, LPWSTR lpBuffer);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetSearchPathMode (DWORD Flags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CreateDirectoryExA (LPCSTR lpTemplateDirectory, LPCSTR lpNewDirectory, LPSECURITY_ATTRIBUTES lpSecurityAttributes);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CreateDirectoryExW (LPCWSTR lpTemplateDirectory, LPCWSTR lpNewDirectory, LPSECURITY_ATTRIBUTES lpSecurityAttributes);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CreateDirectoryTransactedA (LPCSTR lpTemplateDirectory, LPCSTR lpNewDirectory, LPSECURITY_ATTRIBUTES lpSecurityAttributes, HANDLE hTransaction);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CreateDirectoryTransactedW (LPCWSTR lpTemplateDirectory, LPCWSTR lpNewDirectory, LPSECURITY_ATTRIBUTES lpSecurityAttributes, HANDLE hTransaction);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) RemoveDirectoryTransactedA (LPCSTR lpPathName, HANDLE hTransaction);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) RemoveDirectoryTransactedW (LPCWSTR lpPathName, HANDLE hTransaction);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetFullPathNameTransactedA (LPCSTR lpFileName, DWORD nBufferLength, LPSTR lpBuffer, LPSTR *lpFilePart, HANDLE hTransaction);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetFullPathNameTransactedW (LPCWSTR lpFileName, DWORD nBufferLength, LPWSTR lpBuffer, LPWSTR *lpFilePart, HANDLE hTransaction);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DefineDosDeviceA (DWORD dwFlags, LPCSTR lpDeviceName, LPCSTR lpTargetPath);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) QueryDosDeviceA (LPCSTR lpDeviceName, LPSTR lpTargetPath, DWORD ucchMax);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateFileTransactedA (LPCSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile, HANDLE hTransaction, PUSHORT pusMiniVersion, PVOID lpExtendedParameter);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateFileTransactedW (LPCWSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile, HANDLE hTransaction, PUSHORT pusMiniVersion, PVOID lpExtendedParameter);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) ReOpenFile (HANDLE hOriginalFile, DWORD dwDesiredAccess, DWORD dwShareMode, DWORD dwFlagsAndAttributes);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetFileAttributesTransactedA (LPCSTR lpFileName, DWORD dwFileAttributes, HANDLE hTransaction);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetFileAttributesTransactedW (LPCWSTR lpFileName, DWORD dwFileAttributes, HANDLE hTransaction);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetFileAttributesTransactedA (LPCSTR lpFileName, GET_FILEEX_INFO_LEVELS fInfoLevelId, LPVOID lpFileInformation, HANDLE hTransaction);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetFileAttributesTransactedW (LPCWSTR lpFileName, GET_FILEEX_INFO_LEVELS fInfoLevelId, LPVOID lpFileInformation, HANDLE hTransaction);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetCompressedFileSizeA (LPCSTR lpFileName, LPDWORD lpFileSizeHigh);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetCompressedFileSizeW (LPCWSTR lpFileName, LPDWORD lpFileSizeHigh);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetCompressedFileSizeTransactedA (LPCSTR lpFileName, LPDWORD lpFileSizeHigh, HANDLE hTransaction);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetCompressedFileSizeTransactedW (LPCWSTR lpFileName, LPDWORD lpFileSizeHigh, HANDLE hTransaction);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DeleteFileTransactedA (LPCSTR lpFileName, HANDLE hTransaction);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DeleteFileTransactedW (LPCWSTR lpFileName, HANDLE hTransaction);
  typedef DWORD (__attribute__((__stdcall__)) *LPPROGRESS_ROUTINE) (LARGE_INTEGER TotalFileSize, LARGE_INTEGER TotalBytesTransferred, LARGE_INTEGER StreamSize, LARGE_INTEGER StreamBytesTransferred, DWORD dwStreamNumber, DWORD dwCallbackReason, HANDLE hSourceFile, HANDLE hDestinationFile, LPVOID lpData);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CheckNameLegalDOS8Dot3A (LPCSTR lpName, LPSTR lpOemName, DWORD OemNameSize, PBOOL pbNameContainsSpaces, PBOOL pbNameLegal);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CheckNameLegalDOS8Dot3W (LPCWSTR lpName, LPSTR lpOemName, DWORD OemNameSize, PBOOL pbNameContainsSpaces, PBOOL pbNameLegal);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CopyFileA (LPCSTR lpExistingFileName, LPCSTR lpNewFileName, WINBOOL bFailIfExists);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CopyFileW (LPCWSTR lpExistingFileName, LPCWSTR lpNewFileName, WINBOOL bFailIfExists);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CopyFileExA (LPCSTR lpExistingFileName, LPCSTR lpNewFileName, LPPROGRESS_ROUTINE lpProgressRoutine, LPVOID lpData, LPBOOL pbCancel, DWORD dwCopyFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CopyFileExW (LPCWSTR lpExistingFileName, LPCWSTR lpNewFileName, LPPROGRESS_ROUTINE lpProgressRoutine, LPVOID lpData, LPBOOL pbCancel, DWORD dwCopyFlags);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) FindFirstFileTransactedA (LPCSTR lpFileName, FINDEX_INFO_LEVELS fInfoLevelId, LPVOID lpFindFileData, FINDEX_SEARCH_OPS fSearchOp, LPVOID lpSearchFilter, DWORD dwAdditionalFlags, HANDLE hTransaction);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) FindFirstFileTransactedW (LPCWSTR lpFileName, FINDEX_INFO_LEVELS fInfoLevelId, LPVOID lpFindFileData, FINDEX_SEARCH_OPS fSearchOp, LPVOID lpSearchFilter, DWORD dwAdditionalFlags, HANDLE hTransaction);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CopyFileTransactedA (LPCSTR lpExistingFileName, LPCSTR lpNewFileName, LPPROGRESS_ROUTINE lpProgressRoutine, LPVOID lpData, LPBOOL pbCancel, DWORD dwCopyFlags, HANDLE hTransaction);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CopyFileTransactedW (LPCWSTR lpExistingFileName, LPCWSTR lpNewFileName, LPPROGRESS_ROUTINE lpProgressRoutine, LPVOID lpData, LPBOOL pbCancel, DWORD dwCopyFlags, HANDLE hTransaction);
  typedef enum _COPYFILE2_MESSAGE_TYPE {
    COPYFILE2_CALLBACK_NONE = 0,
    COPYFILE2_CALLBACK_CHUNK_STARTED,
    COPYFILE2_CALLBACK_CHUNK_FINISHED,
    COPYFILE2_CALLBACK_STREAM_STARTED,
    COPYFILE2_CALLBACK_STREAM_FINISHED,
    COPYFILE2_CALLBACK_POLL_CONTINUE,
    COPYFILE2_CALLBACK_ERROR,
    COPYFILE2_CALLBACK_MAX,
  } COPYFILE2_MESSAGE_TYPE;
  typedef enum _COPYFILE2_MESSAGE_ACTION {
    COPYFILE2_PROGRESS_CONTINUE = 0,
    COPYFILE2_PROGRESS_CANCEL,
    COPYFILE2_PROGRESS_STOP,
    COPYFILE2_PROGRESS_QUIET,
    COPYFILE2_PROGRESS_PAUSE,
  } COPYFILE2_MESSAGE_ACTION;
  typedef enum _COPYFILE2_COPY_PHASE {
    COPYFILE2_PHASE_NONE = 0,
    COPYFILE2_PHASE_PREPARE_SOURCE,
    COPYFILE2_PHASE_PREPARE_DEST,
    COPYFILE2_PHASE_READ_SOURCE,
    COPYFILE2_PHASE_WRITE_DESTINATION,
    COPYFILE2_PHASE_SERVER_COPY,
    COPYFILE2_PHASE_NAMEGRAFT_COPY,
    COPYFILE2_PHASE_MAX,
  } COPYFILE2_COPY_PHASE;
  typedef struct COPYFILE2_MESSAGE {
    COPYFILE2_MESSAGE_TYPE Type;
    DWORD dwPadding;
    union {
      struct {
 DWORD dwStreamNumber;
 DWORD dwReserved;
 HANDLE hSourceFile;
 HANDLE hDestinationFile;
 ULARGE_INTEGER uliChunkNumber;
 ULARGE_INTEGER uliChunkSize;
 ULARGE_INTEGER uliStreamSize;
 ULARGE_INTEGER uliTotalFileSize;
      } ChunkStarted;
      struct {
 DWORD dwStreamNumber;
 DWORD dwFlags;
 HANDLE hSourceFile;
 HANDLE hDestinationFile;
 ULARGE_INTEGER uliChunkNumber;
 ULARGE_INTEGER uliChunkSize;
 ULARGE_INTEGER uliStreamSize;
 ULARGE_INTEGER uliStreamBytesTransferred;
 ULARGE_INTEGER uliTotalFileSize;
 ULARGE_INTEGER uliTotalBytesTransferred;
      } ChunkFinished;
      struct {
 DWORD dwStreamNumber;
 DWORD dwReserved;
 HANDLE hSourceFile;
 HANDLE hDestinationFile;
 ULARGE_INTEGER uliStreamSize;
 ULARGE_INTEGER uliTotalFileSize;
      } StreamStarted;
      struct {
 DWORD dwStreamNumber;
 DWORD dwReserved;
 HANDLE hSourceFile;
 HANDLE hDestinationFile;
 ULARGE_INTEGER uliStreamSize;
 ULARGE_INTEGER uliStreamBytesTransferred;
 ULARGE_INTEGER uliTotalFileSize;
 ULARGE_INTEGER uliTotalBytesTransferred;
      } StreamFinished;
      struct {
 DWORD dwReserved;
      } PollContinue;
      struct {
 COPYFILE2_COPY_PHASE CopyPhase;
 DWORD dwStreamNumber;
 HRESULT hrFailure;
 DWORD dwReserved;
 ULARGE_INTEGER uliChunkNumber;
 ULARGE_INTEGER uliStreamSize;
 ULARGE_INTEGER uliStreamBytesTransferred;
 ULARGE_INTEGER uliTotalFileSize;
 ULARGE_INTEGER uliTotalBytesTransferred;
      } Error;
    } Info;
  } COPYFILE2_MESSAGE;
  typedef COPYFILE2_MESSAGE_ACTION (__attribute__((__stdcall__)) *PCOPYFILE2_PROGRESS_ROUTINE) (const COPYFILE2_MESSAGE *pMessage, PVOID pvCallbackContext);
  typedef struct COPYFILE2_EXTENDED_PARAMETERS {
    DWORD dwSize;
    DWORD dwCopyFlags;
    WINBOOL *pfCancel;
    PCOPYFILE2_PROGRESS_ROUTINE pProgressRoutine;
    PVOID pvCallbackContext;
  } COPYFILE2_EXTENDED_PARAMETERS;
  __attribute__((dllimport)) HRESULT __attribute__((__stdcall__)) CopyFile2 (PCWSTR pwszExistingFileName, PCWSTR pwszNewFileName, COPYFILE2_EXTENDED_PARAMETERS *pExtendedParameters);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) MoveFileA (LPCSTR lpExistingFileName, LPCSTR lpNewFileName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) MoveFileW (LPCWSTR lpExistingFileName, LPCWSTR lpNewFileName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) MoveFileExA (LPCSTR lpExistingFileName, LPCSTR lpNewFileName, DWORD dwFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) MoveFileExW (LPCWSTR lpExistingFileName, LPCWSTR lpNewFileName, DWORD dwFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) MoveFileWithProgressA (LPCSTR lpExistingFileName, LPCSTR lpNewFileName, LPPROGRESS_ROUTINE lpProgressRoutine, LPVOID lpData, DWORD dwFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) MoveFileWithProgressW (LPCWSTR lpExistingFileName, LPCWSTR lpNewFileName, LPPROGRESS_ROUTINE lpProgressRoutine, LPVOID lpData, DWORD dwFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) MoveFileTransactedA (LPCSTR lpExistingFileName, LPCSTR lpNewFileName, LPPROGRESS_ROUTINE lpProgressRoutine, LPVOID lpData, DWORD dwFlags, HANDLE hTransaction);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) MoveFileTransactedW (LPCWSTR lpExistingFileName, LPCWSTR lpNewFileName, LPPROGRESS_ROUTINE lpProgressRoutine, LPVOID lpData, DWORD dwFlags, HANDLE hTransaction);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ReplaceFileA (LPCSTR lpReplacedFileName, LPCSTR lpReplacementFileName, LPCSTR lpBackupFileName, DWORD dwReplaceFlags, LPVOID lpExclude, LPVOID lpReserved);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ReplaceFileW (LPCWSTR lpReplacedFileName, LPCWSTR lpReplacementFileName, LPCWSTR lpBackupFileName, DWORD dwReplaceFlags, LPVOID lpExclude, LPVOID lpReserved);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CreateHardLinkA (LPCSTR lpFileName, LPCSTR lpExistingFileName, LPSECURITY_ATTRIBUTES lpSecurityAttributes);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CreateHardLinkW (LPCWSTR lpFileName, LPCWSTR lpExistingFileName, LPSECURITY_ATTRIBUTES lpSecurityAttributes);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CreateHardLinkTransactedA (LPCSTR lpFileName, LPCSTR lpExistingFileName, LPSECURITY_ATTRIBUTES lpSecurityAttributes, HANDLE hTransaction);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CreateHardLinkTransactedW (LPCWSTR lpFileName, LPCWSTR lpExistingFileName, LPSECURITY_ATTRIBUTES lpSecurityAttributes, HANDLE hTransaction);
  typedef enum _STREAM_INFO_LEVELS {
    FindStreamInfoStandard,
    FindStreamInfoMaxInfoLevel
  } STREAM_INFO_LEVELS;
  typedef struct _WIN32_FIND_STREAM_DATA {
    LARGE_INTEGER StreamSize;
    WCHAR cStreamName[260 + 36];
  } WIN32_FIND_STREAM_DATA,*PWIN32_FIND_STREAM_DATA;
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) FindFirstStreamW (LPCWSTR lpFileName, STREAM_INFO_LEVELS InfoLevel, LPVOID lpFindStreamData, DWORD dwFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FindNextStreamW (HANDLE hFindStream, LPVOID lpFindStreamData);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) FindFirstStreamTransactedW (LPCWSTR lpFileName, STREAM_INFO_LEVELS InfoLevel, LPVOID lpFindStreamData, DWORD dwFlags, HANDLE hTransaction);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) FindFirstFileNameW (LPCWSTR lpFileName, DWORD dwFlags, LPDWORD StringLength, PWSTR LinkName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FindNextFileNameW (HANDLE hFindStream, LPDWORD StringLength, PWSTR LinkName);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) FindFirstFileNameTransactedW (LPCWSTR lpFileName, DWORD dwFlags, LPDWORD StringLength, PWSTR LinkName, HANDLE hTransaction);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetNamedPipeClientComputerNameA (HANDLE Pipe, LPSTR ClientComputerName, ULONG ClientComputerNameLength);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetNamedPipeClientProcessId (HANDLE Pipe, PULONG ClientProcessId);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetNamedPipeClientSessionId (HANDLE Pipe, PULONG ClientSessionId);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetNamedPipeServerProcessId (HANDLE Pipe, PULONG ServerProcessId);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetNamedPipeServerSessionId (HANDLE Pipe, PULONG ServerSessionId);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetFileBandwidthReservation (HANDLE hFile, DWORD nPeriodMilliseconds, DWORD nBytesPerPeriod, WINBOOL bDiscardable, LPDWORD lpTransferSize, LPDWORD lpNumOutstandingRequests);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetFileBandwidthReservation (HANDLE hFile, LPDWORD lpPeriodMilliseconds, LPDWORD lpBytesPerPeriod, LPBOOL pDiscardable, LPDWORD lpTransferSize, LPDWORD lpNumOutstandingRequests);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateNamedPipeA (LPCSTR lpName, DWORD dwOpenMode, DWORD dwPipeMode, DWORD nMaxInstances, DWORD nOutBufferSize, DWORD nInBufferSize, DWORD nDefaultTimeOut, LPSECURITY_ATTRIBUTES lpSecurityAttributes);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetNamedPipeHandleStateA (HANDLE hNamedPipe, LPDWORD lpState, LPDWORD lpCurInstances, LPDWORD lpMaxCollectionCount, LPDWORD lpCollectDataTimeout, LPSTR lpUserName, DWORD nMaxUserNameSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetNamedPipeHandleStateW (HANDLE hNamedPipe, LPDWORD lpState, LPDWORD lpCurInstances, LPDWORD lpMaxCollectionCount, LPDWORD lpCollectDataTimeout, LPWSTR lpUserName, DWORD nMaxUserNameSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CallNamedPipeA (LPCSTR lpNamedPipeName, LPVOID lpInBuffer, DWORD nInBufferSize, LPVOID lpOutBuffer, DWORD nOutBufferSize, LPDWORD lpBytesRead, DWORD nTimeOut);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CallNamedPipeW (LPCWSTR lpNamedPipeName, LPVOID lpInBuffer, DWORD nInBufferSize, LPVOID lpOutBuffer, DWORD nOutBufferSize, LPDWORD lpBytesRead, DWORD nTimeOut);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) WaitNamedPipeA (LPCSTR lpNamedPipeName, DWORD nTimeOut);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetVolumeLabelA (LPCSTR lpRootPathName, LPCSTR lpVolumeName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetVolumeLabelW (LPCWSTR lpRootPathName, LPCWSTR lpVolumeName);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) SetFileApisToOEM (void);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) SetFileApisToANSI (void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AreFileApisANSI (void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetVolumeInformationA (LPCSTR lpRootPathName, LPSTR lpVolumeNameBuffer, DWORD nVolumeNameSize, LPDWORD lpVolumeSerialNumber, LPDWORD lpMaximumComponentLength, LPDWORD lpFileSystemFlags, LPSTR lpFileSystemNameBuffer, DWORD nFileSystemNameSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ClearEventLogA (HANDLE hEventLog, LPCSTR lpBackupFileName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ClearEventLogW (HANDLE hEventLog, LPCWSTR lpBackupFileName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) BackupEventLogA (HANDLE hEventLog, LPCSTR lpBackupFileName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) BackupEventLogW (HANDLE hEventLog, LPCWSTR lpBackupFileName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CloseEventLog (HANDLE hEventLog);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DeregisterEventSource (HANDLE hEventLog);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) NotifyChangeEventLog (HANDLE hEventLog, HANDLE hEvent);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetNumberOfEventLogRecords (HANDLE hEventLog, PDWORD NumberOfRecords);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetOldestEventLogRecord (HANDLE hEventLog, PDWORD OldestRecord);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) OpenEventLogA (LPCSTR lpUNCServerName, LPCSTR lpSourceName);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) OpenEventLogW (LPCWSTR lpUNCServerName, LPCWSTR lpSourceName);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) RegisterEventSourceA (LPCSTR lpUNCServerName, LPCSTR lpSourceName);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) RegisterEventSourceW (LPCWSTR lpUNCServerName, LPCWSTR lpSourceName);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) OpenBackupEventLogA (LPCSTR lpUNCServerName, LPCSTR lpFileName);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) OpenBackupEventLogW (LPCWSTR lpUNCServerName, LPCWSTR lpFileName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ReadEventLogA (HANDLE hEventLog, DWORD dwReadFlags, DWORD dwRecordOffset, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, DWORD *pnBytesRead, DWORD *pnMinNumberOfBytesNeeded);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ReadEventLogW (HANDLE hEventLog, DWORD dwReadFlags, DWORD dwRecordOffset, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, DWORD *pnBytesRead, DWORD *pnMinNumberOfBytesNeeded);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ReportEventA (HANDLE hEventLog, WORD wType, WORD wCategory, DWORD dwEventID, PSID lpUserSid, WORD wNumStrings, DWORD dwDataSize, LPCSTR *lpStrings, LPVOID lpRawData);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ReportEventW (HANDLE hEventLog, WORD wType, WORD wCategory, DWORD dwEventID, PSID lpUserSid, WORD wNumStrings, DWORD dwDataSize, LPCWSTR *lpStrings, LPVOID lpRawData);
  typedef struct _EVENTLOG_FULL_INFORMATION {
    DWORD dwFull;
  } EVENTLOG_FULL_INFORMATION,*LPEVENTLOG_FULL_INFORMATION;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetEventLogInformation (HANDLE hEventLog, DWORD dwInfoLevel, LPVOID lpBuffer, DWORD cbBufSize, LPDWORD pcbBytesNeeded);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AccessCheckAndAuditAlarmA (LPCSTR SubsystemName, LPVOID HandleId, LPSTR ObjectTypeName, LPSTR ObjectName, PSECURITY_DESCRIPTOR SecurityDescriptor, DWORD DesiredAccess, PGENERIC_MAPPING GenericMapping, WINBOOL ObjectCreation, LPDWORD GrantedAccess, LPBOOL AccessStatus, LPBOOL pfGenerateOnClose);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AccessCheckByTypeAndAuditAlarmA (LPCSTR SubsystemName, LPVOID HandleId, LPCSTR ObjectTypeName, LPCSTR ObjectName, PSECURITY_DESCRIPTOR SecurityDescriptor, PSID PrincipalSelfSid, DWORD DesiredAccess, AUDIT_EVENT_TYPE AuditType, DWORD Flags, POBJECT_TYPE_LIST ObjectTypeList, DWORD ObjectTypeListLength, PGENERIC_MAPPING GenericMapping, WINBOOL ObjectCreation, LPDWORD GrantedAccess, LPBOOL AccessStatus, LPBOOL pfGenerateOnClose);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AccessCheckByTypeResultListAndAuditAlarmA (LPCSTR SubsystemName, LPVOID HandleId, LPCSTR ObjectTypeName, LPCSTR ObjectName, PSECURITY_DESCRIPTOR SecurityDescriptor, PSID PrincipalSelfSid, DWORD DesiredAccess, AUDIT_EVENT_TYPE AuditType, DWORD Flags, POBJECT_TYPE_LIST ObjectTypeList, DWORD ObjectTypeListLength, PGENERIC_MAPPING GenericMapping, WINBOOL ObjectCreation, LPDWORD GrantedAccess, LPDWORD AccessStatusList, LPBOOL pfGenerateOnClose);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AccessCheckByTypeResultListAndAuditAlarmByHandleA (LPCSTR SubsystemName, LPVOID HandleId, HANDLE ClientToken, LPCSTR ObjectTypeName, LPCSTR ObjectName, PSECURITY_DESCRIPTOR SecurityDescriptor, PSID PrincipalSelfSid, DWORD DesiredAccess, AUDIT_EVENT_TYPE AuditType, DWORD Flags, POBJECT_TYPE_LIST ObjectTypeList, DWORD ObjectTypeListLength, PGENERIC_MAPPING GenericMapping, WINBOOL ObjectCreation, LPDWORD GrantedAccess, LPDWORD AccessStatusList, LPBOOL pfGenerateOnClose);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ObjectOpenAuditAlarmA (LPCSTR SubsystemName, LPVOID HandleId, LPSTR ObjectTypeName, LPSTR ObjectName, PSECURITY_DESCRIPTOR pSecurityDescriptor, HANDLE ClientToken, DWORD DesiredAccess, DWORD GrantedAccess, PPRIVILEGE_SET Privileges, WINBOOL ObjectCreation, WINBOOL AccessGranted, LPBOOL GenerateOnClose);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ObjectPrivilegeAuditAlarmA (LPCSTR SubsystemName, LPVOID HandleId, HANDLE ClientToken, DWORD DesiredAccess, PPRIVILEGE_SET Privileges, WINBOOL AccessGranted);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ObjectCloseAuditAlarmA (LPCSTR SubsystemName, LPVOID HandleId, WINBOOL GenerateOnClose);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ObjectDeleteAuditAlarmA (LPCSTR SubsystemName, LPVOID HandleId, WINBOOL GenerateOnClose);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PrivilegedServiceAuditAlarmA (LPCSTR SubsystemName, LPCSTR ServiceName, HANDLE ClientToken, PPRIVILEGE_SET Privileges, WINBOOL AccessGranted);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetFileSecurityA (LPCSTR lpFileName, SECURITY_INFORMATION SecurityInformation, PSECURITY_DESCRIPTOR pSecurityDescriptor);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetFileSecurityA (LPCSTR lpFileName, SECURITY_INFORMATION RequestedInformation, PSECURITY_DESCRIPTOR pSecurityDescriptor, DWORD nLength, LPDWORD lpnLengthNeeded);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ReadDirectoryChangesW (HANDLE hDirectory, LPVOID lpBuffer, DWORD nBufferLength, WINBOOL bWatchSubtree, DWORD dwNotifyFilter, LPDWORD lpBytesReturned, LPOVERLAPPED lpOverlapped, LPOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsBadReadPtr (const void *lp, UINT_PTR ucb);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsBadWritePtr (LPVOID lp, UINT_PTR ucb);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsBadHugeReadPtr (const void *lp, UINT_PTR ucb);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsBadHugeWritePtr (LPVOID lp, UINT_PTR ucb);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsBadCodePtr (FARPROC lpfn);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsBadStringPtrA (LPCSTR lpsz, UINT_PTR ucchMax);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsBadStringPtrW (LPCWSTR lpsz, UINT_PTR ucchMax);
  __attribute__((dllimport)) LPVOID __attribute__((__stdcall__)) MapViewOfFileExNuma (HANDLE hFileMappingObject, DWORD dwDesiredAccess, DWORD dwFileOffsetHigh, DWORD dwFileOffsetLow, SIZE_T dwNumberOfBytesToMap, LPVOID lpBaseAddress, DWORD nndPreferred);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AddConditionalAce (PACL pAcl, DWORD dwAceRevision, DWORD AceFlags, UCHAR AceType, DWORD AccessMask, PSID pSid, PWCHAR ConditionStr, DWORD *ReturnLength);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) LookupAccountSidA (LPCSTR lpSystemName, PSID Sid, LPSTR Name, LPDWORD cchName, LPSTR ReferencedDomainName, LPDWORD cchReferencedDomainName, PSID_NAME_USE peUse);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) LookupAccountSidW (LPCWSTR lpSystemName, PSID Sid, LPWSTR Name, LPDWORD cchName, LPWSTR ReferencedDomainName, LPDWORD cchReferencedDomainName, PSID_NAME_USE peUse);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) LookupAccountNameA (LPCSTR lpSystemName, LPCSTR lpAccountName, PSID Sid, LPDWORD cbSid, LPSTR ReferencedDomainName, LPDWORD cchReferencedDomainName, PSID_NAME_USE peUse);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) LookupAccountNameW (LPCWSTR lpSystemName, LPCWSTR lpAccountName, PSID Sid, LPDWORD cbSid, LPWSTR ReferencedDomainName, LPDWORD cchReferencedDomainName, PSID_NAME_USE peUse);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) LookupAccountNameLocalA (LPCSTR lpAccountName, PSID Sid, LPDWORD cbSid, LPSTR ReferencedDomainName, LPDWORD cchReferencedDomainName, PSID_NAME_USE peUse);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) LookupAccountNameLocalW (LPCWSTR lpAccountName, PSID Sid, LPDWORD cbSid, LPWSTR ReferencedDomainName, LPDWORD cchReferencedDomainName, PSID_NAME_USE peUse);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) LookupAccountSidLocalA (PSID Sid, LPSTR Name, LPDWORD cchName, LPSTR ReferencedDomainName, LPDWORD cchReferencedDomainName, PSID_NAME_USE peUse);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) LookupAccountSidLocalW (PSID Sid, LPWSTR Name, LPDWORD cchName, LPWSTR ReferencedDomainName, LPDWORD cchReferencedDomainName, PSID_NAME_USE peUse);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) LookupPrivilegeValueA (LPCSTR lpSystemName, LPCSTR lpName, PLUID lpLuid);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) LookupPrivilegeValueW (LPCWSTR lpSystemName, LPCWSTR lpName, PLUID lpLuid);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) LookupPrivilegeNameA (LPCSTR lpSystemName, PLUID lpLuid, LPSTR lpName, LPDWORD cchName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) LookupPrivilegeNameW (LPCWSTR lpSystemName, PLUID lpLuid, LPWSTR lpName, LPDWORD cchName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) LookupPrivilegeDisplayNameA (LPCSTR lpSystemName, LPCSTR lpName, LPSTR lpDisplayName, LPDWORD cchDisplayName, LPDWORD lpLanguageId);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) LookupPrivilegeDisplayNameW (LPCWSTR lpSystemName, LPCWSTR lpName, LPWSTR lpDisplayName, LPDWORD cchDisplayName, LPDWORD lpLanguageId);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) BuildCommDCBA (LPCSTR lpDef, LPDCB lpDCB);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) BuildCommDCBW (LPCWSTR lpDef, LPDCB lpDCB);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) BuildCommDCBAndTimeoutsA (LPCSTR lpDef, LPDCB lpDCB, LPCOMMTIMEOUTS lpCommTimeouts);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) BuildCommDCBAndTimeoutsW (LPCWSTR lpDef, LPDCB lpDCB, LPCOMMTIMEOUTS lpCommTimeouts);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CommConfigDialogA (LPCSTR lpszName, HWND hWnd, LPCOMMCONFIG lpCC);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CommConfigDialogW (LPCWSTR lpszName, HWND hWnd, LPCOMMCONFIG lpCC);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetDefaultCommConfigA (LPCSTR lpszName, LPCOMMCONFIG lpCC, LPDWORD lpdwSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetDefaultCommConfigW (LPCWSTR lpszName, LPCOMMCONFIG lpCC, LPDWORD lpdwSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetDefaultCommConfigA (LPCSTR lpszName, LPCOMMCONFIG lpCC, DWORD dwSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetDefaultCommConfigW (LPCWSTR lpszName, LPCOMMCONFIG lpCC, DWORD dwSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetComputerNameA (LPSTR lpBuffer, LPDWORD nSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetComputerNameW (LPWSTR lpBuffer, LPDWORD nSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetComputerNameA (LPCSTR lpComputerName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetComputerNameW (LPCWSTR lpComputerName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetComputerNameExA (COMPUTER_NAME_FORMAT NameType, LPCTSTR lpBuffer);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DnsHostnameToComputerNameA (LPCSTR Hostname, LPSTR ComputerName, LPDWORD nSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DnsHostnameToComputerNameW (LPCWSTR Hostname, LPWSTR ComputerName, LPDWORD nSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetUserNameA (LPSTR lpBuffer, LPDWORD pcbBuffer);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetUserNameW (LPWSTR lpBuffer, LPDWORD pcbBuffer);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) LogonUserA (LPCSTR lpszUsername, LPCSTR lpszDomain, LPCSTR lpszPassword, DWORD dwLogonType, DWORD dwLogonProvider, PHANDLE phToken);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) LogonUserW (LPCWSTR lpszUsername, LPCWSTR lpszDomain, LPCWSTR lpszPassword, DWORD dwLogonType, DWORD dwLogonProvider, PHANDLE phToken);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) LogonUserExA (LPCSTR lpszUsername, LPCSTR lpszDomain, LPCSTR lpszPassword, DWORD dwLogonType, DWORD dwLogonProvider, PHANDLE phToken, PSID *ppLogonSid, PVOID *ppProfileBuffer, LPDWORD pdwProfileLength, PQUOTA_LIMITS pQuotaLimits);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) LogonUserExW (LPCWSTR lpszUsername, LPCWSTR lpszDomain, LPCWSTR lpszPassword, DWORD dwLogonType, DWORD dwLogonProvider, PHANDLE phToken, PSID *ppLogonSid, PVOID *ppProfileBuffer, LPDWORD pdwProfileLength, PQUOTA_LIMITS pQuotaLimits);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CreateProcessAsUserA (HANDLE hToken, LPCSTR lpApplicationName, LPSTR lpCommandLine, LPSECURITY_ATTRIBUTES lpProcessAttributes, LPSECURITY_ATTRIBUTES lpThreadAttributes, WINBOOL bInheritHandles, DWORD dwCreationFlags, LPVOID lpEnvironment, LPCSTR lpCurrentDirectory, LPSTARTUPINFOA lpStartupInfo, LPPROCESS_INFORMATION lpProcessInformation);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CreateProcessWithLogonW (LPCWSTR lpUsername, LPCWSTR lpDomain, LPCWSTR lpPassword, DWORD dwLogonFlags, LPCWSTR lpApplicationName, LPWSTR lpCommandLine, DWORD dwCreationFlags, LPVOID lpEnvironment, LPCWSTR lpCurrentDirectory, LPSTARTUPINFOW lpStartupInfo, LPPROCESS_INFORMATION lpProcessInformation);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CreateProcessWithTokenW (HANDLE hToken, DWORD dwLogonFlags, LPCWSTR lpApplicationName, LPWSTR lpCommandLine, DWORD dwCreationFlags, LPVOID lpEnvironment, LPCWSTR lpCurrentDirectory, LPSTARTUPINFOW lpStartupInfo, LPPROCESS_INFORMATION lpProcessInformation);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsTokenUntrusted (HANDLE TokenHandle);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) RegisterWaitForSingleObject (PHANDLE phNewWaitObject, HANDLE hObject, WAITORTIMERCALLBACK Callback, PVOID Context, ULONG dwMilliseconds, ULONG dwFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) UnregisterWait (HANDLE WaitHandle);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) BindIoCompletionCallback (HANDLE FileHandle, LPOVERLAPPED_COMPLETION_ROUTINE Function, ULONG Flags);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) SetTimerQueueTimer (HANDLE TimerQueue, WAITORTIMERCALLBACK Callback, PVOID Parameter, DWORD DueTime, DWORD Period, WINBOOL PreferIo);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CancelTimerQueueTimer (HANDLE TimerQueue, HANDLE Timer);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DeleteTimerQueue (HANDLE TimerQueue);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreatePrivateNamespaceA (LPSECURITY_ATTRIBUTES lpPrivateNamespaceAttributes, LPVOID lpBoundaryDescriptor, LPCSTR lpAliasPrefix);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) OpenPrivateNamespaceA (LPVOID lpBoundaryDescriptor, LPCSTR lpAliasPrefix);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateBoundaryDescriptorA (LPCSTR Name, ULONG Flags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AddIntegrityLabelToBoundaryDescriptor (HANDLE *BoundaryDescriptor, PSID IntegrityLabel);
  typedef struct tagHW_PROFILE_INFOA {
    DWORD dwDockInfo;
    CHAR szHwProfileGuid[39];
    CHAR szHwProfileName[80];
  } HW_PROFILE_INFOA,*LPHW_PROFILE_INFOA;
  typedef struct tagHW_PROFILE_INFOW {
    DWORD dwDockInfo;
    WCHAR szHwProfileGuid[39];
    WCHAR szHwProfileName[80];
  } HW_PROFILE_INFOW,*LPHW_PROFILE_INFOW;
  typedef HW_PROFILE_INFOA HW_PROFILE_INFO;
  typedef LPHW_PROFILE_INFOA LPHW_PROFILE_INFO;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetCurrentHwProfileA (LPHW_PROFILE_INFOA lpHwProfileInfo);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetCurrentHwProfileW (LPHW_PROFILE_INFOW lpHwProfileInfo);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) VerifyVersionInfoA (LPOSVERSIONINFOEXA lpVersionInformation, DWORD dwTypeMask, DWORDLONG dwlConditionMask);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) VerifyVersionInfoW (LPOSVERSIONINFOEXW lpVersionInformation, DWORD dwTypeMask, DWORDLONG dwlConditionMask);
  typedef struct _TIME_ZONE_INFORMATION {
    LONG Bias;
    WCHAR StandardName[32];
    SYSTEMTIME StandardDate;
    LONG StandardBias;
    WCHAR DaylightName[32];
    SYSTEMTIME DaylightDate;
    LONG DaylightBias;
  } TIME_ZONE_INFORMATION,*PTIME_ZONE_INFORMATION,*LPTIME_ZONE_INFORMATION;
  typedef struct _TIME_DYNAMIC_ZONE_INFORMATION {
    LONG Bias;
    WCHAR StandardName[32];
    SYSTEMTIME StandardDate;
    LONG StandardBias;
    WCHAR DaylightName[32];
    SYSTEMTIME DaylightDate;
    LONG DaylightBias;
    WCHAR TimeZoneKeyName[128];
    BOOLEAN DynamicDaylightTimeDisabled;
  } DYNAMIC_TIME_ZONE_INFORMATION,*PDYNAMIC_TIME_ZONE_INFORMATION;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SystemTimeToTzSpecificLocalTime (const TIME_ZONE_INFORMATION *lpTimeZoneInformation, const SYSTEMTIME *lpUniversalTime, LPSYSTEMTIME lpLocalTime);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) TzSpecificLocalTimeToSystemTime (const TIME_ZONE_INFORMATION *lpTimeZoneInformation, const SYSTEMTIME *lpLocalTime, LPSYSTEMTIME lpUniversalTime);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FileTimeToSystemTime (const FILETIME *lpFileTime, LPSYSTEMTIME lpSystemTime);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SystemTimeToFileTime (const SYSTEMTIME *lpSystemTime, LPFILETIME lpFileTime);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetTimeZoneInformation (LPTIME_ZONE_INFORMATION lpTimeZoneInformation);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetDynamicTimeZoneInformation (PDYNAMIC_TIME_ZONE_INFORMATION pTimeZoneInformation);
  WINBOOL __attribute__((__stdcall__)) GetTimeZoneInformationForYear (USHORT wYear, PDYNAMIC_TIME_ZONE_INFORMATION pdtzi, LPTIME_ZONE_INFORMATION ptzi);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetTimeZoneInformation (const TIME_ZONE_INFORMATION *lpTimeZoneInformation);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetDynamicTimeZoneInformation (const DYNAMIC_TIME_ZONE_INFORMATION *lpTimeZoneInformation);
  typedef struct _SYSTEM_POWER_STATUS {
    BYTE ACLineStatus;
    BYTE BatteryFlag;
    BYTE BatteryLifePercent;
    BYTE Reserved1;
    DWORD BatteryLifeTime;
    DWORD BatteryFullLifeTime;
  } SYSTEM_POWER_STATUS,*LPSYSTEM_POWER_STATUS;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetSystemPowerStatus (LPSYSTEM_POWER_STATUS lpSystemPowerStatus);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetSystemPowerState (WINBOOL fSuspend, WINBOOL fForce);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AllocateUserPhysicalPages (HANDLE hProcess, PULONG_PTR NumberOfPages, PULONG_PTR PageArray);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FreeUserPhysicalPages (HANDLE hProcess, PULONG_PTR NumberOfPages, PULONG_PTR PageArray);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) MapUserPhysicalPages (PVOID VirtualAddress, ULONG_PTR NumberOfPages, PULONG_PTR PageArray);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) MapUserPhysicalPagesScatter (PVOID *VirtualAddresses, ULONG_PTR NumberOfPages, PULONG_PTR PageArray);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateJobObjectA (LPSECURITY_ATTRIBUTES lpJobAttributes, LPCSTR lpName);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateJobObjectW (LPSECURITY_ATTRIBUTES lpJobAttributes, LPCWSTR lpName);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) OpenJobObjectA (DWORD dwDesiredAccess, WINBOOL bInheritHandle, LPCSTR lpName);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) OpenJobObjectW (DWORD dwDesiredAccess, WINBOOL bInheritHandle, LPCWSTR lpName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AssignProcessToJobObject (HANDLE hJob, HANDLE hProcess);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) TerminateJobObject (HANDLE hJob, UINT uExitCode);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) QueryInformationJobObject (HANDLE hJob, JOBOBJECTINFOCLASS JobObjectInformationClass, LPVOID lpJobObjectInformation, DWORD cbJobObjectInformationLength, LPDWORD lpReturnLength);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetInformationJobObject (HANDLE hJob, JOBOBJECTINFOCLASS JobObjectInformationClass, LPVOID lpJobObjectInformation, DWORD cbJobObjectInformationLength);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CreateJobSet (ULONG NumJob, PJOB_SET_ARRAY UserJobSet, ULONG Flags);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) FindFirstVolumeA (LPSTR lpszVolumeName, DWORD cchBufferLength);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FindNextVolumeA (HANDLE hFindVolume, LPSTR lpszVolumeName, DWORD cchBufferLength);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) FindFirstVolumeMountPointA (LPCSTR lpszRootPathName, LPSTR lpszVolumeMountPoint, DWORD cchBufferLength);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) FindFirstVolumeMountPointW (LPCWSTR lpszRootPathName, LPWSTR lpszVolumeMountPoint, DWORD cchBufferLength);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FindNextVolumeMountPointA (HANDLE hFindVolumeMountPoint, LPSTR lpszVolumeMountPoint, DWORD cchBufferLength);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FindNextVolumeMountPointW (HANDLE hFindVolumeMountPoint, LPWSTR lpszVolumeMountPoint, DWORD cchBufferLength);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FindVolumeMountPointClose (HANDLE hFindVolumeMountPoint);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetVolumeMountPointA (LPCSTR lpszVolumeMountPoint, LPCSTR lpszVolumeName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetVolumeMountPointW (LPCWSTR lpszVolumeMountPoint, LPCWSTR lpszVolumeName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DeleteVolumeMountPointA (LPCSTR lpszVolumeMountPoint);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetVolumeNameForVolumeMountPointA (LPCSTR lpszVolumeMountPoint, LPSTR lpszVolumeName, DWORD cchBufferLength);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetVolumePathNameA (LPCSTR lpszFileName, LPSTR lpszVolumePathName, DWORD cchBufferLength);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetVolumePathNamesForVolumeNameA (LPCSTR lpszVolumeName, LPCH lpszVolumePathNames, DWORD cchBufferLength, PDWORD lpcchReturnLength);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AllocateUserPhysicalPagesNuma (HANDLE hProcess, PULONG_PTR NumberOfPages, PULONG_PTR PageArray, DWORD nndPreferred);
  typedef struct tagACTCTXA {
    ULONG cbSize;
    DWORD dwFlags;
    LPCSTR lpSource;
    USHORT wProcessorArchitecture;
    LANGID wLangId;
    LPCSTR lpAssemblyDirectory;
    LPCSTR lpResourceName;
    LPCSTR lpApplicationName;
    HMODULE hModule;
  } ACTCTXA,*PACTCTXA;
  typedef struct tagACTCTXW {
    ULONG cbSize;
    DWORD dwFlags;
    LPCWSTR lpSource;
    USHORT wProcessorArchitecture;
    LANGID wLangId;
    LPCWSTR lpAssemblyDirectory;
    LPCWSTR lpResourceName;
    LPCWSTR lpApplicationName;
    HMODULE hModule;
  } ACTCTXW,*PACTCTXW;
  typedef ACTCTXA ACTCTX;
  typedef PACTCTXA PACTCTX;
  typedef const ACTCTXA *PCACTCTXA;
  typedef const ACTCTXW *PCACTCTXW;
  typedef PCACTCTXA PCACTCTX;
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateActCtxA (PCACTCTXA pActCtx);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateActCtxW (PCACTCTXW pActCtx);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) AddRefActCtx (HANDLE hActCtx);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) ReleaseActCtx (HANDLE hActCtx);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ZombifyActCtx (HANDLE hActCtx);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ActivateActCtx (HANDLE hActCtx, ULONG_PTR *lpCookie);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DeactivateActCtx (DWORD dwFlags, ULONG_PTR ulCookie);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetCurrentActCtx (HANDLE *lphActCtx);
  typedef struct tagACTCTX_SECTION_KEYED_DATA_2600 {
    ULONG cbSize;
    ULONG ulDataFormatVersion;
    PVOID lpData;
    ULONG ulLength;
    PVOID lpSectionGlobalData;
    ULONG ulSectionGlobalDataLength;
    PVOID lpSectionBase;
    ULONG ulSectionTotalLength;
    HANDLE hActCtx;
    ULONG ulAssemblyRosterIndex;
  } ACTCTX_SECTION_KEYED_DATA_2600,*PACTCTX_SECTION_KEYED_DATA_2600;
  typedef const ACTCTX_SECTION_KEYED_DATA_2600 *PCACTCTX_SECTION_KEYED_DATA_2600;
  typedef struct tagACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA {
    PVOID lpInformation;
    PVOID lpSectionBase;
    ULONG ulSectionLength;
    PVOID lpSectionGlobalDataBase;
    ULONG ulSectionGlobalDataLength;
  } ACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA,*PACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA;
  typedef const ACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA *PCACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA;
  typedef struct tagACTCTX_SECTION_KEYED_DATA {
    ULONG cbSize;
    ULONG ulDataFormatVersion;
    PVOID lpData;
    ULONG ulLength;
    PVOID lpSectionGlobalData;
    ULONG ulSectionGlobalDataLength;
    PVOID lpSectionBase;
    ULONG ulSectionTotalLength;
    HANDLE hActCtx;
    ULONG ulAssemblyRosterIndex;
    ULONG ulFlags;
    ACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA AssemblyMetadata;
  } ACTCTX_SECTION_KEYED_DATA,*PACTCTX_SECTION_KEYED_DATA;
  typedef const ACTCTX_SECTION_KEYED_DATA *PCACTCTX_SECTION_KEYED_DATA;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FindActCtxSectionStringA (DWORD dwFlags, const GUID *lpExtensionGuid, ULONG ulSectionId, LPCSTR lpStringToFind, PACTCTX_SECTION_KEYED_DATA ReturnedData);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FindActCtxSectionStringW (DWORD dwFlags, const GUID *lpExtensionGuid, ULONG ulSectionId, LPCWSTR lpStringToFind, PACTCTX_SECTION_KEYED_DATA ReturnedData);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FindActCtxSectionGuid (DWORD dwFlags, const GUID *lpExtensionGuid, ULONG ulSectionId, const GUID *lpGuidToFind, PACTCTX_SECTION_KEYED_DATA ReturnedData);
  typedef struct _ACTIVATION_CONTEXT_BASIC_INFORMATION {
    HANDLE hActCtx;
    DWORD dwFlags;
  } ACTIVATION_CONTEXT_BASIC_INFORMATION,*PACTIVATION_CONTEXT_BASIC_INFORMATION;
  typedef const struct _ACTIVATION_CONTEXT_BASIC_INFORMATION *PCACTIVATION_CONTEXT_BASIC_INFORMATION;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) QueryActCtxW (DWORD dwFlags, HANDLE hActCtx, PVOID pvSubInstance, ULONG ulInfoClass, PVOID pvBuffer, SIZE_T cbBuffer, SIZE_T *pcbWrittenOrRequired);
  typedef WINBOOL (__attribute__((__stdcall__)) *PQUERYACTCTXW_FUNC) (DWORD dwFlags, HANDLE hActCtx, PVOID pvSubInstance, ULONG ulInfoClass, PVOID pvBuffer, SIZE_T cbBuffer, SIZE_T *pcbWrittenOrRequired);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) WTSGetActiveConsoleSessionId (void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetNumaProcessorNode (UCHAR Processor, PUCHAR NodeNumber);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetNumaNodeProcessorMask (UCHAR Node, PULONGLONG ProcessorMask);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetNumaAvailableMemoryNode (UCHAR Node, PULONGLONG AvailableBytes);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetNumaProximityNode (ULONG ProximityId, PUCHAR NodeNumber);
  __attribute__((dllimport)) WORD __attribute__((__stdcall__)) GetActiveProcessorGroupCount (void);
  __attribute__((dllimport)) WORD __attribute__((__stdcall__)) GetMaximumProcessorGroupCount (void);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetActiveProcessorCount (WORD GroupNumber);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetMaximumProcessorCount (WORD GroupNumber);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetNumaNodeNumberFromHandle (HANDLE hFile, PUSHORT NodeNumber);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetNumaProcessorNodeEx (PPROCESSOR_NUMBER Processor, PUSHORT NodeNumber);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetNumaAvailableMemoryNodeEx (USHORT Node, PULONGLONG AvailableBytes);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetNumaProximityNodeEx (ULONG ProximityId, PUSHORT NodeNumber);
  typedef DWORD (__attribute__((__stdcall__)) *APPLICATION_RECOVERY_CALLBACK) (PVOID pvParameter);
  __attribute__((dllimport)) HRESULT __attribute__((__stdcall__)) RegisterApplicationRecoveryCallback (APPLICATION_RECOVERY_CALLBACK pRecoveyCallback, PVOID pvParameter, DWORD dwPingInterval, DWORD dwFlags);
  __attribute__((dllimport)) HRESULT __attribute__((__stdcall__)) UnregisterApplicationRecoveryCallback (void);
  __attribute__((dllimport)) HRESULT __attribute__((__stdcall__)) RegisterApplicationRestart (PCWSTR pwzCommandline, DWORD dwFlags);
  __attribute__((dllimport)) HRESULT __attribute__((__stdcall__)) UnregisterApplicationRestart (void);
  __attribute__((dllimport)) HRESULT __attribute__((__stdcall__)) GetApplicationRecoveryCallback (HANDLE hProcess, APPLICATION_RECOVERY_CALLBACK *pRecoveryCallback, PVOID *ppvParameter, PDWORD pdwPingInterval, PDWORD pdwFlags);
  __attribute__((dllimport)) HRESULT __attribute__((__stdcall__)) GetApplicationRestartSettings (HANDLE hProcess, PWSTR pwzCommandline, PDWORD pcchSize, PDWORD pdwFlags);
  __attribute__((dllimport)) HRESULT __attribute__((__stdcall__)) ApplicationRecoveryInProgress (PBOOL pbCancelled);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) ApplicationRecoveryFinished (WINBOOL bSuccess);
  typedef struct _FILE_BASIC_INFO {
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    DWORD FileAttributes;
  } FILE_BASIC_INFO,*PFILE_BASIC_INFO;
  typedef struct _FILE_STANDARD_INFO {
    LARGE_INTEGER AllocationSize;
    LARGE_INTEGER EndOfFile;
    DWORD NumberOfLinks;
    BOOLEAN DeletePending;
    BOOLEAN Directory;
  } FILE_STANDARD_INFO,*PFILE_STANDARD_INFO;
  typedef struct _FILE_NAME_INFO {
    DWORD FileNameLength;
    WCHAR FileName[1];
  } FILE_NAME_INFO,*PFILE_NAME_INFO;
  typedef struct _FILE_RENAME_INFO {
    BOOLEAN ReplaceIfExists;
    HANDLE RootDirectory;
    DWORD FileNameLength;
    WCHAR FileName[1];
  } FILE_RENAME_INFO,*PFILE_RENAME_INFO;
  typedef struct _FILE_ALLOCATION_INFO {
    LARGE_INTEGER AllocationSize;
  } FILE_ALLOCATION_INFO,*PFILE_ALLOCATION_INFO;
  typedef struct _FILE_END_OF_FILE_INFO {
    LARGE_INTEGER EndOfFile;
  } FILE_END_OF_FILE_INFO,*PFILE_END_OF_FILE_INFO;
  typedef struct _FILE_STREAM_INFO {
    DWORD NextEntryOffset;
    DWORD StreamNameLength;
    LARGE_INTEGER StreamSize;
    LARGE_INTEGER StreamAllocationSize;
    WCHAR StreamName[1];
  } FILE_STREAM_INFO,*PFILE_STREAM_INFO;
  typedef struct _FILE_COMPRESSION_INFO {
    LARGE_INTEGER CompressedFileSize;
    WORD CompressionFormat;
    UCHAR CompressionUnitShift;
    UCHAR ChunkShift;
    UCHAR ClusterShift;
    UCHAR Reserved[3];
  } FILE_COMPRESSION_INFO,*PFILE_COMPRESSION_INFO;
  typedef struct _FILE_ATTRIBUTE_TAG_INFO {
    DWORD FileAttributes;
    DWORD ReparseTag;
  } FILE_ATTRIBUTE_TAG_INFO,*PFILE_ATTRIBUTE_TAG_INFO;
  typedef struct _FILE_DISPOSITION_INFO {
    BOOLEAN DeleteFileA;
  } FILE_DISPOSITION_INFO,*PFILE_DISPOSITION_INFO;
  typedef struct _FILE_ID_BOTH_DIR_INFO {
    DWORD NextEntryOffset;
    DWORD FileIndex;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER EndOfFile;
    LARGE_INTEGER AllocationSize;
    DWORD FileAttributes;
    DWORD FileNameLength;
    DWORD EaSize;
    CCHAR ShortNameLength;
    WCHAR ShortName[12];
    LARGE_INTEGER FileId;
    WCHAR FileName[1];
  } FILE_ID_BOTH_DIR_INFO,*PFILE_ID_BOTH_DIR_INFO;
  typedef struct _FILE_FULL_DIR_INFO {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER EndOfFile;
    LARGE_INTEGER AllocationSize;
    ULONG FileAttributes;
    ULONG FileNameLength;
    ULONG EaSize;
    WCHAR FileName[1];
  } FILE_FULL_DIR_INFO,*PFILE_FULL_DIR_INFO;
  typedef enum _PRIORITY_HINT {
    IoPriorityHintVeryLow = 0,
    IoPriorityHintLow,
    IoPriorityHintNormal,
    MaximumIoPriorityHintType
  } PRIORITY_HINT;
  typedef struct _FILE_IO_PRIORITY_HINT_INFO {
    PRIORITY_HINT PriorityHint;
  } FILE_IO_PRIORITY_HINT_INFO,*PFILE_IO_PRIORITY_HINT_INFO;
  typedef struct _FILE_REMOTE_PROTOCOL_INFO {
    USHORT StructureVersion;
    USHORT StructureSize;
    ULONG Protocol;
    USHORT ProtocolMajorVersion;
    USHORT ProtocolMinorVersion;
    USHORT ProtocolRevision;
    USHORT Reserved;
    ULONG Flags;
    struct {
      ULONG Reserved[8];
    } GenericReserved;
    struct {
      ULONG Reserved[16];
    } ProtocolSpecificReserved;
  } FILE_REMOTE_PROTOCOL_INFO,*PFILE_REMOTE_PROTOCOL_INFO;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetFileInformationByHandleEx (HANDLE hFile, FILE_INFO_BY_HANDLE_CLASS FileInformationClass, LPVOID lpFileInformation, DWORD dwBufferSize);
  typedef enum _FILE_ID_TYPE {
    FileIdType,
    ObjectIdType,
    ExtendedFileIdType,
    MaximumFileIdType
  } FILE_ID_TYPE,*PFILE_ID_TYPE;
  typedef struct FILE_ID_DESCRIPTOR {
    DWORD dwSize;
    FILE_ID_TYPE Type;
    __extension__ union {
      LARGE_INTEGER FileId;
      GUID ObjectId;
    } ;
  } FILE_ID_DESCRIPTOR,*LPFILE_ID_DESCRIPTOR;
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) OpenFileById (HANDLE hVolumeHint, LPFILE_ID_DESCRIPTOR lpFileId, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwFlagsAndAttributes);
  __attribute__((dllimport)) BOOLEAN __attribute__((__stdcall__)) CreateSymbolicLinkA (LPCSTR lpSymlinkFileName, LPCSTR lpTargetFileName, DWORD dwFlags);
  __attribute__((dllimport)) BOOLEAN __attribute__((__stdcall__)) CreateSymbolicLinkW (LPCWSTR lpSymlinkFileName, LPCWSTR lpTargetFileName, DWORD dwFlags);
  __attribute__((dllimport)) BOOLEAN __attribute__((__stdcall__)) CreateSymbolicLinkTransactedA (LPCSTR lpSymlinkFileName, LPCSTR lpTargetFileName, DWORD dwFlags, HANDLE hTransaction);
  __attribute__((dllimport)) BOOLEAN __attribute__((__stdcall__)) CreateSymbolicLinkTransactedW (LPCWSTR lpSymlinkFileName, LPCWSTR lpTargetFileName, DWORD dwFlags, HANDLE hTransaction);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) QueryActCtxSettingsW (DWORD dwFlags, HANDLE hActCtx, PCWSTR settingsNameSpace, PCWSTR settingName, PWSTR pvBuffer, SIZE_T dwBuffer, SIZE_T *pdwWrittenOrRequired);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ReplacePartitionUnit (PWSTR TargetPartition, PWSTR SparePartition, ULONG Flags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AddSecureMemoryCacheCallback (PSECURE_MEMORY_CACHE_CALLBACK pfnCallBack);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) RemoveSecureMemoryCacheCallback (PSECURE_MEMORY_CACHE_CALLBACK pfnCallBack);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CopyContext (PCONTEXT Destination, DWORD ContextFlags, PCONTEXT Source);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) InitializeContext (PVOID Buffer, DWORD ContextFlags, PCONTEXT *Context, PDWORD ContextLength);
  __attribute__((dllimport)) DWORD64 __attribute__((__stdcall__)) GetEnabledXStateFeatures (void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetXStateFeaturesMask (PCONTEXT Context, PDWORD64 FeatureMask);
  __attribute__((dllimport)) PVOID __attribute__((__stdcall__)) LocateXStateFeature (PCONTEXT Context, DWORD FeatureId, PDWORD Length);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetXStateFeaturesMask (PCONTEXT Context, DWORD64 FeatureMask);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) EnableThreadProfiling (HANDLE ThreadHandle, DWORD Flags, DWORD64 HardwareCounters, HANDLE *PerformanceDataHandle);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) DisableThreadProfiling (HANDLE PerformanceDataHandle);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) QueryThreadProfiling (HANDLE ThreadHandle, PBOOLEAN Enabled);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) ReadThreadProfilingData (HANDLE PerformanceDataHandle, DWORD Flags, PPERFORMANCE_DATA PerformanceData);
  typedef struct _DRAWPATRECT {
    POINT ptPosition;
    POINT ptSize;
    WORD wStyle;
    WORD wPattern;
  } DRAWPATRECT,*PDRAWPATRECT;
  typedef struct _PSINJECTDATA {
    DWORD DataBytes;
    WORD InjectionPoint;
    WORD PageNumber;
  } PSINJECTDATA,*PPSINJECTDATA;
  typedef struct _PSFEATURE_OUTPUT {
    WINBOOL bPageIndependent;
    WINBOOL bSetPageDevice;
  } PSFEATURE_OUTPUT,*PPSFEATURE_OUTPUT;
  typedef struct _PSFEATURE_CUSTPAPER {
    LONG lOrientation;
    LONG lWidth;
    LONG lHeight;
    LONG lWidthOffset;
    LONG lHeightOffset;
  } PSFEATURE_CUSTPAPER,*PPSFEATURE_CUSTPAPER;
  typedef struct tagXFORM {
    FLOAT eM11;
    FLOAT eM12;
    FLOAT eM21;
    FLOAT eM22;
    FLOAT eDx;
    FLOAT eDy;
  } XFORM,*PXFORM,*LPXFORM;
  typedef struct tagBITMAP {
    LONG bmType;
    LONG bmWidth;
    LONG bmHeight;
    LONG bmWidthBytes;
    WORD bmPlanes;
    WORD bmBitsPixel;
    LPVOID bmBits;
  } BITMAP,*PBITMAP,*NPBITMAP,*LPBITMAP;
#pragma pack(push,1)
  typedef struct tagRGBTRIPLE {
    BYTE rgbtBlue;
    BYTE rgbtGreen;
    BYTE rgbtRed;
  } RGBTRIPLE;
#pragma pack(pop)
  typedef struct tagRGBQUAD {
    BYTE rgbBlue;
    BYTE rgbGreen;
    BYTE rgbRed;
    BYTE rgbReserved;
  } RGBQUAD;
  typedef RGBQUAD *LPRGBQUAD;
  typedef LONG LCSCSTYPE;
  typedef LONG LCSGAMUTMATCH;
  typedef long FXPT16DOT16,*LPFXPT16DOT16;
  typedef long FXPT2DOT30,*LPFXPT2DOT30;
  typedef struct tagCIEXYZ {
    FXPT2DOT30 ciexyzX;
    FXPT2DOT30 ciexyzY;
    FXPT2DOT30 ciexyzZ;
  } CIEXYZ;
  typedef CIEXYZ *LPCIEXYZ;
  typedef struct tagICEXYZTRIPLE {
    CIEXYZ ciexyzRed;
    CIEXYZ ciexyzGreen;
    CIEXYZ ciexyzBlue;
  } CIEXYZTRIPLE;
  typedef CIEXYZTRIPLE *LPCIEXYZTRIPLE;
  typedef struct tagLOGCOLORSPACEA {
    DWORD lcsSignature;
    DWORD lcsVersion;
    DWORD lcsSize;
    LCSCSTYPE lcsCSType;
    LCSGAMUTMATCH lcsIntent;
    CIEXYZTRIPLE lcsEndpoints;
    DWORD lcsGammaRed;
    DWORD lcsGammaGreen;
    DWORD lcsGammaBlue;
    CHAR lcsFilename[260];
  } LOGCOLORSPACEA,*LPLOGCOLORSPACEA;
  typedef struct tagLOGCOLORSPACEW {
    DWORD lcsSignature;
    DWORD lcsVersion;
    DWORD lcsSize;
    LCSCSTYPE lcsCSType;
    LCSGAMUTMATCH lcsIntent;
    CIEXYZTRIPLE lcsEndpoints;
    DWORD lcsGammaRed;
    DWORD lcsGammaGreen;
    DWORD lcsGammaBlue;
    WCHAR lcsFilename[260];
  } LOGCOLORSPACEW,*LPLOGCOLORSPACEW;
  typedef LOGCOLORSPACEA LOGCOLORSPACE;
  typedef LPLOGCOLORSPACEA LPLOGCOLORSPACE;
  typedef struct tagBITMAPCOREHEADER {
    DWORD bcSize;
    WORD bcWidth;
    WORD bcHeight;
    WORD bcPlanes;
    WORD bcBitCount;
  } BITMAPCOREHEADER,*LPBITMAPCOREHEADER,*PBITMAPCOREHEADER;
  typedef struct tagBITMAPINFOHEADER {
    DWORD biSize;
    LONG biWidth;
    LONG biHeight;
    WORD biPlanes;
    WORD biBitCount;
    DWORD biCompression;
    DWORD biSizeImage;
    LONG biXPelsPerMeter;
    LONG biYPelsPerMeter;
    DWORD biClrUsed;
    DWORD biClrImportant;
  } BITMAPINFOHEADER,*LPBITMAPINFOHEADER,*PBITMAPINFOHEADER;
  typedef struct {
    DWORD bV4Size;
    LONG bV4Width;
    LONG bV4Height;
    WORD bV4Planes;
    WORD bV4BitCount;
    DWORD bV4V4Compression;
    DWORD bV4SizeImage;
    LONG bV4XPelsPerMeter;
    LONG bV4YPelsPerMeter;
    DWORD bV4ClrUsed;
    DWORD bV4ClrImportant;
    DWORD bV4RedMask;
    DWORD bV4GreenMask;
    DWORD bV4BlueMask;
    DWORD bV4AlphaMask;
    DWORD bV4CSType;
    CIEXYZTRIPLE bV4Endpoints;
    DWORD bV4GammaRed;
    DWORD bV4GammaGreen;
    DWORD bV4GammaBlue;
  } BITMAPV4HEADER,*LPBITMAPV4HEADER,*PBITMAPV4HEADER;
  typedef struct {
    DWORD bV5Size;
    LONG bV5Width;
    LONG bV5Height;
    WORD bV5Planes;
    WORD bV5BitCount;
    DWORD bV5Compression;
    DWORD bV5SizeImage;
    LONG bV5XPelsPerMeter;
    LONG bV5YPelsPerMeter;
    DWORD bV5ClrUsed;
    DWORD bV5ClrImportant;
    DWORD bV5RedMask;
    DWORD bV5GreenMask;
    DWORD bV5BlueMask;
    DWORD bV5AlphaMask;
    DWORD bV5CSType;
    CIEXYZTRIPLE bV5Endpoints;
    DWORD bV5GammaRed;
    DWORD bV5GammaGreen;
    DWORD bV5GammaBlue;
    DWORD bV5Intent;
    DWORD bV5ProfileData;
    DWORD bV5ProfileSize;
    DWORD bV5Reserved;
  } BITMAPV5HEADER,*LPBITMAPV5HEADER,*PBITMAPV5HEADER;
  typedef struct tagBITMAPINFO {
    BITMAPINFOHEADER bmiHeader;
    RGBQUAD bmiColors[1];
  } BITMAPINFO,*LPBITMAPINFO,*PBITMAPINFO;
  typedef struct tagBITMAPCOREINFO {
    BITMAPCOREHEADER bmciHeader;
    RGBTRIPLE bmciColors[1];
  } BITMAPCOREINFO,*LPBITMAPCOREINFO,*PBITMAPCOREINFO;
#pragma pack(push,2)
  typedef struct tagBITMAPFILEHEADER {
    WORD bfType;
    DWORD bfSize;
    WORD bfReserved1;
    WORD bfReserved2;
    DWORD bfOffBits;
  } BITMAPFILEHEADER,*LPBITMAPFILEHEADER,*PBITMAPFILEHEADER;
#pragma pack(pop)
  typedef struct tagFONTSIGNATURE {
    DWORD fsUsb[4];
    DWORD fsCsb[2];
  } FONTSIGNATURE,*PFONTSIGNATURE,*LPFONTSIGNATURE;
  typedef struct tagCHARSETINFO {
    UINT ciCharset;
    UINT ciACP;
    FONTSIGNATURE fs;
  } CHARSETINFO,*PCHARSETINFO,*NPCHARSETINFO,*LPCHARSETINFO;
  typedef struct tagLOCALESIGNATURE {
    DWORD lsUsb[4];
    DWORD lsCsbDefault[2];
    DWORD lsCsbSupported[2];
  } LOCALESIGNATURE,*PLOCALESIGNATURE,*LPLOCALESIGNATURE;
  typedef struct tagHANDLETABLE {
    HGDIOBJ objectHandle[1];
  } HANDLETABLE,*PHANDLETABLE,*LPHANDLETABLE;
  typedef struct tagMETARECORD {
    DWORD rdSize;
    WORD rdFunction;
    WORD rdParm[1];
  } METARECORD;
  typedef struct tagMETARECORD *PMETARECORD;
  typedef struct tagMETARECORD *LPMETARECORD;
  typedef struct tagMETAFILEPICT {
    LONG mm;
    LONG xExt;
    LONG yExt;
    HMETAFILE hMF;
  } METAFILEPICT,*LPMETAFILEPICT;
#pragma pack(push,2)
  typedef struct tagMETAHEADER {
    WORD mtType;
    WORD mtHeaderSize;
    WORD mtVersion;
    DWORD mtSize;
    WORD mtNoObjects;
    DWORD mtMaxRecord;
    WORD mtNoParameters;
  } METAHEADER;
  typedef struct tagMETAHEADER *PMETAHEADER;
  typedef struct tagMETAHEADER *LPMETAHEADER;
#pragma pack(pop)
  typedef struct tagENHMETARECORD {
    DWORD iType;
    DWORD nSize;
    DWORD dParm[1];
  } ENHMETARECORD,*PENHMETARECORD,*LPENHMETARECORD;
  typedef struct tagENHMETAHEADER {
    DWORD iType;
    DWORD nSize;
    RECTL rclBounds;
    RECTL rclFrame;
    DWORD dSignature;
    DWORD nVersion;
    DWORD nBytes;
    DWORD nRecords;
    WORD nHandles;
    WORD sReserved;
    DWORD nDescription;
    DWORD offDescription;
    DWORD nPalEntries;
    SIZEL szlDevice;
    SIZEL szlMillimeters;
    DWORD cbPixelFormat;
    DWORD offPixelFormat;
    DWORD bOpenGL;
    SIZEL szlMicrometers;
  } ENHMETAHEADER,*PENHMETAHEADER,*LPENHMETAHEADER;
  typedef BYTE BCHAR;
#pragma pack(push,4)
  typedef struct tagTEXTMETRICA {
    LONG tmHeight;
    LONG tmAscent;
    LONG tmDescent;
    LONG tmInternalLeading;
    LONG tmExternalLeading;
    LONG tmAveCharWidth;
    LONG tmMaxCharWidth;
    LONG tmWeight;
    LONG tmOverhang;
    LONG tmDigitizedAspectX;
    LONG tmDigitizedAspectY;
    BYTE tmFirstChar;
    BYTE tmLastChar;
    BYTE tmDefaultChar;
    BYTE tmBreakChar;
    BYTE tmItalic;
    BYTE tmUnderlined;
    BYTE tmStruckOut;
    BYTE tmPitchAndFamily;
    BYTE tmCharSet;
  } TEXTMETRICA,*PTEXTMETRICA,*NPTEXTMETRICA,*LPTEXTMETRICA;
  typedef struct tagTEXTMETRICW {
    LONG tmHeight;
    LONG tmAscent;
    LONG tmDescent;
    LONG tmInternalLeading;
    LONG tmExternalLeading;
    LONG tmAveCharWidth;
    LONG tmMaxCharWidth;
    LONG tmWeight;
    LONG tmOverhang;
    LONG tmDigitizedAspectX;
    LONG tmDigitizedAspectY;
    WCHAR tmFirstChar;
    WCHAR tmLastChar;
    WCHAR tmDefaultChar;
    WCHAR tmBreakChar;
    BYTE tmItalic;
    BYTE tmUnderlined;
    BYTE tmStruckOut;
    BYTE tmPitchAndFamily;
    BYTE tmCharSet;
  } TEXTMETRICW,*PTEXTMETRICW,*NPTEXTMETRICW,*LPTEXTMETRICW;
  typedef TEXTMETRICA TEXTMETRIC;
  typedef PTEXTMETRICA PTEXTMETRIC;
  typedef NPTEXTMETRICA NPTEXTMETRIC;
  typedef LPTEXTMETRICA LPTEXTMETRIC;
#pragma pack(pop)
#pragma pack(push,4)
  typedef struct tagNEWTEXTMETRICA {
    LONG tmHeight;
    LONG tmAscent;
    LONG tmDescent;
    LONG tmInternalLeading;
    LONG tmExternalLeading;
    LONG tmAveCharWidth;
    LONG tmMaxCharWidth;
    LONG tmWeight;
    LONG tmOverhang;
    LONG tmDigitizedAspectX;
    LONG tmDigitizedAspectY;
    BYTE tmFirstChar;
    BYTE tmLastChar;
    BYTE tmDefaultChar;
    BYTE tmBreakChar;
    BYTE tmItalic;
    BYTE tmUnderlined;
    BYTE tmStruckOut;
    BYTE tmPitchAndFamily;
    BYTE tmCharSet;
    DWORD ntmFlags;
    UINT ntmSizeEM;
    UINT ntmCellHeight;
    UINT ntmAvgWidth;
  } NEWTEXTMETRICA,*PNEWTEXTMETRICA,*NPNEWTEXTMETRICA,*LPNEWTEXTMETRICA;
  typedef struct tagNEWTEXTMETRICW {
    LONG tmHeight;
    LONG tmAscent;
    LONG tmDescent;
    LONG tmInternalLeading;
    LONG tmExternalLeading;
    LONG tmAveCharWidth;
    LONG tmMaxCharWidth;
    LONG tmWeight;
    LONG tmOverhang;
    LONG tmDigitizedAspectX;
    LONG tmDigitizedAspectY;
    WCHAR tmFirstChar;
    WCHAR tmLastChar;
    WCHAR tmDefaultChar;
    WCHAR tmBreakChar;
    BYTE tmItalic;
    BYTE tmUnderlined;
    BYTE tmStruckOut;
    BYTE tmPitchAndFamily;
    BYTE tmCharSet;
    DWORD ntmFlags;
    UINT ntmSizeEM;
    UINT ntmCellHeight;
    UINT ntmAvgWidth;
  } NEWTEXTMETRICW,*PNEWTEXTMETRICW,*NPNEWTEXTMETRICW,*LPNEWTEXTMETRICW;
  typedef NEWTEXTMETRICA NEWTEXTMETRIC;
  typedef PNEWTEXTMETRICA PNEWTEXTMETRIC;
  typedef NPNEWTEXTMETRICA NPNEWTEXTMETRIC;
  typedef LPNEWTEXTMETRICA LPNEWTEXTMETRIC;
#pragma pack(pop)
  typedef struct tagNEWTEXTMETRICEXA {
    NEWTEXTMETRICA ntmTm;
    FONTSIGNATURE ntmFontSig;
  } NEWTEXTMETRICEXA;
  typedef struct tagNEWTEXTMETRICEXW {
    NEWTEXTMETRICW ntmTm;
    FONTSIGNATURE ntmFontSig;
  } NEWTEXTMETRICEXW;
  typedef NEWTEXTMETRICEXA NEWTEXTMETRICEX;
  typedef struct tagPELARRAY {
    LONG paXCount;
    LONG paYCount;
    LONG paXExt;
    LONG paYExt;
    BYTE paRGBs;
  } PELARRAY,*PPELARRAY,*NPPELARRAY,*LPPELARRAY;
  typedef struct tagLOGBRUSH {
    UINT lbStyle;
    COLORREF lbColor;
    ULONG_PTR lbHatch;
  } LOGBRUSH,*PLOGBRUSH,*NPLOGBRUSH,*LPLOGBRUSH;
  typedef struct tagLOGBRUSH32 {
    UINT lbStyle;
    COLORREF lbColor;
    ULONG lbHatch;
  } LOGBRUSH32,*PLOGBRUSH32,*NPLOGBRUSH32,*LPLOGBRUSH32;
  typedef LOGBRUSH PATTERN;
  typedef PATTERN *PPATTERN;
  typedef PATTERN *NPPATTERN;
  typedef PATTERN *LPPATTERN;
  typedef struct tagLOGPEN {
    UINT lopnStyle;
    POINT lopnWidth;
    COLORREF lopnColor;
  } LOGPEN,*PLOGPEN,*NPLOGPEN,*LPLOGPEN;
  typedef struct tagEXTLOGPEN {
    DWORD elpPenStyle;
    DWORD elpWidth;
    UINT elpBrushStyle;
    COLORREF elpColor;
    ULONG_PTR elpHatch;
    DWORD elpNumEntries;
    DWORD elpStyleEntry[1];
  } EXTLOGPEN,*PEXTLOGPEN,*NPEXTLOGPEN,*LPEXTLOGPEN;
  typedef struct tagEXTLOGPEN32 {
    DWORD elpPenStyle;
    DWORD elpWidth;
    UINT elpBrushStyle;
    COLORREF elpColor;
    ULONG elpHatch;
    DWORD elpNumEntries;
    DWORD elpStyleEntry[1];
  } EXTLOGPEN32, *PEXTLOGPEN32, *NPEXTLOGPEN32, *LPEXTLOGPEN32;
  typedef struct tagPALETTEENTRY {
    BYTE peRed;
    BYTE peGreen;
    BYTE peBlue;
    BYTE peFlags;
  } PALETTEENTRY,*PPALETTEENTRY,*LPPALETTEENTRY;
  typedef struct tagLOGPALETTE {
    WORD palVersion;
    WORD palNumEntries;
    PALETTEENTRY palPalEntry[1];
  } LOGPALETTE,*PLOGPALETTE,*NPLOGPALETTE,*LPLOGPALETTE;
  typedef struct tagLOGFONTA {
    LONG lfHeight;
    LONG lfWidth;
    LONG lfEscapement;
    LONG lfOrientation;
    LONG lfWeight;
    BYTE lfItalic;
    BYTE lfUnderline;
    BYTE lfStrikeOut;
    BYTE lfCharSet;
    BYTE lfOutPrecision;
    BYTE lfClipPrecision;
    BYTE lfQuality;
    BYTE lfPitchAndFamily;
    CHAR lfFaceName[32];
  } LOGFONTA,*PLOGFONTA,*NPLOGFONTA,*LPLOGFONTA;
  typedef struct tagLOGFONTW {
    LONG lfHeight;
    LONG lfWidth;
    LONG lfEscapement;
    LONG lfOrientation;
    LONG lfWeight;
    BYTE lfItalic;
    BYTE lfUnderline;
    BYTE lfStrikeOut;
    BYTE lfCharSet;
    BYTE lfOutPrecision;
    BYTE lfClipPrecision;
    BYTE lfQuality;
    BYTE lfPitchAndFamily;
    WCHAR lfFaceName[32];
  } LOGFONTW,*PLOGFONTW,*NPLOGFONTW,*LPLOGFONTW;
  typedef LOGFONTA LOGFONT;
  typedef PLOGFONTA PLOGFONT;
  typedef NPLOGFONTA NPLOGFONT;
  typedef LPLOGFONTA LPLOGFONT;
  typedef struct tagENUMLOGFONTA {
    LOGFONTA elfLogFont;
    BYTE elfFullName[64];
    BYTE elfStyle[32];
  } ENUMLOGFONTA,*LPENUMLOGFONTA;
  typedef struct tagENUMLOGFONTW {
    LOGFONTW elfLogFont;
    WCHAR elfFullName[64];
    WCHAR elfStyle[32];
  } ENUMLOGFONTW,*LPENUMLOGFONTW;
  typedef ENUMLOGFONTA ENUMLOGFONT;
  typedef LPENUMLOGFONTA LPENUMLOGFONT;
  typedef struct tagENUMLOGFONTEXA {
    LOGFONTA elfLogFont;
    BYTE elfFullName[64];
    BYTE elfStyle[32];
    BYTE elfScript[32];
  } ENUMLOGFONTEXA,*LPENUMLOGFONTEXA;
  typedef struct tagENUMLOGFONTEXW {
    LOGFONTW elfLogFont;
    WCHAR elfFullName[64];
    WCHAR elfStyle[32];
    WCHAR elfScript[32];
  } ENUMLOGFONTEXW,*LPENUMLOGFONTEXW;
  typedef ENUMLOGFONTEXA ENUMLOGFONTEX;
  typedef LPENUMLOGFONTEXA LPENUMLOGFONTEX;
  typedef struct tagPANOSE {
    BYTE bFamilyType;
    BYTE bSerifStyle;
    BYTE bWeight;
    BYTE bProportion;
    BYTE bContrast;
    BYTE bStrokeVariation;
    BYTE bArmStyle;
    BYTE bLetterform;
    BYTE bMidline;
    BYTE bXHeight;
  } PANOSE,*LPPANOSE;
  typedef struct tagEXTLOGFONTA {
    LOGFONTA elfLogFont;
    BYTE elfFullName[64];
    BYTE elfStyle[32];
    DWORD elfVersion;
    DWORD elfStyleSize;
    DWORD elfMatch;
    DWORD elfReserved;
    BYTE elfVendorId[4];
    DWORD elfCulture;
    PANOSE elfPanose;
  } EXTLOGFONTA,*PEXTLOGFONTA,*NPEXTLOGFONTA,*LPEXTLOGFONTA;
  typedef struct tagEXTLOGFONTW {
    LOGFONTW elfLogFont;
    WCHAR elfFullName[64];
    WCHAR elfStyle[32];
    DWORD elfVersion;
    DWORD elfStyleSize;
    DWORD elfMatch;
    DWORD elfReserved;
    BYTE elfVendorId[4];
    DWORD elfCulture;
    PANOSE elfPanose;
  } EXTLOGFONTW,*PEXTLOGFONTW,*NPEXTLOGFONTW,*LPEXTLOGFONTW;
  typedef EXTLOGFONTA EXTLOGFONT;
  typedef PEXTLOGFONTA PEXTLOGFONT;
  typedef NPEXTLOGFONTA NPEXTLOGFONT;
  typedef LPEXTLOGFONTA LPEXTLOGFONT;
  typedef struct _devicemodeA {
    BYTE dmDeviceName[32];
    WORD dmSpecVersion;
    WORD dmDriverVersion;
    WORD dmSize;
    WORD dmDriverExtra;
    DWORD dmFields;
    __extension__ union {
      __extension__ struct {
 short dmOrientation;
 short dmPaperSize;
 short dmPaperLength;
 short dmPaperWidth;
 short dmScale;
 short dmCopies;
 short dmDefaultSource;
 short dmPrintQuality;
      };
      struct {
 POINTL dmPosition;
 DWORD dmDisplayOrientation;
 DWORD dmDisplayFixedOutput;
      };
    };
    short dmColor;
    short dmDuplex;
    short dmYResolution;
    short dmTTOption;
    short dmCollate;
    BYTE dmFormName[32];
    WORD dmLogPixels;
    DWORD dmBitsPerPel;
    DWORD dmPelsWidth;
    DWORD dmPelsHeight;
    __extension__ union {
      DWORD dmDisplayFlags;
      DWORD dmNup;
    };
    DWORD dmDisplayFrequency;
    DWORD dmICMMethod;
    DWORD dmICMIntent;
    DWORD dmMediaType;
    DWORD dmDitherType;
    DWORD dmReserved1;
    DWORD dmReserved2;
    DWORD dmPanningWidth;
    DWORD dmPanningHeight;
  } DEVMODEA,*PDEVMODEA,*NPDEVMODEA,*LPDEVMODEA;
  typedef struct _devicemodeW {
    WCHAR dmDeviceName[32];
    WORD dmSpecVersion;
    WORD dmDriverVersion;
    WORD dmSize;
    WORD dmDriverExtra;
    DWORD dmFields;
    __extension__ union {
      __extension__ struct {
 short dmOrientation;
 short dmPaperSize;
 short dmPaperLength;
 short dmPaperWidth;
 short dmScale;
 short dmCopies;
 short dmDefaultSource;
 short dmPrintQuality;
      };
      __extension__ struct {
 POINTL dmPosition;
 DWORD dmDisplayOrientation;
 DWORD dmDisplayFixedOutput;
      };
    };
    short dmColor;
    short dmDuplex;
    short dmYResolution;
    short dmTTOption;
    short dmCollate;
    WCHAR dmFormName[32];
    WORD dmLogPixels;
    DWORD dmBitsPerPel;
    DWORD dmPelsWidth;
    DWORD dmPelsHeight;
    __extension__ union {
      DWORD dmDisplayFlags;
      DWORD dmNup;
    };
    DWORD dmDisplayFrequency;
    DWORD dmICMMethod;
    DWORD dmICMIntent;
    DWORD dmMediaType;
    DWORD dmDitherType;
    DWORD dmReserved1;
    DWORD dmReserved2;
    DWORD dmPanningWidth;
    DWORD dmPanningHeight;
  } DEVMODEW,*PDEVMODEW,*NPDEVMODEW,*LPDEVMODEW;
  typedef DEVMODEA DEVMODE;
  typedef PDEVMODEA PDEVMODE;
  typedef NPDEVMODEA NPDEVMODE;
  typedef LPDEVMODEA LPDEVMODE;
  typedef struct _DISPLAY_DEVICEA {
    DWORD cb;
    CHAR DeviceName[32];
    CHAR DeviceString[128];
    DWORD StateFlags;
    CHAR DeviceID[128];
    CHAR DeviceKey[128];
  } DISPLAY_DEVICEA,*PDISPLAY_DEVICEA,*LPDISPLAY_DEVICEA;
  typedef struct _DISPLAY_DEVICEW {
    DWORD cb;
    WCHAR DeviceName[32];
    WCHAR DeviceString[128];
    DWORD StateFlags;
    WCHAR DeviceID[128];
    WCHAR DeviceKey[128];
  } DISPLAY_DEVICEW,*PDISPLAY_DEVICEW,*LPDISPLAY_DEVICEW;
  typedef DISPLAY_DEVICEA DISPLAY_DEVICE;
  typedef PDISPLAY_DEVICEA PDISPLAY_DEVICE;
  typedef LPDISPLAY_DEVICEA LPDISPLAY_DEVICE;
  typedef struct DISPLAYCONFIG_RATIONAL {
    UINT32 Numerator;
    UINT32 Denominator;
  } DISPLAYCONFIG_RATIONAL;
  typedef enum {
    DISPLAYCONFIG_OUTPUT_TECHNOLOGY_OTHER = (int) -1,
    DISPLAYCONFIG_OUTPUT_TECHNOLOGY_HD15 = (int) 0,
    DISPLAYCONFIG_OUTPUT_TECHNOLOGY_SVIDEO = (int) 1,
    DISPLAYCONFIG_OUTPUT_TECHNOLOGY_COMPOSITE_VIDEO = (int) 2,
    DISPLAYCONFIG_OUTPUT_TECHNOLOGY_COMPONENT_VIDEO = (int) 3,
    DISPLAYCONFIG_OUTPUT_TECHNOLOGY_DVI = (int) 4,
    DISPLAYCONFIG_OUTPUT_TECHNOLOGY_HDMI = (int) 5,
    DISPLAYCONFIG_OUTPUT_TECHNOLOGY_LVDS = (int) 6,
    DISPLAYCONFIG_OUTPUT_TECHNOLOGY_D_JPN = (int) 8,
    DISPLAYCONFIG_OUTPUT_TECHNOLOGY_SDI = (int) 9,
    DISPLAYCONFIG_OUTPUT_TECHNOLOGY_DISPLAYPORT_EXTERNAL = (int) 10,
    DISPLAYCONFIG_OUTPUT_TECHNOLOGY_DISPLAYPORT_EMBEDDED = (int) 11,
    DISPLAYCONFIG_OUTPUT_TECHNOLOGY_UDI_EXTERNAL = (int) 12,
    DISPLAYCONFIG_OUTPUT_TECHNOLOGY_UDI_EMBEDDED = (int) 13,
    DISPLAYCONFIG_OUTPUT_TECHNOLOGY_SDTVDONGLE = (int) 14,
    DISPLAYCONFIG_OUTPUT_TECHNOLOGY_INTERNAL = (int) 0x80000000,
    DISPLAYCONFIG_OUTPUT_TECHNOLOGY_FORCE_UINT32 = (int) 0xFFFFFFFF
  } DISPLAYCONFIG_VIDEO_OUTPUT_TECHNOLOGY;
  typedef enum {
    DISPLAYCONFIG_SCANLINE_ORDERING_UNSPECIFIED = 0,
    DISPLAYCONFIG_SCANLINE_ORDERING_PROGRESSIVE = 1,
    DISPLAYCONFIG_SCANLINE_ORDERING_INTERLACED = 2,
    DISPLAYCONFIG_SCANLINE_ORDERING_INTERLACED_UPPERFIELDFIRST = 2,
    DISPLAYCONFIG_SCANLINE_ORDERING_INTERLACED_LOWERFIELDFIRST = 3,
    DISPLAYCONFIG_SCANLINE_ORDERING_FORCE_UINT32 = 0xFFFFFFFF
  } DISPLAYCONFIG_SCANLINE_ORDERING;
  typedef struct DISPLAYCONFIG_2DREGION {
    UINT32 cx;
    UINT32 cy;
  } DISPLAYCONFIG_2DREGION;
  typedef struct DISPLAYCONFIG_VIDEO_SIGNAL_INFO {
    UINT64 pixelRate;
    DISPLAYCONFIG_RATIONAL hSyncFreq;
    DISPLAYCONFIG_RATIONAL vSyncFreq;
    DISPLAYCONFIG_2DREGION activeSize;
    DISPLAYCONFIG_2DREGION totalSize;
    UINT32 videoStandard;
    DISPLAYCONFIG_SCANLINE_ORDERING scanLineOrdering;
  } DISPLAYCONFIG_VIDEO_SIGNAL_INFO;
  typedef enum {
    DISPLAYCONFIG_SCALING_IDENTITY = 1,
    DISPLAYCONFIG_SCALING_CENTERED = 2,
    DISPLAYCONFIG_SCALING_STRETCHED = 3,
    DISPLAYCONFIG_SCALING_ASPECTRATIOCENTEREDMAX = 4,
    DISPLAYCONFIG_SCALING_CUSTOM = 5,
    DISPLAYCONFIG_SCALING_PREFERRED = 128,
    DISPLAYCONFIG_SCALING_FORCE_UINT32 = 0xFFFFFFFF
  } DISPLAYCONFIG_SCALING;
  typedef enum {
    DISPLAYCONFIG_ROTATION_IDENTITY = 1,
    DISPLAYCONFIG_ROTATION_ROTATE90 = 2,
    DISPLAYCONFIG_ROTATION_ROTATE180 = 3,
    DISPLAYCONFIG_ROTATION_ROTATE270 = 4,
    DISPLAYCONFIG_ROTATION_FORCE_UINT32 = 0xFFFFFFFF
  } DISPLAYCONFIG_ROTATION;
  typedef enum {
    DISPLAYCONFIG_MODE_INFO_TYPE_SOURCE = 1,
    DISPLAYCONFIG_MODE_INFO_TYPE_TARGET = 2,
    DISPLAYCONFIG_MODE_INFO_TYPE_FORCE_UINT32 = 0xFFFFFFFF
  } DISPLAYCONFIG_MODE_INFO_TYPE;
  typedef enum {
    DISPLAYCONFIG_PIXELFORMAT_8BPP = 1,
    DISPLAYCONFIG_PIXELFORMAT_16BPP = 2,
    DISPLAYCONFIG_PIXELFORMAT_24BPP = 3,
    DISPLAYCONFIG_PIXELFORMAT_32BPP = 4,
    DISPLAYCONFIG_PIXELFORMAT_NONGDI = 5,
    DISPLAYCONFIG_PIXELFORMAT_FORCE_UINT32 = 0xffffffff
 } DISPLAYCONFIG_PIXELFORMAT;
  typedef struct DISPLAYCONFIG_SOURCE_MODE {
    UINT32 width;
    UINT32 height;
    DISPLAYCONFIG_PIXELFORMAT pixelFormat;
    POINTL position;
  } DISPLAYCONFIG_SOURCE_MODE;
  typedef struct DISPLAYCONFIG_TARGET_MODE {
    DISPLAYCONFIG_VIDEO_SIGNAL_INFO targetVideoSignalInfo;
  } DISPLAYCONFIG_TARGET_MODE;
  typedef struct DISPLAYCONFIG_MODE_INFO {
    DISPLAYCONFIG_MODE_INFO_TYPE infoType;
    UINT32 id;
    LUID adapterId;
    __extension__ union {
      DISPLAYCONFIG_TARGET_MODE targetMode;
      DISPLAYCONFIG_SOURCE_MODE sourceMode;
    };
  } DISPLAYCONFIG_MODE_INFO;
  typedef struct DISPLAYCONFIG_PATH_SOURCE_INFO {
    LUID adapterId;
    UINT32 id;
    UINT32 modeInfoIdx;
    UINT32 statusFlags;
  } DISPLAYCONFIG_PATH_SOURCE_INFO;
  typedef struct DISPLAYCONFIG_PATH_TARGET_INFO {
    LUID adapterId;
    UINT32 id;
    UINT32 modeInfoIdx;
    DISPLAYCONFIG_VIDEO_OUTPUT_TECHNOLOGY outputTechnology;
    DISPLAYCONFIG_ROTATION rotation;
    DISPLAYCONFIG_SCALING scaling;
    DISPLAYCONFIG_RATIONAL refreshRate;
    DISPLAYCONFIG_SCANLINE_ORDERING scanLineOrdering;
    WINBOOL targetAvailable;
    UINT32 statusFlags;
  } DISPLAYCONFIG_PATH_TARGET_INFO;
  typedef struct DISPLAYCONFIG_PATH_INFO {
    DISPLAYCONFIG_PATH_SOURCE_INFO sourceInfo;
    DISPLAYCONFIG_PATH_TARGET_INFO targetInfo;
    UINT32 flags;
  } DISPLAYCONFIG_PATH_INFO;
  typedef enum {
    DISPLAYCONFIG_TOPOLOGY_INTERNAL = 0x1,
    DISPLAYCONFIG_TOPOLOGY_CLONE = 0x2,
    DISPLAYCONFIG_TOPOLOGY_EXTEND = 0x4,
    DISPLAYCONFIG_TOPOLOGY_EXTERNAL = 0x8,
    DISPLAYCONFIG_TOPOLOGY_FORCE_UINT32 = 0xFFFFFFFF
  } DISPLAYCONFIG_TOPOLOGY_ID;
  typedef enum {
    DISPLAYCONFIG_DEVICE_INFO_GET_SOURCE_NAME = 1,
    DISPLAYCONFIG_DEVICE_INFO_GET_TARGET_NAME = 2,
    DISPLAYCONFIG_DEVICE_INFO_GET_TARGET_PREFERRED_MODE = 3,
    DISPLAYCONFIG_DEVICE_INFO_GET_ADAPTER_NAME = 4,
    DISPLAYCONFIG_DEVICE_INFO_SET_TARGET_PERSISTENCE = 5,
    DISPLAYCONFIG_DEVICE_INFO_FORCE_UINT32 = 0xFFFFFFFF
  } DISPLAYCONFIG_DEVICE_INFO_TYPE;
  typedef struct DISPLAYCONFIG_DEVICE_INFO_HEADER {
    DISPLAYCONFIG_DEVICE_INFO_TYPE type;
    UINT32 size;
    LUID adapterId;
    UINT32 id;
  } DISPLAYCONFIG_DEVICE_INFO_HEADER;
  typedef struct DISPLAYCONFIG_SOURCE_DEVICE_NAME {
    DISPLAYCONFIG_DEVICE_INFO_HEADER header;
    WCHAR viewGdiDeviceName[32];
  } DISPLAYCONFIG_SOURCE_DEVICE_NAME;
  typedef struct DISPLAYCONFIG_TARGET_DEVICE_NAME_FLAGS {
    __extension__ union {
      __extension__ struct {
        UINT32 friendlyNameFromEdid : 1;
        UINT32 friendlyNameForced : 1;
        UINT32 edidIdsValid : 1;
        UINT32 reserved : 29;
      };
      UINT32 value;
    };
  } DISPLAYCONFIG_TARGET_DEVICE_NAME_FLAGS;
  typedef struct DISPLAYCONFIG_TARGET_DEVICE_NAME {
    DISPLAYCONFIG_DEVICE_INFO_HEADER header;
    DISPLAYCONFIG_TARGET_DEVICE_NAME_FLAGS flags;
    DISPLAYCONFIG_VIDEO_OUTPUT_TECHNOLOGY outputTechnology;
    UINT16 edidManufactureId;
    UINT16 edidProductCodeId;
    UINT32 connectorInstance;
    WCHAR monitorFriendlyDeviceName[64];
    WCHAR monitorDevicePath[128];
  } DISPLAYCONFIG_TARGET_DEVICE_NAME;
  typedef struct DISPLAYCONFIG_TARGET_PREFERRED_MODE {
    DISPLAYCONFIG_DEVICE_INFO_HEADER header;
    UINT32 width;
    UINT32 height;
    DISPLAYCONFIG_TARGET_MODE targetMode;
  } DISPLAYCONFIG_TARGET_PREFERRED_MODE;
  typedef struct DISPLAYCONFIG_ADAPTER_NAME {
    DISPLAYCONFIG_DEVICE_INFO_HEADER header;
    WCHAR adapterDevicePath[128];
  } DISPLAYCONFIG_ADAPTER_NAME;
  typedef struct DISPLAYCONFIG_SET_TARGET_PERSISTENCE {
    DISPLAYCONFIG_DEVICE_INFO_HEADER header;
    __extension__ union {
      __extension__ struct {
        UINT32 bootPersistenceOn : 1;
        UINT32 reserved : 31;
      };
      UINT32 value;
    };
  } DISPLAYCONFIG_SET_TARGET_PERSISTENCE;
  typedef struct _RGNDATAHEADER {
    DWORD dwSize;
    DWORD iType;
    DWORD nCount;
    DWORD nRgnSize;
    RECT rcBound;
  } RGNDATAHEADER,*PRGNDATAHEADER;
  typedef struct _RGNDATA {
    RGNDATAHEADER rdh;
    char Buffer[1];
  } RGNDATA,*PRGNDATA,*NPRGNDATA,*LPRGNDATA;
  typedef struct _ABC {
    int abcA;
    UINT abcB;
    int abcC;
  } ABC,*PABC,*NPABC,*LPABC;
  typedef struct _ABCFLOAT {
    FLOAT abcfA;
    FLOAT abcfB;
    FLOAT abcfC;
  } ABCFLOAT,*PABCFLOAT,*NPABCFLOAT,*LPABCFLOAT;
  typedef struct _OUTLINETEXTMETRICA {
    UINT otmSize;
    TEXTMETRICA otmTextMetrics;
    BYTE otmFiller;
    PANOSE otmPanoseNumber;
    UINT otmfsSelection;
    UINT otmfsType;
    int otmsCharSlopeRise;
    int otmsCharSlopeRun;
    int otmItalicAngle;
    UINT otmEMSquare;
    int otmAscent;
    int otmDescent;
    UINT otmLineGap;
    UINT otmsCapEmHeight;
    UINT otmsXHeight;
    RECT otmrcFontBox;
    int otmMacAscent;
    int otmMacDescent;
    UINT otmMacLineGap;
    UINT otmusMinimumPPEM;
    POINT otmptSubscriptSize;
    POINT otmptSubscriptOffset;
    POINT otmptSuperscriptSize;
    POINT otmptSuperscriptOffset;
    UINT otmsStrikeoutSize;
    int otmsStrikeoutPosition;
    int otmsUnderscoreSize;
    int otmsUnderscorePosition;
    PSTR otmpFamilyName;
    PSTR otmpFaceName;
    PSTR otmpStyleName;
    PSTR otmpFullName;
  } OUTLINETEXTMETRICA,*POUTLINETEXTMETRICA,*NPOUTLINETEXTMETRICA,*LPOUTLINETEXTMETRICA;
  typedef struct _OUTLINETEXTMETRICW {
    UINT otmSize;
    TEXTMETRICW otmTextMetrics;
    BYTE otmFiller;
    PANOSE otmPanoseNumber;
    UINT otmfsSelection;
    UINT otmfsType;
    int otmsCharSlopeRise;
    int otmsCharSlopeRun;
    int otmItalicAngle;
    UINT otmEMSquare;
    int otmAscent;
    int otmDescent;
    UINT otmLineGap;
    UINT otmsCapEmHeight;
    UINT otmsXHeight;
    RECT otmrcFontBox;
    int otmMacAscent;
    int otmMacDescent;
    UINT otmMacLineGap;
    UINT otmusMinimumPPEM;
    POINT otmptSubscriptSize;
    POINT otmptSubscriptOffset;
    POINT otmptSuperscriptSize;
    POINT otmptSuperscriptOffset;
    UINT otmsStrikeoutSize;
    int otmsStrikeoutPosition;
    int otmsUnderscoreSize;
    int otmsUnderscorePosition;
    PSTR otmpFamilyName;
    PSTR otmpFaceName;
    PSTR otmpStyleName;
    PSTR otmpFullName;
  } OUTLINETEXTMETRICW,*POUTLINETEXTMETRICW,*NPOUTLINETEXTMETRICW,*LPOUTLINETEXTMETRICW;
  typedef OUTLINETEXTMETRICA OUTLINETEXTMETRIC;
  typedef POUTLINETEXTMETRICA POUTLINETEXTMETRIC;
  typedef NPOUTLINETEXTMETRICA NPOUTLINETEXTMETRIC;
  typedef LPOUTLINETEXTMETRICA LPOUTLINETEXTMETRIC;
  typedef struct tagPOLYTEXTA {
    int x;
    int y;
    UINT n;
    LPCSTR lpstr;
    UINT uiFlags;
    RECT rcl;
    int *pdx;
  } POLYTEXTA,*PPOLYTEXTA,*NPPOLYTEXTA,*LPPOLYTEXTA;
  typedef struct tagPOLYTEXTW {
    int x;
    int y;
    UINT n;
    LPCWSTR lpstr;
    UINT uiFlags;
    RECT rcl;
    int *pdx;
  } POLYTEXTW,*PPOLYTEXTW,*NPPOLYTEXTW,*LPPOLYTEXTW;
  typedef POLYTEXTA POLYTEXT;
  typedef PPOLYTEXTA PPOLYTEXT;
  typedef NPPOLYTEXTA NPPOLYTEXT;
  typedef LPPOLYTEXTA LPPOLYTEXT;
  typedef struct _FIXED {
    WORD fract;
    short value;
  } FIXED;
  typedef struct _MAT2 {
    FIXED eM11;
    FIXED eM12;
    FIXED eM21;
    FIXED eM22;
  } MAT2,*LPMAT2;
  typedef struct _GLYPHMETRICS {
    UINT gmBlackBoxX;
    UINT gmBlackBoxY;
    POINT gmptGlyphOrigin;
    short gmCellIncX;
    short gmCellIncY;
  } GLYPHMETRICS,*LPGLYPHMETRICS;
  typedef struct tagPOINTFX {
    FIXED x;
    FIXED y;
  } POINTFX,*LPPOINTFX;
  typedef struct tagTTPOLYCURVE {
    WORD wType;
    WORD cpfx;
    POINTFX apfx[1];
  } TTPOLYCURVE,*LPTTPOLYCURVE;
  typedef struct tagTTPOLYGONHEADER {
    DWORD cb;
    DWORD dwType;
    POINTFX pfxStart;
  } TTPOLYGONHEADER,*LPTTPOLYGONHEADER;
  typedef struct tagGCP_RESULTSA {
    DWORD lStructSize;
    LPSTR lpOutString;
    UINT *lpOrder;
    int *lpDx;
    int *lpCaretPos;
    LPSTR lpClass;
    LPWSTR lpGlyphs;
    UINT nGlyphs;
    int nMaxFit;
  } GCP_RESULTSA,*LPGCP_RESULTSA;
  typedef struct tagGCP_RESULTSW {
    DWORD lStructSize;
    LPWSTR lpOutString;
    UINT *lpOrder;
    int *lpDx;
    int *lpCaretPos;
    LPSTR lpClass;
    LPWSTR lpGlyphs;
    UINT nGlyphs;
    int nMaxFit;
  } GCP_RESULTSW,*LPGCP_RESULTSW;
  typedef GCP_RESULTSA GCP_RESULTS;
  typedef LPGCP_RESULTSA LPGCP_RESULTS;
  typedef struct _RASTERIZER_STATUS {
    short nSize;
    short wFlags;
    short nLanguageID;
  } RASTERIZER_STATUS,*LPRASTERIZER_STATUS;
  typedef struct tagPIXELFORMATDESCRIPTOR {
    WORD nSize;
    WORD nVersion;
    DWORD dwFlags;
    BYTE iPixelType;
    BYTE cColorBits;
    BYTE cRedBits;
    BYTE cRedShift;
    BYTE cGreenBits;
    BYTE cGreenShift;
    BYTE cBlueBits;
    BYTE cBlueShift;
    BYTE cAlphaBits;
    BYTE cAlphaShift;
    BYTE cAccumBits;
    BYTE cAccumRedBits;
    BYTE cAccumGreenBits;
    BYTE cAccumBlueBits;
    BYTE cAccumAlphaBits;
    BYTE cDepthBits;
    BYTE cStencilBits;
    BYTE cAuxBuffers;
    BYTE iLayerType;
    BYTE bReserved;
    DWORD dwLayerMask;
    DWORD dwVisibleMask;
    DWORD dwDamageMask;
  } PIXELFORMATDESCRIPTOR,*PPIXELFORMATDESCRIPTOR,*LPPIXELFORMATDESCRIPTOR;
  typedef int (__attribute__((__stdcall__)) *OLDFONTENUMPROCA)(const LOGFONTA *,const TEXTMETRICA *,DWORD,LPARAM);
  typedef int (__attribute__((__stdcall__)) *OLDFONTENUMPROCW)(const LOGFONTW *,const TEXTMETRICW *,DWORD,LPARAM);
  typedef OLDFONTENUMPROCA FONTENUMPROCA;
  typedef OLDFONTENUMPROCW FONTENUMPROCW;
  typedef FONTENUMPROCA FONTENUMPROC;
  typedef int (__attribute__((__stdcall__)) *GOBJENUMPROC)(LPVOID,LPARAM);
  typedef void (__attribute__((__stdcall__)) *LINEDDAPROC)(int,int,LPARAM);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) AddFontResourceA(LPCSTR);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) AddFontResourceW(LPCWSTR);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AnimatePalette(HPALETTE hPal,UINT iStartIndex,UINT cEntries,const PALETTEENTRY *ppe);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) Arc(HDC hdc,int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) BitBlt(HDC hdc,int x,int y,int cx,int cy,HDC hdcSrc,int x1,int y1,DWORD rop);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CancelDC(HDC hdc);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) Chord(HDC hdc,int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) ChoosePixelFormat(HDC hdc,const PIXELFORMATDESCRIPTOR *ppfd);
  __attribute__((dllimport)) HMETAFILE __attribute__((__stdcall__)) CloseMetaFile(HDC hdc);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) CombineRgn(HRGN hrgnDst,HRGN hrgnSrc1,HRGN hrgnSrc2,int iMode);
  __attribute__((dllimport)) HMETAFILE __attribute__((__stdcall__)) CopyMetaFileA(HMETAFILE,LPCSTR);
  __attribute__((dllimport)) HMETAFILE __attribute__((__stdcall__)) CopyMetaFileW(HMETAFILE,LPCWSTR);
  __attribute__((dllimport)) HBITMAP __attribute__((__stdcall__)) CreateBitmap(int nWidth,int nHeight,UINT nPlanes,UINT nBitCount,const void *lpBits);
  __attribute__((dllimport)) HBITMAP __attribute__((__stdcall__)) CreateBitmapIndirect(const BITMAP *pbm);
  __attribute__((dllimport)) HBRUSH __attribute__((__stdcall__)) CreateBrushIndirect(const LOGBRUSH *plbrush);
  __attribute__((dllimport)) HBITMAP __attribute__((__stdcall__)) CreateCompatibleBitmap(HDC hdc,int cx,int cy);
  __attribute__((dllimport)) HBITMAP __attribute__((__stdcall__)) CreateDiscardableBitmap(HDC hdc,int cx,int cy);
  __attribute__((dllimport)) HDC __attribute__((__stdcall__)) CreateCompatibleDC(HDC hdc);
  __attribute__((dllimport)) HDC __attribute__((__stdcall__)) CreateDCA(LPCSTR pwszDriver,LPCSTR pwszDevice,LPCSTR pszPort,const DEVMODEA *pdm);
  __attribute__((dllimport)) HDC __attribute__((__stdcall__)) CreateDCW(LPCWSTR pwszDriver,LPCWSTR pwszDevice,LPCWSTR pszPort,const DEVMODEW *pdm);
  __attribute__((dllimport)) HBITMAP __attribute__((__stdcall__)) CreateDIBitmap(HDC hdc,const BITMAPINFOHEADER *pbmih,DWORD flInit,const void *pjBits,const BITMAPINFO *pbmi,UINT iUsage);
  __attribute__((dllimport)) HBRUSH __attribute__((__stdcall__)) CreateDIBPatternBrush(HGLOBAL h,UINT iUsage);
  __attribute__((dllimport)) HBRUSH __attribute__((__stdcall__)) CreateDIBPatternBrushPt(const void *lpPackedDIB,UINT iUsage);
  __attribute__((dllimport)) HRGN __attribute__((__stdcall__)) CreateEllipticRgn(int x1,int y1,int x2,int y2);
  __attribute__((dllimport)) HRGN __attribute__((__stdcall__)) CreateEllipticRgnIndirect(const RECT *lprect);
  __attribute__((dllimport)) HFONT __attribute__((__stdcall__)) CreateFontIndirectA(const LOGFONTA *lplf);
  __attribute__((dllimport)) HFONT __attribute__((__stdcall__)) CreateFontIndirectW(const LOGFONTW *lplf);
  __attribute__((dllimport)) HFONT __attribute__((__stdcall__)) CreateFontA(int cHeight,int cWidth,int cEscapement,int cOrientation,int cWeight,DWORD bItalic,DWORD bUnderline,DWORD bStrikeOut,DWORD iCharSet,DWORD iOutPrecision,DWORD iClipPrecision,DWORD iQuality,DWORD iPitchAndFamily,LPCSTR pszFaceName);
  __attribute__((dllimport)) HFONT __attribute__((__stdcall__)) CreateFontW(int cHeight,int cWidth,int cEscapement,int cOrientation,int cWeight,DWORD bItalic,DWORD bUnderline,DWORD bStrikeOut,DWORD iCharSet,DWORD iOutPrecision,DWORD iClipPrecision,DWORD iQuality,DWORD iPitchAndFamily,LPCWSTR pszFaceName);
  __attribute__((dllimport)) HBRUSH __attribute__((__stdcall__)) CreateHatchBrush(int iHatch,COLORREF color);
  __attribute__((dllimport)) HDC __attribute__((__stdcall__)) CreateICA(LPCSTR pszDriver,LPCSTR pszDevice,LPCSTR pszPort,const DEVMODEA *pdm);
  __attribute__((dllimport)) HDC __attribute__((__stdcall__)) CreateICW(LPCWSTR pszDriver,LPCWSTR pszDevice,LPCWSTR pszPort,const DEVMODEW *pdm);
  __attribute__((dllimport)) HDC __attribute__((__stdcall__)) CreateMetaFileA(LPCSTR pszFile);
  __attribute__((dllimport)) HDC __attribute__((__stdcall__)) CreateMetaFileW(LPCWSTR pszFile);
  __attribute__((dllimport)) HPALETTE __attribute__((__stdcall__)) CreatePalette(const LOGPALETTE *plpal);
  __attribute__((dllimport)) HPEN __attribute__((__stdcall__)) CreatePen(int iStyle,int cWidth,COLORREF color);
  __attribute__((dllimport)) HPEN __attribute__((__stdcall__)) CreatePenIndirect(const LOGPEN *plpen);
  __attribute__((dllimport)) HRGN __attribute__((__stdcall__)) CreatePolyPolygonRgn(const POINT *pptl,const INT *pc,int cPoly,int iMode);
  __attribute__((dllimport)) HBRUSH __attribute__((__stdcall__)) CreatePatternBrush(HBITMAP hbm);
  __attribute__((dllimport)) HRGN __attribute__((__stdcall__)) CreateRectRgn(int x1,int y1,int x2,int y2);
  __attribute__((dllimport)) HRGN __attribute__((__stdcall__)) CreateRectRgnIndirect(const RECT *lprect);
  __attribute__((dllimport)) HRGN __attribute__((__stdcall__)) CreateRoundRectRgn(int x1,int y1,int x2,int y2,int w,int h);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CreateScalableFontResourceA(DWORD fdwHidden,LPCSTR lpszFont,LPCSTR lpszFile,LPCSTR lpszPath);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CreateScalableFontResourceW(DWORD fdwHidden,LPCWSTR lpszFont,LPCWSTR lpszFile,LPCWSTR lpszPath);
  __attribute__((dllimport)) HBRUSH __attribute__((__stdcall__)) CreateSolidBrush(COLORREF color);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DeleteDC(HDC hdc);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DeleteMetaFile(HMETAFILE hmf);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DeleteObject(HGDIOBJ ho);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) DescribePixelFormat(HDC hdc,int iPixelFormat,UINT nBytes,LPPIXELFORMATDESCRIPTOR ppfd);
  typedef UINT (__attribute__((__stdcall__)) *LPFNDEVMODE)(HWND,HMODULE,LPDEVMODE,LPSTR,LPSTR,LPDEVMODE,LPSTR,UINT);
  typedef DWORD (__attribute__((__stdcall__)) *LPFNDEVCAPS)(LPSTR,LPSTR,UINT,LPSTR,LPDEVMODE);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) DeviceCapabilitiesA(LPCSTR pDevice,LPCSTR pPort,WORD fwCapability,LPSTR pOutput,const DEVMODEA *pDevMode);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) DeviceCapabilitiesW(LPCWSTR pDevice,LPCWSTR pPort,WORD fwCapability,LPWSTR pOutput,const DEVMODEW *pDevMode);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) DrawEscape(HDC hdc,int iEscape,int cjIn,LPCSTR lpIn);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) Ellipse(HDC hdc,int left,int top,int right,int bottom);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) EnumFontFamiliesExA(HDC hdc,LPLOGFONTA lpLogfont,FONTENUMPROCA lpProc,LPARAM lParam,DWORD dwFlags);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) EnumFontFamiliesExW(HDC hdc,LPLOGFONTW lpLogfont,FONTENUMPROCW lpProc,LPARAM lParam,DWORD dwFlags);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) EnumFontFamiliesA(HDC hdc,LPCSTR lpLogfont,FONTENUMPROCA lpProc,LPARAM lParam);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) EnumFontFamiliesW(HDC hdc,LPCWSTR lpLogfont,FONTENUMPROCW lpProc,LPARAM lParam);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) EnumFontsA(HDC hdc,LPCSTR lpLogfont,FONTENUMPROCA lpProc,LPARAM lParam);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) EnumFontsW(HDC hdc,LPCWSTR lpLogfont,FONTENUMPROCW lpProc,LPARAM lParam);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) EnumObjects(HDC hdc,int nType,GOBJENUMPROC lpFunc,LPARAM lParam);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EqualRgn(HRGN hrgn1,HRGN hrgn2);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) Escape(HDC hdc,int iEscape,int cjIn,LPCSTR pvIn,LPVOID pvOut);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) ExtEscape(HDC hdc,int iEscape,int cjInput,LPCSTR lpInData,int cjOutput,LPSTR lpOutData);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) ExcludeClipRect(HDC hdc,int left,int top,int right,int bottom);
  __attribute__((dllimport)) HRGN __attribute__((__stdcall__)) ExtCreateRegion(const XFORM *lpx,DWORD nCount,const RGNDATA *lpData);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ExtFloodFill(HDC hdc,int x,int y,COLORREF color,UINT type);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FillRgn(HDC hdc,HRGN hrgn,HBRUSH hbr);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FloodFill(HDC hdc,int x,int y,COLORREF color);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FrameRgn(HDC hdc,HRGN hrgn,HBRUSH hbr,int w,int h);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetROP2(HDC hdc);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetAspectRatioFilterEx(HDC hdc,LPSIZE lpsize);
  __attribute__((dllimport)) COLORREF __attribute__((__stdcall__)) GetBkColor(HDC hdc);
  __attribute__((dllimport)) COLORREF __attribute__((__stdcall__)) GetDCBrushColor(HDC hdc);
  __attribute__((dllimport)) COLORREF __attribute__((__stdcall__)) GetDCPenColor(HDC hdc);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetBkMode(HDC hdc);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) GetBitmapBits(HBITMAP hbit,LONG cb,LPVOID lpvBits);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetBitmapDimensionEx(HBITMAP hbit,LPSIZE lpsize);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetBoundsRect(HDC hdc,LPRECT lprect,UINT flags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetBrushOrgEx(HDC hdc,LPPOINT lppt);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetCharWidthA(HDC hdc,UINT iFirst,UINT iLast,LPINT lpBuffer);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetCharWidthW(HDC hdc,UINT iFirst,UINT iLast,LPINT lpBuffer);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetCharWidth32A(HDC hdc,UINT iFirst,UINT iLast,LPINT lpBuffer);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetCharWidth32W(HDC hdc,UINT iFirst,UINT iLast,LPINT lpBuffer);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetCharWidthFloatA(HDC hdc,UINT iFirst,UINT iLast,PFLOAT lpBuffer);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetCharWidthFloatW(HDC hdc,UINT iFirst,UINT iLast,PFLOAT lpBuffer);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetCharABCWidthsA(HDC hdc,UINT wFirst,UINT wLast,LPABC lpABC);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetCharABCWidthsW(HDC hdc,UINT wFirst,UINT wLast,LPABC lpABC);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetCharABCWidthsFloatA(HDC hdc,UINT iFirst,UINT iLast,LPABCFLOAT lpABC);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetCharABCWidthsFloatW(HDC hdc,UINT iFirst,UINT iLast,LPABCFLOAT lpABC);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetClipBox(HDC hdc,LPRECT lprect);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetClipRgn(HDC hdc,HRGN hrgn);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetMetaRgn(HDC hdc,HRGN hrgn);
  __attribute__((dllimport)) HGDIOBJ __attribute__((__stdcall__)) GetCurrentObject(HDC hdc,UINT type);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetCurrentPositionEx(HDC hdc,LPPOINT lppt);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetDeviceCaps(HDC hdc,int index);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetDIBits(HDC hdc,HBITMAP hbm,UINT start,UINT cLines,LPVOID lpvBits,LPBITMAPINFO lpbmi,UINT usage);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetFontData (HDC hdc,DWORD dwTable,DWORD dwOffset,PVOID pvBuffer,DWORD cjBuffer);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetGlyphOutlineA(HDC hdc,UINT uChar,UINT fuFormat,LPGLYPHMETRICS lpgm,DWORD cjBuffer,LPVOID pvBuffer,const MAT2 *lpmat2);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetGlyphOutlineW(HDC hdc,UINT uChar,UINT fuFormat,LPGLYPHMETRICS lpgm,DWORD cjBuffer,LPVOID pvBuffer,const MAT2 *lpmat2);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetGraphicsMode(HDC hdc);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetMapMode(HDC hdc);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetMetaFileBitsEx(HMETAFILE hMF,UINT cbBuffer,LPVOID lpData);
  __attribute__((dllimport)) HMETAFILE __attribute__((__stdcall__)) GetMetaFileA(LPCSTR lpName);
  __attribute__((dllimport)) HMETAFILE __attribute__((__stdcall__)) GetMetaFileW(LPCWSTR lpName);
  __attribute__((dllimport)) COLORREF __attribute__((__stdcall__)) GetNearestColor(HDC hdc,COLORREF color);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetNearestPaletteIndex(HPALETTE h,COLORREF color);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetObjectType(HGDIOBJ h);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetOutlineTextMetricsA(HDC hdc,UINT cjCopy,LPOUTLINETEXTMETRICA potm);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetOutlineTextMetricsW(HDC hdc,UINT cjCopy,LPOUTLINETEXTMETRICW potm);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetPaletteEntries(HPALETTE hpal,UINT iStart,UINT cEntries,LPPALETTEENTRY pPalEntries);
  __attribute__((dllimport)) COLORREF __attribute__((__stdcall__)) GetPixel(HDC hdc,int x,int y);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetPixelFormat(HDC hdc);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetPolyFillMode(HDC hdc);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetRasterizerCaps(LPRASTERIZER_STATUS lpraststat,UINT cjBytes);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetRandomRgn (HDC hdc,HRGN hrgn,INT i);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetRegionData(HRGN hrgn,DWORD nCount,LPRGNDATA lpRgnData);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetRgnBox(HRGN hrgn,LPRECT lprc);
  __attribute__((dllimport)) HGDIOBJ __attribute__((__stdcall__)) GetStockObject(int i);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetStretchBltMode(HDC hdc);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetSystemPaletteEntries(HDC hdc,UINT iStart,UINT cEntries,LPPALETTEENTRY pPalEntries);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetSystemPaletteUse(HDC hdc);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetTextCharacterExtra(HDC hdc);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetTextAlign(HDC hdc);
  __attribute__((dllimport)) COLORREF __attribute__((__stdcall__)) GetTextColor(HDC hdc);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetTextExtentPointA(HDC hdc,LPCSTR lpString,int c,LPSIZE lpsz);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetTextExtentPointW(HDC hdc,LPCWSTR lpString,int c,LPSIZE lpsz);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetTextExtentPoint32A(HDC hdc,LPCSTR lpString,int c,LPSIZE psizl);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetTextExtentPoint32W(HDC hdc,LPCWSTR lpString,int c,LPSIZE psizl);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetTextExtentExPointA(HDC hdc,LPCSTR lpszString,int cchString,int nMaxExtent,LPINT lpnFit,LPINT lpnDx,LPSIZE lpSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetTextExtentExPointW(HDC hdc,LPCWSTR lpszString,int cchString,int nMaxExtent,LPINT lpnFit,LPINT lpnDx,LPSIZE lpSize);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetTextCharset(HDC hdc);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetTextCharsetInfo(HDC hdc,LPFONTSIGNATURE lpSig,DWORD dwFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) TranslateCharsetInfo(DWORD *lpSrc,LPCHARSETINFO lpCs,DWORD dwFlags);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetFontLanguageInfo(HDC hdc);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetCharacterPlacementA(HDC hdc,LPCSTR lpString,int nCount,int nMexExtent,LPGCP_RESULTSA lpResults,DWORD dwFlags);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetCharacterPlacementW(HDC hdc,LPCWSTR lpString,int nCount,int nMexExtent,LPGCP_RESULTSW lpResults,DWORD dwFlags);
  typedef struct tagWCRANGE {
    WCHAR wcLow;
    USHORT cGlyphs;
  } WCRANGE,*PWCRANGE,*LPWCRANGE;
  typedef struct tagGLYPHSET {
    DWORD cbThis;
    DWORD flAccel;
    DWORD cGlyphsSupported;
    DWORD cRanges;
    WCRANGE ranges[1];
  } GLYPHSET,*PGLYPHSET,*LPGLYPHSET;
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetFontUnicodeRanges(HDC hdc,LPGLYPHSET lpgs);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetGlyphIndicesA(HDC hdc,LPCSTR lpstr,int c,LPWORD pgi,DWORD fl);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetGlyphIndicesW(HDC hdc,LPCWSTR lpstr,int c,LPWORD pgi,DWORD fl);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetTextExtentPointI(HDC hdc,LPWORD pgiIn,int cgi,LPSIZE psize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetTextExtentExPointI (HDC hdc,LPWORD lpwszString,int cwchString,int nMaxExtent,LPINT lpnFit,LPINT lpnDx,LPSIZE lpSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetCharWidthI(HDC hdc,UINT giFirst,UINT cgi,LPWORD pgi,LPINT piWidths);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetCharABCWidthsI(HDC hdc,UINT giFirst,UINT cgi,LPWORD pgi,LPABC pabc);
  typedef struct tagDESIGNVECTOR {
    DWORD dvReserved;
    DWORD dvNumAxes;
    LONG dvValues[16];
  } DESIGNVECTOR,*PDESIGNVECTOR,*LPDESIGNVECTOR;
  __attribute__((dllimport)) int __attribute__((__stdcall__)) AddFontResourceExA(LPCSTR name,DWORD fl,PVOID res);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) AddFontResourceExW(LPCWSTR name,DWORD fl,PVOID res);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) RemoveFontResourceExA(LPCSTR name,DWORD fl,PVOID pdv);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) RemoveFontResourceExW(LPCWSTR name,DWORD fl,PVOID pdv);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) AddFontMemResourceEx(PVOID pFileView,DWORD cjSize,PVOID pvResrved,DWORD *pNumFonts);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) RemoveFontMemResourceEx(HANDLE h);
  typedef struct tagAXISINFOA {
    LONG axMinValue;
    LONG axMaxValue;
    BYTE axAxisName[16];
  } AXISINFOA,*PAXISINFOA,*LPAXISINFOA;
  typedef struct tagAXISINFOW {
    LONG axMinValue;
    LONG axMaxValue;
    WCHAR axAxisName[16];
  } AXISINFOW,*PAXISINFOW,*LPAXISINFOW;
  typedef AXISINFOA AXISINFO;
  typedef PAXISINFOA PAXISINFO;
  typedef LPAXISINFOA LPAXISINFO;
  typedef struct tagAXESLISTA {
    DWORD axlReserved;
    DWORD axlNumAxes;
    AXISINFOA axlAxisInfo[16];
  } AXESLISTA,*PAXESLISTA,*LPAXESLISTA;
  typedef struct tagAXESLISTW {
    DWORD axlReserved;
    DWORD axlNumAxes;
    AXISINFOW axlAxisInfo[16];
  } AXESLISTW,*PAXESLISTW,*LPAXESLISTW;
  typedef AXESLISTA AXESLIST;
  typedef PAXESLISTA PAXESLIST;
  typedef LPAXESLISTA LPAXESLIST;
  typedef struct tagENUMLOGFONTEXDVA {
    ENUMLOGFONTEXA elfEnumLogfontEx;
    DESIGNVECTOR elfDesignVector;
  } ENUMLOGFONTEXDVA,*PENUMLOGFONTEXDVA,*LPENUMLOGFONTEXDVA;
  typedef struct tagENUMLOGFONTEXDVW {
    ENUMLOGFONTEXW elfEnumLogfontEx;
    DESIGNVECTOR elfDesignVector;
  } ENUMLOGFONTEXDVW,*PENUMLOGFONTEXDVW,*LPENUMLOGFONTEXDVW;
  typedef ENUMLOGFONTEXDVA ENUMLOGFONTEXDV;
  typedef PENUMLOGFONTEXDVA PENUMLOGFONTEXDV;
  typedef LPENUMLOGFONTEXDVA LPENUMLOGFONTEXDV;
  __attribute__((dllimport)) HFONT __attribute__((__stdcall__)) CreateFontIndirectExA(const ENUMLOGFONTEXDVA *);
  __attribute__((dllimport)) HFONT __attribute__((__stdcall__)) CreateFontIndirectExW(const ENUMLOGFONTEXDVW *);
  typedef struct tagENUMTEXTMETRICA {
    NEWTEXTMETRICEXA etmNewTextMetricEx;
    AXESLISTA etmAxesList;
  } ENUMTEXTMETRICA,*PENUMTEXTMETRICA,*LPENUMTEXTMETRICA;
  typedef struct tagENUMTEXTMETRICW
  {
    NEWTEXTMETRICEXW etmNewTextMetricEx;
    AXESLISTW etmAxesList;
  } ENUMTEXTMETRICW,*PENUMTEXTMETRICW,*LPENUMTEXTMETRICW;
  typedef ENUMTEXTMETRICA ENUMTEXTMETRIC;
  typedef PENUMTEXTMETRICA PENUMTEXTMETRIC;
  typedef LPENUMTEXTMETRICA LPENUMTEXTMETRIC;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetViewportExtEx(HDC hdc,LPSIZE lpsize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetViewportOrgEx(HDC hdc,LPPOINT lppoint);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetWindowExtEx(HDC hdc,LPSIZE lpsize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetWindowOrgEx(HDC hdc,LPPOINT lppoint);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) IntersectClipRect(HDC hdc,int left,int top,int right,int bottom);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) InvertRgn(HDC hdc,HRGN hrgn);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) LineDDA(int xStart,int yStart,int xEnd,int yEnd,LINEDDAPROC lpProc,LPARAM data);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) LineTo(HDC hdc,int x,int y);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) MaskBlt(HDC hdcDest,int xDest,int yDest,int width,int height,HDC hdcSrc,int xSrc,int ySrc,HBITMAP hbmMask,int xMask,int yMask,DWORD rop);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PlgBlt(HDC hdcDest,const POINT *lpPoint,HDC hdcSrc,int xSrc,int ySrc,int width,int height,HBITMAP hbmMask,int xMask,int yMask);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) OffsetClipRgn(HDC hdc,int x,int y);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) OffsetRgn(HRGN hrgn,int x,int y);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PatBlt(HDC hdc,int x,int y,int w,int h,DWORD rop);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) Pie(HDC hdc,int left,int top,int right,int bottom,int xr1,int yr1,int xr2,int yr2);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PlayMetaFile(HDC hdc,HMETAFILE hmf);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PaintRgn(HDC hdc,HRGN hrgn);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PolyPolygon(HDC hdc,const POINT *apt,const INT *asz,int csz);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PtInRegion(HRGN hrgn,int x,int y);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PtVisible(HDC hdc,int x,int y);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) RectInRegion(HRGN hrgn,const RECT *lprect);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) RectVisible(HDC hdc,const RECT *lprect);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) Rectangle(HDC hdc,int left,int top,int right,int bottom);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) RestoreDC(HDC hdc,int nSavedDC);
  __attribute__((dllimport)) HDC __attribute__((__stdcall__)) ResetDCA(HDC hdc,const DEVMODEA *lpdm);
  __attribute__((dllimport)) HDC __attribute__((__stdcall__)) ResetDCW(HDC hdc,const DEVMODEW *lpdm);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) RealizePalette(HDC hdc);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) RemoveFontResourceA(LPCSTR lpFileName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) RemoveFontResourceW(LPCWSTR lpFileName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) RoundRect(HDC hdc,int left,int top,int right,int bottom,int width,int height);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ResizePalette(HPALETTE hpal,UINT n);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) SaveDC(HDC hdc);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) SelectClipRgn(HDC hdc,HRGN hrgn);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) ExtSelectClipRgn(HDC hdc,HRGN hrgn,int mode);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) SetMetaRgn(HDC hdc);
  __attribute__((dllimport)) HGDIOBJ __attribute__((__stdcall__)) SelectObject(HDC hdc,HGDIOBJ h);
  __attribute__((dllimport)) HPALETTE __attribute__((__stdcall__)) SelectPalette(HDC hdc,HPALETTE hPal,WINBOOL bForceBkgd);
  __attribute__((dllimport)) COLORREF __attribute__((__stdcall__)) SetBkColor(HDC hdc,COLORREF color);
  __attribute__((dllimport)) COLORREF __attribute__((__stdcall__)) SetDCBrushColor(HDC hdc,COLORREF color);
  __attribute__((dllimport)) COLORREF __attribute__((__stdcall__)) SetDCPenColor(HDC hdc,COLORREF color);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) SetBkMode(HDC hdc,int mode);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) SetBitmapBits(HBITMAP hbm,DWORD cb,const void *pvBits);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) SetBoundsRect(HDC hdc,const RECT *lprect,UINT flags);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) SetDIBits(HDC hdc,HBITMAP hbm,UINT start,UINT cLines,const void *lpBits,const BITMAPINFO *lpbmi,UINT ColorUse);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) SetDIBitsToDevice(HDC hdc,int xDest,int yDest,DWORD w,DWORD h,int xSrc,int ySrc,UINT StartScan,UINT cLines,const void *lpvBits,const BITMAPINFO *lpbmi,UINT ColorUse);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) SetMapperFlags(HDC hdc,DWORD flags);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) SetGraphicsMode(HDC hdc,int iMode);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) SetMapMode(HDC hdc,int iMode);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) SetLayout(HDC hdc,DWORD l);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetLayout(HDC hdc);
  __attribute__((dllimport)) HMETAFILE __attribute__((__stdcall__)) SetMetaFileBitsEx(UINT cbBuffer,const BYTE *lpData);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) SetPaletteEntries(HPALETTE hpal,UINT iStart,UINT cEntries,const PALETTEENTRY *pPalEntries);
  __attribute__((dllimport)) COLORREF __attribute__((__stdcall__)) SetPixel(HDC hdc,int x,int y,COLORREF color);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetPixelV(HDC hdc,int x,int y,COLORREF color);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetPixelFormat(HDC hdc,int format,const PIXELFORMATDESCRIPTOR *ppfd);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) SetPolyFillMode(HDC hdc,int mode);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) StretchBlt(HDC hdcDest,int xDest,int yDest,int wDest,int hDest,HDC hdcSrc,int xSrc,int ySrc,int wSrc,int hSrc,DWORD rop);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetRectRgn(HRGN hrgn,int left,int top,int right,int bottom);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) StretchDIBits(HDC hdc,int xDest,int yDest,int DestWidth,int DestHeight,int xSrc,int ySrc,int SrcWidth,int SrcHeight,const void *lpBits,const BITMAPINFO *lpbmi,UINT iUsage,DWORD rop);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) SetROP2(HDC hdc,int rop2);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) SetStretchBltMode(HDC hdc,int mode);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) SetSystemPaletteUse(HDC hdc,UINT use);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) SetTextCharacterExtra(HDC hdc,int extra);
  __attribute__((dllimport)) COLORREF __attribute__((__stdcall__)) SetTextColor(HDC hdc,COLORREF color);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) SetTextAlign(HDC hdc,UINT align);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetTextJustification(HDC hdc,int extra,int count);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) UpdateColors(HDC hdc);
  typedef USHORT COLOR16;
  typedef struct _TRIVERTEX {
    LONG x;
    LONG y;
    COLOR16 Red;
    COLOR16 Green;
    COLOR16 Blue;
    COLOR16 Alpha;
  } TRIVERTEX,*PTRIVERTEX,*LPTRIVERTEX;
  typedef struct _GRADIENT_TRIANGLE {
    ULONG Vertex1;
    ULONG Vertex2;
    ULONG Vertex3;
  } GRADIENT_TRIANGLE,*PGRADIENT_TRIANGLE,*LPGRADIENT_TRIANGLE;
  typedef struct _GRADIENT_RECT {
    ULONG UpperLeft;
    ULONG LowerRight;
  } GRADIENT_RECT,*PGRADIENT_RECT,*LPGRADIENT_RECT;
  typedef struct _BLENDFUNCTION {
    BYTE BlendOp;
    BYTE BlendFlags;
    BYTE SourceConstantAlpha;
    BYTE AlphaFormat;
  } BLENDFUNCTION,*PBLENDFUNCTION;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AlphaBlend(HDC hdcDest,int xoriginDest,int yoriginDest,int wDest,int hDest,HDC hdcSrc,int xoriginSrc,int yoriginSrc,int wSrc,int hSrc,BLENDFUNCTION ftn);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GdiAlphaBlend(HDC hdcDest,int xoriginDest,int yoriginDest,int wDest,int hDest,HDC hdcSrc,int xoriginSrc,int yoriginSrc,int wSrc,int hSrc,BLENDFUNCTION ftn);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) TransparentBlt(HDC hdcDest,int xoriginDest,int yoriginDest,int wDest,int hDest,HDC hdcSrc,int xoriginSrc,int yoriginSrc,int wSrc,int hSrc,UINT crTransparent);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GdiTransparentBlt(HDC hdcDest,int xoriginDest,int yoriginDest,int wDest,int hDest,HDC hdcSrc,int xoriginSrc,int yoriginSrc,int wSrc,int hSrc,UINT crTransparent);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GradientFill(HDC hdc,PTRIVERTEX pVertex,ULONG nVertex,PVOID pMesh,ULONG nMesh,ULONG ulMode);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GdiGradientFill(HDC hdc,PTRIVERTEX pVertex,ULONG nVertex,PVOID pMesh,ULONG nMesh,ULONG ulMode);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PlayMetaFileRecord(HDC hdc,LPHANDLETABLE lpHandleTable,LPMETARECORD lpMR,UINT noObjs);
  typedef int (__attribute__((__stdcall__)) *MFENUMPROC)(HDC hdc,HANDLETABLE *lpht,METARECORD *lpMR,int nObj,LPARAM lParam);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumMetaFile(HDC hdc,HMETAFILE hmf,MFENUMPROC lpProc,LPARAM lParam);
  typedef int (__attribute__((__stdcall__)) *ENHMFENUMPROC)(HDC hdc,HANDLETABLE *lpht,const ENHMETARECORD *lpmr,int hHandles,LPARAM data);
  __attribute__((dllimport)) HENHMETAFILE __attribute__((__stdcall__)) CloseEnhMetaFile(HDC hdc);
  __attribute__((dllimport)) HENHMETAFILE __attribute__((__stdcall__)) CopyEnhMetaFileA(HENHMETAFILE hEnh,LPCSTR lpFileName);
  __attribute__((dllimport)) HENHMETAFILE __attribute__((__stdcall__)) CopyEnhMetaFileW(HENHMETAFILE hEnh,LPCWSTR lpFileName);
  __attribute__((dllimport)) HDC __attribute__((__stdcall__)) CreateEnhMetaFileA(HDC hdc,LPCSTR lpFilename,const RECT *lprc,LPCSTR lpDesc);
  __attribute__((dllimport)) HDC __attribute__((__stdcall__)) CreateEnhMetaFileW(HDC hdc,LPCWSTR lpFilename,const RECT *lprc,LPCWSTR lpDesc);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DeleteEnhMetaFile(HENHMETAFILE hmf);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumEnhMetaFile(HDC hdc,HENHMETAFILE hmf,ENHMFENUMPROC lpProc,LPVOID lpParam,const RECT *lpRect);
  __attribute__((dllimport)) HENHMETAFILE __attribute__((__stdcall__)) GetEnhMetaFileA(LPCSTR lpName);
  __attribute__((dllimport)) HENHMETAFILE __attribute__((__stdcall__)) GetEnhMetaFileW(LPCWSTR lpName);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetEnhMetaFileBits(HENHMETAFILE hEMF,UINT nSize,LPBYTE lpData);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetEnhMetaFileDescriptionA(HENHMETAFILE hemf,UINT cchBuffer,LPSTR lpDescription);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetEnhMetaFileDescriptionW(HENHMETAFILE hemf,UINT cchBuffer,LPWSTR lpDescription);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetEnhMetaFileHeader(HENHMETAFILE hemf,UINT nSize,LPENHMETAHEADER lpEnhMetaHeader);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetEnhMetaFilePaletteEntries(HENHMETAFILE hemf,UINT nNumEntries,LPPALETTEENTRY lpPaletteEntries);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetEnhMetaFilePixelFormat(HENHMETAFILE hemf,UINT cbBuffer,PIXELFORMATDESCRIPTOR *ppfd);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetWinMetaFileBits(HENHMETAFILE hemf,UINT cbData16,LPBYTE pData16,INT iMapMode,HDC hdcRef);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PlayEnhMetaFile(HDC hdc,HENHMETAFILE hmf,const RECT *lprect);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PlayEnhMetaFileRecord(HDC hdc,LPHANDLETABLE pht,const ENHMETARECORD *pmr,UINT cht);
  __attribute__((dllimport)) HENHMETAFILE __attribute__((__stdcall__)) SetEnhMetaFileBits(UINT nSize,const BYTE *pb);
  __attribute__((dllimport)) HENHMETAFILE __attribute__((__stdcall__)) SetWinMetaFileBits(UINT nSize,const BYTE *lpMeta16Data,HDC hdcRef,const METAFILEPICT *lpMFP);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GdiComment(HDC hdc,UINT nSize,const BYTE *lpData);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetTextMetricsA(HDC hdc,LPTEXTMETRICA lptm);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetTextMetricsW(HDC hdc,LPTEXTMETRICW lptm);
  typedef struct tagDIBSECTION {
    BITMAP dsBm;
    BITMAPINFOHEADER dsBmih;
    DWORD dsBitfields[3];
    HANDLE dshSection;
    DWORD dsOffset;
  } DIBSECTION,*LPDIBSECTION,*PDIBSECTION;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AngleArc(HDC hdc,int x,int y,DWORD r,FLOAT StartAngle,FLOAT SweepAngle);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PolyPolyline(HDC hdc,const POINT *apt,const DWORD *asz,DWORD csz);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetWorldTransform(HDC hdc,LPXFORM lpxf);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetWorldTransform(HDC hdc,const XFORM *lpxf);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ModifyWorldTransform(HDC hdc,const XFORM *lpxf,DWORD mode);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CombineTransform(LPXFORM lpxfOut,const XFORM *lpxf1,const XFORM *lpxf2);
  __attribute__((dllimport)) HBITMAP __attribute__((__stdcall__)) CreateDIBSection(HDC hdc,const BITMAPINFO *lpbmi,UINT usage,void **ppvBits,HANDLE hSection,DWORD offset);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetDIBColorTable(HDC hdc,UINT iStart,UINT cEntries,RGBQUAD *prgbq);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) SetDIBColorTable(HDC hdc,UINT iStart,UINT cEntries,const RGBQUAD *prgbq);
  typedef struct tagCOLORADJUSTMENT {
    WORD caSize;
    WORD caFlags;
    WORD caIlluminantIndex;
    WORD caRedGamma;
    WORD caGreenGamma;
    WORD caBlueGamma;
    WORD caReferenceBlack;
    WORD caReferenceWhite;
    SHORT caContrast;
    SHORT caBrightness;
    SHORT caColorfulness;
    SHORT caRedGreenTint;
  } COLORADJUSTMENT,*PCOLORADJUSTMENT,*LPCOLORADJUSTMENT;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetColorAdjustment(HDC hdc,const COLORADJUSTMENT *lpca);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetColorAdjustment(HDC hdc,LPCOLORADJUSTMENT lpca);
  __attribute__((dllimport)) HPALETTE __attribute__((__stdcall__)) CreateHalftonePalette(HDC hdc);
  typedef WINBOOL (__attribute__((__stdcall__)) *ABORTPROC)(HDC,int);
  typedef struct _DOCINFOA {
    int cbSize;
    LPCSTR lpszDocName;
    LPCSTR lpszOutput;
    LPCSTR lpszDatatype;
    DWORD fwType;
  } DOCINFOA,*LPDOCINFOA;
  typedef struct _DOCINFOW {
    int cbSize;
    LPCWSTR lpszDocName;
    LPCWSTR lpszOutput;
    LPCWSTR lpszDatatype;
    DWORD fwType;
  } DOCINFOW,*LPDOCINFOW;
  typedef DOCINFOA DOCINFO;
  typedef LPDOCINFOA LPDOCINFO;
  __attribute__((dllimport)) int __attribute__((__stdcall__)) StartDocA(HDC hdc,const DOCINFOA *lpdi);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) StartDocW(HDC hdc,const DOCINFOW *lpdi);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) EndDoc(HDC hdc);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) StartPage(HDC hdc);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) EndPage(HDC hdc);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) AbortDoc(HDC hdc);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) SetAbortProc(HDC hdc,ABORTPROC lpProc);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AbortPath(HDC hdc);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ArcTo(HDC hdc,int left,int top,int right,int bottom,int xr1,int yr1,int xr2,int yr2);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) BeginPath(HDC hdc);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CloseFigure(HDC hdc);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EndPath(HDC hdc);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FillPath(HDC hdc);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FlattenPath(HDC hdc);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetPath(HDC hdc,LPPOINT apt,LPBYTE aj,int cpt);
  __attribute__((dllimport)) HRGN __attribute__((__stdcall__)) PathToRegion(HDC hdc);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PolyDraw(HDC hdc,const POINT *apt,const BYTE *aj,int cpt);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SelectClipPath(HDC hdc,int mode);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) SetArcDirection(HDC hdc,int dir);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetMiterLimit(HDC hdc,FLOAT limit,PFLOAT old);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) StrokeAndFillPath(HDC hdc);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) StrokePath(HDC hdc);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) WidenPath(HDC hdc);
  __attribute__((dllimport)) HPEN __attribute__((__stdcall__)) ExtCreatePen(DWORD iPenStyle,DWORD cWidth,const LOGBRUSH *plbrush,DWORD cStyle,const DWORD *pstyle);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetMiterLimit(HDC hdc,PFLOAT plimit);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetArcDirection(HDC hdc);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetObjectA(HANDLE h,int c,LPVOID pv);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetObjectW(HANDLE h,int c,LPVOID pv);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) MoveToEx(HDC hdc,int x,int y,LPPOINT lppt);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) TextOutA(HDC hdc,int x,int y,LPCSTR lpString,int c);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) TextOutW(HDC hdc,int x,int y,LPCWSTR lpString,int c);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ExtTextOutA(HDC hdc,int x,int y,UINT options,const RECT *lprect,LPCSTR lpString,UINT c,const INT *lpDx);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ExtTextOutW(HDC hdc,int x,int y,UINT options,const RECT *lprect,LPCWSTR lpString,UINT c,const INT *lpDx);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PolyTextOutA(HDC hdc,const POLYTEXTA *ppt,int nstrings);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PolyTextOutW(HDC hdc,const POLYTEXTW *ppt,int nstrings);
  __attribute__((dllimport)) HRGN __attribute__((__stdcall__)) CreatePolygonRgn(const POINT *pptl,int cPoint,int iMode);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DPtoLP(HDC hdc,LPPOINT lppt,int c);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) LPtoDP(HDC hdc,LPPOINT lppt,int c);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) Polygon(HDC hdc,const POINT *apt,int cpt);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) Polyline(HDC hdc,const POINT *apt,int cpt);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PolyBezier(HDC hdc,const POINT *apt,DWORD cpt);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PolyBezierTo(HDC hdc,const POINT *apt,DWORD cpt);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PolylineTo(HDC hdc,const POINT *apt,DWORD cpt);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetViewportExtEx(HDC hdc,int x,int y,LPSIZE lpsz);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetViewportOrgEx(HDC hdc,int x,int y,LPPOINT lppt);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetWindowExtEx(HDC hdc,int x,int y,LPSIZE lpsz);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetWindowOrgEx(HDC hdc,int x,int y,LPPOINT lppt);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) OffsetViewportOrgEx(HDC hdc,int x,int y,LPPOINT lppt);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) OffsetWindowOrgEx(HDC hdc,int x,int y,LPPOINT lppt);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ScaleViewportExtEx(HDC hdc,int xn,int dx,int yn,int yd,LPSIZE lpsz);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ScaleWindowExtEx(HDC hdc,int xn,int xd,int yn,int yd,LPSIZE lpsz);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetBitmapDimensionEx(HBITMAP hbm,int w,int h,LPSIZE lpsz);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetBrushOrgEx(HDC hdc,int x,int y,LPPOINT lppt);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetTextFaceA(HDC hdc,int c,LPSTR lpName);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetTextFaceW(HDC hdc,int c,LPWSTR lpName);
  typedef struct tagKERNINGPAIR {
    WORD wFirst;
    WORD wSecond;
    int iKernAmount;
  } KERNINGPAIR,*LPKERNINGPAIR;
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetKerningPairsA(HDC hdc,DWORD nPairs,LPKERNINGPAIR lpKernPair);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetKerningPairsW(HDC hdc,DWORD nPairs,LPKERNINGPAIR lpKernPair);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetDCOrgEx(HDC hdc,LPPOINT lppt);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FixBrushOrgEx(HDC hdc,int x,int y,LPPOINT ptl);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) UnrealizeObject(HGDIOBJ h);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GdiFlush(void);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GdiSetBatchLimit(DWORD dw);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GdiGetBatchLimit(void);
  typedef int (__attribute__((__stdcall__)) *ICMENUMPROCA)(LPSTR,LPARAM);
  typedef int (__attribute__((__stdcall__)) *ICMENUMPROCW)(LPWSTR,LPARAM);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) SetICMMode(HDC hdc,int mode);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CheckColorsInGamut(HDC hdc,LPVOID lpRGBTriple,LPVOID dlpBuffer,DWORD nCount);
  __attribute__((dllimport)) HCOLORSPACE __attribute__((__stdcall__)) GetColorSpace(HDC hdc);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetLogColorSpaceA(HCOLORSPACE hColorSpace,LPLOGCOLORSPACEA lpBuffer,DWORD nSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetLogColorSpaceW(HCOLORSPACE hColorSpace,LPLOGCOLORSPACEW lpBuffer,DWORD nSize);
  __attribute__((dllimport)) HCOLORSPACE __attribute__((__stdcall__)) CreateColorSpaceA(LPLOGCOLORSPACEA lplcs);
  __attribute__((dllimport)) HCOLORSPACE __attribute__((__stdcall__)) CreateColorSpaceW(LPLOGCOLORSPACEW lplcs);
  __attribute__((dllimport)) HCOLORSPACE __attribute__((__stdcall__)) SetColorSpace(HDC hdc,HCOLORSPACE hcs);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DeleteColorSpace(HCOLORSPACE hcs);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetICMProfileA(HDC hdc,LPDWORD pBufSize,LPSTR pszFilename);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetICMProfileW(HDC hdc,LPDWORD pBufSize,LPWSTR pszFilename);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetICMProfileA(HDC hdc,LPSTR lpFileName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetICMProfileW(HDC hdc,LPWSTR lpFileName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetDeviceGammaRamp(HDC hdc,LPVOID lpRamp);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetDeviceGammaRamp(HDC hdc,LPVOID lpRamp);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ColorMatchToTarget(HDC hdc,HDC hdcTarget,DWORD action);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) EnumICMProfilesA(HDC hdc,ICMENUMPROCA lpProc,LPARAM lParam);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) EnumICMProfilesW(HDC hdc,ICMENUMPROCW lpProc,LPARAM lParam);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) UpdateICMRegKeyA(DWORD reserved,LPSTR lpszCMID,LPSTR lpszFileName,UINT command);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) UpdateICMRegKeyW(DWORD reserved,LPWSTR lpszCMID,LPWSTR lpszFileName,UINT command);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ColorCorrectPalette(HDC hdc,HPALETTE hPal,DWORD deFirst,DWORD num);
  typedef struct tagEMR {
    DWORD iType;
    DWORD nSize;
  } EMR,*PEMR;
  typedef struct tagEMRTEXT {
    POINTL ptlReference;
    DWORD nChars;
    DWORD offString;
    DWORD fOptions;
    RECTL rcl;
    DWORD offDx;
  } EMRTEXT,*PEMRTEXT;
  typedef struct tagABORTPATH {
    EMR emr;
  } EMRABORTPATH,*PEMRABORTPATH,EMRBEGINPATH,*PEMRBEGINPATH,EMRENDPATH,*PEMRENDPATH,EMRCLOSEFIGURE,*PEMRCLOSEFIGURE,EMRFLATTENPATH,*PEMRFLATTENPATH,EMRWIDENPATH,*PEMRWIDENPATH,EMRSETMETARGN,*PEMRSETMETARGN,EMRSAVEDC,*PEMRSAVEDC,EMRREALIZEPALETTE,*PEMRREALIZEPALETTE;
  typedef struct tagEMRSELECTCLIPPATH {
    EMR emr;
    DWORD iMode;
  } EMRSELECTCLIPPATH,*PEMRSELECTCLIPPATH,EMRSETBKMODE,*PEMRSETBKMODE,EMRSETMAPMODE,*PEMRSETMAPMODE,EMRSETLAYOUT,*PEMRSETLAYOUT,
    EMRSETPOLYFILLMODE,*PEMRSETPOLYFILLMODE,EMRSETROP2,*PEMRSETROP2,EMRSETSTRETCHBLTMODE,*PEMRSETSTRETCHBLTMODE,EMRSETICMMODE,
    *PEMRSETICMMODE,EMRSETTEXTALIGN,*PEMRSETTEXTALIGN;
  typedef struct tagEMRSETMITERLIMIT {
    EMR emr;
    FLOAT eMiterLimit;
  } EMRSETMITERLIMIT,*PEMRSETMITERLIMIT;
  typedef struct tagEMRRESTOREDC {
    EMR emr;
    LONG iRelative;
  } EMRRESTOREDC,*PEMRRESTOREDC;
  typedef struct tagEMRSETARCDIRECTION {
    EMR emr;
    DWORD iArcDirection;
  } EMRSETARCDIRECTION,*PEMRSETARCDIRECTION;
  typedef struct tagEMRSETMAPPERFLAGS {
    EMR emr;
    DWORD dwFlags;
  } EMRSETMAPPERFLAGS,*PEMRSETMAPPERFLAGS;
  typedef struct tagEMRSETTEXTCOLOR {
    EMR emr;
    COLORREF crColor;
  } EMRSETBKCOLOR,*PEMRSETBKCOLOR,EMRSETTEXTCOLOR,*PEMRSETTEXTCOLOR;
  typedef struct tagEMRSELECTOBJECT {
    EMR emr;
    DWORD ihObject;
  } EMRSELECTOBJECT,*PEMRSELECTOBJECT,EMRDELETEOBJECT,*PEMRDELETEOBJECT;
  typedef struct tagEMRSELECTPALETTE {
    EMR emr;
    DWORD ihPal;
  } EMRSELECTPALETTE,*PEMRSELECTPALETTE;
  typedef struct tagEMRRESIZEPALETTE {
    EMR emr;
    DWORD ihPal;
    DWORD cEntries;
  } EMRRESIZEPALETTE,*PEMRRESIZEPALETTE;
  typedef struct tagEMRSETPALETTEENTRIES {
    EMR emr;
    DWORD ihPal;
    DWORD iStart;
    DWORD cEntries;
    PALETTEENTRY aPalEntries[1];
  } EMRSETPALETTEENTRIES,*PEMRSETPALETTEENTRIES;
  typedef struct tagEMRSETCOLORADJUSTMENT {
    EMR emr;
    COLORADJUSTMENT ColorAdjustment;
  } EMRSETCOLORADJUSTMENT,*PEMRSETCOLORADJUSTMENT;
  typedef struct tagEMRGDICOMMENT {
    EMR emr;
    DWORD cbData;
    BYTE Data[1];
  } EMRGDICOMMENT,*PEMRGDICOMMENT;
  typedef struct tagEMREOF {
    EMR emr;
    DWORD nPalEntries;
    DWORD offPalEntries;
    DWORD nSizeLast;
  } EMREOF,*PEMREOF;
  typedef struct tagEMRLINETO {
    EMR emr;
    POINTL ptl;
  } EMRLINETO,*PEMRLINETO,EMRMOVETOEX,*PEMRMOVETOEX;
  typedef struct tagEMROFFSETCLIPRGN {
    EMR emr;
    POINTL ptlOffset;
  } EMROFFSETCLIPRGN,*PEMROFFSETCLIPRGN;
  typedef struct tagEMRFILLPATH {
    EMR emr;
    RECTL rclBounds;
  } EMRFILLPATH,*PEMRFILLPATH,EMRSTROKEANDFILLPATH,*PEMRSTROKEANDFILLPATH,EMRSTROKEPATH,*PEMRSTROKEPATH;
  typedef struct tagEMREXCLUDECLIPRECT {
    EMR emr;
    RECTL rclClip;
  } EMREXCLUDECLIPRECT,*PEMREXCLUDECLIPRECT,EMRINTERSECTCLIPRECT,*PEMRINTERSECTCLIPRECT;
  typedef struct tagEMRSETVIEWPORTORGEX {
    EMR emr;
    POINTL ptlOrigin;
  } EMRSETVIEWPORTORGEX,*PEMRSETVIEWPORTORGEX,EMRSETWINDOWORGEX,*PEMRSETWINDOWORGEX,EMRSETBRUSHORGEX,*PEMRSETBRUSHORGEX;
  typedef struct tagEMRSETVIEWPORTEXTEX {
    EMR emr;
    SIZEL szlExtent;
  } EMRSETVIEWPORTEXTEX,*PEMRSETVIEWPORTEXTEX,EMRSETWINDOWEXTEX,*PEMRSETWINDOWEXTEX;
  typedef struct tagEMRSCALEVIEWPORTEXTEX {
    EMR emr;
    LONG xNum;
    LONG xDenom;
    LONG yNum;
    LONG yDenom;
  } EMRSCALEVIEWPORTEXTEX,*PEMRSCALEVIEWPORTEXTEX,EMRSCALEWINDOWEXTEX,*PEMRSCALEWINDOWEXTEX;
  typedef struct tagEMRSETWORLDTRANSFORM {
    EMR emr;
    XFORM xform;
  } EMRSETWORLDTRANSFORM,*PEMRSETWORLDTRANSFORM;
  typedef struct tagEMRMODIFYWORLDTRANSFORM {
    EMR emr;
    XFORM xform;
    DWORD iMode;
  } EMRMODIFYWORLDTRANSFORM,*PEMRMODIFYWORLDTRANSFORM;
  typedef struct tagEMRSETPIXELV {
    EMR emr;
    POINTL ptlPixel;
    COLORREF crColor;
  } EMRSETPIXELV,*PEMRSETPIXELV;
  typedef struct tagEMREXTFLOODFILL {
    EMR emr;
    POINTL ptlStart;
    COLORREF crColor;
    DWORD iMode;
  } EMREXTFLOODFILL,*PEMREXTFLOODFILL;
  typedef struct tagEMRELLIPSE {
    EMR emr;
    RECTL rclBox;
  } EMRELLIPSE,*PEMRELLIPSE,EMRRECTANGLE,*PEMRRECTANGLE;
  typedef struct tagEMRROUNDRECT {
    EMR emr;
    RECTL rclBox;
    SIZEL szlCorner;
  } EMRROUNDRECT,*PEMRROUNDRECT;
  typedef struct tagEMRARC {
    EMR emr;
    RECTL rclBox;
    POINTL ptlStart;
    POINTL ptlEnd;
  } EMRARC,*PEMRARC,EMRARCTO,*PEMRARCTO,EMRCHORD,*PEMRCHORD,EMRPIE,*PEMRPIE;
  typedef struct tagEMRANGLEARC {
    EMR emr;
    POINTL ptlCenter;
    DWORD nRadius;
    FLOAT eStartAngle;
    FLOAT eSweepAngle;
  } EMRANGLEARC,*PEMRANGLEARC;
  typedef struct tagEMRPOLYLINE {
    EMR emr;
    RECTL rclBounds;
    DWORD cptl;
    POINTL aptl[1];
  } EMRPOLYLINE,*PEMRPOLYLINE,EMRPOLYBEZIER,*PEMRPOLYBEZIER,EMRPOLYGON,*PEMRPOLYGON,EMRPOLYBEZIERTO,*PEMRPOLYBEZIERTO,EMRPOLYLINETO,*PEMRPOLYLINETO;
  typedef struct tagEMRPOLYLINE16 {
    EMR emr;
    RECTL rclBounds;
    DWORD cpts;
    POINTS apts[1];
  } EMRPOLYLINE16,*PEMRPOLYLINE16,EMRPOLYBEZIER16,*PEMRPOLYBEZIER16,EMRPOLYGON16,*PEMRPOLYGON16,EMRPOLYBEZIERTO16,*PEMRPOLYBEZIERTO16,EMRPOLYLINETO16,*PEMRPOLYLINETO16;
  typedef struct tagEMRPOLYDRAW {
    EMR emr;
    RECTL rclBounds;
    DWORD cptl;
    POINTL aptl[1];
    BYTE abTypes[1];
  } EMRPOLYDRAW,*PEMRPOLYDRAW;
  typedef struct tagEMRPOLYDRAW16 {
    EMR emr;
    RECTL rclBounds;
    DWORD cpts;
    POINTS apts[1];
    BYTE abTypes[1];
  } EMRPOLYDRAW16,*PEMRPOLYDRAW16;
  typedef struct tagEMRPOLYPOLYLINE {
    EMR emr;
    RECTL rclBounds;
    DWORD nPolys;
    DWORD cptl;
    DWORD aPolyCounts[1];
    POINTL aptl[1];
  } EMRPOLYPOLYLINE,*PEMRPOLYPOLYLINE,EMRPOLYPOLYGON,*PEMRPOLYPOLYGON;
  typedef struct tagEMRPOLYPOLYLINE16 {
    EMR emr;
    RECTL rclBounds;
    DWORD nPolys;
    DWORD cpts;
    DWORD aPolyCounts[1];
    POINTS apts[1];
  } EMRPOLYPOLYLINE16,*PEMRPOLYPOLYLINE16,EMRPOLYPOLYGON16,*PEMRPOLYPOLYGON16;
  typedef struct tagEMRINVERTRGN {
    EMR emr;
    RECTL rclBounds;
    DWORD cbRgnData;
    BYTE RgnData[1];
  } EMRINVERTRGN,*PEMRINVERTRGN,EMRPAINTRGN,*PEMRPAINTRGN;
  typedef struct tagEMRFILLRGN {
    EMR emr;
    RECTL rclBounds;
    DWORD cbRgnData;
    DWORD ihBrush;
    BYTE RgnData[1];
  } EMRFILLRGN,*PEMRFILLRGN;
  typedef struct tagEMRFRAMERGN {
    EMR emr;
    RECTL rclBounds;
    DWORD cbRgnData;
    DWORD ihBrush;
    SIZEL szlStroke;
    BYTE RgnData[1];
  } EMRFRAMERGN,*PEMRFRAMERGN;
  typedef struct tagEMREXTSELECTCLIPRGN {
    EMR emr;
    DWORD cbRgnData;
    DWORD iMode;
    BYTE RgnData[1];
  } EMREXTSELECTCLIPRGN,*PEMREXTSELECTCLIPRGN;
  typedef struct tagEMREXTTEXTOUTA {
    EMR emr;
    RECTL rclBounds;
    DWORD iGraphicsMode;
    FLOAT exScale;
    FLOAT eyScale;
    EMRTEXT emrtext;
  } EMREXTTEXTOUTA,*PEMREXTTEXTOUTA,EMREXTTEXTOUTW,*PEMREXTTEXTOUTW;
  typedef struct tagEMRPOLYTEXTOUTA {
    EMR emr;
    RECTL rclBounds;
    DWORD iGraphicsMode;
    FLOAT exScale;
    FLOAT eyScale;
    LONG cStrings;
    EMRTEXT aemrtext[1];
  } EMRPOLYTEXTOUTA,*PEMRPOLYTEXTOUTA,EMRPOLYTEXTOUTW,*PEMRPOLYTEXTOUTW;
  typedef struct tagEMRBITBLT {
    EMR emr;
    RECTL rclBounds;
    LONG xDest;
    LONG yDest;
    LONG cxDest;
    LONG cyDest;
    DWORD dwRop;
    LONG xSrc;
    LONG ySrc;
    XFORM xformSrc;
    COLORREF crBkColorSrc;
    DWORD iUsageSrc;
    DWORD offBmiSrc;
    DWORD cbBmiSrc;
    DWORD offBitsSrc;
    DWORD cbBitsSrc;
  } EMRBITBLT,*PEMRBITBLT;
  typedef struct tagEMRSTRETCHBLT {
    EMR emr;
    RECTL rclBounds;
    LONG xDest;
    LONG yDest;
    LONG cxDest;
    LONG cyDest;
    DWORD dwRop;
    LONG xSrc;
    LONG ySrc;
    XFORM xformSrc;
    COLORREF crBkColorSrc;
    DWORD iUsageSrc;
    DWORD offBmiSrc;
    DWORD cbBmiSrc;
    DWORD offBitsSrc;
    DWORD cbBitsSrc;
    LONG cxSrc;
    LONG cySrc;
  } EMRSTRETCHBLT,*PEMRSTRETCHBLT;
  typedef struct tagEMRMASKBLT {
    EMR emr;
    RECTL rclBounds;
    LONG xDest;
    LONG yDest;
    LONG cxDest;
    LONG cyDest;
    DWORD dwRop;
    LONG xSrc;
    LONG ySrc;
    XFORM xformSrc;
    COLORREF crBkColorSrc;
    DWORD iUsageSrc;
    DWORD offBmiSrc;
    DWORD cbBmiSrc;
    DWORD offBitsSrc;
    DWORD cbBitsSrc;
    LONG xMask;
    LONG yMask;
    DWORD iUsageMask;
    DWORD offBmiMask;
    DWORD cbBmiMask;
    DWORD offBitsMask;
    DWORD cbBitsMask;
  } EMRMASKBLT,*PEMRMASKBLT;
  typedef struct tagEMRPLGBLT {
    EMR emr;
    RECTL rclBounds;
    POINTL aptlDest[3];
    LONG xSrc;
    LONG ySrc;
    LONG cxSrc;
    LONG cySrc;
    XFORM xformSrc;
    COLORREF crBkColorSrc;
    DWORD iUsageSrc;
    DWORD offBmiSrc;
    DWORD cbBmiSrc;
    DWORD offBitsSrc;
    DWORD cbBitsSrc;
    LONG xMask;
    LONG yMask;
    DWORD iUsageMask;
    DWORD offBmiMask;
    DWORD cbBmiMask;
    DWORD offBitsMask;
    DWORD cbBitsMask;
  } EMRPLGBLT,*PEMRPLGBLT;
  typedef struct tagEMRSETDIBITSTODEVICE {
    EMR emr;
    RECTL rclBounds;
    LONG xDest;
    LONG yDest;
    LONG xSrc;
    LONG ySrc;
    LONG cxSrc;
    LONG cySrc;
    DWORD offBmiSrc;
    DWORD cbBmiSrc;
    DWORD offBitsSrc;
    DWORD cbBitsSrc;
    DWORD iUsageSrc;
    DWORD iStartScan;
    DWORD cScans;
  } EMRSETDIBITSTODEVICE,*PEMRSETDIBITSTODEVICE;
  typedef struct tagEMRSTRETCHDIBITS {
    EMR emr;
    RECTL rclBounds;
    LONG xDest;
    LONG yDest;
    LONG xSrc;
    LONG ySrc;
    LONG cxSrc;
    LONG cySrc;
    DWORD offBmiSrc;
    DWORD cbBmiSrc;
    DWORD offBitsSrc;
    DWORD cbBitsSrc;
    DWORD iUsageSrc;
    DWORD dwRop;
    LONG cxDest;
    LONG cyDest;
  } EMRSTRETCHDIBITS,*PEMRSTRETCHDIBITS;
  typedef struct tagEMREXTCREATEFONTINDIRECTW {
    EMR emr;
    DWORD ihFont;
    EXTLOGFONTW elfw;
  } EMREXTCREATEFONTINDIRECTW,*PEMREXTCREATEFONTINDIRECTW;
  typedef struct tagEMRCREATEPALETTE {
    EMR emr;
    DWORD ihPal;
    LOGPALETTE lgpl;
  } EMRCREATEPALETTE,*PEMRCREATEPALETTE;
  typedef struct tagEMRCREATEPEN {
    EMR emr;
    DWORD ihPen;
    LOGPEN lopn;
  } EMRCREATEPEN,*PEMRCREATEPEN;
  typedef struct tagEMREXTCREATEPEN {
    EMR emr;
    DWORD ihPen;
    DWORD offBmi;
    DWORD cbBmi;
    DWORD offBits;
    DWORD cbBits;
    EXTLOGPEN elp;
  } EMREXTCREATEPEN,*PEMREXTCREATEPEN;
  typedef struct tagEMRCREATEBRUSHINDIRECT {
    EMR emr;
    DWORD ihBrush;
    LOGBRUSH32 lb;
  } EMRCREATEBRUSHINDIRECT,*PEMRCREATEBRUSHINDIRECT;
  typedef struct tagEMRCREATEMONOBRUSH {
    EMR emr;
    DWORD ihBrush;
    DWORD iUsage;
    DWORD offBmi;
    DWORD cbBmi;
    DWORD offBits;
    DWORD cbBits;
  } EMRCREATEMONOBRUSH,*PEMRCREATEMONOBRUSH;
  typedef struct tagEMRCREATEDIBPATTERNBRUSHPT {
    EMR emr;
    DWORD ihBrush;
    DWORD iUsage;
    DWORD offBmi;
    DWORD cbBmi;
    DWORD offBits;
    DWORD cbBits;
  } EMRCREATEDIBPATTERNBRUSHPT,*PEMRCREATEDIBPATTERNBRUSHPT;
  typedef struct tagEMRFORMAT {
    DWORD dSignature;
    DWORD nVersion;
    DWORD cbData;
    DWORD offData;
  } EMRFORMAT,*PEMRFORMAT;
  typedef struct tagEMRGLSRECORD {
    EMR emr;
    DWORD cbData;
    BYTE Data[1];
  } EMRGLSRECORD,*PEMRGLSRECORD;
  typedef struct tagEMRGLSBOUNDEDRECORD {
    EMR emr;
    RECTL rclBounds;
    DWORD cbData;
    BYTE Data[1];
  } EMRGLSBOUNDEDRECORD,*PEMRGLSBOUNDEDRECORD;
  typedef struct tagEMRPIXELFORMAT {
    EMR emr;
    PIXELFORMATDESCRIPTOR pfd;
  } EMRPIXELFORMAT,*PEMRPIXELFORMAT;
  typedef struct tagEMRCREATECOLORSPACE {
    EMR emr;
    DWORD ihCS;
    LOGCOLORSPACEA lcs;
  } EMRCREATECOLORSPACE,*PEMRCREATECOLORSPACE;
  typedef struct tagEMRSETCOLORSPACE {
    EMR emr;
    DWORD ihCS;
  } EMRSETCOLORSPACE,*PEMRSETCOLORSPACE,EMRSELECTCOLORSPACE,*PEMRSELECTCOLORSPACE,EMRDELETECOLORSPACE,*PEMRDELETECOLORSPACE;
  typedef struct tagEMREXTESCAPE {
    EMR emr;
    INT iEscape;
    INT cbEscData;
    BYTE EscData[1];
  } EMREXTESCAPE,*PEMREXTESCAPE,EMRDRAWESCAPE,*PEMRDRAWESCAPE;
  typedef struct tagEMRNAMEDESCAPE {
    EMR emr;
    INT iEscape;
    INT cbDriver;
    INT cbEscData;
    BYTE EscData[1];
  } EMRNAMEDESCAPE,*PEMRNAMEDESCAPE;
  typedef struct tagEMRSETICMPROFILE {
    EMR emr;
    DWORD dwFlags;
    DWORD cbName;
    DWORD cbData;
    BYTE Data[1];
  } EMRSETICMPROFILE,*PEMRSETICMPROFILE,EMRSETICMPROFILEA,*PEMRSETICMPROFILEA,EMRSETICMPROFILEW,*PEMRSETICMPROFILEW;
  typedef struct tagEMRCREATECOLORSPACEW {
    EMR emr;
    DWORD ihCS;
    LOGCOLORSPACEW lcs;
    DWORD dwFlags;
    DWORD cbData;
    BYTE Data[1];
  } EMRCREATECOLORSPACEW,*PEMRCREATECOLORSPACEW;
  typedef struct tagCOLORMATCHTOTARGET {
    EMR emr;
    DWORD dwAction;
    DWORD dwFlags;
    DWORD cbName;
    DWORD cbData;
    BYTE Data[1];
  } EMRCOLORMATCHTOTARGET,*PEMRCOLORMATCHTOTARGET;
  typedef struct tagCOLORCORRECTPALETTE {
    EMR emr;
    DWORD ihPalette;
    DWORD nFirstEntry;
    DWORD nPalEntries;
    DWORD nReserved;
  } EMRCOLORCORRECTPALETTE,*PEMRCOLORCORRECTPALETTE;
  typedef struct tagEMRALPHABLEND {
    EMR emr;
    RECTL rclBounds;
    LONG xDest;
    LONG yDest;
    LONG cxDest;
    LONG cyDest;
    DWORD dwRop;
    LONG xSrc;
    LONG ySrc;
    XFORM xformSrc;
    COLORREF crBkColorSrc;
    DWORD iUsageSrc;
    DWORD offBmiSrc;
    DWORD cbBmiSrc;
    DWORD offBitsSrc;
    DWORD cbBitsSrc;
    LONG cxSrc;
    LONG cySrc;
  } EMRALPHABLEND,*PEMRALPHABLEND;
  typedef struct tagEMRGRADIENTFILL {
    EMR emr;
    RECTL rclBounds;
    DWORD nVer;
    DWORD nTri;
    ULONG ulMode;
    TRIVERTEX Ver[1];
  } EMRGRADIENTFILL,*PEMRGRADIENTFILL;
  typedef struct tagEMRTRANSPARENTBLT {
    EMR emr;
    RECTL rclBounds;
    LONG xDest;
    LONG yDest;
    LONG cxDest;
    LONG cyDest;
    DWORD dwRop;
    LONG xSrc;
    LONG ySrc;
    XFORM xformSrc;
    COLORREF crBkColorSrc;
    DWORD iUsageSrc;
    DWORD offBmiSrc;
    DWORD cbBmiSrc;
    DWORD offBitsSrc;
    DWORD cbBitsSrc;
    LONG cxSrc;
    LONG cySrc;
  } EMRTRANSPARENTBLT,*PEMRTRANSPARENTBLT;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) wglCopyContext(HGLRC,HGLRC,UINT);
  __attribute__((dllimport)) HGLRC __attribute__((__stdcall__)) wglCreateContext(HDC);
  __attribute__((dllimport)) HGLRC __attribute__((__stdcall__)) wglCreateLayerContext(HDC,int);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) wglDeleteContext(HGLRC);
  __attribute__((dllimport)) HGLRC __attribute__((__stdcall__)) wglGetCurrentContext(void);
  __attribute__((dllimport)) HDC __attribute__((__stdcall__)) wglGetCurrentDC(void);
  __attribute__((dllimport)) PROC __attribute__((__stdcall__)) wglGetProcAddress(LPCSTR);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) wglMakeCurrent(HDC,HGLRC);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) wglShareLists(HGLRC,HGLRC);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) wglUseFontBitmapsA(HDC,DWORD,DWORD,DWORD);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) wglUseFontBitmapsW(HDC,DWORD,DWORD,DWORD);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SwapBuffers(HDC);
  typedef struct _POINTFLOAT {
    FLOAT x;
    FLOAT y;
  } POINTFLOAT,*PPOINTFLOAT;
  typedef struct _GLYPHMETRICSFLOAT {
    FLOAT gmfBlackBoxX;
    FLOAT gmfBlackBoxY;
    POINTFLOAT gmfptGlyphOrigin;
    FLOAT gmfCellIncX;
    FLOAT gmfCellIncY;
  } GLYPHMETRICSFLOAT,*PGLYPHMETRICSFLOAT,*LPGLYPHMETRICSFLOAT;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) wglUseFontOutlinesA(HDC,DWORD,DWORD,DWORD,FLOAT,FLOAT,int,LPGLYPHMETRICSFLOAT);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) wglUseFontOutlinesW(HDC,DWORD,DWORD,DWORD,FLOAT,FLOAT,int,LPGLYPHMETRICSFLOAT);
  typedef struct tagLAYERPLANEDESCRIPTOR {
    WORD nSize;
    WORD nVersion;
    DWORD dwFlags;
    BYTE iPixelType;
    BYTE cColorBits;
    BYTE cRedBits;
    BYTE cRedShift;
    BYTE cGreenBits;
    BYTE cGreenShift;
    BYTE cBlueBits;
    BYTE cBlueShift;
    BYTE cAlphaBits;
    BYTE cAlphaShift;
    BYTE cAccumBits;
    BYTE cAccumRedBits;
    BYTE cAccumGreenBits;
    BYTE cAccumBlueBits;
    BYTE cAccumAlphaBits;
    BYTE cDepthBits;
    BYTE cStencilBits;
    BYTE cAuxBuffers;
    BYTE iLayerPlane;
    BYTE bReserved;
    COLORREF crTransparent;
  } LAYERPLANEDESCRIPTOR,*PLAYERPLANEDESCRIPTOR,*LPLAYERPLANEDESCRIPTOR;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) wglDescribeLayerPlane(HDC,int,int,UINT,LPLAYERPLANEDESCRIPTOR);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) wglSetLayerPaletteEntries(HDC,int,int,int,const COLORREF *);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) wglGetLayerPaletteEntries(HDC,int,int,int,COLORREF *);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) wglRealizeLayerPalette(HDC,int,WINBOOL);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) wglSwapLayerBuffers(HDC,UINT);
  typedef struct _WGLSWAP {
    HDC hdc;
    UINT uiFlags;
  } WGLSWAP,*PWGLSWAP,*LPWGLSWAP;
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) wglSwapMultipleBuffers(UINT,const WGLSWAP *);
  typedef HANDLE HDWP;
  typedef void MENUTEMPLATEA;
  typedef void MENUTEMPLATEW;
  typedef PVOID LPMENUTEMPLATEA;
  typedef PVOID LPMENUTEMPLATEW;
  typedef MENUTEMPLATEA MENUTEMPLATE;
  typedef LPMENUTEMPLATEA LPMENUTEMPLATE;
  typedef LRESULT (__attribute__((__stdcall__)) *WNDPROC)(HWND,UINT,WPARAM,LPARAM);
  typedef INT_PTR (__attribute__((__stdcall__)) *DLGPROC) (HWND, UINT, WPARAM, LPARAM);
  typedef void (__attribute__((__stdcall__)) *TIMERPROC) (HWND, UINT, UINT_PTR, DWORD);
  typedef WINBOOL (__attribute__((__stdcall__)) *GRAYSTRINGPROC) (HDC, LPARAM, int);
  typedef WINBOOL (__attribute__((__stdcall__)) *WNDENUMPROC) (HWND, LPARAM);
  typedef LRESULT (__attribute__((__stdcall__)) *HOOKPROC) (int code, WPARAM wParam, LPARAM lParam);
  typedef void (__attribute__((__stdcall__)) *SENDASYNCPROC) (HWND, UINT, ULONG_PTR, LRESULT);
  typedef WINBOOL (__attribute__((__stdcall__)) *PROPENUMPROCA) (HWND, LPCSTR, HANDLE);
  typedef WINBOOL (__attribute__((__stdcall__)) *PROPENUMPROCW) (HWND, LPCWSTR, HANDLE);
  typedef WINBOOL (__attribute__((__stdcall__)) *PROPENUMPROCEXA) (HWND, LPSTR, HANDLE, ULONG_PTR);
  typedef WINBOOL (__attribute__((__stdcall__)) *PROPENUMPROCEXW) (HWND, LPWSTR, HANDLE, ULONG_PTR);
  typedef int (__attribute__((__stdcall__)) *EDITWORDBREAKPROCA) (LPSTR lpch, int ichCurrent, int cch, int code);
  typedef int (__attribute__((__stdcall__)) *EDITWORDBREAKPROCW) (LPWSTR lpch, int ichCurrent, int cch, int code);
  typedef WINBOOL (__attribute__((__stdcall__)) *DRAWSTATEPROC) (HDC hdc, LPARAM lData, WPARAM wData, int cx, int cy);
  typedef PROPENUMPROCA PROPENUMPROC;
  typedef PROPENUMPROCEXA PROPENUMPROCEX;
  typedef EDITWORDBREAKPROCA EDITWORDBREAKPROC;
  typedef WINBOOL (__attribute__((__stdcall__)) *NAMEENUMPROCA) (LPSTR, LPARAM);
  typedef WINBOOL (__attribute__((__stdcall__)) *NAMEENUMPROCW) (LPWSTR, LPARAM);
  typedef NAMEENUMPROCA WINSTAENUMPROCA;
  typedef NAMEENUMPROCW WINSTAENUMPROCW;
  typedef NAMEENUMPROCA DESKTOPENUMPROCA;
  typedef NAMEENUMPROCW DESKTOPENUMPROCW;
  typedef WINSTAENUMPROCA WINSTAENUMPROC;
  typedef DESKTOPENUMPROCA DESKTOPENUMPROC;
  __attribute__((dllimport)) int __attribute__((__stdcall__)) wvsprintfA(LPSTR,LPCSTR,va_list arglist);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) wvsprintfW(LPWSTR,LPCWSTR,va_list arglist);
  __attribute__((dllimport)) int __attribute__((__cdecl__)) wsprintfA(LPSTR,LPCSTR,...);
  __attribute__((dllimport)) int __attribute__((__cdecl__)) wsprintfW(LPWSTR,LPCWSTR,...);
  typedef struct tagCBT_CREATEWNDA {
    struct tagCREATESTRUCTA *lpcs;
    HWND hwndInsertAfter;
  } CBT_CREATEWNDA,*LPCBT_CREATEWNDA;
  typedef struct tagCBT_CREATEWNDW {
    struct tagCREATESTRUCTW *lpcs;
    HWND hwndInsertAfter;
  } CBT_CREATEWNDW,*LPCBT_CREATEWNDW;
  typedef CBT_CREATEWNDA CBT_CREATEWND;
  typedef LPCBT_CREATEWNDA LPCBT_CREATEWND;
  typedef struct tagCBTACTIVATESTRUCT {
    WINBOOL fMouse;
    HWND hWndActive;
  } CBTACTIVATESTRUCT,*LPCBTACTIVATESTRUCT;
  typedef struct tagWTSSESSION_NOTIFICATION {
    DWORD cbSize;
    DWORD dwSessionId;
  } WTSSESSION_NOTIFICATION,*PWTSSESSION_NOTIFICATION;
  typedef struct {
    HWND hwnd;
    RECT rc;
  } SHELLHOOKINFO,*LPSHELLHOOKINFO;
  typedef struct tagEVENTMSG {
    UINT message;
    UINT paramL;
    UINT paramH;
    DWORD time;
    HWND hwnd;
  } EVENTMSG,*PEVENTMSGMSG,*NPEVENTMSGMSG,*LPEVENTMSGMSG;
  typedef struct tagEVENTMSG *PEVENTMSG,*NPEVENTMSG,*LPEVENTMSG;
  typedef struct tagCWPSTRUCT {
    LPARAM lParam;
    WPARAM wParam;
    UINT message;
    HWND hwnd;
  } CWPSTRUCT,*PCWPSTRUCT,*NPCWPSTRUCT,*LPCWPSTRUCT;
  typedef struct tagCWPRETSTRUCT {
    LRESULT lResult;
    LPARAM lParam;
    WPARAM wParam;
    UINT message;
    HWND hwnd;
  } CWPRETSTRUCT,*PCWPRETSTRUCT,*NPCWPRETSTRUCT,*LPCWPRETSTRUCT;
  typedef struct tagKBDLLHOOKSTRUCT {
    DWORD vkCode;
    DWORD scanCode;
    DWORD flags;
    DWORD time;
    ULONG_PTR dwExtraInfo;
  } KBDLLHOOKSTRUCT,*LPKBDLLHOOKSTRUCT,*PKBDLLHOOKSTRUCT;
  typedef struct tagMSLLHOOKSTRUCT {
    POINT pt;
    DWORD mouseData;
    DWORD flags;
    DWORD time;
    ULONG_PTR dwExtraInfo;
  } MSLLHOOKSTRUCT,*LPMSLLHOOKSTRUCT,*PMSLLHOOKSTRUCT;
  typedef struct tagDEBUGHOOKINFO {
    DWORD idThread;
    DWORD idThreadInstaller;
    LPARAM lParam;
    WPARAM wParam;
    int code;
  } DEBUGHOOKINFO,*PDEBUGHOOKINFO,*NPDEBUGHOOKINFO,*LPDEBUGHOOKINFO;
  typedef struct tagMOUSEHOOKSTRUCT {
    POINT pt;
    HWND hwnd;
    UINT wHitTestCode;
    ULONG_PTR dwExtraInfo;
  } MOUSEHOOKSTRUCT,*LPMOUSEHOOKSTRUCT,*PMOUSEHOOKSTRUCT;
  typedef struct tagMOUSEHOOKSTRUCTEX {
    MOUSEHOOKSTRUCT __unnamed;
    DWORD mouseData;
  } MOUSEHOOKSTRUCTEX,*LPMOUSEHOOKSTRUCTEX,*PMOUSEHOOKSTRUCTEX;
  typedef struct tagHARDWAREHOOKSTRUCT {
    HWND hwnd;
    UINT message;
    WPARAM wParam;
    LPARAM lParam;
  } HARDWAREHOOKSTRUCT,*LPHARDWAREHOOKSTRUCT,*PHARDWAREHOOKSTRUCT;
  __attribute__((dllimport)) HKL __attribute__((__stdcall__)) LoadKeyboardLayoutA(LPCSTR pwszKLID,UINT Flags);
  __attribute__((dllimport)) HKL __attribute__((__stdcall__)) LoadKeyboardLayoutW(LPCWSTR pwszKLID,UINT Flags);
  __attribute__((dllimport)) HKL __attribute__((__stdcall__)) ActivateKeyboardLayout(HKL hkl,UINT Flags);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) ToUnicodeEx(UINT wVirtKey,UINT wScanCode,const BYTE *lpKeyState,LPWSTR pwszBuff,int cchBuff,UINT wFlags,HKL dwhkl);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) UnloadKeyboardLayout(HKL hkl);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetKeyboardLayoutNameA(LPSTR pwszKLID);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetKeyboardLayoutNameW(LPWSTR pwszKLID);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetKeyboardLayoutList(int nBuff,HKL *lpList);
  __attribute__((dllimport)) HKL __attribute__((__stdcall__)) GetKeyboardLayout(DWORD idThread);
  typedef struct tagMOUSEMOVEPOINT {
    int x;
    int y;
    DWORD time;
    ULONG_PTR dwExtraInfo;
  } MOUSEMOVEPOINT,*PMOUSEMOVEPOINT,*LPMOUSEMOVEPOINT;
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetMouseMovePointsEx(UINT cbSize,LPMOUSEMOVEPOINT lppt,LPMOUSEMOVEPOINT lpptBuf,int nBufPoints,DWORD resolution);
  __attribute__((dllimport)) HDESK __attribute__((__stdcall__)) CreateDesktopA(LPCSTR lpszDesktop,LPCSTR lpszDevice,LPDEVMODEA pDevmode,DWORD dwFlags,ACCESS_MASK dwDesiredAccess,LPSECURITY_ATTRIBUTES lpsa);
  __attribute__((dllimport)) HDESK __attribute__((__stdcall__)) CreateDesktopW(LPCWSTR lpszDesktop,LPCWSTR lpszDevice,LPDEVMODEW pDevmode,DWORD dwFlags,ACCESS_MASK dwDesiredAccess,LPSECURITY_ATTRIBUTES lpsa);
  __attribute__((dllimport)) HDESK __attribute__((__stdcall__)) CreateDesktopExA (LPCSTR lpszDesktop, LPCSTR lpszDevice, DEVMODEA *pDevmode, DWORD dwFlags, ACCESS_MASK dwDesiredAccess, LPSECURITY_ATTRIBUTES lpsa, ULONG ulHeapSize, PVOID pvoid);
  __attribute__((dllimport)) HDESK __attribute__((__stdcall__)) CreateDesktopExW (LPCWSTR lpszDesktop, LPCWSTR lpszDevice, DEVMODEW *pDevmode, DWORD dwFlags, ACCESS_MASK dwDesiredAccess, LPSECURITY_ATTRIBUTES lpsa, ULONG ulHeapSize, PVOID pvoid);
  __attribute__((dllimport)) HDESK __attribute__((__stdcall__)) OpenDesktopA(LPCSTR lpszDesktop,DWORD dwFlags,WINBOOL fInherit,ACCESS_MASK dwDesiredAccess);
  __attribute__((dllimport)) HDESK __attribute__((__stdcall__)) OpenDesktopW(LPCWSTR lpszDesktop,DWORD dwFlags,WINBOOL fInherit,ACCESS_MASK dwDesiredAccess);
  __attribute__((dllimport)) HDESK __attribute__((__stdcall__)) OpenInputDesktop(DWORD dwFlags,WINBOOL fInherit,ACCESS_MASK dwDesiredAccess);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumDesktopsA(HWINSTA hwinsta,DESKTOPENUMPROCA lpEnumFunc,LPARAM lParam);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumDesktopsW(HWINSTA hwinsta,DESKTOPENUMPROCW lpEnumFunc,LPARAM lParam);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumDesktopWindows(HDESK hDesktop,WNDENUMPROC lpfn,LPARAM lParam);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SwitchDesktop(HDESK hDesktop);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetThreadDesktop(HDESK hDesktop);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CloseDesktop(HDESK hDesktop);
  __attribute__((dllimport)) HDESK __attribute__((__stdcall__)) GetThreadDesktop(DWORD dwThreadId);
  __attribute__((dllimport)) HWINSTA __attribute__((__stdcall__)) CreateWindowStationA(LPCSTR lpwinsta,DWORD dwFlags,ACCESS_MASK dwDesiredAccess,LPSECURITY_ATTRIBUTES lpsa);
  __attribute__((dllimport)) HWINSTA __attribute__((__stdcall__)) CreateWindowStationW(LPCWSTR lpwinsta,DWORD dwFlags,ACCESS_MASK dwDesiredAccess,LPSECURITY_ATTRIBUTES lpsa);
  __attribute__((dllimport)) HWINSTA __attribute__((__stdcall__)) OpenWindowStationA(LPCSTR lpszWinSta,WINBOOL fInherit,ACCESS_MASK dwDesiredAccess);
  __attribute__((dllimport)) HWINSTA __attribute__((__stdcall__)) OpenWindowStationW(LPCWSTR lpszWinSta,WINBOOL fInherit,ACCESS_MASK dwDesiredAccess);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumWindowStationsA(WINSTAENUMPROCA lpEnumFunc,LPARAM lParam);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumWindowStationsW(WINSTAENUMPROCW lpEnumFunc,LPARAM lParam);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CloseWindowStation(HWINSTA hWinSta);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetProcessWindowStation(HWINSTA hWinSta);
  __attribute__((dllimport)) HWINSTA __attribute__((__stdcall__)) GetProcessWindowStation(void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetUserObjectSecurity(HANDLE hObj,PSECURITY_INFORMATION pSIRequested,PSECURITY_DESCRIPTOR pSID);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetUserObjectSecurity(HANDLE hObj,PSECURITY_INFORMATION pSIRequested,PSECURITY_DESCRIPTOR pSID,DWORD nLength,LPDWORD lpnLengthNeeded);
  typedef struct tagUSEROBJECTFLAGS {
    WINBOOL fInherit;
    WINBOOL fReserved;
    DWORD dwFlags;
  } USEROBJECTFLAGS,*PUSEROBJECTFLAGS;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetUserObjectInformationA(HANDLE hObj,int nIndex,PVOID pvInfo,DWORD nLength,LPDWORD lpnLengthNeeded);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetUserObjectInformationW(HANDLE hObj,int nIndex,PVOID pvInfo,DWORD nLength,LPDWORD lpnLengthNeeded);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetUserObjectInformationA(HANDLE hObj,int nIndex,PVOID pvInfo,DWORD nLength);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetUserObjectInformationW(HANDLE hObj,int nIndex,PVOID pvInfo,DWORD nLength);
  typedef struct tagWNDCLASSEXA {
    UINT cbSize;
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCSTR lpszMenuName;
    LPCSTR lpszClassName;
    HICON hIconSm;
  } WNDCLASSEXA,*PWNDCLASSEXA,*NPWNDCLASSEXA,*LPWNDCLASSEXA;
  typedef struct tagWNDCLASSEXW {
    UINT cbSize;
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCWSTR lpszMenuName;
    LPCWSTR lpszClassName;
    HICON hIconSm;
  } WNDCLASSEXW,*PWNDCLASSEXW,*NPWNDCLASSEXW,*LPWNDCLASSEXW;
  typedef WNDCLASSEXA WNDCLASSEX;
  typedef PWNDCLASSEXA PWNDCLASSEX;
  typedef NPWNDCLASSEXA NPWNDCLASSEX;
  typedef LPWNDCLASSEXA LPWNDCLASSEX;
  typedef struct tagWNDCLASSA {
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCSTR lpszMenuName;
    LPCSTR lpszClassName;
  } WNDCLASSA,*PWNDCLASSA,*NPWNDCLASSA,*LPWNDCLASSA;
  typedef struct tagWNDCLASSW {
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCWSTR lpszMenuName;
    LPCWSTR lpszClassName;
  } WNDCLASSW,*PWNDCLASSW,*NPWNDCLASSW,*LPWNDCLASSW;
  typedef WNDCLASSA WNDCLASS;
  typedef PWNDCLASSA PWNDCLASS;
  typedef NPWNDCLASSA NPWNDCLASS;
  typedef LPWNDCLASSA LPWNDCLASS;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsHungAppWindow(HWND hwnd);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) DisableProcessWindowsGhosting(void);
  typedef struct tagMSG {
    HWND hwnd;
    UINT message;
    WPARAM wParam;
    LPARAM lParam;
    DWORD time;
    POINT pt;
  } MSG,*PMSG,*NPMSG,*LPMSG;
  typedef struct tagMINMAXINFO {
    POINT ptReserved;
    POINT ptMaxSize;
    POINT ptMaxPosition;
    POINT ptMinTrackSize;
    POINT ptMaxTrackSize;
  } MINMAXINFO,*PMINMAXINFO,*LPMINMAXINFO;
  typedef struct tagCOPYDATASTRUCT {
    ULONG_PTR dwData;
    DWORD cbData;
    PVOID lpData;
  } COPYDATASTRUCT,*PCOPYDATASTRUCT;
  typedef struct tagMDINEXTMENU {
    HMENU hmenuIn;
    HMENU hmenuNext;
    HWND hwndNext;
  } MDINEXTMENU,*PMDINEXTMENU,*LPMDINEXTMENU;
  typedef struct {
    GUID PowerSetting;
    DWORD DataLength;
    UCHAR Data[1];
  } POWERBROADCAST_SETTING,*PPOWERBROADCAST_SETTING;
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) RegisterWindowMessageA(LPCSTR lpString);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) RegisterWindowMessageW(LPCWSTR lpString);
  typedef struct tagWINDOWPOS {
    HWND hwnd;
    HWND hwndInsertAfter;
    int x;
    int y;
    int cx;
    int cy;
    UINT flags;
  } WINDOWPOS,*LPWINDOWPOS,*PWINDOWPOS;
  typedef struct tagNCCALCSIZE_PARAMS {
    RECT rgrc[3];
    PWINDOWPOS lppos;
  } NCCALCSIZE_PARAMS,*LPNCCALCSIZE_PARAMS;
  typedef struct tagTRACKMOUSEEVENT {
    DWORD cbSize;
    DWORD dwFlags;
    HWND hwndTrack;
    DWORD dwHoverTime;
  } TRACKMOUSEEVENT,*LPTRACKMOUSEEVENT;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) TrackMouseEvent(LPTRACKMOUSEEVENT lpEventTrack);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DrawEdge(HDC hdc,LPRECT qrc,UINT edge,UINT grfFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DrawFrameControl(HDC,LPRECT,UINT,UINT);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DrawCaption(HWND hwnd,HDC hdc,const RECT *lprect,UINT flags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DrawAnimatedRects(HWND hwnd,int idAni,const RECT *lprcFrom,const RECT *lprcTo);
  typedef struct tagACCEL {
    BYTE fVirt;
    WORD key;
    WORD cmd;
  } ACCEL,*LPACCEL;
  typedef struct tagPAINTSTRUCT {
    HDC hdc;
    WINBOOL fErase;
    RECT rcPaint;
    WINBOOL fRestore;
    WINBOOL fIncUpdate;
    BYTE rgbReserved[32];
  } PAINTSTRUCT,*PPAINTSTRUCT,*NPPAINTSTRUCT,*LPPAINTSTRUCT;
  typedef struct tagCREATESTRUCTA {
    LPVOID lpCreateParams;
    HINSTANCE hInstance;
    HMENU hMenu;
    HWND hwndParent;
    int cy;
    int cx;
    int y;
    int x;
    LONG style;
    LPCSTR lpszName;
    LPCSTR lpszClass;
    DWORD dwExStyle;
  } CREATESTRUCTA,*LPCREATESTRUCTA;
  typedef struct tagCREATESTRUCTW {
    LPVOID lpCreateParams;
    HINSTANCE hInstance;
    HMENU hMenu;
    HWND hwndParent;
    int cy;
    int cx;
    int y;
    int x;
    LONG style;
    LPCWSTR lpszName;
    LPCWSTR lpszClass;
    DWORD dwExStyle;
  } CREATESTRUCTW,*LPCREATESTRUCTW;
  typedef CREATESTRUCTA CREATESTRUCT;
  typedef LPCREATESTRUCTA LPCREATESTRUCT;
  typedef struct tagWINDOWPLACEMENT {
    UINT length;
    UINT flags;
    UINT showCmd;
    POINT ptMinPosition;
    POINT ptMaxPosition;
    RECT rcNormalPosition;
  } WINDOWPLACEMENT;
  typedef WINDOWPLACEMENT *PWINDOWPLACEMENT,*LPWINDOWPLACEMENT;
  typedef struct tagNMHDR {
    HWND hwndFrom;
    UINT_PTR idFrom;
    UINT code;
  } NMHDR;
  typedef NMHDR *LPNMHDR;
  typedef struct tagSTYLESTRUCT {
    DWORD styleOld;
    DWORD styleNew;
  } STYLESTRUCT,*LPSTYLESTRUCT;
  typedef struct tagMEASUREITEMSTRUCT {
    UINT CtlType;
    UINT CtlID;
    UINT itemID;
    UINT itemWidth;
    UINT itemHeight;
    ULONG_PTR itemData;
  } MEASUREITEMSTRUCT,*PMEASUREITEMSTRUCT,*LPMEASUREITEMSTRUCT;
  typedef struct tagDRAWITEMSTRUCT {
    UINT CtlType;
    UINT CtlID;
    UINT itemID;
    UINT itemAction;
    UINT itemState;
    HWND hwndItem;
    HDC hDC;
    RECT rcItem;
    ULONG_PTR itemData;
  } DRAWITEMSTRUCT,*PDRAWITEMSTRUCT,*LPDRAWITEMSTRUCT;
  typedef struct tagDELETEITEMSTRUCT {
    UINT CtlType;
    UINT CtlID;
    UINT itemID;
    HWND hwndItem;
    ULONG_PTR itemData;
  } DELETEITEMSTRUCT,*PDELETEITEMSTRUCT,*LPDELETEITEMSTRUCT;
  typedef struct tagCOMPAREITEMSTRUCT {
    UINT CtlType;
    UINT CtlID;
    HWND hwndItem;
    UINT itemID1;
    ULONG_PTR itemData1;
    UINT itemID2;
    ULONG_PTR itemData2;
    DWORD dwLocaleId;
  } COMPAREITEMSTRUCT,*PCOMPAREITEMSTRUCT,*LPCOMPAREITEMSTRUCT;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetMessageA(LPMSG lpMsg,HWND hWnd,UINT wMsgFilterMin,UINT wMsgFilterMax);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetMessageW(LPMSG lpMsg,HWND hWnd,UINT wMsgFilterMin,UINT wMsgFilterMax);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) TranslateMessage(const MSG *lpMsg);
  __attribute__((dllimport)) LRESULT __attribute__((__stdcall__)) DispatchMessageA(const MSG *lpMsg);
  __attribute__((dllimport)) LRESULT __attribute__((__stdcall__)) DispatchMessageW(const MSG *lpMsg);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetMessageQueue(int cMessagesMax);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PeekMessageA(LPMSG lpMsg,HWND hWnd,UINT wMsgFilterMin,UINT wMsgFilterMax,UINT wRemoveMsg);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PeekMessageW(LPMSG lpMsg,HWND hWnd,UINT wMsgFilterMin,UINT wMsgFilterMax,UINT wRemoveMsg);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) RegisterHotKey(HWND hWnd,int id,UINT fsModifiers,UINT vk);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) UnregisterHotKey(HWND hWnd,int id);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ExitWindowsEx(UINT uFlags,DWORD dwReason);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SwapMouseButton(WINBOOL fSwap);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetMessagePos(void);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) GetMessageTime(void);
  __attribute__((dllimport)) LPARAM __attribute__((__stdcall__)) GetMessageExtraInfo(void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsWow64Message(void);
  __attribute__((dllimport)) LPARAM __attribute__((__stdcall__)) SetMessageExtraInfo(LPARAM lParam);
  __attribute__((dllimport)) LRESULT __attribute__((__stdcall__)) SendMessageA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam);
  __attribute__((dllimport)) LRESULT __attribute__((__stdcall__)) SendMessageW(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam);
  __attribute__((dllimport)) LRESULT __attribute__((__stdcall__)) SendMessageTimeoutA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam,UINT fuFlags,UINT uTimeout,PDWORD_PTR lpdwResult);
  __attribute__((dllimport)) LRESULT __attribute__((__stdcall__)) SendMessageTimeoutW(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam,UINT fuFlags,UINT uTimeout,PDWORD_PTR lpdwResult);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SendNotifyMessageA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SendNotifyMessageW(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SendMessageCallbackA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam,SENDASYNCPROC lpResultCallBack,ULONG_PTR dwData);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SendMessageCallbackW(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam,SENDASYNCPROC lpResultCallBack,ULONG_PTR dwData);
  typedef struct {
    UINT cbSize;
    HDESK hdesk;
    HWND hwnd;
    LUID luid;
  } BSMINFO,*PBSMINFO;
  __attribute__((dllimport)) long __attribute__((__stdcall__)) BroadcastSystemMessageExA(DWORD flags,LPDWORD lpInfo,UINT Msg,WPARAM wParam,LPARAM lParam,PBSMINFO pbsmInfo);
  __attribute__((dllimport)) long __attribute__((__stdcall__)) BroadcastSystemMessageExW(DWORD flags,LPDWORD lpInfo,UINT Msg,WPARAM wParam,LPARAM lParam,PBSMINFO pbsmInfo);
  __attribute__((dllimport)) long __attribute__((__stdcall__)) BroadcastSystemMessageA(DWORD flags,LPDWORD lpInfo,UINT Msg,WPARAM wParam,LPARAM lParam);
  __attribute__((dllimport)) long __attribute__((__stdcall__)) BroadcastSystemMessageW(DWORD flags,LPDWORD lpInfo,UINT Msg,WPARAM wParam,LPARAM lParam);
  typedef PVOID HDEVNOTIFY;
  typedef HDEVNOTIFY *PHDEVNOTIFY;
  typedef HANDLE HPOWERNOTIFY;
  typedef HPOWERNOTIFY *PHPOWERNOTIFY;
  __attribute__((dllimport)) HPOWERNOTIFY __attribute__((__stdcall__)) RegisterPowerSettingNotification (HANDLE hRecipient, LPCGUID PowerSettingGuid, DWORD Flags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) UnregisterPowerSettingNotification (HPOWERNOTIFY Handle);
  __attribute__((dllimport)) HPOWERNOTIFY __attribute__((__stdcall__)) RegisterSuspendResumeNotification (HANDLE hRecipient, DWORD Flags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) UnregisterSuspendResumeNotification (HPOWERNOTIFY Handle);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PostMessageA (HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PostMessageW (HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PostThreadMessageA (DWORD idThread, UINT Msg, WPARAM wParam, LPARAM lParam);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PostThreadMessageW (DWORD idThread, UINT Msg, WPARAM wParam, LPARAM lParam);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AttachThreadInput (DWORD idAttach, DWORD idAttachTo, WINBOOL fAttach);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ReplyMessage (LRESULT lResult);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) WaitMessage (void);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) WaitForInputIdle (HANDLE hProcess, DWORD dwMilliseconds);
  __attribute__((dllimport)) LRESULT __attribute__((__stdcall__)) DefWindowProcA (HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);
  __attribute__((dllimport)) LRESULT __attribute__((__stdcall__)) DefWindowProcW (HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) PostQuitMessage (int nExitCode);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) InSendMessage (void);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) InSendMessageEx (LPVOID lpReserved);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetDoubleClickTime (void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetDoubleClickTime (UINT);
  __attribute__((dllimport)) ATOM __attribute__((__stdcall__)) RegisterClassA (const WNDCLASSA *lpWndClass);
  __attribute__((dllimport)) ATOM __attribute__((__stdcall__)) RegisterClassW (const WNDCLASSW *lpWndClass);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) UnregisterClassA (LPCSTR lpClassName, HINSTANCE hInstance);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) UnregisterClassW (LPCWSTR lpClassName, HINSTANCE hInstance);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetClassInfoA (HINSTANCE hInstance, LPCSTR lpClassName, LPWNDCLASSA lpWndClass);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetClassInfoW (HINSTANCE hInstance, LPCWSTR lpClassName, LPWNDCLASSW lpWndClass);
  __attribute__((dllimport)) ATOM __attribute__((__stdcall__)) RegisterClassExA (const WNDCLASSEXA *);
  __attribute__((dllimport)) ATOM __attribute__((__stdcall__)) RegisterClassExW (const WNDCLASSEXW *);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetClassInfoExA (HINSTANCE hInstance, LPCSTR lpszClass, LPWNDCLASSEXA lpwcx);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetClassInfoExW (HINSTANCE hInstance, LPCWSTR lpszClass, LPWNDCLASSEXW lpwcx);
  __attribute__((dllimport)) LRESULT __attribute__((__stdcall__)) CallWindowProcA (WNDPROC lpPrevWndFunc, HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);
  __attribute__((dllimport)) LRESULT __attribute__((__stdcall__)) CallWindowProcW (WNDPROC lpPrevWndFunc, HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);
  extern const GUID GUID_POWERSCHEME_PERSONALITY;
  extern const GUID GUID_MIN_POWER_SAVINGS;
  extern const GUID GUID_MAX_POWER_SAVINGS;
  extern const GUID GUID_TYPICAL_POWER_SAVINGS;
  extern const GUID GUID_ACDC_POWER_SOURCE;
  extern const GUID GUID_BATTERY_PERCENTAGE_REMAINING;
  extern const GUID GUID_IDLE_BACKGROUND_TASK;
  extern const GUID GUID_SYSTEM_AWAYMODE;
  extern const GUID GUID_MONITOR_POWER_ON;
  __attribute__((dllimport)) HDEVNOTIFY __attribute__((__stdcall__)) RegisterDeviceNotificationA(HANDLE hRecipient,LPVOID NotificationFilter,DWORD Flags);
  __attribute__((dllimport)) HDEVNOTIFY __attribute__((__stdcall__)) RegisterDeviceNotificationW(HANDLE hRecipient,LPVOID NotificationFilter,DWORD Flags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) UnregisterDeviceNotification(HDEVNOTIFY Handle);
  typedef BOOLEAN (__attribute__((__stdcall__)) *PREGISTERCLASSNAMEW)(LPCWSTR);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) CreateWindowExA(DWORD dwExStyle,LPCSTR lpClassName,LPCSTR lpWindowName,DWORD dwStyle,int X,int Y,int nWidth,int nHeight,HWND hWndParent,HMENU hMenu,HINSTANCE hInstance,LPVOID lpParam);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) CreateWindowExW(DWORD dwExStyle,LPCWSTR lpClassName,LPCWSTR lpWindowName,DWORD dwStyle,int X,int Y,int nWidth,int nHeight,HWND hWndParent,HMENU hMenu,HINSTANCE hInstance,LPVOID lpParam);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsWindow(HWND hWnd);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsMenu(HMENU hMenu);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsChild(HWND hWndParent,HWND hWnd);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DestroyWindow(HWND hWnd);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ShowWindow(HWND hWnd,int nCmdShow);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AnimateWindow(HWND hWnd,DWORD dwTime,DWORD dwFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) UpdateLayeredWindow (HWND hWnd, HDC hdcDst, POINT *pptDst, SIZE *psize, HDC hdcSrc, POINT *pptSrc, COLORREF crKey, BLENDFUNCTION *pblend, DWORD dwFlags);
  typedef struct tagUPDATELAYEREDWINDOWINFO {
    DWORD cbSize;
    HDC hdcDst;
    const POINT *pptDst;
    const SIZE *psize;
    HDC hdcSrc;
    const POINT *pptSrc;
    COLORREF crKey;
    const BLENDFUNCTION *pblend;
    DWORD dwFlags;
    const RECT *prcDirty;
  } UPDATELAYEREDWINDOWINFO,*PUPDATELAYEREDWINDOWINFO;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) UpdateLayeredWindowIndirect (HWND hWnd, const UPDATELAYEREDWINDOWINFO *pULWInfo);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetLayeredWindowAttributes (HWND hwnd, COLORREF *pcrKey, BYTE *pbAlpha, DWORD *pdwFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PrintWindow (HWND hwnd, HDC hdcBlt, UINT nFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetLayeredWindowAttributes (HWND hwnd, COLORREF crKey, BYTE bAlpha, DWORD dwFlags);
  typedef struct {
    UINT cbSize;
    HWND hwnd;
    DWORD dwFlags;
    UINT uCount;
    DWORD dwTimeout;
  } FLASHWINFO,*PFLASHWINFO;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ShowWindowAsync (HWND hWnd, int nCmdShow);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FlashWindow (HWND hWnd, WINBOOL bInvert);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FlashWindowEx (PFLASHWINFO pfwi);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ShowOwnedPopups (HWND hWnd, WINBOOL fShow);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) OpenIcon (HWND hWnd);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CloseWindow (HWND hWnd);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) MoveWindow (HWND hWnd, int X, int Y, int nWidth, int nHeight, WINBOOL bRepaint);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetWindowPos (HWND hWnd, HWND hWndInsertAfter, int X, int Y, int cx, int cy, UINT uFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetWindowPlacement (HWND hWnd, WINDOWPLACEMENT *lpwndpl);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetWindowPlacement (HWND hWnd, const WINDOWPLACEMENT *lpwndpl);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetWindowDisplayAffinity (HWND hWnd, DWORD *pdwAffinity);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetWindowDisplayAffinity (HWND hWnd, DWORD dwAffinity);
  __attribute__((dllimport)) HDWP __attribute__((__stdcall__)) BeginDeferWindowPos (int nNumWindows);
  __attribute__((dllimport)) HDWP __attribute__((__stdcall__)) DeferWindowPos (HDWP hWinPosInfo, HWND hWnd, HWND hWndInsertAfter, int x, int y, int cx, int cy, UINT uFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EndDeferWindowPos (HDWP hWinPosInfo);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsWindowVisible (HWND hWnd);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsIconic (HWND hWnd);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AnyPopup (void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) BringWindowToTop (HWND hWnd);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsZoomed (HWND hWnd);
#pragma pack(push,2)
  typedef struct {
    DWORD style;
    DWORD dwExtendedStyle;
    WORD cdit;
    short x;
    short y;
    short cx;
    short cy;
  } DLGTEMPLATE;
  typedef DLGTEMPLATE *LPDLGTEMPLATEA;
  typedef DLGTEMPLATE *LPDLGTEMPLATEW;
  typedef LPDLGTEMPLATEA LPDLGTEMPLATE;
  typedef const DLGTEMPLATE *LPCDLGTEMPLATEA;
  typedef const DLGTEMPLATE *LPCDLGTEMPLATEW;
  typedef LPCDLGTEMPLATEA LPCDLGTEMPLATE;
  typedef struct {
    DWORD style;
    DWORD dwExtendedStyle;
    short x;
    short y;
    short cx;
    short cy;
    WORD id;
  } DLGITEMTEMPLATE;
  typedef DLGITEMTEMPLATE *PDLGITEMTEMPLATEA;
  typedef DLGITEMTEMPLATE *PDLGITEMTEMPLATEW;
  typedef PDLGITEMTEMPLATEA PDLGITEMTEMPLATE;
  typedef DLGITEMTEMPLATE *LPDLGITEMTEMPLATEA;
  typedef DLGITEMTEMPLATE *LPDLGITEMTEMPLATEW;
  typedef LPDLGITEMTEMPLATEA LPDLGITEMTEMPLATE;
#pragma pack(pop)
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) CreateDialogParamA(HINSTANCE hInstance,LPCSTR lpTemplateName,HWND hWndParent,DLGPROC lpDialogFunc,LPARAM dwInitParam);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) CreateDialogParamW(HINSTANCE hInstance,LPCWSTR lpTemplateName,HWND hWndParent,DLGPROC lpDialogFunc,LPARAM dwInitParam);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) CreateDialogIndirectParamA(HINSTANCE hInstance,LPCDLGTEMPLATEA lpTemplate,HWND hWndParent,DLGPROC lpDialogFunc,LPARAM dwInitParam);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) CreateDialogIndirectParamW(HINSTANCE hInstance,LPCDLGTEMPLATEW lpTemplate,HWND hWndParent,DLGPROC lpDialogFunc,LPARAM dwInitParam);
  __attribute__((dllimport)) INT_PTR __attribute__((__stdcall__)) DialogBoxParamA(HINSTANCE hInstance,LPCSTR lpTemplateName,HWND hWndParent,DLGPROC lpDialogFunc,LPARAM dwInitParam);
  __attribute__((dllimport)) INT_PTR __attribute__((__stdcall__)) DialogBoxParamW(HINSTANCE hInstance,LPCWSTR lpTemplateName,HWND hWndParent,DLGPROC lpDialogFunc,LPARAM dwInitParam);
  __attribute__((dllimport)) INT_PTR __attribute__((__stdcall__)) DialogBoxIndirectParamA(HINSTANCE hInstance,LPCDLGTEMPLATEA hDialogTemplate,HWND hWndParent,DLGPROC lpDialogFunc,LPARAM dwInitParam);
  __attribute__((dllimport)) INT_PTR __attribute__((__stdcall__)) DialogBoxIndirectParamW(HINSTANCE hInstance,LPCDLGTEMPLATEW hDialogTemplate,HWND hWndParent,DLGPROC lpDialogFunc,LPARAM dwInitParam);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EndDialog(HWND hDlg,INT_PTR nResult);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) GetDlgItem(HWND hDlg,int nIDDlgItem);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetDlgItemInt(HWND hDlg,int nIDDlgItem,UINT uValue,WINBOOL bSigned);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetDlgItemInt(HWND hDlg,int nIDDlgItem,WINBOOL *lpTranslated,WINBOOL bSigned);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetDlgItemTextA(HWND hDlg,int nIDDlgItem,LPCSTR lpString);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetDlgItemTextW(HWND hDlg,int nIDDlgItem,LPCWSTR lpString);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetDlgItemTextA(HWND hDlg,int nIDDlgItem,LPSTR lpString,int cchMax);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetDlgItemTextW(HWND hDlg,int nIDDlgItem,LPWSTR lpString,int cchMax);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CheckDlgButton(HWND hDlg,int nIDButton,UINT uCheck);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CheckRadioButton(HWND hDlg,int nIDFirstButton,int nIDLastButton,int nIDCheckButton);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) IsDlgButtonChecked(HWND hDlg,int nIDButton);
  __attribute__((dllimport)) LRESULT __attribute__((__stdcall__)) SendDlgItemMessageA(HWND hDlg,int nIDDlgItem,UINT Msg,WPARAM wParam,LPARAM lParam);
  __attribute__((dllimport)) LRESULT __attribute__((__stdcall__)) SendDlgItemMessageW(HWND hDlg,int nIDDlgItem,UINT Msg,WPARAM wParam,LPARAM lParam);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) GetNextDlgGroupItem(HWND hDlg,HWND hCtl,WINBOOL bPrevious);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) GetNextDlgTabItem(HWND hDlg,HWND hCtl,WINBOOL bPrevious);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetDlgCtrlID(HWND hWnd);
  __attribute__((dllimport)) long __attribute__((__stdcall__)) GetDialogBaseUnits(void);
  __attribute__((dllimport)) LRESULT __attribute__((__stdcall__)) DefDlgProcA(HWND hDlg,UINT Msg,WPARAM wParam,LPARAM lParam);
  __attribute__((dllimport)) LRESULT __attribute__((__stdcall__)) DefDlgProcW(HWND hDlg,UINT Msg,WPARAM wParam,LPARAM lParam);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CallMsgFilterA(LPMSG lpMsg,int nCode);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CallMsgFilterW(LPMSG lpMsg,int nCode);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) OpenClipboard(HWND hWndNewOwner);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CloseClipboard(void);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetClipboardSequenceNumber(void);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) GetClipboardOwner(void);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) SetClipboardViewer(HWND hWndNewViewer);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) GetClipboardViewer(void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ChangeClipboardChain(HWND hWndRemove, HWND hWndNewNext);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) SetClipboardData(UINT uFormat, HANDLE hMem);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) GetClipboardData(UINT uFormat);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) RegisterClipboardFormatA(LPCSTR lpszFormat);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) RegisterClipboardFormatW(LPCWSTR lpszFormat);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) CountClipboardFormats(void);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) EnumClipboardFormats(UINT format);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetClipboardFormatNameA(UINT format, LPSTR lpszFormatName, int cchMaxCount);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetClipboardFormatNameW(UINT format, LPWSTR lpszFormatName, int cchMaxCount);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EmptyClipboard(void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsClipboardFormatAvailable(UINT format);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetPriorityClipboardFormat(UINT *paFormatPriorityList, int cFormats);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) GetOpenClipboardWindow(void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AddClipboardFormatListener (HWND hwnd);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) RemoveClipboardFormatListener (HWND hwnd);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetUpdatedClipboardFormats (PUINT lpuiFormats, UINT cFormats, PUINT pcFormatsOut);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CharToOemA(LPCSTR lpszSrc,LPSTR lpszDst);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CharToOemW(LPCWSTR lpszSrc,LPSTR lpszDst);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) OemToCharA(LPCSTR lpszSrc,LPSTR lpszDst);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) OemToCharW(LPCSTR lpszSrc,LPWSTR lpszDst);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CharToOemBuffA(LPCSTR lpszSrc,LPSTR lpszDst,DWORD cchDstLength);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CharToOemBuffW(LPCWSTR lpszSrc,LPSTR lpszDst,DWORD cchDstLength);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) OemToCharBuffA(LPCSTR lpszSrc,LPSTR lpszDst,DWORD cchDstLength);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) OemToCharBuffW(LPCSTR lpszSrc,LPWSTR lpszDst,DWORD cchDstLength);
  __attribute__((dllimport)) LPSTR __attribute__((__stdcall__)) CharUpperA(LPSTR lpsz);
  __attribute__((dllimport)) LPWSTR __attribute__((__stdcall__)) CharUpperW(LPWSTR lpsz);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) CharUpperBuffA(LPSTR lpsz,DWORD cchLength);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) CharUpperBuffW(LPWSTR lpsz,DWORD cchLength);
  __attribute__((dllimport)) LPSTR __attribute__((__stdcall__)) CharLowerA(LPSTR lpsz);
  __attribute__((dllimport)) LPWSTR __attribute__((__stdcall__)) CharLowerW(LPWSTR lpsz);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) CharLowerBuffA(LPSTR lpsz,DWORD cchLength);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) CharLowerBuffW(LPWSTR lpsz,DWORD cchLength);
  __attribute__((dllimport)) LPSTR __attribute__((__stdcall__)) CharNextA(LPCSTR lpsz);
  __attribute__((dllimport)) LPWSTR __attribute__((__stdcall__)) CharNextW(LPCWSTR lpsz);
  __attribute__((dllimport)) LPSTR __attribute__((__stdcall__)) CharPrevA(LPCSTR lpszStart,LPCSTR lpszCurrent);
  __attribute__((dllimport)) LPWSTR __attribute__((__stdcall__)) CharPrevW(LPCWSTR lpszStart,LPCWSTR lpszCurrent);
  __attribute__((dllimport)) LPSTR __attribute__((__stdcall__)) CharNextExA(WORD CodePage,LPCSTR lpCurrentChar,DWORD dwFlags);
  __attribute__((dllimport)) LPSTR __attribute__((__stdcall__)) CharPrevExA(WORD CodePage,LPCSTR lpStart,LPCSTR lpCurrentChar,DWORD dwFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsCharAlphaA(CHAR ch);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsCharAlphaW(WCHAR ch);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsCharAlphaNumericA(CHAR ch);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsCharAlphaNumericW(WCHAR ch);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsCharUpperA(CHAR ch);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsCharUpperW(WCHAR ch);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsCharLowerA(CHAR ch);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsCharLowerW(WCHAR ch);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) SetFocus(HWND hWnd);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) GetActiveWindow(void);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) GetFocus(void);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetKBCodePage(void);
  __attribute__((dllimport)) SHORT __attribute__((__stdcall__)) GetKeyState(int nVirtKey);
  __attribute__((dllimport)) SHORT __attribute__((__stdcall__)) GetAsyncKeyState(int vKey);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetKeyboardState(PBYTE lpKeyState);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetKeyboardState(LPBYTE lpKeyState);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetKeyNameTextA(LONG lParam,LPSTR lpString,int cchSize);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetKeyNameTextW(LONG lParam,LPWSTR lpString,int cchSize);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetKeyboardType(int nTypeFlag);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) ToAscii(UINT uVirtKey,UINT uScanCode,const BYTE *lpKeyState,LPWORD lpChar,UINT uFlags);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) ToAsciiEx(UINT uVirtKey,UINT uScanCode,const BYTE *lpKeyState,LPWORD lpChar,UINT uFlags,HKL dwhkl);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) ToUnicode(UINT wVirtKey,UINT wScanCode,const BYTE *lpKeyState,LPWSTR pwszBuff,int cchBuff,UINT wFlags);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) OemKeyScan(WORD wOemChar);
  __attribute__((dllimport)) SHORT __attribute__((__stdcall__)) VkKeyScanA(CHAR ch);
  __attribute__((dllimport)) SHORT __attribute__((__stdcall__)) VkKeyScanW(WCHAR ch);
  __attribute__((dllimport)) SHORT __attribute__((__stdcall__)) VkKeyScanExA(CHAR ch,HKL dwhkl);
  __attribute__((dllimport)) SHORT __attribute__((__stdcall__)) VkKeyScanExW(WCHAR ch,HKL dwhkl);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) keybd_event(BYTE bVk,BYTE bScan,DWORD dwFlags,ULONG_PTR dwExtraInfo);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) mouse_event(DWORD dwFlags,DWORD dx,DWORD dy,DWORD dwData,ULONG_PTR dwExtraInfo);
  typedef struct tagMOUSEINPUT {
    LONG dx;
    LONG dy;
    DWORD mouseData;
    DWORD dwFlags;
    DWORD time;
    ULONG_PTR dwExtraInfo;
  } MOUSEINPUT,*PMOUSEINPUT,*LPMOUSEINPUT;
  typedef struct tagKEYBDINPUT {
    WORD wVk;
    WORD wScan;
    DWORD dwFlags;
    DWORD time;
    ULONG_PTR dwExtraInfo;
  } KEYBDINPUT,*PKEYBDINPUT,*LPKEYBDINPUT;
  typedef struct tagHARDWAREINPUT {
    DWORD uMsg;
    WORD wParamL;
    WORD wParamH;
  } HARDWAREINPUT,*PHARDWAREINPUT,*LPHARDWAREINPUT;
  typedef struct tagINPUT {
    DWORD type;
    __extension__ union {
      MOUSEINPUT mi;
      KEYBDINPUT ki;
      HARDWAREINPUT hi;
    } ;
  } INPUT,*PINPUT,*LPINPUT;
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) SendInput(UINT cInputs,LPINPUT pInputs,int cbSize);
  struct HTOUCHINPUT__ { int unused; }; typedef struct HTOUCHINPUT__ *HTOUCHINPUT;
  typedef struct tagTOUCHINPUT {
    LONG x;
    LONG y;
    HANDLE hSource;
    DWORD dwID;
    DWORD dwFlags;
    DWORD dwMask;
    DWORD dwTime;
    ULONG_PTR dwExtraInfo;
    DWORD cxContact;
    DWORD cyContact;
  } TOUCHINPUT,*PTOUCHINPUT;
  typedef const TOUCHINPUT *PCTOUCHINPUT;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetTouchInputInfo (HTOUCHINPUT hTouchInput, UINT cInputs, PTOUCHINPUT pInputs, int cbSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CloseTouchInputHandle (HTOUCHINPUT hTouchInput);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) RegisterTouchWindow (HWND hwnd, ULONG ulFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) UnregisterTouchWindow (HWND hwnd);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsTouchWindow (HWND hwnd, PULONG pulFlags);
  typedef struct tagLASTINPUTINFO {
    UINT cbSize;
    DWORD dwTime;
  } LASTINPUTINFO,*PLASTINPUTINFO;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetLastInputInfo(PLASTINPUTINFO plii);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) MapVirtualKeyA(UINT uCode,UINT uMapType);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) MapVirtualKeyW(UINT uCode,UINT uMapType);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) MapVirtualKeyExA(UINT uCode,UINT uMapType,HKL dwhkl);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) MapVirtualKeyExW(UINT uCode,UINT uMapType,HKL dwhkl);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetInputState(void);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetQueueStatus(UINT flags);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) GetCapture(void);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) SetCapture(HWND hWnd);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ReleaseCapture(void);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) MsgWaitForMultipleObjects(DWORD nCount,const HANDLE *pHandles,WINBOOL fWaitAll,DWORD dwMilliseconds,DWORD dwWakeMask);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) MsgWaitForMultipleObjectsEx(DWORD nCount,const HANDLE *pHandles,DWORD dwMilliseconds,DWORD dwWakeMask,DWORD dwFlags);
  __attribute__((dllimport)) UINT_PTR __attribute__((__stdcall__)) SetTimer(HWND hWnd,UINT_PTR nIDEvent,UINT uElapse,TIMERPROC lpTimerFunc);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) KillTimer(HWND hWnd,UINT_PTR uIDEvent);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsWindowUnicode(HWND hWnd);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnableWindow(HWND hWnd,WINBOOL bEnable);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsWindowEnabled(HWND hWnd);
  __attribute__((dllimport)) HACCEL __attribute__((__stdcall__)) LoadAcceleratorsA(HINSTANCE hInstance,LPCSTR lpTableName);
  __attribute__((dllimport)) HACCEL __attribute__((__stdcall__)) LoadAcceleratorsW(HINSTANCE hInstance,LPCWSTR lpTableName);
  __attribute__((dllimport)) HACCEL __attribute__((__stdcall__)) CreateAcceleratorTableA(LPACCEL paccel,int cAccel);
  __attribute__((dllimport)) HACCEL __attribute__((__stdcall__)) CreateAcceleratorTableW(LPACCEL paccel,int cAccel);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DestroyAcceleratorTable(HACCEL hAccel);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) CopyAcceleratorTableA(HACCEL hAccelSrc,LPACCEL lpAccelDst,int cAccelEntries);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) CopyAcceleratorTableW(HACCEL hAccelSrc,LPACCEL lpAccelDst,int cAccelEntries);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) TranslateAcceleratorA(HWND hWnd,HACCEL hAccTable,LPMSG lpMsg);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) TranslateAcceleratorW(HWND hWnd,HACCEL hAccTable,LPMSG lpMsg);
  __attribute__((dllimport)) UINT_PTR __attribute__((__stdcall__)) SetCoalescableTimer (HWND hWnd, UINT_PTR nIDEvent, UINT uElapse, TIMERPROC lpTimerFunc, ULONG uToleranceDelay);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetSystemMetrics(int nIndex);
  __attribute__((dllimport)) HMENU __attribute__((__stdcall__)) LoadMenuA(HINSTANCE hInstance,LPCSTR lpMenuName);
  __attribute__((dllimport)) HMENU __attribute__((__stdcall__)) LoadMenuW(HINSTANCE hInstance,LPCWSTR lpMenuName);
  __attribute__((dllimport)) HMENU __attribute__((__stdcall__)) LoadMenuIndirectA(const MENUTEMPLATEA *lpMenuTemplate);
  __attribute__((dllimport)) HMENU __attribute__((__stdcall__)) LoadMenuIndirectW(const MENUTEMPLATEW *lpMenuTemplate);
  __attribute__((dllimport)) HMENU __attribute__((__stdcall__)) GetMenu(HWND hWnd);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetMenu(HWND hWnd,HMENU hMenu);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ChangeMenuA(HMENU hMenu,UINT cmd,LPCSTR lpszNewItem,UINT cmdInsert,UINT flags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ChangeMenuW(HMENU hMenu,UINT cmd,LPCWSTR lpszNewItem,UINT cmdInsert,UINT flags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) HiliteMenuItem(HWND hWnd,HMENU hMenu,UINT uIDHiliteItem,UINT uHilite);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetMenuStringA(HMENU hMenu,UINT uIDItem,LPSTR lpString,int cchMax,UINT flags);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetMenuStringW(HMENU hMenu,UINT uIDItem,LPWSTR lpString,int cchMax,UINT flags);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetMenuState(HMENU hMenu,UINT uId,UINT uFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DrawMenuBar(HWND hWnd);
  __attribute__((dllimport)) HMENU __attribute__((__stdcall__)) GetSystemMenu(HWND hWnd,WINBOOL bRevert);
  __attribute__((dllimport)) HMENU __attribute__((__stdcall__)) CreateMenu(void);
  __attribute__((dllimport)) HMENU __attribute__((__stdcall__)) CreatePopupMenu(void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DestroyMenu(HMENU hMenu);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) CheckMenuItem(HMENU hMenu,UINT uIDCheckItem,UINT uCheck);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnableMenuItem(HMENU hMenu,UINT uIDEnableItem,UINT uEnable);
  __attribute__((dllimport)) HMENU __attribute__((__stdcall__)) GetSubMenu(HMENU hMenu,int nPos);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetMenuItemID(HMENU hMenu,int nPos);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetMenuItemCount(HMENU hMenu);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) InsertMenuA(HMENU hMenu,UINT uPosition,UINT uFlags,UINT_PTR uIDNewItem,LPCSTR lpNewItem);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) InsertMenuW(HMENU hMenu,UINT uPosition,UINT uFlags,UINT_PTR uIDNewItem,LPCWSTR lpNewItem);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AppendMenuA(HMENU hMenu,UINT uFlags,UINT_PTR uIDNewItem,LPCSTR lpNewItem);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AppendMenuW(HMENU hMenu,UINT uFlags,UINT_PTR uIDNewItem,LPCWSTR lpNewItem);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ModifyMenuA(HMENU hMnu,UINT uPosition,UINT uFlags,UINT_PTR uIDNewItem,LPCSTR lpNewItem);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ModifyMenuW(HMENU hMnu,UINT uPosition,UINT uFlags,UINT_PTR uIDNewItem,LPCWSTR lpNewItem);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) RemoveMenu(HMENU hMenu,UINT uPosition,UINT uFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DeleteMenu(HMENU hMenu,UINT uPosition,UINT uFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetMenuItemBitmaps(HMENU hMenu,UINT uPosition,UINT uFlags,HBITMAP hBitmapUnchecked,HBITMAP hBitmapChecked);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) GetMenuCheckMarkDimensions(void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) TrackPopupMenu(HMENU hMenu,UINT uFlags,int x,int y,int nReserved,HWND hWnd,const RECT *prcRect);
  typedef struct tagTPMPARAMS {
    UINT cbSize;
    RECT rcExclude;
  } TPMPARAMS;
  typedef struct tagMENUINFO {
    DWORD cbSize;
    DWORD fMask;
    DWORD dwStyle;
    UINT cyMax;
    HBRUSH hbrBack;
    DWORD dwContextHelpID;
    ULONG_PTR dwMenuData;
  } MENUINFO,*LPMENUINFO;
  typedef TPMPARAMS *LPTPMPARAMS;
  typedef MENUINFO const *LPCMENUINFO;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) TrackPopupMenuEx(HMENU,UINT,int,int,HWND,LPTPMPARAMS);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetMenuInfo(HMENU,LPMENUINFO);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetMenuInfo(HMENU,LPCMENUINFO);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EndMenu(void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CalculatePopupWindowPosition (const POINT *anchorPoint, const SIZE *windowSize, UINT flags, RECT *excludeRect, RECT *popupWindowPosition);
  typedef struct tagMENUGETOBJECTINFO {
    DWORD dwFlags;
    UINT uPos;
    HMENU hmenu;
    PVOID riid;
    PVOID pvObj;
  } MENUGETOBJECTINFO,*PMENUGETOBJECTINFO;
  typedef struct tagMENUITEMINFOA {
    UINT cbSize;
    UINT fMask;
    UINT fType;
    UINT fState;
    UINT wID;
    HMENU hSubMenu;
    HBITMAP hbmpChecked;
    HBITMAP hbmpUnchecked;
    ULONG_PTR dwItemData;
    LPSTR dwTypeData;
    UINT cch;
    HBITMAP hbmpItem;
  } MENUITEMINFOA,*LPMENUITEMINFOA;
  typedef struct tagMENUITEMINFOW {
    UINT cbSize;
    UINT fMask;
    UINT fType;
    UINT fState;
    UINT wID;
    HMENU hSubMenu;
    HBITMAP hbmpChecked;
    HBITMAP hbmpUnchecked;
    ULONG_PTR dwItemData;
    LPWSTR dwTypeData;
    UINT cch;
    HBITMAP hbmpItem;
  } MENUITEMINFOW,*LPMENUITEMINFOW;
  typedef MENUITEMINFOA MENUITEMINFO;
  typedef LPMENUITEMINFOA LPMENUITEMINFO;
  typedef MENUITEMINFOA const *LPCMENUITEMINFOA;
  typedef MENUITEMINFOW const *LPCMENUITEMINFOW;
  typedef LPCMENUITEMINFOA LPCMENUITEMINFO;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) InsertMenuItemA(HMENU hmenu,UINT item,WINBOOL fByPosition,LPCMENUITEMINFOA lpmi);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) InsertMenuItemW(HMENU hmenu,UINT item,WINBOOL fByPosition,LPCMENUITEMINFOW lpmi);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetMenuItemInfoA(HMENU hmenu,UINT item,WINBOOL fByPosition,LPMENUITEMINFOA lpmii);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetMenuItemInfoW(HMENU hmenu,UINT item,WINBOOL fByPosition,LPMENUITEMINFOW lpmii);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetMenuItemInfoA(HMENU hmenu,UINT item,WINBOOL fByPositon,LPCMENUITEMINFOA lpmii);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetMenuItemInfoW(HMENU hmenu,UINT item,WINBOOL fByPositon,LPCMENUITEMINFOW lpmii);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetMenuDefaultItem(HMENU hMenu,UINT fByPos,UINT gmdiFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetMenuDefaultItem(HMENU hMenu,UINT uItem,UINT fByPos);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetMenuItemRect(HWND hWnd,HMENU hMenu,UINT uItem,LPRECT lprcItem);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) MenuItemFromPoint(HWND hWnd,HMENU hMenu,POINT ptScreen);
  typedef struct tagDROPSTRUCT {
    HWND hwndSource;
    HWND hwndSink;
    DWORD wFmt;
    ULONG_PTR dwData;
    POINT ptDrop;
    DWORD dwControlData;
  } DROPSTRUCT,*PDROPSTRUCT,*LPDROPSTRUCT;
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) DragObject(HWND hwndParent,HWND hwndFrom,UINT fmt,ULONG_PTR data,HCURSOR hcur);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DragDetect(HWND hwnd,POINT pt);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DrawIcon(HDC hDC,int X,int Y,HICON hIcon);
  typedef struct tagDRAWTEXTPARAMS {
    UINT cbSize;
    int iTabLength;
    int iLeftMargin;
    int iRightMargin;
    UINT uiLengthDrawn;
  } DRAWTEXTPARAMS,*LPDRAWTEXTPARAMS;
  __attribute__((dllimport)) int __attribute__((__stdcall__)) DrawTextA(HDC hdc,LPCSTR lpchText,int cchText,LPRECT lprc,UINT format);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) DrawTextW(HDC hdc,LPCWSTR lpchText,int cchText,LPRECT lprc,UINT format);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) DrawTextExA(HDC hdc,LPSTR lpchText,int cchText,LPRECT lprc,UINT format,LPDRAWTEXTPARAMS lpdtp);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) DrawTextExW(HDC hdc,LPWSTR lpchText,int cchText,LPRECT lprc,UINT format,LPDRAWTEXTPARAMS lpdtp);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GrayStringA(HDC hDC,HBRUSH hBrush,GRAYSTRINGPROC lpOutputFunc,LPARAM lpData,int nCount,int X,int Y,int nWidth,int nHeight);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GrayStringW(HDC hDC,HBRUSH hBrush,GRAYSTRINGPROC lpOutputFunc,LPARAM lpData,int nCount,int X,int Y,int nWidth,int nHeight);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DrawStateA(HDC hdc,HBRUSH hbrFore,DRAWSTATEPROC qfnCallBack,LPARAM lData,WPARAM wData,int x,int y,int cx,int cy,UINT uFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DrawStateW(HDC hdc,HBRUSH hbrFore,DRAWSTATEPROC qfnCallBack,LPARAM lData,WPARAM wData,int x,int y,int cx,int cy,UINT uFlags);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) TabbedTextOutA(HDC hdc,int x,int y,LPCSTR lpString,int chCount,int nTabPositions,const INT *lpnTabStopPositions,int nTabOrigin);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) TabbedTextOutW(HDC hdc,int x,int y,LPCWSTR lpString,int chCount,int nTabPositions,const INT *lpnTabStopPositions,int nTabOrigin);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetTabbedTextExtentA(HDC hdc,LPCSTR lpString,int chCount,int nTabPositions,const INT *lpnTabStopPositions);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetTabbedTextExtentW(HDC hdc,LPCWSTR lpString,int chCount,int nTabPositions,const INT *lpnTabStopPositions);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) UpdateWindow(HWND hWnd);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) SetActiveWindow(HWND hWnd);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) GetForegroundWindow(void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PaintDesktop(HDC hdc);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) SwitchToThisWindow(HWND hwnd,WINBOOL fUnknown);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetForegroundWindow(HWND hWnd);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AllowSetForegroundWindow(DWORD dwProcessId);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) LockSetForegroundWindow(UINT uLockCode);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) WindowFromDC(HDC hDC);
  __attribute__((dllimport)) HDC __attribute__((__stdcall__)) GetDC(HWND hWnd);
  __attribute__((dllimport)) HDC __attribute__((__stdcall__)) GetDCEx(HWND hWnd,HRGN hrgnClip,DWORD flags);
  __attribute__((dllimport)) HDC __attribute__((__stdcall__)) GetWindowDC(HWND hWnd);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) ReleaseDC(HWND hWnd,HDC hDC);
  __attribute__((dllimport)) HDC __attribute__((__stdcall__)) BeginPaint(HWND hWnd,LPPAINTSTRUCT lpPaint);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EndPaint(HWND hWnd,const PAINTSTRUCT *lpPaint);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetUpdateRect(HWND hWnd,LPRECT lpRect,WINBOOL bErase);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetUpdateRgn(HWND hWnd,HRGN hRgn,WINBOOL bErase);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) SetWindowRgn(HWND hWnd,HRGN hRgn,WINBOOL bRedraw);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetWindowRgn(HWND hWnd,HRGN hRgn);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetWindowRgnBox(HWND hWnd,LPRECT lprc);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) ExcludeUpdateRgn(HDC hDC,HWND hWnd);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) InvalidateRect(HWND hWnd,const RECT *lpRect,WINBOOL bErase);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ValidateRect(HWND hWnd,const RECT *lpRect);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) InvalidateRgn(HWND hWnd,HRGN hRgn,WINBOOL bErase);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ValidateRgn(HWND hWnd,HRGN hRgn);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) RedrawWindow(HWND hWnd,const RECT *lprcUpdate,HRGN hrgnUpdate,UINT flags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) LockWindowUpdate(HWND hWndLock);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ScrollWindow(HWND hWnd,int XAmount,int YAmount,const RECT *lpRect,const RECT *lpClipRect);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ScrollDC(HDC hDC,int dx,int dy,const RECT *lprcScroll,const RECT *lprcClip,HRGN hrgnUpdate,LPRECT lprcUpdate);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) ScrollWindowEx(HWND hWnd,int dx,int dy,const RECT *prcScroll,const RECT *prcClip,HRGN hrgnUpdate,LPRECT prcUpdate,UINT flags);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) SetScrollPos(HWND hWnd,int nBar,int nPos,WINBOOL bRedraw);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetScrollPos(HWND hWnd,int nBar);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetScrollRange(HWND hWnd,int nBar,int nMinPos,int nMaxPos,WINBOOL bRedraw);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetScrollRange(HWND hWnd,int nBar,LPINT lpMinPos,LPINT lpMaxPos);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ShowScrollBar(HWND hWnd,int wBar,WINBOOL bShow);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnableScrollBar(HWND hWnd,UINT wSBflags,UINT wArrows);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetPropA(HWND hWnd,LPCSTR lpString,HANDLE hData);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetPropW(HWND hWnd,LPCWSTR lpString,HANDLE hData);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) GetPropA(HWND hWnd,LPCSTR lpString);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) GetPropW(HWND hWnd,LPCWSTR lpString);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) RemovePropA(HWND hWnd,LPCSTR lpString);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) RemovePropW(HWND hWnd,LPCWSTR lpString);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) EnumPropsExA(HWND hWnd,PROPENUMPROCEXA lpEnumFunc,LPARAM lParam);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) EnumPropsExW(HWND hWnd,PROPENUMPROCEXW lpEnumFunc,LPARAM lParam);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) EnumPropsA(HWND hWnd,PROPENUMPROCA lpEnumFunc);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) EnumPropsW(HWND hWnd,PROPENUMPROCW lpEnumFunc);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetWindowTextA(HWND hWnd,LPCSTR lpString);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetWindowTextW(HWND hWnd,LPCWSTR lpString);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetWindowTextA(HWND hWnd,LPSTR lpString,int nMaxCount);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetWindowTextW(HWND hWnd,LPWSTR lpString,int nMaxCount);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetWindowTextLengthA(HWND hWnd);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetWindowTextLengthW(HWND hWnd);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetClientRect(HWND hWnd,LPRECT lpRect);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetWindowRect(HWND hWnd,LPRECT lpRect);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AdjustWindowRect(LPRECT lpRect,DWORD dwStyle,WINBOOL bMenu);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AdjustWindowRectEx(LPRECT lpRect,DWORD dwStyle,WINBOOL bMenu,DWORD dwExStyle);
  typedef struct tagHELPINFO {
    UINT cbSize;
    int iContextType;
    int iCtrlId;
    HANDLE hItemHandle;
    DWORD_PTR dwContextId;
    POINT MousePos;
  } HELPINFO,*LPHELPINFO;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetWindowContextHelpId(HWND,DWORD);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetWindowContextHelpId(HWND);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetMenuContextHelpId(HMENU,DWORD);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetMenuContextHelpId(HMENU);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) MessageBoxA(HWND hWnd,LPCSTR lpText,LPCSTR lpCaption,UINT uType);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) MessageBoxW(HWND hWnd,LPCWSTR lpText,LPCWSTR lpCaption,UINT uType);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) MessageBoxExA(HWND hWnd,LPCSTR lpText,LPCSTR lpCaption,UINT uType,WORD wLanguageId);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) MessageBoxExW(HWND hWnd,LPCWSTR lpText,LPCWSTR lpCaption,UINT uType,WORD wLanguageId);
  typedef void (__attribute__((__stdcall__)) *MSGBOXCALLBACK)(LPHELPINFO lpHelpInfo);
  typedef struct tagMSGBOXPARAMSA {
    UINT cbSize;
    HWND hwndOwner;
    HINSTANCE hInstance;
    LPCSTR lpszText;
    LPCSTR lpszCaption;
    DWORD dwStyle;
    LPCSTR lpszIcon;
    DWORD_PTR dwContextHelpId;
    MSGBOXCALLBACK lpfnMsgBoxCallback;
    DWORD dwLanguageId;
  } MSGBOXPARAMSA,*PMSGBOXPARAMSA,*LPMSGBOXPARAMSA;
  typedef struct tagMSGBOXPARAMSW {
    UINT cbSize;
    HWND hwndOwner;
    HINSTANCE hInstance;
    LPCWSTR lpszText;
    LPCWSTR lpszCaption;
    DWORD dwStyle;
    LPCWSTR lpszIcon;
    DWORD_PTR dwContextHelpId;
    MSGBOXCALLBACK lpfnMsgBoxCallback;
    DWORD dwLanguageId;
  } MSGBOXPARAMSW,*PMSGBOXPARAMSW,*LPMSGBOXPARAMSW;
  typedef MSGBOXPARAMSA MSGBOXPARAMS;
  typedef PMSGBOXPARAMSA PMSGBOXPARAMS;
  typedef LPMSGBOXPARAMSA LPMSGBOXPARAMS;
  __attribute__((dllimport)) int __attribute__((__stdcall__)) MessageBoxIndirectA(const MSGBOXPARAMSA *lpmbp);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) MessageBoxIndirectW(const MSGBOXPARAMSW *lpmbp);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) MessageBeep(UINT uType);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) ShowCursor(WINBOOL bShow);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetCursorPos(int X,int Y);
  __attribute__((dllimport)) HCURSOR __attribute__((__stdcall__)) SetCursor(HCURSOR hCursor);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetCursorPos(LPPOINT lpPoint);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ClipCursor(const RECT *lpRect);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetClipCursor(LPRECT lpRect);
  __attribute__((dllimport)) HCURSOR __attribute__((__stdcall__)) GetCursor(void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CreateCaret(HWND hWnd,HBITMAP hBitmap,int nWidth,int nHeight);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetCaretBlinkTime(void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetCaretBlinkTime(UINT uMSeconds);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DestroyCaret(void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) HideCaret(HWND hWnd);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ShowCaret(HWND hWnd);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetCaretPos(int X,int Y);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetCaretPos(LPPOINT lpPoint);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ClientToScreen(HWND hWnd,LPPOINT lpPoint);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ScreenToClient(HWND hWnd,LPPOINT lpPoint);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) MapWindowPoints(HWND hWndFrom,HWND hWndTo,LPPOINT lpPoints,UINT cPoints);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) WindowFromPoint(POINT Point);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) ChildWindowFromPoint(HWND hWndParent,POINT Point);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) ChildWindowFromPointEx(HWND hwnd,POINT pt,UINT flags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetPhysicalCursorPos (int X, int Y);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetPhysicalCursorPos (LPPOINT lpPoint);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) LogicalToPhysicalPoint (HWND hWnd, LPPOINT lpPoint);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PhysicalToLogicalPoint (HWND hWnd, LPPOINT lpPoint);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) WindowFromPhysicalPoint (POINT Point);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetSysColor(int nIndex);
  __attribute__((dllimport)) HBRUSH __attribute__((__stdcall__)) GetSysColorBrush(int nIndex);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetSysColors(int cElements,const INT *lpaElements,const COLORREF *lpaRgbValues);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DrawFocusRect(HDC hDC,const RECT *lprc);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) FillRect(HDC hDC,const RECT *lprc,HBRUSH hbr);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) FrameRect(HDC hDC,const RECT *lprc,HBRUSH hbr);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) InvertRect(HDC hDC,const RECT *lprc);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetRect(LPRECT lprc,int xLeft,int yTop,int xRight,int yBottom);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetRectEmpty(LPRECT lprc);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CopyRect(LPRECT lprcDst,const RECT *lprcSrc);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) InflateRect(LPRECT lprc,int dx,int dy);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IntersectRect(LPRECT lprcDst,const RECT *lprcSrc1,const RECT *lprcSrc2);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) UnionRect(LPRECT lprcDst,const RECT *lprcSrc1,const RECT *lprcSrc2);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SubtractRect(LPRECT lprcDst,const RECT *lprcSrc1,const RECT *lprcSrc2);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) OffsetRect(LPRECT lprc,int dx,int dy);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsRectEmpty(const RECT *lprc);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EqualRect(const RECT *lprc1,const RECT *lprc2);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PtInRect(const RECT *lprc,POINT pt);
  __attribute__((dllimport)) WORD __attribute__((__stdcall__)) GetWindowWord(HWND hWnd,int nIndex);
  __attribute__((dllimport)) WORD __attribute__((__stdcall__)) SetWindowWord(HWND hWnd,int nIndex,WORD wNewWord);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) GetWindowLongA(HWND hWnd,int nIndex);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) GetWindowLongW(HWND hWnd,int nIndex);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) SetWindowLongA(HWND hWnd,int nIndex,LONG dwNewLong);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) SetWindowLongW(HWND hWnd,int nIndex,LONG dwNewLong);
  __attribute__((dllimport)) WORD __attribute__((__stdcall__)) GetClassWord(HWND hWnd,int nIndex);
  __attribute__((dllimport)) WORD __attribute__((__stdcall__)) SetClassWord(HWND hWnd,int nIndex,WORD wNewWord);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetClassLongA(HWND hWnd,int nIndex);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetClassLongW(HWND hWnd,int nIndex);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) SetClassLongA(HWND hWnd,int nIndex,LONG dwNewLong);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) SetClassLongW(HWND hWnd,int nIndex,LONG dwNewLong);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetProcessDefaultLayout(DWORD *pdwDefaultLayout);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetProcessDefaultLayout(DWORD dwDefaultLayout);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) GetDesktopWindow(void);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) GetParent(HWND hWnd);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) SetParent(HWND hWndChild,HWND hWndNewParent);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumChildWindows(HWND hWndParent,WNDENUMPROC lpEnumFunc,LPARAM lParam);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) FindWindowA(LPCSTR lpClassName,LPCSTR lpWindowName);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) FindWindowW(LPCWSTR lpClassName,LPCWSTR lpWindowName);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) FindWindowExA(HWND hWndParent,HWND hWndChildAfter,LPCSTR lpszClass,LPCSTR lpszWindow);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) FindWindowExW(HWND hWndParent,HWND hWndChildAfter,LPCWSTR lpszClass,LPCWSTR lpszWindow);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) GetShellWindow(void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) RegisterShellHookWindow(HWND hwnd);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DeregisterShellHookWindow(HWND hwnd);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumWindows(WNDENUMPROC lpEnumFunc,LPARAM lParam);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumThreadWindows(DWORD dwThreadId,WNDENUMPROC lpfn,LPARAM lParam);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetClassNameA(HWND hWnd,LPSTR lpClassName,int nMaxCount);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetClassNameW(HWND hWnd,LPWSTR lpClassName,int nMaxCount);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) GetTopWindow(HWND hWnd);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetWindowThreadProcessId(HWND hWnd,LPDWORD lpdwProcessId);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsGUIThread(WINBOOL bConvert);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) GetLastActivePopup(HWND hWnd);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) GetWindow(HWND hWnd,UINT uCmd);
  __attribute__((dllimport)) HHOOK __attribute__((__stdcall__)) SetWindowsHookA (int nFilterType, HOOKPROC pfnFilterProc);
  __attribute__((dllimport)) HHOOK __attribute__((__stdcall__)) SetWindowsHookW (int nFilterType, HOOKPROC pfnFilterProc);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) UnhookWindowsHook (int nCode, HOOKPROC pfnFilterProc);
  __attribute__((dllimport)) HHOOK __attribute__((__stdcall__)) SetWindowsHookExA (int idHook, HOOKPROC lpfn, HINSTANCE hmod, DWORD dwThreadId);
  __attribute__((dllimport)) HHOOK __attribute__((__stdcall__)) SetWindowsHookExW (int idHook, HOOKPROC lpfn, HINSTANCE hmod, DWORD dwThreadId);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) UnhookWindowsHookEx (HHOOK hhk);
  __attribute__((dllimport)) LRESULT __attribute__((__stdcall__)) CallNextHookEx (HHOOK hhk, int nCode, WPARAM wParam, LPARAM lParam);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CheckMenuRadioItem(HMENU hmenu,UINT first,UINT last,UINT check,UINT flags);
  typedef struct {
    WORD versionNumber;
    WORD offset;
  } MENUITEMTEMPLATEHEADER,*PMENUITEMTEMPLATEHEADER;
  typedef struct {
    WORD mtOption;
    WORD mtID;
    WCHAR mtString[1];
  } MENUITEMTEMPLATE,*PMENUITEMTEMPLATE;
  __attribute__((dllimport)) HBITMAP __attribute__((__stdcall__)) LoadBitmapA(HINSTANCE hInstance,LPCSTR lpBitmapName);
  __attribute__((dllimport)) HBITMAP __attribute__((__stdcall__)) LoadBitmapW(HINSTANCE hInstance,LPCWSTR lpBitmapName);
  __attribute__((dllimport)) HCURSOR __attribute__((__stdcall__)) LoadCursorA(HINSTANCE hInstance,LPCSTR lpCursorName);
  __attribute__((dllimport)) HCURSOR __attribute__((__stdcall__)) LoadCursorW(HINSTANCE hInstance,LPCWSTR lpCursorName);
  __attribute__((dllimport)) HCURSOR __attribute__((__stdcall__)) LoadCursorFromFileA(LPCSTR lpFileName);
  __attribute__((dllimport)) HCURSOR __attribute__((__stdcall__)) LoadCursorFromFileW(LPCWSTR lpFileName);
  __attribute__((dllimport)) HCURSOR __attribute__((__stdcall__)) CreateCursor(HINSTANCE hInst,int xHotSpot,int yHotSpot,int nWidth,int nHeight,const void *pvANDPlane,const void *pvXORPlane);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DestroyCursor(HCURSOR hCursor);
  typedef struct _ICONINFO {
    WINBOOL fIcon;
    DWORD xHotspot;
    DWORD yHotspot;
    HBITMAP hbmMask;
    HBITMAP hbmColor;
  } ICONINFO;
  typedef ICONINFO *PICONINFO;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetSystemCursor(HCURSOR hcur,DWORD id);
  __attribute__((dllimport)) HICON __attribute__((__stdcall__)) LoadIconA(HINSTANCE hInstance,LPCSTR lpIconName);
  __attribute__((dllimport)) HICON __attribute__((__stdcall__)) LoadIconW(HINSTANCE hInstance,LPCWSTR lpIconName);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) PrivateExtractIconsA(LPCSTR szFileName,int nIconIndex,int cxIcon,int cyIcon,HICON *phicon,UINT *piconid,UINT nIcons,UINT flags);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) PrivateExtractIconsW(LPCWSTR szFileName,int nIconIndex,int cxIcon,int cyIcon,HICON *phicon,UINT *piconid,UINT nIcons,UINT flags);
  __attribute__((dllimport)) HICON __attribute__((__stdcall__)) CreateIcon(HINSTANCE hInstance,int nWidth,int nHeight,BYTE cPlanes,BYTE cBitsPixel,const BYTE *lpbANDbits,const BYTE *lpbXORbits);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DestroyIcon(HICON hIcon);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) LookupIconIdFromDirectory(PBYTE presbits,WINBOOL fIcon);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) LookupIconIdFromDirectoryEx(PBYTE presbits,WINBOOL fIcon,int cxDesired,int cyDesired,UINT Flags);
  __attribute__((dllimport)) HICON __attribute__((__stdcall__)) CreateIconFromResource(PBYTE presbits,DWORD dwResSize,WINBOOL fIcon,DWORD dwVer);
  __attribute__((dllimport)) HICON __attribute__((__stdcall__)) CreateIconFromResourceEx(PBYTE presbits,DWORD dwResSize,WINBOOL fIcon,DWORD dwVer,int cxDesired,int cyDesired,UINT Flags);
  typedef struct tagCURSORSHAPE {
    int xHotSpot;
    int yHotSpot;
    int cx;
    int cy;
    int cbWidth;
    BYTE Planes;
    BYTE BitsPixel;
  } CURSORSHAPE,*LPCURSORSHAPE;
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) LoadImageA(HINSTANCE hInst,LPCSTR name,UINT type,int cx,int cy,UINT fuLoad);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) LoadImageW(HINSTANCE hInst,LPCWSTR name,UINT type,int cx,int cy,UINT fuLoad);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CopyImage(HANDLE h,UINT type,int cx,int cy,UINT flags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DrawIconEx(HDC hdc,int xLeft,int yTop,HICON hIcon,int cxWidth,int cyWidth,UINT istepIfAniCur,HBRUSH hbrFlickerFreeDraw,UINT diFlags);
  __attribute__((dllimport)) HICON __attribute__((__stdcall__)) CreateIconIndirect(PICONINFO piconinfo);
  __attribute__((dllimport)) HICON __attribute__((__stdcall__)) CopyIcon(HICON hIcon);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetIconInfo(HICON hIcon,PICONINFO piconinfo);
  typedef struct _ICONINFOEXA {
    DWORD cbSize;
    WINBOOL fIcon;
    DWORD xHotspot;
    DWORD yHotspot;
    HBITMAP hbmMask;
    HBITMAP hbmColor;
    WORD wResID;
    CHAR szModName[260];
    CHAR szResName[260];
  } ICONINFOEXA,*PICONINFOEXA;
  typedef struct _ICONINFOEXW {
    DWORD cbSize;
    WINBOOL fIcon;
    DWORD xHotspot;
    DWORD yHotspot;
    HBITMAP hbmMask;
    HBITMAP hbmColor;
    WORD wResID;
    WCHAR szModName[260];
    WCHAR szResName[260];
  } ICONINFOEXW,*PICONINFOEXW;
  typedef ICONINFOEXA ICONINFOEX;;
  typedef PICONINFOEXA PICONINFOEX;;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetIconInfoExA (HICON hicon, PICONINFOEXA piconinfo);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetIconInfoExW (HICON hicon, PICONINFOEXW piconinfo);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsDialogMessageA(HWND hDlg,LPMSG lpMsg);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsDialogMessageW(HWND hDlg,LPMSG lpMsg);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) MapDialogRect(HWND hDlg,LPRECT lpRect);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) DlgDirListA(HWND hDlg,LPSTR lpPathSpec,int nIDListBox,int nIDStaticPath,UINT uFileType);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) DlgDirListW(HWND hDlg,LPWSTR lpPathSpec,int nIDListBox,int nIDStaticPath,UINT uFileType);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DlgDirSelectExA(HWND hwndDlg,LPSTR lpString,int chCount,int idListBox);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DlgDirSelectExW(HWND hwndDlg,LPWSTR lpString,int chCount,int idListBox);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) DlgDirListComboBoxA(HWND hDlg,LPSTR lpPathSpec,int nIDComboBox,int nIDStaticPath,UINT uFiletype);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) DlgDirListComboBoxW(HWND hDlg,LPWSTR lpPathSpec,int nIDComboBox,int nIDStaticPath,UINT uFiletype);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DlgDirSelectComboBoxExA(HWND hwndDlg,LPSTR lpString,int cchOut,int idComboBox);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DlgDirSelectComboBoxExW(HWND hwndDlg,LPWSTR lpString,int cchOut,int idComboBox);
  typedef struct tagSCROLLINFO {
    UINT cbSize;
    UINT fMask;
    int nMin;
    int nMax;
    UINT nPage;
    int nPos;
    int nTrackPos;
  } SCROLLINFO,*LPSCROLLINFO;
  typedef SCROLLINFO const *LPCSCROLLINFO;
  __attribute__((dllimport)) int __attribute__((__stdcall__)) SetScrollInfo(HWND hwnd,int nBar,LPCSCROLLINFO lpsi,WINBOOL redraw);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetScrollInfo(HWND hwnd,int nBar,LPSCROLLINFO lpsi);
  typedef struct tagMDICREATESTRUCTA {
    LPCSTR szClass;
    LPCSTR szTitle;
    HANDLE hOwner;
    int x;
    int y;
    int cx;
    int cy;
    DWORD style;
    LPARAM lParam;
  } MDICREATESTRUCTA,*LPMDICREATESTRUCTA;
  typedef struct tagMDICREATESTRUCTW {
    LPCWSTR szClass;
    LPCWSTR szTitle;
    HANDLE hOwner;
    int x;
    int y;
    int cx;
    int cy;
    DWORD style;
    LPARAM lParam;
  } MDICREATESTRUCTW,*LPMDICREATESTRUCTW;
  typedef MDICREATESTRUCTA MDICREATESTRUCT;
  typedef LPMDICREATESTRUCTA LPMDICREATESTRUCT;
  typedef struct tagCLIENTCREATESTRUCT {
    HANDLE hWindowMenu;
    UINT idFirstChild;
  } CLIENTCREATESTRUCT,*LPCLIENTCREATESTRUCT;
  __attribute__((dllimport)) LRESULT __attribute__((__stdcall__)) DefFrameProcA(HWND hWnd,HWND hWndMDIClient,UINT uMsg,WPARAM wParam,LPARAM lParam);
  __attribute__((dllimport)) LRESULT __attribute__((__stdcall__)) DefFrameProcW(HWND hWnd,HWND hWndMDIClient,UINT uMsg,WPARAM wParam,LPARAM lParam);
  __attribute__((dllimport)) LRESULT __attribute__((__stdcall__)) DefMDIChildProcA(HWND hWnd,UINT uMsg,WPARAM wParam,LPARAM lParam);
  __attribute__((dllimport)) LRESULT __attribute__((__stdcall__)) DefMDIChildProcW(HWND hWnd,UINT uMsg,WPARAM wParam,LPARAM lParam);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) TranslateMDISysAccel(HWND hWndClient,LPMSG lpMsg);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) ArrangeIconicWindows(HWND hWnd);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) CreateMDIWindowA(LPCSTR lpClassName,LPCSTR lpWindowName,DWORD dwStyle,int X,int Y,int nWidth,int nHeight,HWND hWndParent,HINSTANCE hInstance,LPARAM lParam);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) CreateMDIWindowW(LPCWSTR lpClassName,LPCWSTR lpWindowName,DWORD dwStyle,int X,int Y,int nWidth,int nHeight,HWND hWndParent,HINSTANCE hInstance,LPARAM lParam);
  __attribute__((dllimport)) WORD __attribute__((__stdcall__)) TileWindows(HWND hwndParent,UINT wHow,const RECT *lpRect,UINT cKids,const HWND *lpKids);
  __attribute__((dllimport)) WORD __attribute__((__stdcall__)) CascadeWindows(HWND hwndParent,UINT wHow,const RECT *lpRect,UINT cKids,const HWND *lpKids);
  typedef DWORD HELPPOLY;
  typedef struct tagMULTIKEYHELPA {
    DWORD mkSize;
    CHAR mkKeylist;
    CHAR szKeyphrase[1];
  } MULTIKEYHELPA,*PMULTIKEYHELPA,*LPMULTIKEYHELPA;
  typedef struct tagMULTIKEYHELPW {
    DWORD mkSize;
    WCHAR mkKeylist;
    WCHAR szKeyphrase[1];
  } MULTIKEYHELPW,*PMULTIKEYHELPW,*LPMULTIKEYHELPW;
  typedef MULTIKEYHELPA MULTIKEYHELP;
  typedef PMULTIKEYHELPA PMULTIKEYHELP;
  typedef LPMULTIKEYHELPA LPMULTIKEYHELP;
  typedef struct tagHELPWININFOA {
    int wStructSize;
    int x;
    int y;
    int dx;
    int dy;
    int wMax;
    CHAR rgchMember[2];
  } HELPWININFOA,*PHELPWININFOA,*LPHELPWININFOA;
  typedef struct tagHELPWININFOW {
    int wStructSize;
    int x;
    int y;
    int dx;
    int dy;
    int wMax;
    WCHAR rgchMember[2];
  } HELPWININFOW,*PHELPWININFOW,*LPHELPWININFOW;
  typedef HELPWININFOA HELPWININFO;
  typedef PHELPWININFOA PHELPWININFO;
  typedef LPHELPWININFOA LPHELPWININFO;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) WinHelpA(HWND hWndMain,LPCSTR lpszHelp,UINT uCommand,ULONG_PTR dwData);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) WinHelpW(HWND hWndMain,LPCWSTR lpszHelp,UINT uCommand,ULONG_PTR dwData);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetGuiResources(HANDLE hProcess,DWORD uiFlags);
  typedef struct tagNONCLIENTMETRICSA {
    UINT cbSize;
    int iBorderWidth;
    int iScrollWidth;
    int iScrollHeight;
    int iCaptionWidth;
    int iCaptionHeight;
    LOGFONTA lfCaptionFont;
    int iSmCaptionWidth;
    int iSmCaptionHeight;
    LOGFONTA lfSmCaptionFont;
    int iMenuWidth;
    int iMenuHeight;
    LOGFONTA lfMenuFont;
    LOGFONTA lfStatusFont;
    LOGFONTA lfMessageFont;
    int iPaddedBorderWidth;
  } NONCLIENTMETRICSA,*PNONCLIENTMETRICSA,*LPNONCLIENTMETRICSA;
  typedef struct tagNONCLIENTMETRICSW {
    UINT cbSize;
    int iBorderWidth;
    int iScrollWidth;
    int iScrollHeight;
    int iCaptionWidth;
    int iCaptionHeight;
    LOGFONTW lfCaptionFont;
    int iSmCaptionWidth;
    int iSmCaptionHeight;
    LOGFONTW lfSmCaptionFont;
    int iMenuWidth;
    int iMenuHeight;
    LOGFONTW lfMenuFont;
    LOGFONTW lfStatusFont;
    LOGFONTW lfMessageFont;
    int iPaddedBorderWidth;
  } NONCLIENTMETRICSW,*PNONCLIENTMETRICSW,*LPNONCLIENTMETRICSW;
  typedef NONCLIENTMETRICSA NONCLIENTMETRICS;
  typedef PNONCLIENTMETRICSA PNONCLIENTMETRICS;
  typedef LPNONCLIENTMETRICSA LPNONCLIENTMETRICS;
  typedef struct tagMINIMIZEDMETRICS {
    UINT cbSize;
    int iWidth;
    int iHorzGap;
    int iVertGap;
    int iArrange;
  } MINIMIZEDMETRICS,*PMINIMIZEDMETRICS,*LPMINIMIZEDMETRICS;
  typedef struct tagICONMETRICSA {
    UINT cbSize;
    int iHorzSpacing;
    int iVertSpacing;
    int iTitleWrap;
    LOGFONTA lfFont;
  } ICONMETRICSA,*PICONMETRICSA,*LPICONMETRICSA;
  typedef struct tagICONMETRICSW {
    UINT cbSize;
    int iHorzSpacing;
    int iVertSpacing;
    int iTitleWrap;
    LOGFONTW lfFont;
  } ICONMETRICSW,*PICONMETRICSW,*LPICONMETRICSW;
  typedef ICONMETRICSA ICONMETRICS;
  typedef PICONMETRICSA PICONMETRICS;
  typedef LPICONMETRICSA LPICONMETRICS;
  typedef struct tagANIMATIONINFO {
    UINT cbSize;
    int iMinAnimate;
  } ANIMATIONINFO,*LPANIMATIONINFO;
  typedef struct tagSERIALKEYSA {
    UINT cbSize;
    DWORD dwFlags;
    LPSTR lpszActivePort;
    LPSTR lpszPort;
    UINT iBaudRate;
    UINT iPortState;
    UINT iActive;
  } SERIALKEYSA,*LPSERIALKEYSA;
  typedef struct tagSERIALKEYSW {
    UINT cbSize;
    DWORD dwFlags;
    LPWSTR lpszActivePort;
    LPWSTR lpszPort;
    UINT iBaudRate;
    UINT iPortState;
    UINT iActive;
  } SERIALKEYSW,*LPSERIALKEYSW;
  typedef SERIALKEYSA SERIALKEYS;
  typedef LPSERIALKEYSA LPSERIALKEYS;
  typedef struct tagHIGHCONTRASTA {
    UINT cbSize;
    DWORD dwFlags;
    LPSTR lpszDefaultScheme;
  } HIGHCONTRASTA,*LPHIGHCONTRASTA;
  typedef struct tagHIGHCONTRASTW {
    UINT cbSize;
    DWORD dwFlags;
    LPWSTR lpszDefaultScheme;
  } HIGHCONTRASTW,*LPHIGHCONTRASTW;
  typedef HIGHCONTRASTA HIGHCONTRAST;
  typedef LPHIGHCONTRASTA LPHIGHCONTRAST;
typedef struct _VIDEOPARAMETERS {
  GUID Guid;
  ULONG dwOffset;
  ULONG dwCommand;
  ULONG dwFlags;
  ULONG dwMode;
  ULONG dwTVStandard;
  ULONG dwAvailableModes;
  ULONG dwAvailableTVStandard;
  ULONG dwFlickerFilter;
  ULONG dwOverScanX;
  ULONG dwOverScanY;
  ULONG dwMaxUnscaledX;
  ULONG dwMaxUnscaledY;
  ULONG dwPositionX;
  ULONG dwPositionY;
  ULONG dwBrightness;
  ULONG dwContrast;
  ULONG dwCPType;
  ULONG dwCPCommand;
  ULONG dwCPStandard;
  ULONG dwCPKey;
  ULONG bCP_APSTriggerBits;
  UCHAR bOEMCopyProtection[256];
} VIDEOPARAMETERS,*PVIDEOPARAMETERS,*LPVIDEOPARAMETERS;
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) ChangeDisplaySettingsA(LPDEVMODEA lpDevMode,DWORD dwFlags);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) ChangeDisplaySettingsW(LPDEVMODEW lpDevMode,DWORD dwFlags);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) ChangeDisplaySettingsExA(LPCSTR lpszDeviceName,LPDEVMODEA lpDevMode,HWND hwnd,DWORD dwflags,LPVOID lParam);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) ChangeDisplaySettingsExW(LPCWSTR lpszDeviceName,LPDEVMODEW lpDevMode,HWND hwnd,DWORD dwflags,LPVOID lParam);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumDisplaySettingsA(LPCSTR lpszDeviceName,DWORD iModeNum,LPDEVMODEA lpDevMode);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumDisplaySettingsW(LPCWSTR lpszDeviceName,DWORD iModeNum,LPDEVMODEW lpDevMode);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumDisplaySettingsExA(LPCSTR lpszDeviceName,DWORD iModeNum,LPDEVMODEA lpDevMode,DWORD dwFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumDisplaySettingsExW(LPCWSTR lpszDeviceName,DWORD iModeNum,LPDEVMODEW lpDevMode,DWORD dwFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumDisplayDevicesA(LPCSTR lpDevice,DWORD iDevNum,PDISPLAY_DEVICEA lpDisplayDevice,DWORD dwFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumDisplayDevicesW(LPCWSTR lpDevice,DWORD iDevNum,PDISPLAY_DEVICEW lpDisplayDevice,DWORD dwFlags);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) GetDisplayConfigBufferSizes (UINT32 flags, UINT32 *numPathArrayElements, UINT32 *numModeInfoArrayElements);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) SetDisplayConfig (UINT32 numPathArrayElements, DISPLAYCONFIG_PATH_INFO *pathArray, UINT32 numModeInfoArrayElements, DISPLAYCONFIG_MODE_INFO *modeInfoArray, UINT32 flags);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) QueryDisplayConfig (UINT32 flags, UINT32 *numPathArrayElements, DISPLAYCONFIG_PATH_INFO *pathArray, UINT32 *numModeInfoArrayElements, DISPLAYCONFIG_MODE_INFO *modeInfoArray, DISPLAYCONFIG_TOPOLOGY_ID *currentTopologyId);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) DisplayConfigGetDeviceInfo (DISPLAYCONFIG_DEVICE_INFO_HEADER *requestPacket);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) DisplayConfigSetDeviceInfo (DISPLAYCONFIG_DEVICE_INFO_HEADER *setPacket);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SystemParametersInfoA(UINT uiAction,UINT uiParam,PVOID pvParam,UINT fWinIni);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SystemParametersInfoW(UINT uiAction,UINT uiParam,PVOID pvParam,UINT fWinIni);
  typedef struct tagFILTERKEYS {
    UINT cbSize;
    DWORD dwFlags;
    DWORD iWaitMSec;
    DWORD iDelayMSec;
    DWORD iRepeatMSec;
    DWORD iBounceMSec;
  } FILTERKEYS,*LPFILTERKEYS;
  typedef struct tagSTICKYKEYS {
    UINT cbSize;
    DWORD dwFlags;
  } STICKYKEYS,*LPSTICKYKEYS;
  typedef struct tagMOUSEKEYS {
    UINT cbSize;
    DWORD dwFlags;
    DWORD iMaxSpeed;
    DWORD iTimeToMaxSpeed;
    DWORD iCtrlSpeed;
    DWORD dwReserved1;
    DWORD dwReserved2;
  } MOUSEKEYS,*LPMOUSEKEYS;
  typedef struct tagACCESSTIMEOUT {
    UINT cbSize;
    DWORD dwFlags;
    DWORD iTimeOutMSec;
  } ACCESSTIMEOUT,*LPACCESSTIMEOUT;
  typedef struct tagSOUNDSENTRYA {
    UINT cbSize;
    DWORD dwFlags;
    DWORD iFSTextEffect;
    DWORD iFSTextEffectMSec;
    DWORD iFSTextEffectColorBits;
    DWORD iFSGrafEffect;
    DWORD iFSGrafEffectMSec;
    DWORD iFSGrafEffectColor;
    DWORD iWindowsEffect;
    DWORD iWindowsEffectMSec;
    LPSTR lpszWindowsEffectDLL;
    DWORD iWindowsEffectOrdinal;
  } SOUNDSENTRYA,*LPSOUNDSENTRYA;
  typedef struct tagSOUNDSENTRYW {
    UINT cbSize;
    DWORD dwFlags;
    DWORD iFSTextEffect;
    DWORD iFSTextEffectMSec;
    DWORD iFSTextEffectColorBits;
    DWORD iFSGrafEffect;
    DWORD iFSGrafEffectMSec;
    DWORD iFSGrafEffectColor;
    DWORD iWindowsEffect;
    DWORD iWindowsEffectMSec;
    LPWSTR lpszWindowsEffectDLL;
    DWORD iWindowsEffectOrdinal;
  } SOUNDSENTRYW,*LPSOUNDSENTRYW;
  typedef SOUNDSENTRYA SOUNDSENTRY;
  typedef LPSOUNDSENTRYA LPSOUNDSENTRY;
  typedef struct tagTOGGLEKEYS {
    UINT cbSize;
    DWORD dwFlags;
  } TOGGLEKEYS,*LPTOGGLEKEYS;
  typedef struct tagMONITORINFO {
    DWORD cbSize;
    RECT rcMonitor;
    RECT rcWork;
    DWORD dwFlags;
  } MONITORINFO,*LPMONITORINFO;
  typedef struct tagAUDIODESCRIPTION {
    UINT cbSize;
    WINBOOL Enabled;
    LCID Locale;
  } AUDIODESCRIPTION,*LPAUDIODESCRIPTION;
  typedef struct tagMONITORINFOEXA {
    __extension__ struct {
      DWORD cbSize;
      RECT rcMonitor;
      RECT rcWork;
      DWORD dwFlags;
    };
    CHAR szDevice[32];
  } MONITORINFOEXA,*LPMONITORINFOEXA;
  typedef struct tagMONITORINFOEXW {
    __extension__ struct {
      DWORD cbSize;
      RECT rcMonitor;
      RECT rcWork;
      DWORD dwFlags;
    };
    WCHAR szDevice[32];
  } MONITORINFOEXW,*LPMONITORINFOEXW;
  typedef MONITORINFOEXA MONITORINFOEX;
  typedef LPMONITORINFOEXA LPMONITORINFOEX;
  typedef WINBOOL (__attribute__((__stdcall__)) *MONITORENUMPROC)(HMONITOR,HDC,LPRECT,LPARAM);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) SetDebugErrorLevel (DWORD dwLevel);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) SetLastErrorEx (DWORD dwErrCode, DWORD dwType);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) InternalGetWindowText (HWND hWnd, LPWSTR pString, int cchMaxCount);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CancelShutdown (void);
  __attribute__((dllimport)) HMONITOR __attribute__((__stdcall__)) MonitorFromPoint(POINT pt,DWORD dwFlags);
  __attribute__((dllimport)) HMONITOR __attribute__((__stdcall__)) MonitorFromRect(LPCRECT lprc,DWORD dwFlags);
  __attribute__((dllimport)) HMONITOR __attribute__((__stdcall__)) MonitorFromWindow(HWND hwnd,DWORD dwFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EndTask (HWND hWnd, WINBOOL fShutDown, WINBOOL fForce);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SoundSentry (void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetMonitorInfoA(HMONITOR hMonitor,LPMONITORINFO lpmi);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetMonitorInfoW(HMONITOR hMonitor,LPMONITORINFO lpmi);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumDisplayMonitors(HDC hdc,LPCRECT lprcClip,MONITORENUMPROC lpfnEnum,LPARAM dwData);
  typedef void (__attribute__((__stdcall__)) *WINEVENTPROC)(HWINEVENTHOOK hWinEventHook,DWORD event,HWND hwnd,LONG idObject,LONG idChild,DWORD idEventThread,DWORD dwmsEventTime);
  __attribute__((dllimport)) void __attribute__((__stdcall__)) NotifyWinEvent(DWORD event,HWND hwnd,LONG idObject,LONG idChild);
  __attribute__((dllimport)) HWINEVENTHOOK __attribute__((__stdcall__)) SetWinEventHook(DWORD eventMin,DWORD eventMax,HMODULE hmodWinEventProc,WINEVENTPROC pfnWinEventProc,DWORD idProcess,DWORD idThread,DWORD dwFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsWinEventHookInstalled(DWORD event);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) UnhookWinEvent(HWINEVENTHOOK hWinEventHook);
  typedef struct tagGUITHREADINFO {
    DWORD cbSize;
    DWORD flags;
    HWND hwndActive;
    HWND hwndFocus;
    HWND hwndCapture;
    HWND hwndMenuOwner;
    HWND hwndMoveSize;
    HWND hwndCaret;
    RECT rcCaret;
  } GUITHREADINFO,*PGUITHREADINFO,*LPGUITHREADINFO;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetGUIThreadInfo(DWORD idThread,PGUITHREADINFO pgui);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) BlockInput (WINBOOL fBlockIt);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetWindowModuleFileNameA(HWND hwnd,LPSTR pszFileName,UINT cchFileNameMax);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetWindowModuleFileNameW(HWND hwnd,LPWSTR pszFileName,UINT cchFileNameMax);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetProcessDPIAware (void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsProcessDPIAware (void);
  typedef struct tagCURSORINFO {
    DWORD cbSize;
    DWORD flags;
    HCURSOR hCursor;
    POINT ptScreenPos;
  } CURSORINFO,*PCURSORINFO,*LPCURSORINFO;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetCursorInfo(PCURSORINFO pci);
  typedef struct tagWINDOWINFO {
    DWORD cbSize;
    RECT rcWindow;
    RECT rcClient;
    DWORD dwStyle;
    DWORD dwExStyle;
    DWORD dwWindowStatus;
    UINT cxWindowBorders;
    UINT cyWindowBorders;
    ATOM atomWindowType;
    WORD wCreatorVersion;
  } WINDOWINFO,*PWINDOWINFO,*LPWINDOWINFO;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetWindowInfo(HWND hwnd,PWINDOWINFO pwi);
  typedef struct tagTITLEBARINFO {
    DWORD cbSize;
    RECT rcTitleBar;
    DWORD rgstate[5 + 1];
  } TITLEBARINFO,*PTITLEBARINFO,*LPTITLEBARINFO;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetTitleBarInfo(HWND hwnd,PTITLEBARINFO pti);
  typedef struct tagTITLEBARINFOEX {
    DWORD cbSize;
    RECT rcTitleBar;
    DWORD rgstate[5 + 1];
    RECT rgrect[5 + 1];
  } TITLEBARINFOEX,*PTITLEBARINFOEX,*LPTITLEBARINFOEX;
  typedef struct tagMENUBARINFO {
    DWORD cbSize;
    RECT rcBar;
    HMENU hMenu;
    HWND hwndMenu;
    WINBOOL fBarFocused:1;
    WINBOOL fFocused:1;
  } MENUBARINFO,*PMENUBARINFO,*LPMENUBARINFO;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetMenuBarInfo(HWND hwnd,LONG idObject,LONG idItem,PMENUBARINFO pmbi);
  typedef struct tagSCROLLBARINFO {
    DWORD cbSize;
    RECT rcScrollBar;
    int dxyLineButton;
    int xyThumbTop;
    int xyThumbBottom;
    int reserved;
    DWORD rgstate[5 + 1];
  } SCROLLBARINFO,*PSCROLLBARINFO,*LPSCROLLBARINFO;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetScrollBarInfo(HWND hwnd,LONG idObject,PSCROLLBARINFO psbi);
  typedef struct tagCOMBOBOXINFO {
    DWORD cbSize;
    RECT rcItem;
    RECT rcButton;
    DWORD stateButton;
    HWND hwndCombo;
    HWND hwndItem;
    HWND hwndList;
  } COMBOBOXINFO,*PCOMBOBOXINFO,*LPCOMBOBOXINFO;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetComboBoxInfo(HWND hwndCombo,PCOMBOBOXINFO pcbi);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) GetAncestor(HWND hwnd,UINT gaFlags);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) RealChildWindowFromPoint(HWND hwndParent,POINT ptParentClientCoords);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) RealGetWindowClassA(HWND hwnd,LPSTR ptszClassName,UINT cchClassNameMax);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) RealGetWindowClassW(HWND hwnd,LPWSTR ptszClassName,UINT cchClassNameMax);
  typedef struct tagALTTABINFO {
    DWORD cbSize;
    int cItems;
    int cColumns;
    int cRows;
    int iColFocus;
    int iRowFocus;
    int cxItem;
    int cyItem;
    POINT ptStart;
  } ALTTABINFO,*PALTTABINFO,*LPALTTABINFO;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetAltTabInfoA(HWND hwnd,int iItem,PALTTABINFO pati,LPSTR pszItemText,UINT cchItemText);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetAltTabInfoW(HWND hwnd,int iItem,PALTTABINFO pati,LPWSTR pszItemText,UINT cchItemText);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetListBoxInfo(HWND hwnd);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) LockWorkStation(void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) UserHandleGrantAccess(HANDLE hUserHandle,HANDLE hJob,WINBOOL bGrant);
  struct HRAWINPUT__ { int unused; }; typedef struct HRAWINPUT__ *HRAWINPUT;
  typedef struct tagRAWINPUTHEADER {
    DWORD dwType;
    DWORD dwSize;
    HANDLE hDevice;
    WPARAM wParam;
  } RAWINPUTHEADER,*PRAWINPUTHEADER,*LPRAWINPUTHEADER;
  typedef struct tagRAWMOUSE {
    USHORT usFlags;
    __extension__ union {
      ULONG ulButtons;
      __extension__ struct {
 USHORT usButtonFlags;
 USHORT usButtonData;
      };
    };
    ULONG ulRawButtons;
    LONG lLastX;
    LONG lLastY;
    ULONG ulExtraInformation;
  } RAWMOUSE,*PRAWMOUSE,*LPRAWMOUSE;
  typedef struct tagRAWKEYBOARD {
    USHORT MakeCode;
    USHORT Flags;
    USHORT Reserved;
    USHORT VKey;
    UINT Message;
    ULONG ExtraInformation;
  } RAWKEYBOARD,*PRAWKEYBOARD,*LPRAWKEYBOARD;
  typedef struct tagRAWHID {
    DWORD dwSizeHid;
    DWORD dwCount;
    BYTE bRawData[1];
  } RAWHID,*PRAWHID,*LPRAWHID;
  typedef struct tagRAWINPUT {
    RAWINPUTHEADER header;
    union {
      RAWMOUSE mouse;
      RAWKEYBOARD keyboard;
      RAWHID hid;
    } data;
  } RAWINPUT,*PRAWINPUT,*LPRAWINPUT;
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetRawInputData(HRAWINPUT hRawInput,UINT uiCommand,LPVOID pData,PUINT pcbSize,UINT cbSizeHeader);
  typedef struct tagRID_DEVICE_INFO_MOUSE {
    DWORD dwId;
    DWORD dwNumberOfButtons;
    DWORD dwSampleRate;
    WINBOOL fHasHorizontalWheel;
  } RID_DEVICE_INFO_MOUSE,*PRID_DEVICE_INFO_MOUSE;
  typedef struct tagRID_DEVICE_INFO_KEYBOARD {
    DWORD dwType;
    DWORD dwSubType;
    DWORD dwKeyboardMode;
    DWORD dwNumberOfFunctionKeys;
    DWORD dwNumberOfIndicators;
    DWORD dwNumberOfKeysTotal;
  } RID_DEVICE_INFO_KEYBOARD,*PRID_DEVICE_INFO_KEYBOARD;
  typedef struct tagRID_DEVICE_INFO_HID {
    DWORD dwVendorId;
    DWORD dwProductId;
    DWORD dwVersionNumber;
    USHORT usUsagePage;
    USHORT usUsage;
  } RID_DEVICE_INFO_HID,*PRID_DEVICE_INFO_HID;
  typedef struct tagRID_DEVICE_INFO {
    DWORD cbSize;
    DWORD dwType;
    __extension__ union {
      RID_DEVICE_INFO_MOUSE mouse;
      RID_DEVICE_INFO_KEYBOARD keyboard;
      RID_DEVICE_INFO_HID hid;
    } ;
  } RID_DEVICE_INFO,*PRID_DEVICE_INFO,*LPRID_DEVICE_INFO;
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetRawInputDeviceInfoA(HANDLE hDevice,UINT uiCommand,LPVOID pData,PUINT pcbSize);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetRawInputDeviceInfoW(HANDLE hDevice,UINT uiCommand,LPVOID pData,PUINT pcbSize);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetRawInputBuffer(PRAWINPUT pData,PUINT pcbSize,UINT cbSizeHeader);
  typedef struct tagRAWINPUTDEVICE {
    USHORT usUsagePage;
    USHORT usUsage;
    DWORD dwFlags;
    HWND hwndTarget;
  } RAWINPUTDEVICE,*PRAWINPUTDEVICE,*LPRAWINPUTDEVICE;
  typedef const RAWINPUTDEVICE *PCRAWINPUTDEVICE;
  typedef struct tagRAWINPUTDEVICELIST {
    HANDLE hDevice;
    DWORD dwType;
  } RAWINPUTDEVICELIST,*PRAWINPUTDEVICELIST;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) RegisterRawInputDevices (PCRAWINPUTDEVICE pRawInputDevices, UINT uiNumDevices, UINT cbSize);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetRegisteredRawInputDevices (PRAWINPUTDEVICE pRawInputDevices, PUINT puiNumDevices, UINT cbSize);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetRawInputDeviceList (PRAWINPUTDEVICELIST pRawInputDeviceList, PUINT puiNumDevices, UINT cbSize);
  __attribute__((dllimport)) LRESULT __attribute__((__stdcall__)) DefRawInputProc (PRAWINPUT *paRawInput, INT nInput, UINT cbSizeHeader);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ChangeWindowMessageFilter (UINT message, DWORD dwFlag);
  typedef struct tagCHANGEFILTERSTRUCT {
    DWORD cbSize;
    DWORD ExtStatus;
  } CHANGEFILTERSTRUCT,*PCHANGEFILTERSTRUCT;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ChangeWindowMessageFilterEx (HWND hwnd, UINT message, DWORD action, PCHANGEFILTERSTRUCT pChangeFilterStruct);
  struct HGESTUREINFO__ { int unused; }; typedef struct HGESTUREINFO__ *HGESTUREINFO;
  typedef struct tagGESTUREINFO {
    UINT cbSize;
    DWORD dwFlags;
    DWORD dwID;
    HWND hwndTarget;
    POINTS ptsLocation;
    DWORD dwInstanceID;
    DWORD dwSequenceID;
    ULONGLONG ullArguments;
    UINT cbExtraArgs;
  } GESTUREINFO,*PGESTUREINFO;
  typedef GESTUREINFO const *PCGESTUREINFO;
  typedef struct tagGESTURENOTIFYSTRUCT {
    UINT cbSize;
    DWORD dwFlags;
    HWND hwndTarget;
    POINTS ptsLocation;
    DWORD dwInstanceID;
  } GESTURENOTIFYSTRUCT,*PGESTURENOTIFYSTRUCT;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetGestureInfo (HGESTUREINFO hGestureInfo, PGESTUREINFO pGestureInfo);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetGestureExtraArgs (HGESTUREINFO hGestureInfo, UINT cbExtraArgs, PBYTE pExtraArgs);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CloseGestureInfoHandle (HGESTUREINFO hGestureInfo);
  typedef struct tagGESTURECONFIG {
    DWORD dwID;
    DWORD dwWant;
    DWORD dwBlock;
  } GESTURECONFIG,*PGESTURECONFIG;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetGestureConfig (HWND hwnd, DWORD dwReserved, UINT cIDs, PGESTURECONFIG pGestureConfig, UINT cbSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetGestureConfig (HWND hwnd, DWORD dwReserved, DWORD dwFlags, PUINT pcIDs, PGESTURECONFIG pGestureConfig, UINT cbSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ShutdownBlockReasonCreate (HWND hWnd, LPCWSTR pwszReason);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ShutdownBlockReasonQuery (HWND hWnd, LPWSTR pwszBuff, DWORD *pcchBuff);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ShutdownBlockReasonDestroy (HWND hWnd);
  typedef enum tagINPUT_MESSAGE_DEVICE_TYPE {
    IMDT_UNAVAILABLE = 0x00000000,
    IMDT_KEYBOARD = 0x00000001,
    IMDT_MOUSE = 0x00000002,
    IMDT_TOUCH = 0x00000004,
    IMDT_PEN = 0x00000008,
  } INPUT_MESSAGE_DEVICE_TYPE;
  typedef enum tagINPUT_MESSAGE_ORIGIN_ID {
    IMO_UNAVAILABLE = 0x00000000,
    IMO_HARDWARE = 0x00000001,
    IMO_INJECTED = 0x00000002,
    IMO_SYSTEM = 0x00000004,
  } INPUT_MESSAGE_ORIGIN_ID;
  typedef struct tagINPUT_MESSAGE_SOURCE {
    INPUT_MESSAGE_DEVICE_TYPE deviceType;
    INPUT_MESSAGE_ORIGIN_ID originId;
  } INPUT_MESSAGE_SOURCE;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetCurrentInputMessageSource (INPUT_MESSAGE_SOURCE *inputMessageSource);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetCIMSSM (INPUT_MESSAGE_SOURCE *inputMessageSource);
  typedef enum tagAR_STATE {
    AR_ENABLED = 0x0,
    AR_DISABLED = 0x1,
    AR_SUPPRESSED = 0x2,
    AR_REMOTESESSION = 0x4,
    AR_MULTIMON = 0x8,
    AR_NOSENSOR = 0x10,
    AR_NOT_SUPPORTED = 0x20,
    AR_DOCKED = 0x40,
    AR_LAPTOP = 0x80
  } AR_STATE,*PAR_STATE;
  ;
  typedef enum ORIENTATION_PREFERENCE {
    ORIENTATION_PREFERENCE_NONE = 0x0,
    ORIENTATION_PREFERENCE_LANDSCAPE = 0x1,
    ORIENTATION_PREFERENCE_PORTRAIT = 0x2,
    ORIENTATION_PREFERENCE_LANDSCAPE_FLIPPED = 0x4,
    ORIENTATION_PREFERENCE_PORTRAIT_FLIPPED = 0x8
  } ORIENTATION_PREFERENCE;
  ;
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetAutoRotationState (PAR_STATE pState);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetDisplayAutoRotationPreferences (ORIENTATION_PREFERENCE *pOrientation);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetDisplayAutoRotationPreferencesByProcessId (DWORD dwProcessId, ORIENTATION_PREFERENCE *pOrientation, WINBOOL *fRotateScreen);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetDisplayAutoRotationPreferences (ORIENTATION_PREFERENCE orientation);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsImmersiveProcess (HANDLE hProcess);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetProcessRestrictionExemption (WINBOOL fEnableExemption);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetTimeFormatEx (LPCWSTR lpLocaleName, DWORD dwFlags, const SYSTEMTIME *lpTime, LPCWSTR lpFormat, LPWSTR lpTimeStr, int cchTime);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetDateFormatEx (LPCWSTR lpLocaleName, DWORD dwFlags, const SYSTEMTIME *lpDate, LPCWSTR lpFormat, LPWSTR lpDateStr, int cchDate, LPCWSTR lpCalendar);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetDateFormatA (LCID Locale, DWORD dwFlags, const SYSTEMTIME *lpDate, LPCSTR lpFormat, LPSTR lpDateStr, int cchDate);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetDateFormatW (LCID Locale, DWORD dwFlags, const SYSTEMTIME *lpDate, LPCWSTR lpFormat, LPWSTR lpDateStr, int cchDate);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetTimeFormatA (LCID Locale, DWORD dwFlags, const SYSTEMTIME *lpTime, LPCSTR lpFormat, LPSTR lpTimeStr, int cchTime);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetTimeFormatW (LCID Locale, DWORD dwFlags, const SYSTEMTIME *lpTime, LPCWSTR lpFormat, LPWSTR lpTimeStr, int cchTime);
  typedef DWORD LGRPID;
  typedef DWORD LCTYPE;
  typedef DWORD CALTYPE;
  typedef DWORD CALID;
  typedef struct _cpinfo {
    UINT MaxCharSize;
    BYTE DefaultChar[2];
    BYTE LeadByte[12];
  } CPINFO,*LPCPINFO;
  typedef struct _cpinfoexA {
    UINT MaxCharSize;
    BYTE DefaultChar[2];
    BYTE LeadByte[12];
    WCHAR UnicodeDefaultChar;
    UINT CodePage;
    CHAR CodePageName[260];
  } CPINFOEXA,*LPCPINFOEXA;
  typedef struct _cpinfoexW {
    UINT MaxCharSize;
    BYTE DefaultChar[2];
    BYTE LeadByte[12];
    WCHAR UnicodeDefaultChar;
    UINT CodePage;
    WCHAR CodePageName[260];
  } CPINFOEXW,*LPCPINFOEXW;
  typedef CPINFOEXA CPINFOEX;
  typedef LPCPINFOEXA LPCPINFOEX;
  typedef struct _numberfmtA {
    UINT NumDigits;
    UINT LeadingZero;
    UINT Grouping;
    LPSTR lpDecimalSep;
    LPSTR lpThousandSep;
    UINT NegativeOrder;
  } NUMBERFMTA,*LPNUMBERFMTA;
  typedef struct _numberfmtW {
    UINT NumDigits;
    UINT LeadingZero;
    UINT Grouping;
    LPWSTR lpDecimalSep;
    LPWSTR lpThousandSep;
    UINT NegativeOrder;
  } NUMBERFMTW,*LPNUMBERFMTW;
  typedef NUMBERFMTA NUMBERFMT;
  typedef LPNUMBERFMTA LPNUMBERFMT;
  typedef struct _currencyfmtA {
    UINT NumDigits;
    UINT LeadingZero;
    UINT Grouping;
    LPSTR lpDecimalSep;
    LPSTR lpThousandSep;
    UINT NegativeOrder;
    UINT PositiveOrder;
    LPSTR lpCurrencySymbol;
  } CURRENCYFMTA,*LPCURRENCYFMTA;
  typedef struct _currencyfmtW {
    UINT NumDigits;
    UINT LeadingZero;
    UINT Grouping;
    LPWSTR lpDecimalSep;
    LPWSTR lpThousandSep;
    UINT NegativeOrder;
    UINT PositiveOrder;
    LPWSTR lpCurrencySymbol;
  } CURRENCYFMTW,*LPCURRENCYFMTW;
  typedef CURRENCYFMTA CURRENCYFMT;
  typedef LPCURRENCYFMTA LPCURRENCYFMT;
  enum SYSNLS_FUNCTION {
    COMPARE_STRING = 0x1
  };
  typedef DWORD NLS_FUNCTION;
  typedef struct _nlsversioninfo {
    DWORD dwNLSVersionInfoSize;
    DWORD dwNLSVersion;
    DWORD dwDefinedVersion;
  } NLSVERSIONINFO,*LPNLSVERSIONINFO;
  typedef struct _nlsversioninfoex {
    DWORD dwNLSVersionInfoSize;
    DWORD dwNLSVersion;
    DWORD dwDefinedVersion;
    DWORD dwEffectiveId;
    GUID guidCustomVersion;
  } NLSVERSIONINFOEX,*LPNLSVERSIONINFOEX;
  typedef LONG GEOID;
  typedef DWORD GEOTYPE;
  typedef DWORD GEOCLASS;
  enum SYSGEOTYPE {
    GEO_NATION = 0x0001,
    GEO_LATITUDE = 0x0002,
    GEO_LONGITUDE = 0x0003,
    GEO_ISO2 = 0x0004,
    GEO_ISO3 = 0x0005,
    GEO_RFC1766 = 0x0006,
    GEO_LCID = 0x0007,
    GEO_FRIENDLYNAME= 0x0008,
    GEO_OFFICIALNAME= 0x0009,
    GEO_TIMEZONES = 0x000a,
    GEO_OFFICIALLANGUAGES = 0x000b,
    GEO_ISO_UN_NUMBER = 0x000c,
    GEO_PARENT = 0x000d
  };
  enum SYSGEOCLASS {
    GEOCLASS_NATION = 16,
    GEOCLASS_REGION = 14,
    GEOCLASS_ALL = 0
  };
  typedef enum _NORM_FORM {
    NormalizationOther = 0,
    NormalizationC = 0x1,
    NormalizationD = 0x2,
    NormalizationKC = 0x5,
    NormalizationKD = 0x6
  } NORM_FORM;
  typedef WINBOOL (__attribute__((__stdcall__)) *LANGUAGEGROUP_ENUMPROCA) (LGRPID, LPSTR, LPSTR, DWORD, LONG_PTR);
  typedef WINBOOL (__attribute__((__stdcall__)) *LANGGROUPLOCALE_ENUMPROCA) (LGRPID, LCID, LPSTR, LONG_PTR);
  typedef WINBOOL (__attribute__((__stdcall__)) *UILANGUAGE_ENUMPROCA) (LPSTR, LONG_PTR);
  typedef WINBOOL (__attribute__((__stdcall__)) *CODEPAGE_ENUMPROCA) (LPSTR);
  typedef WINBOOL (__attribute__((__stdcall__)) *DATEFMT_ENUMPROCA) (LPSTR);
  typedef WINBOOL (__attribute__((__stdcall__)) *DATEFMT_ENUMPROCEXA) (LPSTR, CALID);
  typedef WINBOOL (__attribute__((__stdcall__)) *TIMEFMT_ENUMPROCA) (LPSTR);
  typedef WINBOOL (__attribute__((__stdcall__)) *CALINFO_ENUMPROCA) (LPSTR);
  typedef WINBOOL (__attribute__((__stdcall__)) *CALINFO_ENUMPROCEXA) (LPSTR, CALID);
  typedef WINBOOL (__attribute__((__stdcall__)) *LOCALE_ENUMPROCA) (LPSTR);
  typedef WINBOOL (__attribute__((__stdcall__)) *LOCALE_ENUMPROCW) (LPWSTR);
  typedef WINBOOL (__attribute__((__stdcall__)) *LANGUAGEGROUP_ENUMPROCW) (LGRPID, LPWSTR, LPWSTR, DWORD, LONG_PTR);
  typedef WINBOOL (__attribute__((__stdcall__)) *LANGGROUPLOCALE_ENUMPROCW) (LGRPID, LCID, LPWSTR, LONG_PTR);
  typedef WINBOOL (__attribute__((__stdcall__)) *UILANGUAGE_ENUMPROCW) (LPWSTR, LONG_PTR);
  typedef WINBOOL (__attribute__((__stdcall__)) *CODEPAGE_ENUMPROCW) (LPWSTR);
  typedef WINBOOL (__attribute__((__stdcall__)) *DATEFMT_ENUMPROCW) (LPWSTR);
  typedef WINBOOL (__attribute__((__stdcall__)) *DATEFMT_ENUMPROCEXW) (LPWSTR, CALID);
  typedef WINBOOL (__attribute__((__stdcall__)) *TIMEFMT_ENUMPROCW) (LPWSTR);
  typedef WINBOOL (__attribute__((__stdcall__)) *CALINFO_ENUMPROCW) (LPWSTR);
  typedef WINBOOL (__attribute__((__stdcall__)) *CALINFO_ENUMPROCEXW) (LPWSTR, CALID);
  typedef WINBOOL (__attribute__((__stdcall__)) *GEO_ENUMPROC) (GEOID);
  typedef struct _FILEMUIINFO {
    DWORD dwSize;
    DWORD dwVersion;
    DWORD dwFileType;
    BYTE pChecksum[16];
    BYTE pServiceChecksum[16];
    DWORD dwLanguageNameOffset;
    DWORD dwTypeIDMainSize;
    DWORD dwTypeIDMainOffset;
    DWORD dwTypeNameMainOffset;
    DWORD dwTypeIDMUISize;
    DWORD dwTypeIDMUIOffset;
    DWORD dwTypeNameMUIOffset;
    BYTE abBuffer[8];
  } FILEMUIINFO,*PFILEMUIINFO;
  __attribute__((dllimport)) int __attribute__((__stdcall__)) CompareStringW (LCID Locale, DWORD dwCmpFlags, PCNZWCH lpString1, int cchCount1, PCNZWCH lpString2, int cchCount2);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) FoldStringW (DWORD dwMapFlags, LPCWCH lpSrcStr, int cchSrc, LPWSTR lpDestStr, int cchDest);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetStringTypeExW (LCID Locale, DWORD dwInfoType, LPCWCH lpSrcStr, int cchSrc, LPWORD lpCharType);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) CompareStringEx (LPCWSTR lpLocaleName, DWORD dwCmpFlags, LPCWCH lpString1, int cchCount1, LPCWCH lpString2, int cchCount2, LPNLSVERSIONINFO lpVersionInformation, LPVOID lpReserved, LPARAM lParam);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) CompareStringOrdinal (LPCWCH lpString1, int cchCount1, LPCWCH lpString2, int cchCount2, WINBOOL bIgnoreCase);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetStringTypeW (DWORD dwInfoType, LPCWCH lpSrcStr, int cchSrc, LPWORD lpCharType);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) MultiByteToWideChar (UINT CodePage, DWORD dwFlags, LPCCH lpMultiByteStr, int cbMultiByte, LPWSTR lpWideCharStr, int cchWideChar);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) WideCharToMultiByte (UINT CodePage, DWORD dwFlags, LPCWCH lpWideCharStr, int cchWideChar, LPSTR lpMultiByteStr, int cbMultiByte, LPCCH lpDefaultChar, LPBOOL lpUsedDefaultChar);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsValidCodePage (UINT CodePage);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetACP (void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsDBCSLeadByteEx (UINT CodePage, BYTE TestChar);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetOEMCP (void);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) CompareStringA (LCID Locale, DWORD dwCmpFlags, PCNZCH lpString1, int cchCount1, PCNZCH lpString2, int cchCount2);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) LCMapStringW (LCID Locale, DWORD dwMapFlags, LPCWSTR lpSrcStr, int cchSrc, LPWSTR lpDestStr, int cchDest);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) LCMapStringA (LCID Locale, DWORD dwMapFlags, LPCSTR lpSrcStr, int cchSrc, LPSTR lpDestStr, int cchDest);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetLocaleInfoW (LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetLocaleInfoA (LCID Locale, LCTYPE LCType, LPSTR lpLCData, int cchData);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsDBCSLeadByte (BYTE TestChar);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetNumberFormatA (LCID Locale, DWORD dwFlags, LPCSTR lpValue, const NUMBERFMTA *lpFormat, LPSTR lpNumberStr, int cchNumber);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetNumberFormatW (LCID Locale, DWORD dwFlags, LPCWSTR lpValue, const NUMBERFMTW *lpFormat, LPWSTR lpNumberStr, int cchNumber);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetCurrencyFormatA (LCID Locale, DWORD dwFlags, LPCSTR lpValue, const CURRENCYFMTA *lpFormat, LPSTR lpCurrencyStr, int cchCurrency);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetCurrencyFormatW (LCID Locale, DWORD dwFlags, LPCWSTR lpValue, const CURRENCYFMTW *lpFormat, LPWSTR lpCurrencyStr, int cchCurrency);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumCalendarInfoA (CALINFO_ENUMPROCA lpCalInfoEnumProc, LCID Locale, CALID Calendar, CALTYPE CalType);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumCalendarInfoW (CALINFO_ENUMPROCW lpCalInfoEnumProc, LCID Locale, CALID Calendar, CALTYPE CalType);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumCalendarInfoExA (CALINFO_ENUMPROCEXA lpCalInfoEnumProcEx, LCID Locale, CALID Calendar, CALTYPE CalType);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumCalendarInfoExW (CALINFO_ENUMPROCEXW lpCalInfoEnumProcEx, LCID Locale, CALID Calendar, CALTYPE CalType);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumTimeFormatsA (TIMEFMT_ENUMPROCA lpTimeFmtEnumProc, LCID Locale, DWORD dwFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumTimeFormatsW (TIMEFMT_ENUMPROCW lpTimeFmtEnumProc, LCID Locale, DWORD dwFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumDateFormatsA (DATEFMT_ENUMPROCA lpDateFmtEnumProc, LCID Locale, DWORD dwFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumDateFormatsW (DATEFMT_ENUMPROCW lpDateFmtEnumProc, LCID Locale, DWORD dwFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumDateFormatsExA (DATEFMT_ENUMPROCEXA lpDateFmtEnumProcEx, LCID Locale, DWORD dwFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumDateFormatsExW (DATEFMT_ENUMPROCEXW lpDateFmtEnumProcEx, LCID Locale, DWORD dwFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsValidLanguageGroup (LGRPID LanguageGroup, DWORD dwFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetNLSVersion (NLS_FUNCTION Function, LCID Locale, LPNLSVERSIONINFO lpVersionInformation);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsNLSDefinedString (NLS_FUNCTION Function, DWORD dwFlags, LPNLSVERSIONINFO lpVersionInformation, LPCWSTR lpString, INT cchStr);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsValidLocale (LCID Locale, DWORD dwFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetLocaleInfoA (LCID Locale, LCTYPE LCType, LPCSTR lpLCData);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetLocaleInfoW (LCID Locale, LCTYPE LCType, LPCWSTR lpLCData);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetCalendarInfoA (LCID Locale, CALID Calendar, CALTYPE CalType, LPSTR lpCalData, int cchData, LPDWORD lpValue);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetCalendarInfoW (LCID Locale, CALID Calendar, CALTYPE CalType, LPWSTR lpCalData, int cchData, LPDWORD lpValue);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetCalendarInfoA (LCID Locale, CALID Calendar, CALTYPE CalType, LPCSTR lpCalData);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetCalendarInfoW (LCID Locale, CALID Calendar, CALTYPE CalType, LPCWSTR lpCalData);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetDurationFormat (LCID Locale, DWORD dwFlags, const SYSTEMTIME *lpDuration, ULONGLONG ullDuration, LPCWSTR lpFormat, LPWSTR lpDurationStr, int cchDuration);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) FindNLSString (LCID Locale, DWORD dwFindNLSStringFlags, LPCWSTR lpStringSource, int cchSource, LPCWSTR lpStringValue, int cchValue, LPINT pcchFound);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) LoadStringByReference (DWORD Flags, PCWSTR Language, PCWSTR SourceString, PWSTR Buffer, ULONG cchBuffer, PCWSTR Directory, PULONG pcchBufferOut);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetGeoInfoA (GEOID Location, GEOTYPE GeoType, LPSTR lpGeoData, int cchData, LANGID LangId);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetGeoInfoW (GEOID Location, GEOTYPE GeoType, LPWSTR lpGeoData, int cchData, LANGID LangId);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumSystemGeoID (GEOCLASS GeoClass, GEOID ParentGeoId, GEO_ENUMPROC lpGeoEnumProc);
  __attribute__((dllimport)) GEOID __attribute__((__stdcall__)) GetUserGeoID (GEOCLASS GeoClass);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetCPInfo (UINT CodePage, LPCPINFO lpCPInfo);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetCPInfoExA (UINT CodePage, DWORD dwFlags, LPCPINFOEXA lpCPInfoEx);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetCPInfoExW (UINT CodePage, DWORD dwFlags, LPCPINFOEXW lpCPInfoEx);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) LCIDToLocaleName (LCID Locale, LPWSTR lpName, int cchName, DWORD dwFlags);
  __attribute__((dllimport)) LCID __attribute__((__stdcall__)) LocaleNameToLCID (LPCWSTR lpName, DWORD dwFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetUserGeoID (GEOID GeoId);
  __attribute__((dllimport)) LCID __attribute__((__stdcall__)) ConvertDefaultLocale (LCID Locale);
  __attribute__((dllimport)) LCID __attribute__((__stdcall__)) GetThreadLocale (void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetThreadLocale (LCID Locale);
  __attribute__((dllimport)) LANGID __attribute__((__stdcall__)) GetSystemDefaultUILanguage (void);
  __attribute__((dllimport)) LANGID __attribute__((__stdcall__)) GetUserDefaultUILanguage (void);
  __attribute__((dllimport)) LANGID __attribute__((__stdcall__)) GetSystemDefaultLangID (void);
  __attribute__((dllimport)) LANGID __attribute__((__stdcall__)) GetUserDefaultLangID (void);
  __attribute__((dllimport)) LCID __attribute__((__stdcall__)) GetSystemDefaultLCID (void);
  __attribute__((dllimport)) LCID __attribute__((__stdcall__)) GetUserDefaultLCID (void);
  __attribute__((dllimport)) LANGID __attribute__((__stdcall__)) SetThreadUILanguage (LANGID LangId);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetStringTypeExA (LCID Locale, DWORD dwInfoType, LPCSTR lpSrcStr, int cchSrc, LPWORD lpCharType);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetStringTypeA (LCID Locale, DWORD dwInfoType, LPCSTR lpSrcStr, int cchSrc, LPWORD lpCharType);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) FoldStringA (DWORD dwMapFlags, LPCSTR lpSrcStr, int cchSrc, LPSTR lpDestStr, int cchDest);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumSystemLocalesA (LOCALE_ENUMPROCA lpLocaleEnumProc, DWORD dwFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumSystemLocalesW (LOCALE_ENUMPROCW lpLocaleEnumProc, DWORD dwFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumSystemLanguageGroupsA (LANGUAGEGROUP_ENUMPROCA lpLanguageGroupEnumProc, DWORD dwFlags, LONG_PTR lParam);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumSystemLanguageGroupsW (LANGUAGEGROUP_ENUMPROCW lpLanguageGroupEnumProc, DWORD dwFlags, LONG_PTR lParam);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumLanguageGroupLocalesA (LANGGROUPLOCALE_ENUMPROCA lpLangGroupLocaleEnumProc, LGRPID LanguageGroup, DWORD dwFlags, LONG_PTR lParam);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumLanguageGroupLocalesW (LANGGROUPLOCALE_ENUMPROCW lpLangGroupLocaleEnumProc, LGRPID LanguageGroup, DWORD dwFlags, LONG_PTR lParam);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumUILanguagesA (UILANGUAGE_ENUMPROCA lpUILanguageEnumProc, DWORD dwFlags, LONG_PTR lParam);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumUILanguagesW (UILANGUAGE_ENUMPROCW lpUILanguageEnumProc, DWORD dwFlags, LONG_PTR lParam);
  __attribute__((dllimport)) LANGID __attribute__((__stdcall__)) GetThreadUILanguage (void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetProcessPreferredUILanguages (DWORD dwFlags, PULONG pulNumLanguages, PZZWSTR pwszLanguagesBuffer, PULONG pcchLanguagesBuffer);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetProcessPreferredUILanguages (DWORD dwFlags, PCZZWSTR pwszLanguagesBuffer, PULONG pulNumLanguages);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetUserPreferredUILanguages (DWORD dwFlags, PULONG pulNumLanguages, PZZWSTR pwszLanguagesBuffer, PULONG pcchLanguagesBuffer);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetSystemPreferredUILanguages (DWORD dwFlags, PULONG pulNumLanguages, PZZWSTR pwszLanguagesBuffer, PULONG pcchLanguagesBuffer);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetThreadPreferredUILanguages (DWORD dwFlags, PULONG pulNumLanguages, PZZWSTR pwszLanguagesBuffer, PULONG pcchLanguagesBuffer);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetThreadPreferredUILanguages (DWORD dwFlags, PCZZWSTR pwszLanguagesBuffer, PULONG pulNumLanguages);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetFileMUIInfo (DWORD dwFlags, PCWSTR pcwszFilePath, PFILEMUIINFO pFileMUIInfo, DWORD *pcbFileMUIInfo);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetFileMUIPath (DWORD dwFlags, PCWSTR pcwszFilePath, PWSTR pwszLanguage, PULONG pcchLanguage, PWSTR pwszFileMUIPath, PULONG pcchFileMUIPath, PULONGLONG pululEnumerator);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetUILanguageInfo (DWORD dwFlags, PCZZWSTR pwmszLanguage, PZZWSTR pwszFallbackLanguages, PDWORD pcchFallbackLanguages, PDWORD pAttributes);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) NotifyUILanguageChange (DWORD dwFlags, PCWSTR pcwstrNewLanguage, PCWSTR pcwstrPreviousLanguage, DWORD dwReserved, PDWORD pdwStatusRtrn);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumSystemCodePagesA (CODEPAGE_ENUMPROCA lpCodePageEnumProc, DWORD dwFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumSystemCodePagesW (CODEPAGE_ENUMPROCW lpCodePageEnumProc, DWORD dwFlags);
  typedef WINBOOL (__attribute__((__stdcall__)) *CALINFO_ENUMPROCEXEX) (LPWSTR, CALID, LPWSTR, LPARAM);
  typedef WINBOOL (__attribute__((__stdcall__)) *DATEFMT_ENUMPROCEXEX) (LPWSTR, CALID, LPARAM);
  typedef WINBOOL (__attribute__((__stdcall__)) *TIMEFMT_ENUMPROCEX) (LPWSTR, LPARAM);
  typedef WINBOOL (__attribute__((__stdcall__)) *LOCALE_ENUMPROCEX) (LPWSTR, DWORD, LPARAM);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) NormalizeString (NORM_FORM NormForm, LPCWSTR lpSrcString, int cwSrcLength, LPWSTR lpDstString, int cwDstLength);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsNormalizedString (NORM_FORM NormForm, LPCWSTR lpString, int cwLength);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) IdnToAscii (DWORD dwFlags, LPCWSTR lpUnicodeCharStr, int cchUnicodeChar, LPWSTR lpASCIICharStr, int cchASCIIChar);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) IdnToNameprepUnicode (DWORD dwFlags, LPCWSTR lpUnicodeCharStr, int cchUnicodeChar, LPWSTR lpNameprepCharStr, int cchNameprepChar);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) IdnToUnicode (DWORD dwFlags, LPCWSTR lpASCIICharStr, int cchASCIIChar, LPWSTR lpUnicodeCharStr, int cchUnicodeChar);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) VerifyScripts (DWORD dwFlags, LPCWSTR lpLocaleScripts, int cchLocaleScripts, LPCWSTR lpTestScripts, int cchTestScripts);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetStringScripts (DWORD dwFlags, LPCWSTR lpString, int cchString, LPWSTR lpScripts, int cchScripts);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetLocaleInfoEx (LPCWSTR lpLocaleName, LCTYPE LCType, LPWSTR lpLCData, int cchData);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetCalendarInfoEx (LPCWSTR lpLocaleName, CALID Calendar, LPCWSTR lpReserved, CALTYPE CalType, LPWSTR lpCalData, int cchData, LPDWORD lpValue);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetDurationFormatEx (LPCWSTR lpLocaleName, DWORD dwFlags, const SYSTEMTIME *lpDuration, ULONGLONG ullDuration, LPCWSTR lpFormat, LPWSTR lpDurationStr, int cchDuration);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetNumberFormatEx (LPCWSTR lpLocaleName, DWORD dwFlags, LPCWSTR lpValue, const NUMBERFMTW *lpFormat, LPWSTR lpNumberStr, int cchNumber);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetCurrencyFormatEx (LPCWSTR lpLocaleName, DWORD dwFlags, LPCWSTR lpValue, const CURRENCYFMTW *lpFormat, LPWSTR lpCurrencyStr, int cchCurrency);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetUserDefaultLocaleName (LPWSTR lpLocaleName, int cchLocaleName);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) GetSystemDefaultLocaleName (LPWSTR lpLocaleName, int cchLocaleName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetNLSVersionEx (NLS_FUNCTION function, LPCWSTR lpLocaleName, LPNLSVERSIONINFOEX lpVersionInformation);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) FindNLSStringEx (LPCWSTR lpLocaleName, DWORD dwFindNLSStringFlags, LPCWSTR lpStringSource, int cchSource, LPCWSTR lpStringValue, int cchValue, LPINT pcchFound, LPNLSVERSIONINFO lpVersionInformation, LPVOID lpReserved, LPARAM sortHandle);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) LCMapStringEx (LPCWSTR lpLocaleName, DWORD dwMapFlags, LPCWSTR lpSrcStr, int cchSrc, LPWSTR lpDestStr, int cchDest, LPNLSVERSIONINFO lpVersionInformation, LPVOID lpReserved, LPARAM sortHandle);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) IsValidLocaleName (LPCWSTR lpLocaleName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumCalendarInfoExEx (CALINFO_ENUMPROCEXEX pCalInfoEnumProcExEx, LPCWSTR lpLocaleName, CALID Calendar, LPCWSTR lpReserved, CALTYPE CalType, LPARAM lParam);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumDateFormatsExEx (DATEFMT_ENUMPROCEXEX lpDateFmtEnumProcExEx, LPCWSTR lpLocaleName, DWORD dwFlags, LPARAM lParam);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumTimeFormatsEx (TIMEFMT_ENUMPROCEX lpTimeFmtEnumProcEx, LPCWSTR lpLocaleName, DWORD dwFlags, LPARAM lParam);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumSystemLocalesEx (LOCALE_ENUMPROCEX lpLocaleEnumProcEx, DWORD dwFlags, LPARAM lParam, LPVOID lpReserved);
  __attribute__((dllimport)) int __attribute__((__stdcall__)) ResolveLocaleName (LPCWSTR lpNameToResolve, LPWSTR lpLocaleName, int cchLocaleName);
  typedef struct _COORD {
    SHORT X;
    SHORT Y;
  } COORD,*PCOORD;
  typedef struct _SMALL_RECT {
    SHORT Left;
    SHORT Top;
    SHORT Right;
    SHORT Bottom;
  } SMALL_RECT,*PSMALL_RECT;
  typedef struct _KEY_EVENT_RECORD {
    WINBOOL bKeyDown;
    WORD wRepeatCount;
    WORD wVirtualKeyCode;
    WORD wVirtualScanCode;
    union {
      WCHAR UnicodeChar;
      CHAR AsciiChar;
    } uChar;
    DWORD dwControlKeyState;
  } KEY_EVENT_RECORD,*PKEY_EVENT_RECORD;
  typedef struct _MOUSE_EVENT_RECORD {
    COORD dwMousePosition;
    DWORD dwButtonState;
    DWORD dwControlKeyState;
    DWORD dwEventFlags;
  } MOUSE_EVENT_RECORD,*PMOUSE_EVENT_RECORD;
  typedef struct _WINDOW_BUFFER_SIZE_RECORD {
    COORD dwSize;
  } WINDOW_BUFFER_SIZE_RECORD,*PWINDOW_BUFFER_SIZE_RECORD;
  typedef struct _MENU_EVENT_RECORD {
    UINT dwCommandId;
  } MENU_EVENT_RECORD,*PMENU_EVENT_RECORD;
  typedef struct _FOCUS_EVENT_RECORD {
    WINBOOL bSetFocus;
  } FOCUS_EVENT_RECORD,*PFOCUS_EVENT_RECORD;
  typedef struct _INPUT_RECORD {
    WORD EventType;
    union {
      KEY_EVENT_RECORD KeyEvent;
      MOUSE_EVENT_RECORD MouseEvent;
      WINDOW_BUFFER_SIZE_RECORD WindowBufferSizeEvent;
      MENU_EVENT_RECORD MenuEvent;
      FOCUS_EVENT_RECORD FocusEvent;
    } Event;
  } INPUT_RECORD,*PINPUT_RECORD;
  typedef struct _CHAR_INFO {
    union {
      WCHAR UnicodeChar;
      CHAR AsciiChar;
    } Char;
    WORD Attributes;
  } CHAR_INFO,*PCHAR_INFO;
  typedef struct _CONSOLE_SCREEN_BUFFER_INFO {
    COORD dwSize;
    COORD dwCursorPosition;
    WORD wAttributes;
    SMALL_RECT srWindow;
    COORD dwMaximumWindowSize;
  } CONSOLE_SCREEN_BUFFER_INFO,*PCONSOLE_SCREEN_BUFFER_INFO;
  typedef struct _CONSOLE_CURSOR_INFO {
    DWORD dwSize;
    WINBOOL bVisible;
  } CONSOLE_CURSOR_INFO,*PCONSOLE_CURSOR_INFO;
  typedef struct _CONSOLE_FONT_INFO {
    DWORD nFont;
    COORD dwFontSize;
  } CONSOLE_FONT_INFO,*PCONSOLE_FONT_INFO;
  typedef struct _CONSOLE_SELECTION_INFO {
    DWORD dwFlags;
    COORD dwSelectionAnchor;
    SMALL_RECT srSelection;
  } CONSOLE_SELECTION_INFO,*PCONSOLE_SELECTION_INFO;
  typedef WINBOOL (__attribute__((__stdcall__)) *PHANDLER_ROUTINE)(DWORD CtrlType);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PeekConsoleInputA(HANDLE hConsoleInput,PINPUT_RECORD lpBuffer,DWORD nLength,LPDWORD lpNumberOfEventsRead);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) PeekConsoleInputW(HANDLE hConsoleInput,PINPUT_RECORD lpBuffer,DWORD nLength,LPDWORD lpNumberOfEventsRead);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ReadConsoleInputA(HANDLE hConsoleInput,PINPUT_RECORD lpBuffer,DWORD nLength,LPDWORD lpNumberOfEventsRead);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ReadConsoleInputW(HANDLE hConsoleInput,PINPUT_RECORD lpBuffer,DWORD nLength,LPDWORD lpNumberOfEventsRead);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) WriteConsoleInputA(HANDLE hConsoleInput,const INPUT_RECORD *lpBuffer,DWORD nLength,LPDWORD lpNumberOfEventsWritten);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) WriteConsoleInputW(HANDLE hConsoleInput,const INPUT_RECORD *lpBuffer,DWORD nLength,LPDWORD lpNumberOfEventsWritten);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ReadConsoleOutputA(HANDLE hConsoleOutput,PCHAR_INFO lpBuffer,COORD dwBufferSize,COORD dwBufferCoord,PSMALL_RECT lpReadRegion);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ReadConsoleOutputW(HANDLE hConsoleOutput,PCHAR_INFO lpBuffer,COORD dwBufferSize,COORD dwBufferCoord,PSMALL_RECT lpReadRegion);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) WriteConsoleOutputA(HANDLE hConsoleOutput,const CHAR_INFO *lpBuffer,COORD dwBufferSize,COORD dwBufferCoord,PSMALL_RECT lpWriteRegion);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) WriteConsoleOutputW(HANDLE hConsoleOutput,const CHAR_INFO *lpBuffer,COORD dwBufferSize,COORD dwBufferCoord,PSMALL_RECT lpWriteRegion);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ReadConsoleOutputCharacterA(HANDLE hConsoleOutput,LPSTR lpCharacter,DWORD nLength,COORD dwReadCoord,LPDWORD lpNumberOfCharsRead);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ReadConsoleOutputCharacterW(HANDLE hConsoleOutput,LPWSTR lpCharacter,DWORD nLength,COORD dwReadCoord,LPDWORD lpNumberOfCharsRead);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ReadConsoleOutputAttribute(HANDLE hConsoleOutput,LPWORD lpAttribute,DWORD nLength,COORD dwReadCoord,LPDWORD lpNumberOfAttrsRead);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) WriteConsoleOutputCharacterA(HANDLE hConsoleOutput,LPCSTR lpCharacter,DWORD nLength,COORD dwWriteCoord,LPDWORD lpNumberOfCharsWritten);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) WriteConsoleOutputCharacterW(HANDLE hConsoleOutput,LPCWSTR lpCharacter,DWORD nLength,COORD dwWriteCoord,LPDWORD lpNumberOfCharsWritten);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) WriteConsoleOutputAttribute(HANDLE hConsoleOutput,const WORD *lpAttribute,DWORD nLength,COORD dwWriteCoord,LPDWORD lpNumberOfAttrsWritten);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FillConsoleOutputCharacterA(HANDLE hConsoleOutput,CHAR cCharacter,DWORD nLength,COORD dwWriteCoord,LPDWORD lpNumberOfCharsWritten);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FillConsoleOutputCharacterW(HANDLE hConsoleOutput,WCHAR cCharacter,DWORD nLength,COORD dwWriteCoord,LPDWORD lpNumberOfCharsWritten);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FillConsoleOutputAttribute(HANDLE hConsoleOutput,WORD wAttribute,DWORD nLength,COORD dwWriteCoord,LPDWORD lpNumberOfAttrsWritten);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetConsoleMode(HANDLE hConsoleHandle,LPDWORD lpMode);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetNumberOfConsoleInputEvents(HANDLE hConsoleInput,LPDWORD lpNumberOfEvents);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetConsoleScreenBufferInfo(HANDLE hConsoleOutput,PCONSOLE_SCREEN_BUFFER_INFO lpConsoleScreenBufferInfo);
  __attribute__((dllimport)) COORD __attribute__((__stdcall__)) GetLargestConsoleWindowSize(HANDLE hConsoleOutput);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetConsoleCursorInfo(HANDLE hConsoleOutput,PCONSOLE_CURSOR_INFO lpConsoleCursorInfo);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetCurrentConsoleFont(HANDLE hConsoleOutput,WINBOOL bMaximumWindow,PCONSOLE_FONT_INFO lpConsoleCurrentFont);
  __attribute__((dllimport)) COORD __attribute__((__stdcall__)) GetConsoleFontSize(HANDLE hConsoleOutput,DWORD nFont);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetConsoleSelectionInfo(PCONSOLE_SELECTION_INFO lpConsoleSelectionInfo);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetNumberOfConsoleMouseButtons(LPDWORD lpNumberOfMouseButtons);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetConsoleMode(HANDLE hConsoleHandle,DWORD dwMode);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetConsoleActiveScreenBuffer(HANDLE hConsoleOutput);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FlushConsoleInputBuffer(HANDLE hConsoleInput);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetConsoleScreenBufferSize(HANDLE hConsoleOutput,COORD dwSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetConsoleCursorPosition(HANDLE hConsoleOutput,COORD dwCursorPosition);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetConsoleCursorInfo(HANDLE hConsoleOutput,const CONSOLE_CURSOR_INFO *lpConsoleCursorInfo);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ScrollConsoleScreenBufferA(HANDLE hConsoleOutput,const SMALL_RECT *lpScrollRectangle,const SMALL_RECT *lpClipRectangle,COORD dwDestinationOrigin,const CHAR_INFO *lpFill);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ScrollConsoleScreenBufferW(HANDLE hConsoleOutput,const SMALL_RECT *lpScrollRectangle,const SMALL_RECT *lpClipRectangle,COORD dwDestinationOrigin,const CHAR_INFO *lpFill);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetConsoleWindowInfo(HANDLE hConsoleOutput,WINBOOL bAbsolute,const SMALL_RECT *lpConsoleWindow);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetConsoleTextAttribute(HANDLE hConsoleOutput,WORD wAttributes);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetConsoleCtrlHandler(PHANDLER_ROUTINE HandlerRoutine,WINBOOL Add);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GenerateConsoleCtrlEvent(DWORD dwCtrlEvent,DWORD dwProcessGroupId);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AllocConsole(void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) FreeConsole(void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AttachConsole(DWORD dwProcessId);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetConsoleTitleA(LPSTR lpConsoleTitle,DWORD nSize);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetConsoleTitleW(LPWSTR lpConsoleTitle,DWORD nSize);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetConsoleTitleA(LPCSTR lpConsoleTitle);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetConsoleTitleW(LPCWSTR lpConsoleTitle);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ReadConsoleA(HANDLE hConsoleInput,LPVOID lpBuffer,DWORD nNumberOfCharsToRead,LPDWORD lpNumberOfCharsRead,LPVOID lpReserved);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ReadConsoleW(HANDLE hConsoleInput,LPVOID lpBuffer,DWORD nNumberOfCharsToRead,LPDWORD lpNumberOfCharsRead,LPVOID lpReserved);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) WriteConsoleA(HANDLE hConsoleOutput,const void *lpBuffer,DWORD nNumberOfCharsToWrite,LPDWORD lpNumberOfCharsWritten,LPVOID lpReserved);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) WriteConsoleW(HANDLE hConsoleOutput,const void *lpBuffer,DWORD nNumberOfCharsToWrite,LPDWORD lpNumberOfCharsWritten,LPVOID lpReserved);
  __attribute__((dllimport)) HANDLE __attribute__((__stdcall__)) CreateConsoleScreenBuffer(DWORD dwDesiredAccess,DWORD dwShareMode,const SECURITY_ATTRIBUTES *lpSecurityAttributes,DWORD dwFlags,LPVOID lpScreenBufferData);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetConsoleCP(void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetConsoleCP(UINT wCodePageID);
  __attribute__((dllimport)) UINT __attribute__((__stdcall__)) GetConsoleOutputCP(void);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetConsoleOutputCP(UINT wCodePageID);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetConsoleDisplayMode(LPDWORD lpModeFlags);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetConsoleDisplayMode(HANDLE hConsoleOutput, DWORD dwFlags, PCOORD lpNewScreenBufferDimensions);
  __attribute__((dllimport)) HWND __attribute__((__stdcall__)) GetConsoleWindow(void);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetConsoleProcessList(LPDWORD lpdwProcessList,DWORD dwProcessCount);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AddConsoleAliasA(LPSTR Source,LPSTR Target,LPSTR ExeName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AddConsoleAliasW(LPWSTR Source,LPWSTR Target,LPWSTR ExeName);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetConsoleAliasA(LPSTR Source,LPSTR TargetBuffer,DWORD TargetBufferLength,LPSTR ExeName);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetConsoleAliasW(LPWSTR Source,LPWSTR TargetBuffer,DWORD TargetBufferLength,LPWSTR ExeName);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetConsoleAliasesLengthA(LPSTR ExeName);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetConsoleAliasesLengthW(LPWSTR ExeName);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetConsoleAliasExesLengthA(void);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetConsoleAliasExesLengthW(void);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetConsoleAliasesA(LPSTR AliasBuffer,DWORD AliasBufferLength,LPSTR ExeName);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetConsoleAliasesW(LPWSTR AliasBuffer,DWORD AliasBufferLength,LPWSTR ExeName);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetConsoleAliasExesA(LPSTR ExeNameBuffer,DWORD ExeNameBufferLength);
  __attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetConsoleAliasExesW(LPWSTR ExeNameBuffer,DWORD ExeNameBufferLength);
typedef struct _CONSOLE_FONT_INFOEX {
  ULONG cbSize;
  DWORD nFont;
  COORD dwFontSize;
  UINT FontFamily;
  UINT FontWeight;
  WCHAR FaceName[32];
} CONSOLE_FONT_INFOEX, *PCONSOLE_FONT_INFOEX;
typedef struct _CONSOLE_HISTORY_INFO {
  UINT cbSize;
  UINT HistoryBufferSize;
  UINT NumberOfHistoryBuffers;
  DWORD dwFlags;
} CONSOLE_HISTORY_INFO, *PCONSOLE_HISTORY_INFO;
typedef struct _CONSOLE_READCONSOLE_CONTROL {
  ULONG nLength;
  ULONG nInitialChars;
  ULONG dwCtrlWakeupMask;
  ULONG dwControlKeyState;
} CONSOLE_READCONSOLE_CONTROL, *PCONSOLE_READCONSOLE_CONTROL;
typedef struct _CONSOLE_SCREEN_BUFFER_INFOEX {
  ULONG cbSize;
  COORD dwSize;
  COORD dwCursorPosition;
  WORD wAttributes;
  SMALL_RECT srWindow;
  COORD dwMaximumWindowSize;
  WORD wPopupAttributes;
  WINBOOL bFullscreenSupported;
  COLORREF ColorTable[16];
} CONSOLE_SCREEN_BUFFER_INFOEX, *PCONSOLE_SCREEN_BUFFER_INFOEX;
WINBOOL __attribute__((__stdcall__)) GetConsoleHistoryInfo(
  PCONSOLE_HISTORY_INFO lpConsoleHistoryInfo
);
__attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetConsoleOriginalTitleA(
  LPSTR lpConsoleTitle,
  DWORD nSize
);
__attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetConsoleOriginalTitleW(
  LPWSTR lpConsoleTitle,
  DWORD nSize
);
__attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetConsoleScreenBufferInfoEx(
  HANDLE hConsoleOutput,
  PCONSOLE_SCREEN_BUFFER_INFOEX lpConsoleScreenBufferInfoEx
);
__attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetCurrentConsoleFontEx(
  HANDLE hConsoleOutput,
  WINBOOL bMaximumWindow,
  PCONSOLE_FONT_INFOEX lpConsoleCurrentFontEx
);
__attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetConsoleHistoryInfo(
  PCONSOLE_HISTORY_INFO lpConsoleHistoryInfo
);
__attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetConsoleScreenBufferInfoEx(
  HANDLE hConsoleOutput,
  PCONSOLE_SCREEN_BUFFER_INFOEX lpConsoleScreenBufferInfoEx
);
__attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetCurrentConsoleFontEx(
  HANDLE hConsoleOutput,
  WINBOOL bMaximumWindow,
  PCONSOLE_FONT_INFOEX lpConsoleCurrentFontEx
);
  typedef struct tagVS_FIXEDFILEINFO
  {
    DWORD dwSignature;
    DWORD dwStrucVersion;
    DWORD dwFileVersionMS;
    DWORD dwFileVersionLS;
    DWORD dwProductVersionMS;
    DWORD dwProductVersionLS;
    DWORD dwFileFlagsMask;
    DWORD dwFileFlags;
    DWORD dwFileOS;
    DWORD dwFileType;
    DWORD dwFileSubtype;
    DWORD dwFileDateMS;
    DWORD dwFileDateLS;
  } VS_FIXEDFILEINFO;
  DWORD __attribute__((__stdcall__)) VerFindFileA(DWORD uFlags,LPSTR szFileName,LPSTR szWinDir,LPSTR szAppDir,LPSTR szCurDir,PUINT lpuCurDirLen,LPSTR szDestDir,PUINT lpuDestDirLen);
  DWORD __attribute__((__stdcall__)) VerFindFileW(DWORD uFlags,LPWSTR szFileName,LPWSTR szWinDir,LPWSTR szAppDir,LPWSTR szCurDir,PUINT lpuCurDirLen,LPWSTR szDestDir,PUINT lpuDestDirLen);
  DWORD __attribute__((__stdcall__)) VerInstallFileA(DWORD uFlags,LPSTR szSrcFileName,LPSTR szDestFileName,LPSTR szSrcDir,LPSTR szDestDir,LPSTR szCurDir,LPSTR szTmpFile,PUINT lpuTmpFileLen);
  DWORD __attribute__((__stdcall__)) VerInstallFileW(DWORD uFlags,LPWSTR szSrcFileName,LPWSTR szDestFileName,LPWSTR szSrcDir,LPWSTR szDestDir,LPWSTR szCurDir,LPWSTR szTmpFile,PUINT lpuTmpFileLen);
  DWORD __attribute__((__stdcall__)) GetFileVersionInfoSizeA(LPCSTR lptstrFilename,LPDWORD lpdwHandle);
  DWORD __attribute__((__stdcall__)) GetFileVersionInfoSizeW(LPCWSTR lptstrFilename,LPDWORD lpdwHandle);
  WINBOOL __attribute__((__stdcall__)) GetFileVersionInfoA(LPCSTR lptstrFilename,DWORD dwHandle,DWORD dwLen,LPVOID lpData);
  WINBOOL __attribute__((__stdcall__)) GetFileVersionInfoW(LPCWSTR lptstrFilename,DWORD dwHandle,DWORD dwLen,LPVOID lpData);
  DWORD __attribute__((__stdcall__)) VerLanguageNameA(DWORD wLang,LPSTR szLang,DWORD nSize);
  DWORD __attribute__((__stdcall__)) VerLanguageNameW(DWORD wLang,LPWSTR szLang,DWORD nSize);
  WINBOOL __attribute__((__stdcall__)) VerQueryValueA(LPCVOID pBlock,LPCSTR lpSubBlock,LPVOID *lplpBuffer,PUINT puLen);
  WINBOOL __attribute__((__stdcall__)) VerQueryValueW(LPCVOID pBlock,LPCWSTR lpSubBlock,LPVOID *lplpBuffer,PUINT puLen);
  typedef ACCESS_MASK REGSAM;
  typedef LONG LSTATUS;
  struct val_context {
    int valuelen;
    LPVOID value_context;
    LPVOID val_buff_ptr;
  };
  typedef struct val_context *PVALCONTEXT;
  typedef struct pvalueA {
    LPSTR pv_valuename;
    int pv_valuelen;
    LPVOID pv_value_context;
    DWORD pv_type;
  }PVALUEA,*PPVALUEA;
  typedef struct pvalueW {
    LPWSTR pv_valuename;
    int pv_valuelen;
    LPVOID pv_value_context;
    DWORD pv_type;
  }PVALUEW,*PPVALUEW;
  typedef PVALUEA PVALUE;
  typedef PPVALUEA PPVALUE;
  typedef DWORD __attribute__((__cdecl__)) QUERYHANDLER(LPVOID keycontext,PVALCONTEXT val_list,DWORD num_vals,LPVOID outputbuffer,DWORD *total_outlen,DWORD input_blen);
  typedef QUERYHANDLER *PQUERYHANDLER;
  typedef struct provider_info {
    PQUERYHANDLER pi_R0_1val;
    PQUERYHANDLER pi_R0_allvals;
    PQUERYHANDLER pi_R3_1val;
    PQUERYHANDLER pi_R3_allvals;
    DWORD pi_flags;
    LPVOID pi_key_context;
  } REG_PROVIDER;
  typedef struct provider_info *PPROVIDER;
  typedef struct value_entA {
    LPSTR ve_valuename;
    DWORD ve_valuelen;
    DWORD_PTR ve_valueptr;
    DWORD ve_type;
  } VALENTA,*PVALENTA;
  typedef struct value_entW {
    LPWSTR ve_valuename;
    DWORD ve_valuelen;
    DWORD_PTR ve_valueptr;
    DWORD ve_type;
  } VALENTW,*PVALENTW;
  typedef VALENTA VALENT;
  typedef PVALENTA PVALENT;
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegCloseKey(HKEY hKey);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegOverridePredefKey(HKEY hKey,HKEY hNewHKey);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegOpenUserClassesRoot(HANDLE hToken,DWORD dwOptions,REGSAM samDesired,PHKEY phkResult);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegOpenCurrentUser(REGSAM samDesired,PHKEY phkResult);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegDisablePredefinedCache(void);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegConnectRegistryA(LPCSTR lpMachineName,HKEY hKey,PHKEY phkResult);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegConnectRegistryW(LPCWSTR lpMachineName,HKEY hKey,PHKEY phkResult);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegConnectRegistryExA(LPCSTR lpMachineName,HKEY hKey,ULONG Flags,PHKEY phkResult);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegConnectRegistryExW(LPCWSTR lpMachineName,HKEY hKey,ULONG Flags,PHKEY phkResult);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegCreateKeyA(HKEY hKey,LPCSTR lpSubKey,PHKEY phkResult);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegCreateKeyW(HKEY hKey,LPCWSTR lpSubKey,PHKEY phkResult);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegCreateKeyExA(HKEY hKey,LPCSTR lpSubKey,DWORD Reserved,LPSTR lpClass,DWORD dwOptions,REGSAM samDesired,LPSECURITY_ATTRIBUTES lpSecurityAttributes,PHKEY phkResult,LPDWORD lpdwDisposition);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegCreateKeyExW(HKEY hKey,LPCWSTR lpSubKey,DWORD Reserved,LPWSTR lpClass,DWORD dwOptions,REGSAM samDesired,LPSECURITY_ATTRIBUTES lpSecurityAttributes,PHKEY phkResult,LPDWORD lpdwDisposition);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegDeleteKeyA(HKEY hKey,LPCSTR lpSubKey);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegDeleteKeyW(HKEY hKey,LPCWSTR lpSubKey);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegDeleteKeyExA(HKEY hKey,LPCSTR lpSubKey,REGSAM samDesired,DWORD Reserved);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegDeleteKeyExW(HKEY hKey,LPCWSTR lpSubKey,REGSAM samDesired,DWORD Reserved);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegDisableReflectionKey(HKEY hBase);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegEnableReflectionKey(HKEY hBase);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegQueryReflectionKey(HKEY hBase,WINBOOL *bIsReflectionDisabled);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegDeleteValueA(HKEY hKey,LPCSTR lpValueName);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegDeleteValueW(HKEY hKey,LPCWSTR lpValueName);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegEnumKeyA(HKEY hKey,DWORD dwIndex,LPSTR lpName,DWORD cchName);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegEnumKeyW(HKEY hKey,DWORD dwIndex,LPWSTR lpName,DWORD cchName);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegEnumKeyExA(HKEY hKey,DWORD dwIndex,LPSTR lpName,LPDWORD lpcchName,LPDWORD lpReserved,LPSTR lpClass,LPDWORD lpcchClass,PFILETIME lpftLastWriteTime);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegEnumKeyExW(HKEY hKey,DWORD dwIndex,LPWSTR lpName,LPDWORD lpcchName,LPDWORD lpReserved,LPWSTR lpClass,LPDWORD lpcchClass,PFILETIME lpftLastWriteTime);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegEnumValueA(HKEY hKey,DWORD dwIndex,LPSTR lpValueName,LPDWORD lpcchValueName,LPDWORD lpReserved,LPDWORD lpType,LPBYTE lpData,LPDWORD lpcbData);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegEnumValueW(HKEY hKey,DWORD dwIndex,LPWSTR lpValueName,LPDWORD lpcchValueName,LPDWORD lpReserved,LPDWORD lpType,LPBYTE lpData,LPDWORD lpcbData);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegFlushKey(HKEY hKey);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegGetKeySecurity(HKEY hKey,SECURITY_INFORMATION SecurityInformation,PSECURITY_DESCRIPTOR pSecurityDescriptor,LPDWORD lpcbSecurityDescriptor);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegLoadKeyA(HKEY hKey,LPCSTR lpSubKey,LPCSTR lpFile);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegLoadKeyW(HKEY hKey,LPCWSTR lpSubKey,LPCWSTR lpFile);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegNotifyChangeKeyValue(HKEY hKey,WINBOOL bWatchSubtree,DWORD dwNotifyFilter,HANDLE hEvent,WINBOOL fAsynchronous);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegOpenKeyA(HKEY hKey,LPCSTR lpSubKey,PHKEY phkResult);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegOpenKeyW(HKEY hKey,LPCWSTR lpSubKey,PHKEY phkResult);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegOpenKeyExA(HKEY hKey,LPCSTR lpSubKey,DWORD ulOptions,REGSAM samDesired,PHKEY phkResult);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegOpenKeyExW(HKEY hKey,LPCWSTR lpSubKey,DWORD ulOptions,REGSAM samDesired,PHKEY phkResult);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegQueryInfoKeyA(HKEY hKey,LPSTR lpClass,LPDWORD lpcchClass,LPDWORD lpReserved,LPDWORD lpcSubKeys,LPDWORD lpcbMaxSubKeyLen,LPDWORD lpcbMaxClassLen,LPDWORD lpcValues,LPDWORD lpcbMaxValueNameLen,LPDWORD lpcbMaxValueLen,LPDWORD lpcbSecurityDescriptor,PFILETIME lpftLastWriteTime);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegQueryInfoKeyW(HKEY hKey,LPWSTR lpClass,LPDWORD lpcchClass,LPDWORD lpReserved,LPDWORD lpcSubKeys,LPDWORD lpcbMaxSubKeyLen,LPDWORD lpcbMaxClassLen,LPDWORD lpcValues,LPDWORD lpcbMaxValueNameLen,LPDWORD lpcbMaxValueLen,LPDWORD lpcbSecurityDescriptor,PFILETIME lpftLastWriteTime);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegQueryValueA(HKEY hKey,LPCSTR lpSubKey,LPSTR lpData,PLONG lpcbData);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegQueryValueW(HKEY hKey,LPCWSTR lpSubKey,LPWSTR lpData,PLONG lpcbData);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegQueryMultipleValuesA(HKEY hKey,PVALENTA val_list,DWORD num_vals,LPSTR lpValueBuf,LPDWORD ldwTotsize);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegQueryMultipleValuesW(HKEY hKey,PVALENTW val_list,DWORD num_vals,LPWSTR lpValueBuf,LPDWORD ldwTotsize);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegQueryValueExA(HKEY hKey,LPCSTR lpValueName,LPDWORD lpReserved,LPDWORD lpType,LPBYTE lpData,LPDWORD lpcbData);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegQueryValueExW(HKEY hKey,LPCWSTR lpValueName,LPDWORD lpReserved,LPDWORD lpType,LPBYTE lpData,LPDWORD lpcbData);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegReplaceKeyA(HKEY hKey,LPCSTR lpSubKey,LPCSTR lpNewFile,LPCSTR lpOldFile);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegReplaceKeyW(HKEY hKey,LPCWSTR lpSubKey,LPCWSTR lpNewFile,LPCWSTR lpOldFile);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegRestoreKeyA(HKEY hKey,LPCSTR lpFile,DWORD dwFlags);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegRestoreKeyW(HKEY hKey,LPCWSTR lpFile,DWORD dwFlags);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegSaveKeyA(HKEY hKey,LPCSTR lpFile,LPSECURITY_ATTRIBUTES lpSecurityAttributes);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegSaveKeyW(HKEY hKey,LPCWSTR lpFile,LPSECURITY_ATTRIBUTES lpSecurityAttributes);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegSetKeySecurity(HKEY hKey,SECURITY_INFORMATION SecurityInformation,PSECURITY_DESCRIPTOR pSecurityDescriptor);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegSetValueA(HKEY hKey,LPCSTR lpSubKey,DWORD dwType,LPCSTR lpData,DWORD cbData);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegSetValueW(HKEY hKey,LPCWSTR lpSubKey,DWORD dwType,LPCWSTR lpData,DWORD cbData);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegSetValueExA(HKEY hKey,LPCSTR lpValueName,DWORD Reserved,DWORD dwType,const BYTE *lpData,DWORD cbData);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegSetValueExW(HKEY hKey,LPCWSTR lpValueName,DWORD Reserved,DWORD dwType,const BYTE *lpData,DWORD cbData);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegUnLoadKeyA(HKEY hKey,LPCSTR lpSubKey);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegUnLoadKeyW(HKEY hKey,LPCWSTR lpSubKey);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegGetValueA(HKEY hkey,LPCSTR lpSubKey,LPCSTR lpValue,DWORD dwFlags,LPDWORD pdwType,PVOID pvData,LPDWORD pcbData);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegGetValueW(HKEY hkey,LPCWSTR lpSubKey,LPCWSTR lpValue,DWORD dwFlags,LPDWORD pdwType,PVOID pvData,LPDWORD pcbData);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) InitiateSystemShutdownA(LPSTR lpMachineName,LPSTR lpMessage,DWORD dwTimeout,WINBOOL bForceAppsClosed,WINBOOL bRebootAfterShutdown);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) InitiateSystemShutdownW(LPWSTR lpMachineName,LPWSTR lpMessage,DWORD dwTimeout,WINBOOL bForceAppsClosed,WINBOOL bRebootAfterShutdown);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AbortSystemShutdownA(LPSTR lpMachineName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) AbortSystemShutdownW(LPWSTR lpMachineName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) InitiateSystemShutdownExA(LPSTR lpMachineName,LPSTR lpMessage,DWORD dwTimeout,WINBOOL bForceAppsClosed,WINBOOL bRebootAfterShutdown,DWORD dwReason);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) InitiateSystemShutdownExW(LPWSTR lpMachineName,LPWSTR lpMessage,DWORD dwTimeout,WINBOOL bForceAppsClosed,WINBOOL bRebootAfterShutdown,DWORD dwReason);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegSaveKeyExA(HKEY hKey,LPCSTR lpFile,LPSECURITY_ATTRIBUTES lpSecurityAttributes,DWORD Flags);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegSaveKeyExW(HKEY hKey,LPCWSTR lpFile,LPSECURITY_ATTRIBUTES lpSecurityAttributes,DWORD Flags);
  __attribute__((dllimport)) LONG __attribute__((__stdcall__)) Wow64Win32ApiEntry (DWORD dwFuncNumber,DWORD dwFlag,DWORD dwRes);
__attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegCopyTreeA(
  HKEY hKeySrc,
  LPCSTR lpSubKey,
  HKEY hKeyDest
);
__attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegCopyTreeW(
  HKEY hKeySrc,
  LPCWSTR lpSubKey,
  HKEY hKeyDest
);
__attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegCreateKeyTransactedA(
  HKEY hKey,
  LPCSTR lpSubKey,
  DWORD Reserved,
  LPSTR lpClass,
  DWORD dwOptions,
  REGSAM samDesired,
  const LPSECURITY_ATTRIBUTES lpSecurityAttributes,
  PHKEY phkResult,
  LPDWORD lpdwDisposition,
  HANDLE hTransaction,
  PVOID pExtendedParemeter
);
__attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegCreateKeyTransactedW(
  HKEY hKey,
  LPCWSTR lpSubKey,
  DWORD Reserved,
  LPWSTR lpClass,
  DWORD dwOptions,
  REGSAM samDesired,
  const LPSECURITY_ATTRIBUTES lpSecurityAttributes,
  PHKEY phkResult,
  LPDWORD lpdwDisposition,
  HANDLE hTransaction,
  PVOID pExtendedParemeter
);
__attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegDeleteKeyTransactedA(
  HKEY hKey,
  LPCSTR lpSubKey,
  REGSAM samDesired,
  DWORD Reserved,
  HANDLE hTransaction,
  PVOID pExtendedParameter
);
__attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegDeleteKeyTransactedW(
  HKEY hKey,
  LPCWSTR lpSubKey,
  REGSAM samDesired,
  DWORD Reserved,
  HANDLE hTransaction,
  PVOID pExtendedParameter
);
__attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegDeleteKeyValueA(
  HKEY hKey,
  LPCSTR lpSubKey,
  LPCSTR lpValueName
);
__attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegDeleteKeyValueW(
  HKEY hKey,
  LPCWSTR lpSubKey,
  LPCWSTR lpValueName
);
__attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegDeleteTreeA(
  HKEY hKey,
  LPCSTR lpSubKey
);
__attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegDeleteTreeW(
  HKEY hKey,
  LPCWSTR lpSubKey
);
__attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegDisablePredefinedCacheEx(void);
__attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegLoadAppKeyA(
  LPCSTR lpFile,
  PHKEY phkResult,
  REGSAM samDesired,
  DWORD dwOptions,
  DWORD Reserved
);
__attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegLoadAppKeyW(
  LPCWSTR lpFile,
  PHKEY phkResult,
  REGSAM samDesired,
  DWORD dwOptions,
  DWORD Reserved
);
__attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegLoadMUIStringA(HKEY hKey, LPCSTR pszValue, LPSTR pszOutBuf, DWORD cbOutBuf, LPDWORD pcbData, DWORD Flags, LPCSTR pszDirectory);
__attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegLoadMUIStringW(HKEY hKey, LPCWSTR pszValue, LPWSTR pszOutBuf, DWORD cbOutBuf, LPDWORD pcbData, DWORD Flags, LPCWSTR pszDirectory);
__attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegOpenKeyTransactedA(
  HKEY hKey,
  LPCSTR lpSubKey,
  DWORD ulOptions,
  REGSAM samDesired,
  PHKEY phkResult,
  HANDLE hTransaction,
  PVOID pExtendedParameter
);
__attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegOpenKeyTransactedW(
  HKEY hKey,
  LPCWSTR lpSubKey,
  DWORD ulOptions,
  REGSAM samDesired,
  PHKEY phkResult,
  HANDLE hTransaction,
  PVOID pExtendedParameter
);
__attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegSetKeyValueA(
  HKEY hKey,
  LPCSTR lpSubKey,
  LPCSTR lpValueName,
  DWORD dwType,
  LPCVOID lpData,
  DWORD cbData
);
__attribute__((dllimport)) LONG __attribute__((__stdcall__)) RegSetKeyValueW(
  HKEY hKey,
  LPCWSTR lpSubKey,
  LPCWSTR lpValueName,
  DWORD dwType,
  LPCVOID lpData,
  DWORD cbData
);
__attribute__((dllimport)) DWORD __attribute__((__stdcall__)) InitiateShutdownA(
  LPSTR lpMachineName,
  LPSTR lpMessage,
  DWORD dwGracePeriod,
  DWORD dwShutdownFlags,
  DWORD dwReason
);
__attribute__((dllimport)) DWORD __attribute__((__stdcall__)) InitiateShutdownW(
  LPWSTR lpMachineName,
  LPWSTR lpMessage,
  DWORD dwGracePeriod,
  DWORD dwShutdownFlags,
  DWORD dwReason
);
  typedef struct _NETRESOURCEA {
    DWORD dwScope;
    DWORD dwType;
    DWORD dwDisplayType;
    DWORD dwUsage;
    LPSTR lpLocalName;
    LPSTR lpRemoteName;
    LPSTR lpComment;
    LPSTR lpProvider;
  } NETRESOURCEA,*LPNETRESOURCEA;
  typedef struct _NETRESOURCEW {
    DWORD dwScope;
    DWORD dwType;
    DWORD dwDisplayType;
    DWORD dwUsage;
    LPWSTR lpLocalName;
    LPWSTR lpRemoteName;
    LPWSTR lpComment;
    LPWSTR lpProvider;
  } NETRESOURCEW,*LPNETRESOURCEW;
  typedef NETRESOURCEA NETRESOURCE;
  typedef LPNETRESOURCEA LPNETRESOURCE;
  DWORD __attribute__((__stdcall__)) WNetAddConnectionA(LPCSTR lpRemoteName,LPCSTR lpPassword,LPCSTR lpLocalName);
  DWORD __attribute__((__stdcall__)) WNetAddConnectionW(LPCWSTR lpRemoteName,LPCWSTR lpPassword,LPCWSTR lpLocalName);
  DWORD __attribute__((__stdcall__)) WNetAddConnection2A(LPNETRESOURCEA lpNetResource,LPCSTR lpPassword,LPCSTR lpUserName,DWORD dwFlags);
  DWORD __attribute__((__stdcall__)) WNetAddConnection2W(LPNETRESOURCEW lpNetResource,LPCWSTR lpPassword,LPCWSTR lpUserName,DWORD dwFlags);
  DWORD __attribute__((__stdcall__)) WNetAddConnection3A(HWND hwndOwner,LPNETRESOURCEA lpNetResource,LPCSTR lpPassword,LPCSTR lpUserName,DWORD dwFlags);
  DWORD __attribute__((__stdcall__)) WNetAddConnection3W(HWND hwndOwner,LPNETRESOURCEW lpNetResource,LPCWSTR lpPassword,LPCWSTR lpUserName,DWORD dwFlags);
  DWORD __attribute__((__stdcall__)) WNetCancelConnectionA(LPCSTR lpName,WINBOOL fForce);
  DWORD __attribute__((__stdcall__)) WNetCancelConnectionW(LPCWSTR lpName,WINBOOL fForce);
  DWORD __attribute__((__stdcall__)) WNetCancelConnection2A(LPCSTR lpName,DWORD dwFlags,WINBOOL fForce);
  DWORD __attribute__((__stdcall__)) WNetCancelConnection2W(LPCWSTR lpName,DWORD dwFlags,WINBOOL fForce);
  DWORD __attribute__((__stdcall__)) WNetGetConnectionA(LPCSTR lpLocalName,LPSTR lpRemoteName,LPDWORD lpnLength);
  DWORD __attribute__((__stdcall__)) WNetGetConnectionW(LPCWSTR lpLocalName,LPWSTR lpRemoteName,LPDWORD lpnLength);
  DWORD __attribute__((__stdcall__)) WNetRestoreConnectionA(HWND hwndParent,LPCSTR lpDevice);
  DWORD __attribute__((__stdcall__)) WNetUseConnectionA(HWND hwndOwner,LPNETRESOURCEA lpNetResource,LPCSTR lpPassword,LPCSTR lpUserID,DWORD dwFlags,LPSTR lpAccessName,LPDWORD lpBufferSize,LPDWORD lpResult);
  DWORD __attribute__((__stdcall__)) WNetUseConnectionW(HWND hwndOwner,LPNETRESOURCEW lpNetResource,LPCWSTR lpPassword,LPCWSTR lpUserID,DWORD dwFlags,LPWSTR lpAccessName,LPDWORD lpBufferSize,LPDWORD lpResult);
  DWORD __attribute__((__stdcall__)) WNetConnectionDialog(HWND hwnd,DWORD dwType);
  DWORD __attribute__((__stdcall__)) WNetDisconnectDialog(HWND hwnd,DWORD dwType);
  DWORD __attribute__((__stdcall__)) WNetRestoreSingleConnectionW(HWND hwndParent, LPCWSTR lpDevice, BOOL fUseUI);
  typedef struct _CONNECTDLGSTRUCTA {
    DWORD cbStructure;
    HWND hwndOwner;
    LPNETRESOURCEA lpConnRes;
    DWORD dwFlags;
    DWORD dwDevNum;
  } CONNECTDLGSTRUCTA,*LPCONNECTDLGSTRUCTA;
  typedef struct _CONNECTDLGSTRUCTW {
    DWORD cbStructure;
    HWND hwndOwner;
    LPNETRESOURCEW lpConnRes;
    DWORD dwFlags;
    DWORD dwDevNum;
  } CONNECTDLGSTRUCTW,*LPCONNECTDLGSTRUCTW;
  typedef CONNECTDLGSTRUCTA CONNECTDLGSTRUCT;
  typedef LPCONNECTDLGSTRUCTA LPCONNECTDLGSTRUCT;
  DWORD __attribute__((__stdcall__)) WNetConnectionDialog1A(LPCONNECTDLGSTRUCTA lpConnDlgStruct);
  DWORD __attribute__((__stdcall__)) WNetConnectionDialog1W(LPCONNECTDLGSTRUCTW lpConnDlgStruct);
  typedef struct _DISCDLGSTRUCTA {
    DWORD cbStructure;
    HWND hwndOwner;
    LPSTR lpLocalName;
    LPSTR lpRemoteName;
    DWORD dwFlags;
  } DISCDLGSTRUCTA,*LPDISCDLGSTRUCTA;
  typedef struct _DISCDLGSTRUCTW {
    DWORD cbStructure;
    HWND hwndOwner;
    LPWSTR lpLocalName;
    LPWSTR lpRemoteName;
    DWORD dwFlags;
  } DISCDLGSTRUCTW,*LPDISCDLGSTRUCTW;
  typedef DISCDLGSTRUCTA DISCDLGSTRUCT;
  typedef LPDISCDLGSTRUCTA LPDISCDLGSTRUCT;
  DWORD __attribute__((__stdcall__)) WNetDisconnectDialog1A(LPDISCDLGSTRUCTA lpConnDlgStruct);
  DWORD __attribute__((__stdcall__)) WNetDisconnectDialog1W(LPDISCDLGSTRUCTW lpConnDlgStruct);
  DWORD __attribute__((__stdcall__)) WNetOpenEnumA(DWORD dwScope,DWORD dwType,DWORD dwUsage,LPNETRESOURCEA lpNetResource,LPHANDLE lphEnum);
  DWORD __attribute__((__stdcall__)) WNetOpenEnumW(DWORD dwScope,DWORD dwType,DWORD dwUsage,LPNETRESOURCEW lpNetResource,LPHANDLE lphEnum);
  DWORD __attribute__((__stdcall__)) WNetEnumResourceA(HANDLE hEnum,LPDWORD lpcCount,LPVOID lpBuffer,LPDWORD lpBufferSize);
  DWORD __attribute__((__stdcall__)) WNetEnumResourceW(HANDLE hEnum,LPDWORD lpcCount,LPVOID lpBuffer,LPDWORD lpBufferSize);
  DWORD __attribute__((__stdcall__)) WNetCloseEnum(HANDLE hEnum);
  DWORD __attribute__((__stdcall__)) WNetGetResourceParentA(LPNETRESOURCEA lpNetResource,LPVOID lpBuffer,LPDWORD lpcbBuffer);
  DWORD __attribute__((__stdcall__)) WNetGetResourceParentW(LPNETRESOURCEW lpNetResource,LPVOID lpBuffer,LPDWORD lpcbBuffer);
  DWORD __attribute__((__stdcall__)) WNetGetResourceInformationA(LPNETRESOURCEA lpNetResource,LPVOID lpBuffer,LPDWORD lpcbBuffer,LPSTR *lplpSystem);
  DWORD __attribute__((__stdcall__)) WNetGetResourceInformationW(LPNETRESOURCEW lpNetResource,LPVOID lpBuffer,LPDWORD lpcbBuffer,LPWSTR *lplpSystem);
  typedef struct _UNIVERSAL_NAME_INFOA {
    LPSTR lpUniversalName;
  } UNIVERSAL_NAME_INFOA,*LPUNIVERSAL_NAME_INFOA;
  typedef struct _UNIVERSAL_NAME_INFOW {
    LPWSTR lpUniversalName;
  } UNIVERSAL_NAME_INFOW,*LPUNIVERSAL_NAME_INFOW;
  typedef UNIVERSAL_NAME_INFOA UNIVERSAL_NAME_INFO;
  typedef LPUNIVERSAL_NAME_INFOA LPUNIVERSAL_NAME_INFO;
  typedef struct _REMOTE_NAME_INFOA {
    LPSTR lpUniversalName;
    LPSTR lpConnectionName;
    LPSTR lpRemainingPath;
  } REMOTE_NAME_INFOA,*LPREMOTE_NAME_INFOA;
  typedef struct _REMOTE_NAME_INFOW {
    LPWSTR lpUniversalName;
    LPWSTR lpConnectionName;
    LPWSTR lpRemainingPath;
  } REMOTE_NAME_INFOW,*LPREMOTE_NAME_INFOW;
  typedef REMOTE_NAME_INFOA REMOTE_NAME_INFO;
  typedef LPREMOTE_NAME_INFOA LPREMOTE_NAME_INFO;
  DWORD __attribute__((__stdcall__)) WNetGetUniversalNameA(LPCSTR lpLocalPath,DWORD dwInfoLevel,LPVOID lpBuffer,LPDWORD lpBufferSize);
  DWORD __attribute__((__stdcall__)) WNetGetUniversalNameW(LPCWSTR lpLocalPath,DWORD dwInfoLevel,LPVOID lpBuffer,LPDWORD lpBufferSize);
  DWORD __attribute__((__stdcall__)) WNetGetUserA(LPCSTR lpName,LPSTR lpUserName,LPDWORD lpnLength);
  DWORD __attribute__((__stdcall__)) WNetGetUserW(LPCWSTR lpName,LPWSTR lpUserName,LPDWORD lpnLength);
  DWORD __attribute__((__stdcall__)) WNetGetProviderNameA(DWORD dwNetType,LPSTR lpProviderName,LPDWORD lpBufferSize);
  DWORD __attribute__((__stdcall__)) WNetGetProviderNameW(DWORD dwNetType,LPWSTR lpProviderName,LPDWORD lpBufferSize);
  typedef struct _NETINFOSTRUCT {
    DWORD cbStructure;
    DWORD dwProviderVersion;
    DWORD dwStatus;
    DWORD dwCharacteristics;
    ULONG_PTR dwHandle;
    WORD wNetType;
    DWORD dwPrinters;
    DWORD dwDrives;
  } NETINFOSTRUCT,*LPNETINFOSTRUCT;
  DWORD __attribute__((__stdcall__)) WNetGetNetworkInformationA(LPCSTR lpProvider,LPNETINFOSTRUCT lpNetInfoStruct);
  DWORD __attribute__((__stdcall__)) WNetGetNetworkInformationW(LPCWSTR lpProvider,LPNETINFOSTRUCT lpNetInfoStruct);
  typedef UINT (__attribute__((__stdcall__)) *PFNGETPROFILEPATHA) (LPCSTR pszUsername,LPSTR pszBuffer,UINT cbBuffer);
  typedef UINT (__attribute__((__stdcall__)) *PFNGETPROFILEPATHW) (LPCWSTR pszUsername,LPWSTR pszBuffer,UINT cbBuffer);
  typedef UINT (__attribute__((__stdcall__)) *PFNRECONCILEPROFILEA) (LPCSTR pszCentralFile,LPCSTR pszLocalFile,DWORD dwFlags);
  typedef UINT (__attribute__((__stdcall__)) *PFNRECONCILEPROFILEW) (LPCWSTR pszCentralFile,LPCWSTR pszLocalFile,DWORD dwFlags);
  typedef WINBOOL (__attribute__((__stdcall__)) *PFNPROCESSPOLICIESA) (HWND hwnd,LPCSTR pszPath,LPCSTR pszUsername,LPCSTR pszComputerName,DWORD dwFlags);
  typedef WINBOOL (__attribute__((__stdcall__)) *PFNPROCESSPOLICIESW) (HWND hwnd,LPCWSTR pszPath,LPCWSTR pszUsername,LPCWSTR pszComputerName,DWORD dwFlags);
  DWORD __attribute__((__stdcall__)) WNetGetLastErrorA(LPDWORD lpError,LPSTR lpErrorBuf,DWORD nErrorBufSize,LPSTR lpNameBuf,DWORD nNameBufSize);
  DWORD __attribute__((__stdcall__)) WNetGetLastErrorW(LPDWORD lpError,LPWSTR lpErrorBuf,DWORD nErrorBufSize,LPWSTR lpNameBuf,DWORD nNameBufSize);
  typedef struct _NETCONNECTINFOSTRUCT {
    DWORD cbStructure;
    DWORD dwFlags;
    DWORD dwSpeed;
    DWORD dwDelay;
    DWORD dwOptDataSize;
  } NETCONNECTINFOSTRUCT,*LPNETCONNECTINFOSTRUCT;
  DWORD __attribute__((__stdcall__)) MultinetGetConnectionPerformanceA(LPNETRESOURCEA lpNetResource,LPNETCONNECTINFOSTRUCT lpNetConnectInfoStruct);
  DWORD __attribute__((__stdcall__)) MultinetGetConnectionPerformanceW(LPNETRESOURCEW lpNetResource,LPNETCONNECTINFOSTRUCT lpNetConnectInfoStruct);
typedef enum _ATTACH_VIRTUAL_DISK_FLAG {
  ATTACH_VIRTUAL_DISK_FLAG_NONE = 0x00000000,
  ATTACH_VIRTUAL_DISK_FLAG_READ_ONLY = 0x00000001,
  ATTACH_VIRTUAL_DISK_FLAG_NO_DRIVE_LETTER = 0x00000002,
  ATTACH_VIRTUAL_DISK_FLAG_PERMANENT_LIFETIME = 0x00000004,
  ATTACH_VIRTUAL_DISK_FLAG_NO_LOCAL_HOST = 0x00000008
} ATTACH_VIRTUAL_DISK_FLAG;
typedef enum _ATTACH_VIRTUAL_DISK_VERSION {
  ATTACH_VIRTUAL_DISK_VERSION_UNSPECIFIED = 0,
  ATTACH_VIRTUAL_DISK_VERSION_1 = 1
} ATTACH_VIRTUAL_DISK_VERSION;
typedef enum _COMPACT_VIRTUAL_DISK_FLAG {
  COMPACT_VIRTUAL_DISK_FLAG_NONE = 0x00000000
} COMPACT_VIRTUAL_DISK_FLAG;
typedef enum _COMPACT_VIRTUAL_DISK_VERSION {
  COMPACT_VIRTUAL_DISK_VERSION_UNSPECIFIED = 0,
  COMPACT_VIRTUAL_DISK_VERSION_1 = 1
} COMPACT_VIRTUAL_DISK_VERSION;
typedef enum _CREATE_VIRTUAL_DISK_FLAG {
  CREATE_VIRTUAL_DISK_FLAG_NONE = 0x00000000,
  CREATE_VIRTUAL_DISK_FLAG_FULL_PHYSICAL_ALLOCATION = 0x00000001
} CREATE_VIRTUAL_DISK_FLAG;
typedef enum _CREATE_VIRTUAL_DISK_VERSION {
  CREATE_VIRTUAL_DISK_VERSION_UNSPECIFIED = 0,
  CREATE_VIRTUAL_DISK_VERSION_1 = 1
} CREATE_VIRTUAL_DISK_VERSION;
typedef enum _DEPENDENT_DISK_FLAG {
  DEPENDENT_DISK_FLAG_NONE = 0x00000000,
  DEPENDENT_DISK_FLAG_MULT_BACKING_FILES = 0x00000001,
  DEPENDENT_DISK_FLAG_FULLY_ALLOCATED = 0x00000002,
  DEPENDENT_DISK_FLAG_READ_ONLY = 0x00000004,
  DEPENDENT_DISK_FLAG_REMOTE = 0x00000008,
  DEPENDENT_DISK_FLAG_SYSTEM_VOLUME = 0x00000010,
  DEPENDENT_DISK_FLAG_SYSTEM_VOLUME_PARENT = 0x00000020,
  DEPENDENT_DISK_FLAG_REMOVABLE = 0x00000040,
  DEPENDENT_DISK_FLAG_NO_DRIVE_LETTER = 0x00000080,
  DEPENDENT_DISK_FLAG_PARENT = 0x00000100,
  DEPENDENT_DISK_FLAG_NO_HOST_DISK = 0x00000200,
  DEPENDENT_DISK_FLAG_PERMANENT_LIFETIME = 0x00000400
} DEPENDENT_DISK_FLAG;
typedef enum _EXPAND_VIRTUAL_DISK_VERSION {
  EXPAND_VIRTUAL_DISK_VERSION_UNSPECIFIED = 0,
  EXPAND_VIRTUAL_DISK_VERSION_1 = 1
} EXPAND_VIRTUAL_DISK_VERSION;
typedef enum _DETACH_VIRTUAL_DISK_FLAG {
  DETACH_VIRTUAL_DISK_FLAG_NONE = 0x00000000
} DETACH_VIRTUAL_DISK_FLAG;
typedef enum _EXPAND_VIRTUAL_DISK_FLAG {
  EXPAND_VIRTUAL_DISK_FLAG_NONE = 0x00000000
} EXPAND_VIRTUAL_DISK_FLAG;
typedef enum _GET_STORAGE_DEPENDENCY_FLAG {
  GET_STORAGE_DEPENDENCY_FLAG_NONE = 0x00000000,
  GET_STORAGE_DEPENDENCY_FLAG_HOST_VOLUMES = 0x00000001,
  GET_STORAGE_DEPENDENCY_FLAG_DISK_HANDLE = 0x00000002
} GET_STORAGE_DEPENDENCY_FLAG;
typedef enum _GET_VIRTUAL_DISK_INFO_VERSION {
  GET_VIRTUAL_DISK_INFO_UNSPECIFIED = 0,
  GET_VIRTUAL_DISK_INFO_SIZE = 1,
  GET_VIRTUAL_DISK_INFO_IDENTIFIER = 2,
  GET_VIRTUAL_DISK_INFO_PARENT_LOCATION = 3,
  GET_VIRTUAL_DISK_INFO_PARENT_IDENTIFIER = 4,
  GET_VIRTUAL_DISK_INFO_PARENT_TIMESTAMP = 5,
  GET_VIRTUAL_DISK_INFO_VIRTUAL_STORAGE_TYPE = 6,
  GET_VIRTUAL_DISK_INFO_PROVIDER_SUBTYPE = 7
} GET_VIRTUAL_DISK_INFO_VERSION;
typedef enum _MIRROR_VIRTUAL_DISK_FLAG {
  MIRROR_VIRTUAL_DISK_FLAG_NONE = 0x00000000,
  MIRROR_VIRTUAL_DISK_FLAG_EXISTING_FILE = 0x00000001
} MIRROR_VIRTUAL_DISK_FLAG;
typedef enum _MIRROR_VIRTUAL_DISK_VERSION {
  MIRROR_VIRTUAL_DISK_VERSION_UNSPECIFIED = 0,
  MIRROR_VIRTUAL_DISK_VERSION_1 = 1
} MIRROR_VIRTUAL_DISK_VERSION;
typedef enum _MERGE_VIRTUAL_DISK_FLAG {
  MERGE_VIRTUAL_DISK_FLAG_NONE = 0x00000000
} MERGE_VIRTUAL_DISK_FLAG;
typedef enum _MERGE_VIRTUAL_DISK_VERSION {
  MERGE_VIRTUAL_DISK_VERSION_UNSPECIFIED = 0,
  MERGE_VIRTUAL_DISK_VERSION_1 = 1
} MERGE_VIRTUAL_DISK_VERSION;
typedef enum _OPEN_VIRTUAL_DISK_FLAG {
  OPEN_VIRTUAL_DISK_FLAG_NONE = 0x00000000,
  OPEN_VIRTUAL_DISK_FLAG_NO_PARENTS = 0x00000001,
  OPEN_VIRTUAL_DISK_FLAG_BLANK_FILE = 0x00000002,
  OPEN_VIRTUAL_DISK_FLAG_BOOT_DRIVE = 0x00000004
} OPEN_VIRTUAL_DISK_FLAG;
typedef enum _OPEN_VIRTUAL_DISK_VERSION {
  OPEN_VIRTUAL_DISK_VERSION_UNSPECIFIED = 0,
  OPEN_VIRTUAL_DISK_VERSION_1 = 1
} OPEN_VIRTUAL_DISK_VERSION;
typedef enum _SET_VIRTUAL_DISK_INFO_VERSION {
  SET_VIRTUAL_DISK_INFO_UNSPECIFIED = 0,
  SET_VIRTUAL_DISK_INFO_PARENT_PATH = 1,
  SET_VIRTUAL_DISK_INFO_IDENTIFIER = 2
} SET_VIRTUAL_DISK_INFO_VERSION;
typedef enum _STORAGE_DEPENDENCY_INFO_VERSION {
  STORAGE_DEPENDENCY_INFO_VERSION_UNSPECIFIED = 0,
  STORAGE_DEPENDENCY_INFO_VERSION_1 = 1,
  STORAGE_DEPENDENCY_INFO_VERSION_2 = 2
} STORAGE_DEPENDENCY_INFO_VERSION;
typedef enum _VIRTUAL_DISK_ACCESS_MASK {
  VIRTUAL_DISK_ACCESS_NONE = 0x00000000,
  VIRTUAL_DISK_ACCESS_ATTACH_RO = 0x00010000,
  VIRTUAL_DISK_ACCESS_ATTACH_RW = 0x00020000,
  VIRTUAL_DISK_ACCESS_DETACH = 0x00040000,
  VIRTUAL_DISK_ACCESS_GET_INFO = 0x00080000,
  VIRTUAL_DISK_ACCESS_CREATE = 0x00100000,
  VIRTUAL_DISK_ACCESS_METAOPS = 0x00200000,
  VIRTUAL_DISK_ACCESS_READ = 0x000d0000,
  VIRTUAL_DISK_ACCESS_ALL = 0x003f0000,
  VIRTUAL_DISK_ACCESS_WRITABLE = 0x00320000
} VIRTUAL_DISK_ACCESS_MASK;
typedef struct _VIRTUAL_STORAGE_TYPE {
  ULONG DeviceId;
  GUID VendorId;
} VIRTUAL_STORAGE_TYPE, *PVIRTUAL_STORAGE_TYPE;
typedef struct _ATTACH_VIRTUAL_DISK_PARAMETERS {
  ATTACH_VIRTUAL_DISK_VERSION Version;
  __extension__ union {
    struct {
      ULONG Reserved;
    } Version1;
  } ;
} ATTACH_VIRTUAL_DISK_PARAMETERS, *PATTACH_VIRTUAL_DISK_PARAMETERS;
typedef struct _COMPACT_VIRTUAL_DISK_PARAMETERS {
  COMPACT_VIRTUAL_DISK_VERSION Version;
  __extension__ union {
    struct {
      ULONG Reserved;
    } Version1;
  } ;
} COMPACT_VIRTUAL_DISK_PARAMETERS, *PCOMPACT_VIRTUAL_DISK_PARAMETERS;
typedef struct _CREATE_VIRTUAL_DISK_PARAMETERS {
  CREATE_VIRTUAL_DISK_VERSION Version;
  __extension__ union {
    struct {
      GUID UniqueId;
      ULONGLONG MaximumSize;
      ULONG BlockSizeInBytes;
      ULONG SectorSizeInBytes;
      PCWSTR ParentPath;
      PCWSTR SourcePath;
    } Version1;
  } ;
} CREATE_VIRTUAL_DISK_PARAMETERS, *PCREATE_VIRTUAL_DISK_PARAMETERS;
typedef struct _EXPAND_VIRTUAL_DISK_PARAMETERS {
  EXPAND_VIRTUAL_DISK_VERSION Version;
  __extension__ union {
    struct {
      ULONGLONG NewSize;
    } Version1;
  } ;
} EXPAND_VIRTUAL_DISK_PARAMETERS, *PEXPAND_VIRTUAL_DISK_PARAMETERS;
typedef struct _GET_VIRTUAL_DISK_INFO {
  GET_VIRTUAL_DISK_INFO_VERSION Version;
  __extension__ union {
    struct {
      ULONGLONG VirtualSize;
      ULONGLONG PhysicalSize;
      ULONG BlockSize;
      ULONG SectorSize;
    } Size;
    GUID Identifier;
    struct {
      WINBOOL ParentResolved;
      WCHAR ParentLocationBuffer[1];
    } ParentLocation;
    GUID ParentIdentifier;
    ULONG ParentTimestamp;
    VIRTUAL_STORAGE_TYPE VirtualStorageType;
    ULONG ProviderSubtype;
  } ;
} GET_VIRTUAL_DISK_INFO, *PGET_VIRTUAL_DISK_INFO;
typedef struct _MERGE_VIRTUAL_DISK_PARAMETERS {
  MERGE_VIRTUAL_DISK_VERSION Version;
  __extension__ union {
    struct {
      ULONG MergeDepth;
    } Version1;
  } ;
} MERGE_VIRTUAL_DISK_PARAMETERS, *PMERGE_VIRTUAL_DISK_PARAMETERS;
typedef struct _OPEN_VIRTUAL_DISK_PARAMETERS {
  OPEN_VIRTUAL_DISK_VERSION Version;
  __extension__ union {
    struct {
      ULONG RWDepth;
    } Version1;
  } ;
} OPEN_VIRTUAL_DISK_PARAMETERS, *POPEN_VIRTUAL_DISK_PARAMETERS;
typedef struct _SET_VIRTUAL_DISK_INFO {
  SET_VIRTUAL_DISK_INFO_VERSION Version;
  __extension__ union {
    PCWSTR ParentFilePath;
    GUID UniqueIdentifier;
  } ;
} SET_VIRTUAL_DISK_INFO, *PSET_VIRTUAL_DISK_INFO;
typedef struct _STORAGE_DEPENDENCY_INFO_TYPE_1 {
  DEPENDENT_DISK_FLAG DependencyTypeFlags;
  ULONG ProviderSpecificFlags;
  VIRTUAL_STORAGE_TYPE VirtualStorageType;
} STORAGE_DEPENDENCY_INFO_TYPE_1, *PSTORAGE_DEPENDENCY_INFO_TYPE_1;
typedef struct _STORAGE_DEPENDENCY_INFO_TYPE_2 {
  DEPENDENT_DISK_FLAG DependencyTypeFlags;
  ULONG ProviderSpecificFlags;
  VIRTUAL_STORAGE_TYPE VirtualStorageType;
  ULONG AncestorLevel;
  PWSTR DependencyDeviceName;
  PWSTR HostVolumeName;
  PWSTR DependentVolumeName;
  PWSTR DependentVolumeRelativePath;
} STORAGE_DEPENDENCY_INFO_TYPE_2, *PSTORAGE_DEPENDENCY_INFO_TYPE_2;
typedef struct _STORAGE_DEPENDENCY_INFO {
  STORAGE_DEPENDENCY_INFO_VERSION Version;
  ULONG NumberEntries;
  __extension__ union {
    STORAGE_DEPENDENCY_INFO_TYPE_1 Version1Entries[1];
    STORAGE_DEPENDENCY_INFO_TYPE_2 Version2Entries[1];
  } ;
} STORAGE_DEPENDENCY_INFO, *PSTORAGE_DEPENDENCY_INFO;
typedef struct _VIRTUAL_DISK_PROGRESS {
  DWORD OperationStatus;
  ULONGLONG CurrentValue;
  ULONGLONG CompletionValue;
} VIRTUAL_DISK_PROGRESS, *PVIRTUAL_DISK_PROGRESS;
extern const GUID VIRTUAL_STORAGE_TYPE_VENDOR_UNKNOWN;
extern const GUID VIRTUAL_STORAGE_TYPE_VENDOR_MICROSOFT;
__attribute__((dllimport)) DWORD __attribute__((__stdcall__)) AttachVirtualDisk(HANDLE VirtualDiskHandle, PSECURITY_DESCRIPTOR SecurityDescriptor, ATTACH_VIRTUAL_DISK_FLAG Flags, ULONG ProviderSpecificFlags, PATTACH_VIRTUAL_DISK_PARAMETERS Parameters, LPOVERLAPPED Overlapped);
__attribute__((dllimport)) DWORD __attribute__((__stdcall__)) CompactVirtualDisk(HANDLE VirtualDiskHandle, COMPACT_VIRTUAL_DISK_FLAG Flags, PCOMPACT_VIRTUAL_DISK_PARAMETERS Parameters, LPOVERLAPPED Overlapped);
__attribute__((dllimport)) DWORD __attribute__((__stdcall__)) CreateVirtualDisk(PVIRTUAL_STORAGE_TYPE VirtualStorageType, PCWSTR Path, VIRTUAL_DISK_ACCESS_MASK VirtualDiskAccessMask, PSECURITY_DESCRIPTOR SecurityDescriptor, CREATE_VIRTUAL_DISK_FLAG Flags, ULONG ProviderSpecificFlags, PCREATE_VIRTUAL_DISK_PARAMETERS Parameters, LPOVERLAPPED Overlapped, PHANDLE Handle);
__attribute__((dllimport)) DWORD __attribute__((__stdcall__)) DetachVirtualDisk(HANDLE VirtualDiskHandle, DETACH_VIRTUAL_DISK_FLAG Flags, ULONG ProviderSpecificFlags);
__attribute__((dllimport)) DWORD __attribute__((__stdcall__)) ExpandVirtualDisk(HANDLE VirtualDiskHandle, EXPAND_VIRTUAL_DISK_FLAG Flags, PEXPAND_VIRTUAL_DISK_PARAMETERS Parameters, LPOVERLAPPED Overlapped);
__attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetStorageDependencyInformation(HANDLE ObjectHandle, GET_STORAGE_DEPENDENCY_FLAG Flags, ULONG StorageDependencyInfoSize, PSTORAGE_DEPENDENCY_INFO StorageDependencyInfo, PULONG SizeUsed);
__attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetVirtualDiskInformation(HANDLE VirtualDiskHandle, PULONG VirtualDiskInfoSize, PGET_VIRTUAL_DISK_INFO VirtualDiskInfo, PULONG SizeUsed);
__attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetVirtualDiskOperationProgress(HANDLE VirtualDiskHandle, LPOVERLAPPED Overlapped, PVIRTUAL_DISK_PROGRESS Progress);
__attribute__((dllimport)) DWORD __attribute__((__stdcall__)) GetVirtualDiskPhysicalPath(HANDLE VirtualDiskHandle, PULONG DiskPathSizeInBytes, PWSTR DiskPath);
__attribute__((dllimport)) DWORD __attribute__((__stdcall__)) MergeVirtualDisk(HANDLE VirtualDiskHandle, MERGE_VIRTUAL_DISK_FLAG Flags, PMERGE_VIRTUAL_DISK_PARAMETERS Parameters, LPOVERLAPPED Overlapped);
__attribute__((dllimport)) DWORD __attribute__((__stdcall__)) OpenVirtualDisk(PVIRTUAL_STORAGE_TYPE VirtualStorageType, PCWSTR Path, VIRTUAL_DISK_ACCESS_MASK VirtualDiskAccessMask, OPEN_VIRTUAL_DISK_FLAG Flags, POPEN_VIRTUAL_DISK_PARAMETERS Parameters, PHANDLE Handle);
__attribute__((dllimport)) DWORD __attribute__((__stdcall__)) SetVirtualDiskInformation(HANDLE VirtualDiskHandle, PSET_VIRTUAL_DISK_INFO VirtualDiskInfo);
  PUWSTR ua_wcscpy(PUWSTR Destination,PCUWSTR Source);
  typedef struct _SERVICE_DESCRIPTIONA {
    LPSTR lpDescription;
  } SERVICE_DESCRIPTIONA,*LPSERVICE_DESCRIPTIONA;
  typedef struct _SERVICE_DESCRIPTIONW {
    LPWSTR lpDescription;
  } SERVICE_DESCRIPTIONW,*LPSERVICE_DESCRIPTIONW;
  typedef SERVICE_DESCRIPTIONA SERVICE_DESCRIPTION;
  typedef LPSERVICE_DESCRIPTIONA LPSERVICE_DESCRIPTION;
  typedef enum _SC_ACTION_TYPE {
    SC_ACTION_NONE = 0,SC_ACTION_RESTART = 1,SC_ACTION_REBOOT = 2,SC_ACTION_RUN_COMMAND = 3
  } SC_ACTION_TYPE;
  typedef struct _SC_ACTION {
    SC_ACTION_TYPE Type;
    DWORD Delay;
  } SC_ACTION,*LPSC_ACTION;
  typedef struct _SERVICE_FAILURE_ACTIONSA {
    DWORD dwResetPeriod;
    LPSTR lpRebootMsg;
    LPSTR lpCommand;
    DWORD cActions;
    SC_ACTION *lpsaActions;
  } SERVICE_FAILURE_ACTIONSA,*LPSERVICE_FAILURE_ACTIONSA;
  typedef struct _SERVICE_FAILURE_ACTIONSW {
    DWORD dwResetPeriod;
    LPWSTR lpRebootMsg;
    LPWSTR lpCommand;
    DWORD cActions;
    SC_ACTION *lpsaActions;
  } SERVICE_FAILURE_ACTIONSW,*LPSERVICE_FAILURE_ACTIONSW;
  typedef SERVICE_FAILURE_ACTIONSA SERVICE_FAILURE_ACTIONS;
  typedef LPSERVICE_FAILURE_ACTIONSA LPSERVICE_FAILURE_ACTIONS;
  struct SC_HANDLE__ { int unused; }; typedef struct SC_HANDLE__ *SC_HANDLE;
  typedef SC_HANDLE *LPSC_HANDLE;
  struct SERVICE_STATUS_HANDLE__ { int unused; }; typedef struct SERVICE_STATUS_HANDLE__ *SERVICE_STATUS_HANDLE;
  typedef enum _SC_STATUS_TYPE {
    SC_STATUS_PROCESS_INFO = 0
  } SC_STATUS_TYPE;
  typedef enum _SC_ENUM_TYPE {
    SC_ENUM_PROCESS_INFO = 0
  } SC_ENUM_TYPE;
  typedef struct _SERVICE_STATUS {
    DWORD dwServiceType;
    DWORD dwCurrentState;
    DWORD dwControlsAccepted;
    DWORD dwWin32ExitCode;
    DWORD dwServiceSpecificExitCode;
    DWORD dwCheckPoint;
    DWORD dwWaitHint;
  } SERVICE_STATUS,*LPSERVICE_STATUS;
  typedef struct _SERVICE_STATUS_PROCESS {
    DWORD dwServiceType;
    DWORD dwCurrentState;
    DWORD dwControlsAccepted;
    DWORD dwWin32ExitCode;
    DWORD dwServiceSpecificExitCode;
    DWORD dwCheckPoint;
    DWORD dwWaitHint;
    DWORD dwProcessId;
    DWORD dwServiceFlags;
  } SERVICE_STATUS_PROCESS,*LPSERVICE_STATUS_PROCESS;
  typedef struct _ENUM_SERVICE_STATUSA {
    LPSTR lpServiceName;
    LPSTR lpDisplayName;
    SERVICE_STATUS ServiceStatus;
  } ENUM_SERVICE_STATUSA,*LPENUM_SERVICE_STATUSA;
  typedef struct _ENUM_SERVICE_STATUSW {
    LPWSTR lpServiceName;
    LPWSTR lpDisplayName;
    SERVICE_STATUS ServiceStatus;
  } ENUM_SERVICE_STATUSW,*LPENUM_SERVICE_STATUSW;
  typedef ENUM_SERVICE_STATUSA ENUM_SERVICE_STATUS;
  typedef LPENUM_SERVICE_STATUSA LPENUM_SERVICE_STATUS;
  typedef struct _ENUM_SERVICE_STATUS_PROCESSA {
    LPSTR lpServiceName;
    LPSTR lpDisplayName;
    SERVICE_STATUS_PROCESS ServiceStatusProcess;
  } ENUM_SERVICE_STATUS_PROCESSA,*LPENUM_SERVICE_STATUS_PROCESSA;
  typedef struct _ENUM_SERVICE_STATUS_PROCESSW {
    LPWSTR lpServiceName;
    LPWSTR lpDisplayName;
    SERVICE_STATUS_PROCESS ServiceStatusProcess;
  } ENUM_SERVICE_STATUS_PROCESSW,*LPENUM_SERVICE_STATUS_PROCESSW;
  typedef ENUM_SERVICE_STATUS_PROCESSA ENUM_SERVICE_STATUS_PROCESS;
  typedef LPENUM_SERVICE_STATUS_PROCESSA LPENUM_SERVICE_STATUS_PROCESS;
  typedef LPVOID SC_LOCK;
  typedef struct _QUERY_SERVICE_LOCK_STATUSA {
    DWORD fIsLocked;
    LPSTR lpLockOwner;
    DWORD dwLockDuration;
  } QUERY_SERVICE_LOCK_STATUSA,*LPQUERY_SERVICE_LOCK_STATUSA;
  typedef struct _QUERY_SERVICE_LOCK_STATUSW {
    DWORD fIsLocked;
    LPWSTR lpLockOwner;
    DWORD dwLockDuration;
  } QUERY_SERVICE_LOCK_STATUSW,*LPQUERY_SERVICE_LOCK_STATUSW;
  typedef QUERY_SERVICE_LOCK_STATUSA QUERY_SERVICE_LOCK_STATUS;
  typedef LPQUERY_SERVICE_LOCK_STATUSA LPQUERY_SERVICE_LOCK_STATUS;
  typedef struct _QUERY_SERVICE_CONFIGA {
    DWORD dwServiceType;
    DWORD dwStartType;
    DWORD dwErrorControl;
    LPSTR lpBinaryPathName;
    LPSTR lpLoadOrderGroup;
    DWORD dwTagId;
    LPSTR lpDependencies;
    LPSTR lpServiceStartName;
    LPSTR lpDisplayName;
  } QUERY_SERVICE_CONFIGA,*LPQUERY_SERVICE_CONFIGA;
  typedef struct _QUERY_SERVICE_CONFIGW {
    DWORD dwServiceType;
    DWORD dwStartType;
    DWORD dwErrorControl;
    LPWSTR lpBinaryPathName;
    LPWSTR lpLoadOrderGroup;
    DWORD dwTagId;
    LPWSTR lpDependencies;
    LPWSTR lpServiceStartName;
    LPWSTR lpDisplayName;
  } QUERY_SERVICE_CONFIGW,*LPQUERY_SERVICE_CONFIGW;
  typedef QUERY_SERVICE_CONFIGA QUERY_SERVICE_CONFIG;
  typedef LPQUERY_SERVICE_CONFIGA LPQUERY_SERVICE_CONFIG;
  typedef void (__attribute__((__stdcall__)) *LPSERVICE_MAIN_FUNCTIONW)(DWORD dwNumServicesArgs,LPWSTR *lpServiceArgVectors);
  typedef void (__attribute__((__stdcall__)) *LPSERVICE_MAIN_FUNCTIONA)(DWORD dwNumServicesArgs,LPSTR *lpServiceArgVectors);
  typedef struct _SERVICE_TABLE_ENTRYA {
    LPSTR lpServiceName;
    LPSERVICE_MAIN_FUNCTIONA lpServiceProc;
  } SERVICE_TABLE_ENTRYA,*LPSERVICE_TABLE_ENTRYA;
  typedef struct _SERVICE_TABLE_ENTRYW {
    LPWSTR lpServiceName;
    LPSERVICE_MAIN_FUNCTIONW lpServiceProc;
  } SERVICE_TABLE_ENTRYW,*LPSERVICE_TABLE_ENTRYW;
  typedef SERVICE_TABLE_ENTRYA SERVICE_TABLE_ENTRY;
  typedef LPSERVICE_TABLE_ENTRYA LPSERVICE_TABLE_ENTRY;
  typedef void (__attribute__((__stdcall__)) *LPHANDLER_FUNCTION)(DWORD dwControl);
  typedef DWORD (__attribute__((__stdcall__)) *LPHANDLER_FUNCTION_EX)(DWORD dwControl,DWORD dwEventType,LPVOID lpEventData,LPVOID lpContext);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ChangeServiceConfigA(SC_HANDLE hService,DWORD dwServiceType,DWORD dwStartType,DWORD dwErrorControl,LPCSTR lpBinaryPathName,LPCSTR lpLoadOrderGroup,LPDWORD lpdwTagId,LPCSTR lpDependencies,LPCSTR lpServiceStartName,LPCSTR lpPassword,LPCSTR lpDisplayName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ChangeServiceConfigW(SC_HANDLE hService,DWORD dwServiceType,DWORD dwStartType,DWORD dwErrorControl,LPCWSTR lpBinaryPathName,LPCWSTR lpLoadOrderGroup,LPDWORD lpdwTagId,LPCWSTR lpDependencies,LPCWSTR lpServiceStartName,LPCWSTR lpPassword,LPCWSTR lpDisplayName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ChangeServiceConfig2A(SC_HANDLE hService,DWORD dwInfoLevel,LPVOID lpInfo);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ChangeServiceConfig2W(SC_HANDLE hService,DWORD dwInfoLevel,LPVOID lpInfo);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) CloseServiceHandle(SC_HANDLE hSCObject);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ControlService(SC_HANDLE hService,DWORD dwControl,LPSERVICE_STATUS lpServiceStatus);
  __attribute__((dllimport)) SC_HANDLE __attribute__((__stdcall__)) CreateServiceA(SC_HANDLE hSCManager,LPCSTR lpServiceName,LPCSTR lpDisplayName,DWORD dwDesiredAccess,DWORD dwServiceType,DWORD dwStartType,DWORD dwErrorControl,LPCSTR lpBinaryPathName,LPCSTR lpLoadOrderGroup,LPDWORD lpdwTagId,LPCSTR lpDependencies,LPCSTR lpServiceStartName,LPCSTR lpPassword);
  __attribute__((dllimport)) SC_HANDLE __attribute__((__stdcall__)) CreateServiceW(SC_HANDLE hSCManager,LPCWSTR lpServiceName,LPCWSTR lpDisplayName,DWORD dwDesiredAccess,DWORD dwServiceType,DWORD dwStartType,DWORD dwErrorControl,LPCWSTR lpBinaryPathName,LPCWSTR lpLoadOrderGroup,LPDWORD lpdwTagId,LPCWSTR lpDependencies,LPCWSTR lpServiceStartName,LPCWSTR lpPassword);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) DeleteService(SC_HANDLE hService);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumDependentServicesA(SC_HANDLE hService,DWORD dwServiceState,LPENUM_SERVICE_STATUSA lpServices,DWORD cbBufSize,LPDWORD pcbBytesNeeded,LPDWORD lpServicesReturned);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumDependentServicesW(SC_HANDLE hService,DWORD dwServiceState,LPENUM_SERVICE_STATUSW lpServices,DWORD cbBufSize,LPDWORD pcbBytesNeeded,LPDWORD lpServicesReturned);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumServicesStatusA(SC_HANDLE hSCManager,DWORD dwServiceType,DWORD dwServiceState,LPENUM_SERVICE_STATUSA lpServices,DWORD cbBufSize,LPDWORD pcbBytesNeeded,LPDWORD lpServicesReturned,LPDWORD lpResumeHandle);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumServicesStatusW(SC_HANDLE hSCManager,DWORD dwServiceType,DWORD dwServiceState,LPENUM_SERVICE_STATUSW lpServices,DWORD cbBufSize,LPDWORD pcbBytesNeeded,LPDWORD lpServicesReturned,LPDWORD lpResumeHandle);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumServicesStatusExA(SC_HANDLE hSCManager,SC_ENUM_TYPE InfoLevel,DWORD dwServiceType,DWORD dwServiceState,LPBYTE lpServices,DWORD cbBufSize,LPDWORD pcbBytesNeeded,LPDWORD lpServicesReturned,LPDWORD lpResumeHandle,LPCSTR pszGroupName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) EnumServicesStatusExW(SC_HANDLE hSCManager,SC_ENUM_TYPE InfoLevel,DWORD dwServiceType,DWORD dwServiceState,LPBYTE lpServices,DWORD cbBufSize,LPDWORD pcbBytesNeeded,LPDWORD lpServicesReturned,LPDWORD lpResumeHandle,LPCWSTR pszGroupName);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetServiceKeyNameA(SC_HANDLE hSCManager,LPCSTR lpDisplayName,LPSTR lpServiceName,LPDWORD lpcchBuffer);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetServiceKeyNameW(SC_HANDLE hSCManager,LPCWSTR lpDisplayName,LPWSTR lpServiceName,LPDWORD lpcchBuffer);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetServiceDisplayNameA(SC_HANDLE hSCManager,LPCSTR lpServiceName,LPSTR lpDisplayName,LPDWORD lpcchBuffer);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) GetServiceDisplayNameW(SC_HANDLE hSCManager,LPCWSTR lpServiceName,LPWSTR lpDisplayName,LPDWORD lpcchBuffer);
  __attribute__((dllimport)) SC_LOCK __attribute__((__stdcall__)) LockServiceDatabase(SC_HANDLE hSCManager);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) NotifyBootConfigStatus(WINBOOL BootAcceptable);
  __attribute__((dllimport)) SC_HANDLE __attribute__((__stdcall__)) OpenSCManagerA(LPCSTR lpMachineName,LPCSTR lpDatabaseName,DWORD dwDesiredAccess);
  __attribute__((dllimport)) SC_HANDLE __attribute__((__stdcall__)) OpenSCManagerW(LPCWSTR lpMachineName,LPCWSTR lpDatabaseName,DWORD dwDesiredAccess);
  __attribute__((dllimport)) SC_HANDLE __attribute__((__stdcall__)) OpenServiceA(SC_HANDLE hSCManager,LPCSTR lpServiceName,DWORD dwDesiredAccess);
  __attribute__((dllimport)) SC_HANDLE __attribute__((__stdcall__)) OpenServiceW(SC_HANDLE hSCManager,LPCWSTR lpServiceName,DWORD dwDesiredAccess);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) QueryServiceConfigA(SC_HANDLE hService,LPQUERY_SERVICE_CONFIGA lpServiceConfig,DWORD cbBufSize,LPDWORD pcbBytesNeeded);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) QueryServiceConfigW(SC_HANDLE hService,LPQUERY_SERVICE_CONFIGW lpServiceConfig,DWORD cbBufSize,LPDWORD pcbBytesNeeded);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) QueryServiceConfig2A(SC_HANDLE hService,DWORD dwInfoLevel,LPBYTE lpBuffer,DWORD cbBufSize,LPDWORD pcbBytesNeeded);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) QueryServiceConfig2W(SC_HANDLE hService,DWORD dwInfoLevel,LPBYTE lpBuffer,DWORD cbBufSize,LPDWORD pcbBytesNeeded);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) QueryServiceLockStatusA(SC_HANDLE hSCManager,LPQUERY_SERVICE_LOCK_STATUSA lpLockStatus,DWORD cbBufSize,LPDWORD pcbBytesNeeded);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) QueryServiceLockStatusW(SC_HANDLE hSCManager,LPQUERY_SERVICE_LOCK_STATUSW lpLockStatus,DWORD cbBufSize,LPDWORD pcbBytesNeeded);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) QueryServiceObjectSecurity(SC_HANDLE hService,SECURITY_INFORMATION dwSecurityInformation,PSECURITY_DESCRIPTOR lpSecurityDescriptor,DWORD cbBufSize,LPDWORD pcbBytesNeeded);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) QueryServiceStatus(SC_HANDLE hService,LPSERVICE_STATUS lpServiceStatus);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) QueryServiceStatusEx(SC_HANDLE hService,SC_STATUS_TYPE InfoLevel,LPBYTE lpBuffer,DWORD cbBufSize,LPDWORD pcbBytesNeeded);
  __attribute__((dllimport)) SERVICE_STATUS_HANDLE __attribute__((__stdcall__)) RegisterServiceCtrlHandlerA(LPCSTR lpServiceName,LPHANDLER_FUNCTION lpHandlerProc);
  __attribute__((dllimport)) SERVICE_STATUS_HANDLE __attribute__((__stdcall__)) RegisterServiceCtrlHandlerW(LPCWSTR lpServiceName,LPHANDLER_FUNCTION lpHandlerProc);
  __attribute__((dllimport)) SERVICE_STATUS_HANDLE __attribute__((__stdcall__)) RegisterServiceCtrlHandlerExA(LPCSTR lpServiceName,LPHANDLER_FUNCTION_EX lpHandlerProc,LPVOID lpContext);
  __attribute__((dllimport)) SERVICE_STATUS_HANDLE __attribute__((__stdcall__)) RegisterServiceCtrlHandlerExW(LPCWSTR lpServiceName,LPHANDLER_FUNCTION_EX lpHandlerProc,LPVOID lpContext);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetServiceObjectSecurity(SC_HANDLE hService,SECURITY_INFORMATION dwSecurityInformation,PSECURITY_DESCRIPTOR lpSecurityDescriptor);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) SetServiceStatus(SERVICE_STATUS_HANDLE hServiceStatus,LPSERVICE_STATUS lpServiceStatus);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) StartServiceCtrlDispatcherA(const SERVICE_TABLE_ENTRYA *lpServiceStartTable);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) StartServiceCtrlDispatcherW(const SERVICE_TABLE_ENTRYW *lpServiceStartTable);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) StartServiceA(SC_HANDLE hService,DWORD dwNumServiceArgs,LPCSTR *lpServiceArgVectors);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) StartServiceW(SC_HANDLE hService,DWORD dwNumServiceArgs,LPCWSTR *lpServiceArgVectors);
  __attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) UnlockServiceDatabase(SC_LOCK ScLock);
typedef void( __attribute__((__stdcall__)) * PFN_SC_NOTIFY_CALLBACK ) (
  PVOID pParameter
);
typedef struct _SERVICE_CONTROL_STATUS_REASON_PARAMSA {
  DWORD dwReason;
  LPSTR pszComment;
  SERVICE_STATUS_PROCESS ServiceStatus;
} SERVICE_CONTROL_STATUS_REASON_PARAMSA, *PSERVICE_CONTROL_STATUS_REASON_PARAMSA;
typedef struct _SERVICE_CONTROL_STATUS_REASON_PARAMSW {
  DWORD dwReason;
  LPWSTR pszComment;
  SERVICE_STATUS_PROCESS ServiceStatus;
} SERVICE_CONTROL_STATUS_REASON_PARAMSW, *PSERVICE_CONTROL_STATUS_REASON_PARAMSW;
typedef SERVICE_CONTROL_STATUS_REASON_PARAMSA SERVICE_CONTROL_STATUS_REASON_PARAMS;
typedef PSERVICE_CONTROL_STATUS_REASON_PARAMSA PSERVICE_CONTROL_STATUS_REASON_PARAMS;
typedef struct _SERVICE_NOTIFYA {
  DWORD dwVersion;
  PFN_SC_NOTIFY_CALLBACK pfnNotifyCallback;
  PVOID pContext;
  DWORD dwNotificationStatus;
  SERVICE_STATUS_PROCESS ServiceStatus;
  DWORD dwNotificationTriggered;
  LPSTR pszServiceNames;
} SERVICE_NOTIFYA, *PSERVICE_NOTIFYA;
typedef struct _SERVICE_NOTIFYW {
  DWORD dwVersion;
  PFN_SC_NOTIFY_CALLBACK pfnNotifyCallback;
  PVOID pContext;
  DWORD dwNotificationStatus;
  SERVICE_STATUS_PROCESS ServiceStatus;
  DWORD dwNotificationTriggered;
  LPWSTR pszServiceNames;
} SERVICE_NOTIFYW, *PSERVICE_NOTIFYW;
typedef SERVICE_NOTIFYA SERVICE_NOTIFY;
typedef PSERVICE_NOTIFYA PSERVICE_NOTIFY;
typedef struct _SERVICE_DELAYED_AUTO_START_INFO {
  WINBOOL fDelayedAutostart;
} SERVICE_DELAYED_AUTO_START_INFO, *LPSERVICE_DELAYED_AUTO_START_INFO;
typedef struct _SERVICE_FAILURE_ACTIONS_FLAG {
  WINBOOL fFailureActionsOnNonCrashFailures;
} SERVICE_FAILURE_ACTIONS_FLAG, *LPSERVICE_FAILURE_ACTIONS_FLAG;
typedef struct _SERVICE_PRESHUTDOWN_INFO {
  DWORD dwPreshutdownTimeout;
} SERVICE_PRESHUTDOWN_INFO, *LPSERVICE_PRESHUTDOWN_INFO;
typedef struct _SERVICE_REQUIRED_PRIVILEGES_INFOA {
  LPSTR pmszRequiredPrivileges;
} SERVICE_REQUIRED_PRIVILEGES_INFOA, *LPSERVICE_REQUIRED_PRIVILEGES_INFOA;
typedef struct _SERVICE_REQUIRED_PRIVILEGES_INFOW {
  LPWSTR pmszRequiredPrivileges;
} SERVICE_REQUIRED_PRIVILEGES_INFOW, *LPSERVICE_REQUIRED_PRIVILEGES_INFOW;
typedef SERVICE_REQUIRED_PRIVILEGES_INFOA SERVICE_REQUIRED_PRIVILEGES_INFO;
typedef struct _SERVICE_SID_INFO {
  DWORD dwServiceSidType;
} SERVICE_SID_INFO, *LPSERVICE_SID_INFO;
__attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ControlServiceExA(
  SC_HANDLE hService,
  DWORD dwControl,
  DWORD dwInfoLevel,
  PVOID pControlParams
);
__attribute__((dllimport)) WINBOOL __attribute__((__stdcall__)) ControlServiceExW(
  SC_HANDLE hService,
  DWORD dwControl,
  DWORD dwInfoLevel,
  PVOID pControlParams
);
DWORD __attribute__((__stdcall__)) NotifyServiceStatusChangeA(
  SC_HANDLE hService,
  DWORD dwNotifyMask,
  PSERVICE_NOTIFYA pNotifyBuffer
);
DWORD __attribute__((__stdcall__)) NotifyServiceStatusChangeW(
  SC_HANDLE hService,
  DWORD dwNotifyMask,
  PSERVICE_NOTIFYW pNotifyBuffer
);
typedef struct _MODEMDEVCAPS {
  DWORD dwActualSize;
  DWORD dwRequiredSize;
  DWORD dwDevSpecificOffset;
  DWORD dwDevSpecificSize;
  DWORD dwModemProviderVersion;
  DWORD dwModemManufacturerOffset;
  DWORD dwModemManufacturerSize;
  DWORD dwModemModelOffset;
  DWORD dwModemModelSize;
  DWORD dwModemVersionOffset;
  DWORD dwModemVersionSize;
  DWORD dwDialOptions;
  DWORD dwCallSetupFailTimer;
  DWORD dwInactivityTimeout;
  DWORD dwSpeakerVolume;
  DWORD dwSpeakerMode;
  DWORD dwModemOptions;
  DWORD dwMaxDTERate;
  DWORD dwMaxDCERate;
  BYTE abVariablePortion[1];
} MODEMDEVCAPS,*PMODEMDEVCAPS,*LPMODEMDEVCAPS;
typedef struct _MODEMSETTINGS {
  DWORD dwActualSize;
  DWORD dwRequiredSize;
  DWORD dwDevSpecificOffset;
  DWORD dwDevSpecificSize;
  DWORD dwCallSetupFailTimer;
  DWORD dwInactivityTimeout;
  DWORD dwSpeakerVolume;
  DWORD dwSpeakerMode;
  DWORD dwPreferredModemOptions;
  DWORD dwNegotiatedModemOptions;
  DWORD dwNegotiatedDCERate;
  BYTE abVariablePortion [1];
} MODEMSETTINGS,*PMODEMSETTINGS,*LPMODEMSETTINGS;
  struct HIMC__ { int unused; }; typedef struct HIMC__ *HIMC;
  struct HIMCC__ { int unused; }; typedef struct HIMCC__ *HIMCC;
  typedef HKL *LPHKL;
  typedef UINT *LPUINT;
  typedef struct tagCOMPOSITIONFORM {
    DWORD dwStyle;
    POINT ptCurrentPos;
    RECT rcArea;
  } COMPOSITIONFORM,*PCOMPOSITIONFORM,*NPCOMPOSITIONFORM,*LPCOMPOSITIONFORM;
  typedef struct tagCANDIDATEFORM {
    DWORD dwIndex;
    DWORD dwStyle;
    POINT ptCurrentPos;
    RECT rcArea;
  } CANDIDATEFORM,*PCANDIDATEFORM,*NPCANDIDATEFORM,*LPCANDIDATEFORM;
  typedef struct tagCANDIDATELIST {
    DWORD dwSize;
    DWORD dwStyle;
    DWORD dwCount;
    DWORD dwSelection;
    DWORD dwPageStart;
    DWORD dwPageSize;
    DWORD dwOffset[1];
  } CANDIDATELIST,*PCANDIDATELIST,*NPCANDIDATELIST,*LPCANDIDATELIST;
  typedef struct tagREGISTERWORDA {
    LPSTR lpReading;
    LPSTR lpWord;
  } REGISTERWORDA,*PREGISTERWORDA,*NPREGISTERWORDA,*LPREGISTERWORDA;
  typedef struct tagREGISTERWORDW {
    LPWSTR lpReading;
    LPWSTR lpWord;
  } REGISTERWORDW,*PREGISTERWORDW,*NPREGISTERWORDW,*LPREGISTERWORDW;
  typedef REGISTERWORDA REGISTERWORD;
  typedef PREGISTERWORDA PREGISTERWORD;
  typedef NPREGISTERWORDA NPREGISTERWORD;
  typedef LPREGISTERWORDA LPREGISTERWORD;
  typedef struct tagRECONVERTSTRING {
    DWORD dwSize;
    DWORD dwVersion;
    DWORD dwStrLen;
    DWORD dwStrOffset;
    DWORD dwCompStrLen;
    DWORD dwCompStrOffset;
    DWORD dwTargetStrLen;
    DWORD dwTargetStrOffset;
  } RECONVERTSTRING,*PRECONVERTSTRING,*NPRECONVERTSTRING,*LPRECONVERTSTRING;
  typedef struct tagSTYLEBUFA {
    DWORD dwStyle;
    CHAR szDescription[32];
  } STYLEBUFA,*PSTYLEBUFA,*NPSTYLEBUFA,*LPSTYLEBUFA;
  typedef struct tagSTYLEBUFW {
    DWORD dwStyle;
    WCHAR szDescription[32];
  } STYLEBUFW,*PSTYLEBUFW,*NPSTYLEBUFW,*LPSTYLEBUFW;
  typedef STYLEBUFA STYLEBUF;
  typedef PSTYLEBUFA PSTYLEBUF;
  typedef NPSTYLEBUFA NPSTYLEBUF;
  typedef LPSTYLEBUFA LPSTYLEBUF;
  typedef struct tagIMEMENUITEMINFOA {
    UINT cbSize;
    UINT fType;
    UINT fState;
    UINT wID;
    HBITMAP hbmpChecked;
    HBITMAP hbmpUnchecked;
    DWORD dwItemData;
    CHAR szString[80];
    HBITMAP hbmpItem;
  } IMEMENUITEMINFOA,*PIMEMENUITEMINFOA,*NPIMEMENUITEMINFOA,*LPIMEMENUITEMINFOA;
  typedef struct tagIMEMENUITEMINFOW {
    UINT cbSize;
    UINT fType;
    UINT fState;
    UINT wID;
    HBITMAP hbmpChecked;
    HBITMAP hbmpUnchecked;
    DWORD dwItemData;
    WCHAR szString[80];
    HBITMAP hbmpItem;
  } IMEMENUITEMINFOW,*PIMEMENUITEMINFOW,*NPIMEMENUITEMINFOW,*LPIMEMENUITEMINFOW;
  typedef IMEMENUITEMINFOA IMEMENUITEMINFO;
  typedef PIMEMENUITEMINFOA PIMEMENUITEMINFO;
  typedef NPIMEMENUITEMINFOA NPIMEMENUITEMINFO;
  typedef LPIMEMENUITEMINFOA LPIMEMENUITEMINFO;
  typedef struct tagIMECHARPOSITION {
    DWORD dwSize;
    DWORD dwCharPos;
    POINT pt;
    UINT cLineHeight;
    RECT rcDocument;
  } IMECHARPOSITION,*PIMECHARPOSITION,*NPIMECHARPOSITION,*LPIMECHARPOSITION;
  typedef WINBOOL (__attribute__((__stdcall__)) *IMCENUMPROC)(HIMC,LPARAM);
  HKL __attribute__((__stdcall__)) ImmInstallIMEA(LPCSTR lpszIMEFileName,LPCSTR lpszLayoutText);
  HKL __attribute__((__stdcall__)) ImmInstallIMEW(LPCWSTR lpszIMEFileName,LPCWSTR lpszLayoutText);
  HWND __attribute__((__stdcall__)) ImmGetDefaultIMEWnd(HWND);
  UINT __attribute__((__stdcall__)) ImmGetDescriptionA(HKL,LPSTR,UINT uBufLen);
  UINT __attribute__((__stdcall__)) ImmGetDescriptionW(HKL,LPWSTR,UINT uBufLen);
  UINT __attribute__((__stdcall__)) ImmGetIMEFileNameA(HKL,LPSTR,UINT uBufLen);
  UINT __attribute__((__stdcall__)) ImmGetIMEFileNameW(HKL,LPWSTR,UINT uBufLen);
  DWORD __attribute__((__stdcall__)) ImmGetProperty(HKL,DWORD);
  WINBOOL __attribute__((__stdcall__)) ImmIsIME(HKL);
  WINBOOL __attribute__((__stdcall__)) ImmSimulateHotKey(HWND,DWORD);
  HIMC __attribute__((__stdcall__)) ImmCreateContext(void);
  WINBOOL __attribute__((__stdcall__)) ImmDestroyContext(HIMC);
  HIMC __attribute__((__stdcall__)) ImmGetContext(HWND);
  WINBOOL __attribute__((__stdcall__)) ImmReleaseContext(HWND,HIMC);
  HIMC __attribute__((__stdcall__)) ImmAssociateContext(HWND,HIMC);
  WINBOOL __attribute__((__stdcall__)) ImmAssociateContextEx(HWND,HIMC,DWORD);
  LONG __attribute__((__stdcall__)) ImmGetCompositionStringA(HIMC,DWORD,LPVOID,DWORD);
  LONG __attribute__((__stdcall__)) ImmGetCompositionStringW(HIMC,DWORD,LPVOID,DWORD);
  WINBOOL __attribute__((__stdcall__)) ImmSetCompositionStringA(HIMC,DWORD dwIndex,LPVOID lpComp,DWORD,LPVOID lpRead,DWORD);
  WINBOOL __attribute__((__stdcall__)) ImmSetCompositionStringW(HIMC,DWORD dwIndex,LPVOID lpComp,DWORD,LPVOID lpRead,DWORD);
  DWORD __attribute__((__stdcall__)) ImmGetCandidateListCountA(HIMC,LPDWORD lpdwListCount);
  DWORD __attribute__((__stdcall__)) ImmGetCandidateListCountW(HIMC,LPDWORD lpdwListCount);
  DWORD __attribute__((__stdcall__)) ImmGetCandidateListA(HIMC,DWORD deIndex,LPCANDIDATELIST,DWORD dwBufLen);
  DWORD __attribute__((__stdcall__)) ImmGetCandidateListW(HIMC,DWORD deIndex,LPCANDIDATELIST,DWORD dwBufLen);
  DWORD __attribute__((__stdcall__)) ImmGetGuideLineA(HIMC,DWORD dwIndex,LPSTR,DWORD dwBufLen);
  DWORD __attribute__((__stdcall__)) ImmGetGuideLineW(HIMC,DWORD dwIndex,LPWSTR,DWORD dwBufLen);
  WINBOOL __attribute__((__stdcall__)) ImmGetConversionStatus(HIMC,LPDWORD,LPDWORD);
  WINBOOL __attribute__((__stdcall__)) ImmSetConversionStatus(HIMC,DWORD,DWORD);
  WINBOOL __attribute__((__stdcall__)) ImmGetOpenStatus(HIMC);
  WINBOOL __attribute__((__stdcall__)) ImmSetOpenStatus(HIMC,WINBOOL);
  WINBOOL __attribute__((__stdcall__)) ImmGetCompositionFontA(HIMC,LPLOGFONTA);
  WINBOOL __attribute__((__stdcall__)) ImmGetCompositionFontW(HIMC,LPLOGFONTW);
  WINBOOL __attribute__((__stdcall__)) ImmSetCompositionFontA(HIMC,LPLOGFONTA);
  WINBOOL __attribute__((__stdcall__)) ImmSetCompositionFontW(HIMC,LPLOGFONTW);
  typedef int (__attribute__((__stdcall__)) *REGISTERWORDENUMPROCA)(LPCSTR,DWORD,LPCSTR,LPVOID);
  typedef int (__attribute__((__stdcall__)) *REGISTERWORDENUMPROCW)(LPCWSTR,DWORD,LPCWSTR,LPVOID);
  WINBOOL __attribute__((__stdcall__)) ImmConfigureIMEA(HKL,HWND,DWORD,LPVOID);
  WINBOOL __attribute__((__stdcall__)) ImmConfigureIMEW(HKL,HWND,DWORD,LPVOID);
  LRESULT __attribute__((__stdcall__)) ImmEscapeA(HKL,HIMC,UINT,LPVOID);
  LRESULT __attribute__((__stdcall__)) ImmEscapeW(HKL,HIMC,UINT,LPVOID);
  DWORD __attribute__((__stdcall__)) ImmGetConversionListA(HKL,HIMC,LPCSTR,LPCANDIDATELIST,DWORD dwBufLen,UINT uFlag);
  DWORD __attribute__((__stdcall__)) ImmGetConversionListW(HKL,HIMC,LPCWSTR,LPCANDIDATELIST,DWORD dwBufLen,UINT uFlag);
  WINBOOL __attribute__((__stdcall__)) ImmNotifyIME(HIMC,DWORD dwAction,DWORD dwIndex,DWORD dwValue);
  WINBOOL __attribute__((__stdcall__)) ImmGetStatusWindowPos(HIMC,LPPOINT);
  WINBOOL __attribute__((__stdcall__)) ImmSetStatusWindowPos(HIMC,LPPOINT);
  WINBOOL __attribute__((__stdcall__)) ImmGetCompositionWindow(HIMC,LPCOMPOSITIONFORM);
  WINBOOL __attribute__((__stdcall__)) ImmSetCompositionWindow(HIMC,LPCOMPOSITIONFORM);
  WINBOOL __attribute__((__stdcall__)) ImmGetCandidateWindow(HIMC,DWORD,LPCANDIDATEFORM);
  WINBOOL __attribute__((__stdcall__)) ImmSetCandidateWindow(HIMC,LPCANDIDATEFORM);
  WINBOOL __attribute__((__stdcall__)) ImmIsUIMessageA(HWND,UINT,WPARAM,LPARAM);
  WINBOOL __attribute__((__stdcall__)) ImmIsUIMessageW(HWND,UINT,WPARAM,LPARAM);
  UINT __attribute__((__stdcall__)) ImmGetVirtualKey(HWND);
  WINBOOL __attribute__((__stdcall__)) ImmRegisterWordA(HKL,LPCSTR lpszReading,DWORD,LPCSTR lpszRegister);
  WINBOOL __attribute__((__stdcall__)) ImmRegisterWordW(HKL,LPCWSTR lpszReading,DWORD,LPCWSTR lpszRegister);
  WINBOOL __attribute__((__stdcall__)) ImmUnregisterWordA(HKL,LPCSTR lpszReading,DWORD,LPCSTR lpszUnregister);
  WINBOOL __attribute__((__stdcall__)) ImmUnregisterWordW(HKL,LPCWSTR lpszReading,DWORD,LPCWSTR lpszUnregister);
  UINT __attribute__((__stdcall__)) ImmGetRegisterWordStyleA(HKL,UINT nItem,LPSTYLEBUFA);
  UINT __attribute__((__stdcall__)) ImmGetRegisterWordStyleW(HKL,UINT nItem,LPSTYLEBUFW);
  UINT __attribute__((__stdcall__)) ImmEnumRegisterWordA(HKL,REGISTERWORDENUMPROCA,LPCSTR lpszReading,DWORD,LPCSTR lpszRegister,LPVOID);
  UINT __attribute__((__stdcall__)) ImmEnumRegisterWordW(HKL,REGISTERWORDENUMPROCW,LPCWSTR lpszReading,DWORD,LPCWSTR lpszRegister,LPVOID);
  WINBOOL __attribute__((__stdcall__)) ImmDisableIME(DWORD);
  WINBOOL __attribute__((__stdcall__)) ImmEnumInputContext(DWORD idThread,IMCENUMPROC lpfn,LPARAM lParam);
  DWORD __attribute__((__stdcall__)) ImmGetImeMenuItemsA(HIMC,DWORD,DWORD,LPIMEMENUITEMINFOA,LPIMEMENUITEMINFOA,DWORD);
  DWORD __attribute__((__stdcall__)) ImmGetImeMenuItemsW(HIMC,DWORD,DWORD,LPIMEMENUITEMINFOW,LPIMEMENUITEMINFOW,DWORD);
  WINBOOL __attribute__((__stdcall__)) ImmDisableTextFrameService(DWORD idThread);
typedef HDC EGLNativeDisplayType;
typedef HBITMAP EGLNativePixmapType;
typedef HWND EGLNativeWindowType;
typedef EGLNativeDisplayType NativeDisplayType;
typedef EGLNativePixmapType NativePixmapType;
typedef EGLNativeWindowType NativeWindowType;
typedef khronos_int32_t EGLint;
typedef unsigned int EGLBoolean;
typedef void *EGLDisplay;
typedef void *EGLConfig;
typedef void *EGLSurface;
typedef void *EGLContext;
typedef void (*__eglMustCastToProperFunctionPointerType)(void);
__attribute__((dllimport)) EGLBoolean __attribute__((__stdcall__)) eglChooseConfig (EGLDisplay dpy, const EGLint *attrib_list, EGLConfig *configs, EGLint config_size, EGLint *num_config);
__attribute__((dllimport)) EGLBoolean __attribute__((__stdcall__)) eglCopyBuffers (EGLDisplay dpy, EGLSurface surface, EGLNativePixmapType target);
__attribute__((dllimport)) EGLContext __attribute__((__stdcall__)) eglCreateContext (EGLDisplay dpy, EGLConfig config, EGLContext share_context, const EGLint *attrib_list);
__attribute__((dllimport)) EGLSurface __attribute__((__stdcall__)) eglCreatePbufferSurface (EGLDisplay dpy, EGLConfig config, const EGLint *attrib_list);
__attribute__((dllimport)) EGLSurface __attribute__((__stdcall__)) eglCreatePixmapSurface (EGLDisplay dpy, EGLConfig config, EGLNativePixmapType pixmap, const EGLint *attrib_list);
__attribute__((dllimport)) EGLSurface __attribute__((__stdcall__)) eglCreateWindowSurface (EGLDisplay dpy, EGLConfig config, EGLNativeWindowType win, const EGLint *attrib_list);
__attribute__((dllimport)) EGLBoolean __attribute__((__stdcall__)) eglDestroyContext (EGLDisplay dpy, EGLContext ctx);
__attribute__((dllimport)) EGLBoolean __attribute__((__stdcall__)) eglDestroySurface (EGLDisplay dpy, EGLSurface surface);
__attribute__((dllimport)) EGLBoolean __attribute__((__stdcall__)) eglGetConfigAttrib (EGLDisplay dpy, EGLConfig config, EGLint attribute, EGLint *value);
__attribute__((dllimport)) EGLBoolean __attribute__((__stdcall__)) eglGetConfigs (EGLDisplay dpy, EGLConfig *configs, EGLint config_size, EGLint *num_config);
__attribute__((dllimport)) EGLDisplay __attribute__((__stdcall__)) eglGetCurrentDisplay (void);
__attribute__((dllimport)) EGLSurface __attribute__((__stdcall__)) eglGetCurrentSurface (EGLint readdraw);
__attribute__((dllimport)) EGLDisplay __attribute__((__stdcall__)) eglGetDisplay (EGLNativeDisplayType display_id);
__attribute__((dllimport)) EGLint __attribute__((__stdcall__)) eglGetError (void);
__attribute__((dllimport)) __eglMustCastToProperFunctionPointerType __attribute__((__stdcall__)) eglGetProcAddress (const char *procname);
__attribute__((dllimport)) EGLBoolean __attribute__((__stdcall__)) eglInitialize (EGLDisplay dpy, EGLint *major, EGLint *minor);
__attribute__((dllimport)) EGLBoolean __attribute__((__stdcall__)) eglMakeCurrent (EGLDisplay dpy, EGLSurface draw, EGLSurface read, EGLContext ctx);
__attribute__((dllimport)) EGLBoolean __attribute__((__stdcall__)) eglQueryContext (EGLDisplay dpy, EGLContext ctx, EGLint attribute, EGLint *value);
__attribute__((dllimport)) const char *__attribute__((__stdcall__)) eglQueryString (EGLDisplay dpy, EGLint name);
__attribute__((dllimport)) EGLBoolean __attribute__((__stdcall__)) eglQuerySurface (EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint *value);
__attribute__((dllimport)) EGLBoolean __attribute__((__stdcall__)) eglSwapBuffers (EGLDisplay dpy, EGLSurface surface);
__attribute__((dllimport)) EGLBoolean __attribute__((__stdcall__)) eglTerminate (EGLDisplay dpy);
__attribute__((dllimport)) EGLBoolean __attribute__((__stdcall__)) eglWaitGL (void);
__attribute__((dllimport)) EGLBoolean __attribute__((__stdcall__)) eglWaitNative (EGLint engine);
__attribute__((dllimport)) EGLBoolean __attribute__((__stdcall__)) eglBindTexImage (EGLDisplay dpy, EGLSurface surface, EGLint buffer);
__attribute__((dllimport)) EGLBoolean __attribute__((__stdcall__)) eglReleaseTexImage (EGLDisplay dpy, EGLSurface surface, EGLint buffer);
__attribute__((dllimport)) EGLBoolean __attribute__((__stdcall__)) eglSurfaceAttrib (EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint value);
__attribute__((dllimport)) EGLBoolean __attribute__((__stdcall__)) eglSwapInterval (EGLDisplay dpy, EGLint interval);
typedef unsigned int EGLenum;
typedef void *EGLClientBuffer;
__attribute__((dllimport)) EGLBoolean __attribute__((__stdcall__)) eglBindAPI (EGLenum api);
__attribute__((dllimport)) EGLenum __attribute__((__stdcall__)) eglQueryAPI (void);
__attribute__((dllimport)) EGLSurface __attribute__((__stdcall__)) eglCreatePbufferFromClientBuffer (EGLDisplay dpy, EGLenum buftype, EGLClientBuffer buffer, EGLConfig config, const EGLint *attrib_list);
__attribute__((dllimport)) EGLBoolean __attribute__((__stdcall__)) eglReleaseThread (void);
__attribute__((dllimport)) EGLBoolean __attribute__((__stdcall__)) eglWaitClient (void);
__attribute__((dllimport)) EGLContext __attribute__((__stdcall__)) eglGetCurrentContext (void);
typedef void *EGLSync;
typedef intptr_t EGLAttrib;
typedef khronos_utime_nanoseconds_t EGLTime;
typedef void *EGLImage;
__attribute__((dllimport)) EGLSync __attribute__((__stdcall__)) eglCreateSync (EGLDisplay dpy, EGLenum type, const EGLAttrib *attrib_list);
__attribute__((dllimport)) EGLBoolean __attribute__((__stdcall__)) eglDestroySync (EGLDisplay dpy, EGLSync sync);
__attribute__((dllimport)) EGLint __attribute__((__stdcall__)) eglClientWaitSync (EGLDisplay dpy, EGLSync sync, EGLint flags, EGLTime timeout);
__attribute__((dllimport)) EGLBoolean __attribute__((__stdcall__)) eglGetSyncAttrib (EGLDisplay dpy, EGLSync sync, EGLint attribute, EGLAttrib *value);
__attribute__((dllimport)) EGLImage __attribute__((__stdcall__)) eglCreateImage (EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLAttrib *attrib_list);
__attribute__((dllimport)) EGLBoolean __attribute__((__stdcall__)) eglDestroyImage (EGLDisplay dpy, EGLImage image);
__attribute__((dllimport)) EGLDisplay __attribute__((__stdcall__)) eglGetPlatformDisplay (EGLenum platform, void *native_display, const EGLAttrib *attrib_list);
__attribute__((dllimport)) EGLSurface __attribute__((__stdcall__)) eglCreatePlatformWindowSurface (EGLDisplay dpy, EGLConfig config, void *native_window, const EGLAttrib *attrib_list);
__attribute__((dllimport)) EGLSurface __attribute__((__stdcall__)) eglCreatePlatformPixmapSurface (EGLDisplay dpy, EGLConfig config, void *native_pixmap, const EGLAttrib *attrib_list);
__attribute__((dllimport)) EGLBoolean __attribute__((__stdcall__)) eglWaitSync (EGLDisplay dpy, EGLSync sync, EGLint flags);
typedef khronos_int8_t GLbyte;
typedef khronos_float_t GLclampf;
typedef short GLshort;
typedef unsigned short GLushort;
typedef void GLvoid;
typedef unsigned int GLenum;
typedef khronos_float_t GLfloat;
typedef khronos_int32_t GLfixed;
typedef unsigned int GLuint;
typedef khronos_ssize_t GLsizeiptr;
typedef khronos_intptr_t GLintptr;
typedef unsigned int GLbitfield;
typedef int GLint;
typedef khronos_uint8_t GLubyte;
typedef unsigned char GLboolean;
typedef int GLsizei;
typedef khronos_int32_t GLclampx;
__attribute__((dllimport)) void __attribute__((__stdcall__)) glAlphaFunc (GLenum func, GLfloat ref);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glClearColor (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glClearDepthf (GLfloat d);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glClipPlanef (GLenum p, const GLfloat *eqn);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glColor4f (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glDepthRangef (GLfloat n, GLfloat f);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glFogf (GLenum pname, GLfloat param);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glFogfv (GLenum pname, const GLfloat *params);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glFrustumf (GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetClipPlanef (GLenum plane, GLfloat *equation);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetFloatv (GLenum pname, GLfloat *data);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetLightfv (GLenum light, GLenum pname, GLfloat *params);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetMaterialfv (GLenum face, GLenum pname, GLfloat *params);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetTexEnvfv (GLenum target, GLenum pname, GLfloat *params);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetTexParameterfv (GLenum target, GLenum pname, GLfloat *params);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glLightModelf (GLenum pname, GLfloat param);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glLightModelfv (GLenum pname, const GLfloat *params);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glLightf (GLenum light, GLenum pname, GLfloat param);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glLightfv (GLenum light, GLenum pname, const GLfloat *params);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glLineWidth (GLfloat width);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glLoadMatrixf (const GLfloat *m);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glMaterialf (GLenum face, GLenum pname, GLfloat param);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glMaterialfv (GLenum face, GLenum pname, const GLfloat *params);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glMultMatrixf (const GLfloat *m);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glMultiTexCoord4f (GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glNormal3f (GLfloat nx, GLfloat ny, GLfloat nz);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glOrthof (GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glPointParameterf (GLenum pname, GLfloat param);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glPointParameterfv (GLenum pname, const GLfloat *params);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glPointSize (GLfloat size);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glPolygonOffset (GLfloat factor, GLfloat units);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glRotatef (GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glScalef (GLfloat x, GLfloat y, GLfloat z);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glTexEnvf (GLenum target, GLenum pname, GLfloat param);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glTexEnvfv (GLenum target, GLenum pname, const GLfloat *params);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glTexParameterf (GLenum target, GLenum pname, GLfloat param);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glTexParameterfv (GLenum target, GLenum pname, const GLfloat *params);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glTranslatef (GLfloat x, GLfloat y, GLfloat z);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glActiveTexture (GLenum texture);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glAlphaFuncx (GLenum func, GLfixed ref);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glBindBuffer (GLenum target, GLuint buffer);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glBindTexture (GLenum target, GLuint texture);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glBlendFunc (GLenum sfactor, GLenum dfactor);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glBufferData (GLenum target, GLsizeiptr size, const void *data, GLenum usage);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const void *data);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glClear (GLbitfield mask);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glClearColorx (GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glClearDepthx (GLfixed depth);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glClearStencil (GLint s);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glClientActiveTexture (GLenum texture);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glClipPlanex (GLenum plane, const GLfixed *equation);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glColor4ub (GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glColor4x (GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glColorMask (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glColorPointer (GLint size, GLenum type, GLsizei stride, const void *pointer);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glCompressedTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glCompressedTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glCopyTexImage2D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glCopyTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glCullFace (GLenum mode);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glDeleteBuffers (GLsizei n, const GLuint *buffers);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glDeleteTextures (GLsizei n, const GLuint *textures);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glDepthFunc (GLenum func);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glDepthMask (GLboolean flag);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glDepthRangex (GLfixed n, GLfixed f);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glDisable (GLenum cap);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glDisableClientState (GLenum array);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glDrawArrays (GLenum mode, GLint first, GLsizei count);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glDrawElements (GLenum mode, GLsizei count, GLenum type, const void *indices);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glEnable (GLenum cap);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glEnableClientState (GLenum array);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glFinish (void);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glFlush (void);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glFogx (GLenum pname, GLfixed param);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glFogxv (GLenum pname, const GLfixed *param);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glFrontFace (GLenum mode);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glFrustumx (GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetBooleanv (GLenum pname, GLboolean *data);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetBufferParameteriv (GLenum target, GLenum pname, GLint *params);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetClipPlanex (GLenum plane, GLfixed *equation);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGenBuffers (GLsizei n, GLuint *buffers);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGenTextures (GLsizei n, GLuint *textures);
__attribute__((dllimport)) GLenum __attribute__((__stdcall__)) glGetError (void);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetFixedv (GLenum pname, GLfixed *params);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetIntegerv (GLenum pname, GLint *data);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetLightxv (GLenum light, GLenum pname, GLfixed *params);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetMaterialxv (GLenum face, GLenum pname, GLfixed *params);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetPointerv (GLenum pname, void **params);
__attribute__((dllimport)) const GLubyte *__attribute__((__stdcall__)) glGetString (GLenum name);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetTexEnviv (GLenum target, GLenum pname, GLint *params);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetTexEnvxv (GLenum target, GLenum pname, GLfixed *params);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetTexParameteriv (GLenum target, GLenum pname, GLint *params);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glGetTexParameterxv (GLenum target, GLenum pname, GLfixed *params);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glHint (GLenum target, GLenum mode);
__attribute__((dllimport)) GLboolean __attribute__((__stdcall__)) glIsBuffer (GLuint buffer);
__attribute__((dllimport)) GLboolean __attribute__((__stdcall__)) glIsEnabled (GLenum cap);
__attribute__((dllimport)) GLboolean __attribute__((__stdcall__)) glIsTexture (GLuint texture);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glLightModelx (GLenum pname, GLfixed param);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glLightModelxv (GLenum pname, const GLfixed *param);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glLightx (GLenum light, GLenum pname, GLfixed param);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glLightxv (GLenum light, GLenum pname, const GLfixed *params);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glLineWidthx (GLfixed width);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glLoadIdentity (void);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glLoadMatrixx (const GLfixed *m);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glLogicOp (GLenum opcode);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glMaterialx (GLenum face, GLenum pname, GLfixed param);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glMaterialxv (GLenum face, GLenum pname, const GLfixed *param);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glMatrixMode (GLenum mode);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glMultMatrixx (const GLfixed *m);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glMultiTexCoord4x (GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glNormal3x (GLfixed nx, GLfixed ny, GLfixed nz);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glNormalPointer (GLenum type, GLsizei stride, const void *pointer);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glOrthox (GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glPixelStorei (GLenum pname, GLint param);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glPointParameterx (GLenum pname, GLfixed param);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glPointParameterxv (GLenum pname, const GLfixed *params);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glPointSizex (GLfixed size);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glPolygonOffsetx (GLfixed factor, GLfixed units);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glPopMatrix (void);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glPushMatrix (void);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void *pixels);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glRotatex (GLfixed angle, GLfixed x, GLfixed y, GLfixed z);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glSampleCoverage (GLfloat value, GLboolean invert);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glSampleCoveragex (GLclampx value, GLboolean invert);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glScalex (GLfixed x, GLfixed y, GLfixed z);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glScissor (GLint x, GLint y, GLsizei width, GLsizei height);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glShadeModel (GLenum mode);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glStencilFunc (GLenum func, GLint ref, GLuint mask);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glStencilMask (GLuint mask);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glStencilOp (GLenum fail, GLenum zfail, GLenum zpass);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glTexCoordPointer (GLint size, GLenum type, GLsizei stride, const void *pointer);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glTexEnvi (GLenum target, GLenum pname, GLint param);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glTexEnvx (GLenum target, GLenum pname, GLfixed param);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glTexEnviv (GLenum target, GLenum pname, const GLint *params);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glTexEnvxv (GLenum target, GLenum pname, const GLfixed *params);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glTexImage2D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glTexParameteri (GLenum target, GLenum pname, GLint param);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glTexParameterx (GLenum target, GLenum pname, GLfixed param);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glTexParameteriv (GLenum target, GLenum pname, const GLint *params);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glTexParameterxv (GLenum target, GLenum pname, const GLfixed *params);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glTranslatex (GLfixed x, GLfixed y, GLfixed z);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glVertexPointer (GLint size, GLenum type, GLsizei stride, const void *pointer);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glViewport (GLint x, GLint y, GLsizei width, GLsizei height);
__attribute__((dllimport)) void __attribute__((__stdcall__)) glPointSizePointerOES (GLenum type, GLsizei stride, const void *pointer);
void* tgl_mem_create(intptr_t size);
void tgl_mem_destroy(void* ptr);
void* tgl_mem_resize(void* ptr, intptr_t size);
intptr_t tgl_mem_size(void* ptr);
typedef void (*tgl_heap_create_t)(void* obj);
typedef void (*tgl_heap_destroy_t)(void* obj);
typedef struct tgl_heap_entry_t tgl_heap_entry_t;
typedef struct tgl_heap_t {
 tgl_heap_entry_t* entries;
 int elem_size;
 tgl_heap_create_t create;
 tgl_heap_destroy_t destroy;
} tgl_heap_t;
void tgl_heap_create(tgl_heap_t* heap, int elem_size, tgl_heap_create_t create, tgl_heap_destroy_t destroy);
void tgl_heap_destroy(tgl_heap_t* heap);
void tgl_heap_gen(tgl_heap_t* heap, int size, unsigned* names);
void tgl_heap_delete(tgl_heap_t* heap, int size, const unsigned* names);
void* tgl_heap_get(tgl_heap_t* heap, unsigned name);
_Bool tgl_heap_is(tgl_heap_t* heap, unsigned name);
unsigned tgl_heap_name(tgl_heap_t* heap, void* obj);
void* tgl_heap_add(tgl_heap_t* heap);
void tgl_heap_remove(tgl_heap_t* heap, void* obj);
typedef struct tglc_surface_t {
 int width;
 int height;
 uint32_t color;
 uint16_t depth;
 uint8_t stencil;
} tglc_surface_t;
typedef struct tgl_context_t {
 unsigned error;
 tglc_surface_t* read;
 tglc_surface_t* write;
} tgl_context_t;
__attribute__((dllimport)) void __attribute__((__stdcall__)) tgl_context_create(tgl_context_t* context);
__attribute__((dllimport)) void __attribute__((__stdcall__)) tgl_context_destroy(tgl_context_t* context);
__attribute__((dllimport)) void __attribute__((__stdcall__)) tgl_context_set(tgl_context_t* context);
__attribute__((dllimport)) tgl_context_t* __attribute__((__stdcall__)) tgl_context_get();
_Bool tglc_config_check(EGLConfig config);
void tglc_error_set(int error);
_Bool tglc_display_check(EGLDisplay display);
static int g_config = 0;
_Bool tglc_config_check(EGLConfig config) {
 if (config != &g_config) {
  tglc_error_set(0x3005);
  return 0;
 }
 return 1;
}
__attribute__((dllexport)) EGLBoolean __attribute__((__stdcall__)) eglGetConfigs(EGLDisplay display, EGLConfig* configs, EGLint size, EGLint* ret_size) {
 if (!tglc_display_check(display)) {
  return 0;
 }
 if (size < 0 || ret_size == ((void *)0)) {
  tglc_error_set(0x300C);
  return 0;
 }
 if (size > 0 && configs != ((void *)0)) {
  tglc_error_set(0x300C);
  return 0;
 }
 if (size > 0) {
  *configs = &g_config;
 }
 *ret_size = 1;
 return 1;
}
__attribute__((dllexport)) EGLBoolean __attribute__((__stdcall__)) eglChooseConfig(EGLDisplay display, const int* attrib, EGLConfig* configs, int size, int* ret_size) {
 if (!tglc_display_check(display)) {
  return 0;
 }
 if (size < 0 || ret_size == ((void *)0)) {
  tglc_error_set(0x300C);
  return 0;
 }
 if (size > 0 && configs == ((void *)0)) {
  tglc_error_set(0x300C);
  return 0;
 }
 int config_EGL_CONFIG_ID = ((EGLint) (-1)); int config_EGL_CONFIG_CAVEAT = ((EGLint) (-1)); int config_EGL_BUFFER_SIZE = 0; int config_EGL_RED_SIZE = 0; int config_EGL_GREEN_SIZE = 0; int config_EGL_BLUE_SIZE = 0; int config_EGL_ALPHA_SIZE = 0; int config_EGL_DEPTH_SIZE = 0; int config_EGL_STENCIL_SIZE = 0; int config_EGL_SAMPLE_BUFFERS = 0; int config_EGL_SAMPLES = 0; int config_EGL_SURFACE_TYPE = 0x0004; int config_EGL_LEVEL = 0; int config_EGL_MAX_PBUFFER_WIDTH = 0; int config_EGL_MAX_PBUFFER_HEIGHT = 0; int config_EGL_MAX_PBUFFER_PIXELS = 0; int config_EGL_TRANSPARENT_TYPE = 0x3038; int config_EGL_TRANSPARENT_RED_VALUE = ((EGLint) (-1)); int config_EGL_TRANSPARENT_GREEN_VALUE = ((EGLint) (-1)); int config_EGL_TRANSPARENT_BLUE_VALUE = ((EGLint) (-1)); int config_EGL_NATIVE_RENDERABLE = ((EGLint) (-1)); int config_EGL_NATIVE_VISUAL_TYPE = ((EGLint) (-1)); int config_EGL_NATIVE_VISUAL_ID = 0;
 while (attrib[0] != 0x3038) {
  switch (attrib[0]) {
   case 0x3028: config_EGL_CONFIG_ID = attrib[1]; break; case 0x3027: config_EGL_CONFIG_CAVEAT = attrib[1]; break; case 0x3020: config_EGL_BUFFER_SIZE = attrib[1]; break; case 0x3024: config_EGL_RED_SIZE = attrib[1]; break; case 0x3023: config_EGL_GREEN_SIZE = attrib[1]; break; case 0x3022: config_EGL_BLUE_SIZE = attrib[1]; break; case 0x3021: config_EGL_ALPHA_SIZE = attrib[1]; break; case 0x3025: config_EGL_DEPTH_SIZE = attrib[1]; break; case 0x3026: config_EGL_STENCIL_SIZE = attrib[1]; break; case 0x3032: config_EGL_SAMPLE_BUFFERS = attrib[1]; break; case 0x3031: config_EGL_SAMPLES = attrib[1]; break; case 0x3033: config_EGL_SURFACE_TYPE = attrib[1]; break; case 0x3029: config_EGL_LEVEL = attrib[1]; break; case 0x302C: config_EGL_MAX_PBUFFER_WIDTH = attrib[1]; break; case 0x302A: config_EGL_MAX_PBUFFER_HEIGHT = attrib[1]; break; case 0x302B: config_EGL_MAX_PBUFFER_PIXELS = attrib[1]; break; case 0x3034: config_EGL_TRANSPARENT_TYPE = attrib[1]; break; case 0x3037: config_EGL_TRANSPARENT_RED_VALUE = attrib[1]; break; case 0x3036: config_EGL_TRANSPARENT_GREEN_VALUE = attrib[1]; break; case 0x3035: config_EGL_TRANSPARENT_BLUE_VALUE = attrib[1]; break; case 0x302D: config_EGL_NATIVE_RENDERABLE = attrib[1]; break; case 0x302F: config_EGL_NATIVE_VISUAL_TYPE = attrib[1]; break; case 0x302E: config_EGL_NATIVE_VISUAL_ID = attrib[1]; break;
   default:
    tglc_error_set(0x3004);
    break;
  }
  attrib += 2;
 }
 _Bool all_match = 1;
 if (config_EGL_CONFIG_ID != ((EGLint) (-1))) {
  if (config_EGL_CONFIG_ID != 418) {
   all_match = 0;
  }
 } else {
  if (!(config_EGL_CONFIG_ID == ((EGLint) (-1)) || config_EGL_CONFIG_ID == 418)) { all_match = 0; } if (!(config_EGL_CONFIG_CAVEAT == ((EGLint) (-1)) || config_EGL_CONFIG_CAVEAT == 0x3051)) { all_match = 0; } if (!(config_EGL_BUFFER_SIZE <= 32)) { all_match = 0; } if (!(config_EGL_RED_SIZE <= 8)) { all_match = 0; } if (!(config_EGL_GREEN_SIZE <= 8)) { all_match = 0; } if (!(config_EGL_BLUE_SIZE <= 8)) { all_match = 0; } if (!(config_EGL_ALPHA_SIZE <= 8)) { all_match = 0; } if (!(config_EGL_DEPTH_SIZE <= 16)) { all_match = 0; } if (!(config_EGL_STENCIL_SIZE <= 8)) { all_match = 0; } if (!(config_EGL_SAMPLE_BUFFERS <= 0)) { all_match = 0; } if (!(config_EGL_SAMPLES <= 0)) { all_match = 0; } if (!((config_EGL_SURFACE_TYPE & 0x0004 | 0x0001) == config_EGL_SURFACE_TYPE)) { all_match = 0; } if (!(config_EGL_LEVEL == 0)) { all_match = 0; } if (!1) { all_match = 0; } if (!1) { all_match = 0; } if (!1) { all_match = 0; } if (!(config_EGL_TRANSPARENT_TYPE == ((EGLint) (-1)) || config_EGL_TRANSPARENT_TYPE == 0x3038)) { all_match = 0; } if (!1) { all_match = 0; } if (!1) { all_match = 0; } if (!1) { all_match = 0; } if (!(config_EGL_NATIVE_RENDERABLE == ((EGLint) (-1)) || config_EGL_NATIVE_RENDERABLE == 0)) { all_match = 0; } if (!1) { all_match = 0; } if (!1) { all_match = 0; }
 }
 if (all_match) {
  return eglGetConfigs(display, configs, size, ret_size);
 } else {
  *ret_size = 0;
  return 1;
 }
}
__attribute__((dllexport)) EGLBoolean __attribute__((__stdcall__)) eglGetConfigAttrib(EGLDisplay display, EGLConfig config, EGLint attrib, EGLint* value) {
 if (!tglc_display_check(display) && !tglc_config_check(config)) {
  return 0;
 }
 if (value == ((void *)0)) {
  tglc_error_set(0x300C);
  return 0;
 }
 switch (attrib) {
  case 0x3028: *value = 418; break; case 0x3027: *value = 0x3051; break; case 0x3020: *value = 32; break; case 0x3024: *value = 8; break; case 0x3023: *value = 8; break; case 0x3022: *value = 8; break; case 0x3021: *value = 8; break; case 0x3025: *value = 16; break; case 0x3026: *value = 8; break; case 0x3032: *value = 0; break; case 0x3031: *value = 0; break; case 0x3033: *value = 0x0004 | 0x0001; break; case 0x3029: *value = 0; break; case 0x302C: *value = 0x7fffffff; break; case 0x302A: *value = 0x7fffffff; break; case 0x302B: *value = 0x7fffffff; break; case 0x3034: *value = 0x3038; break; case 0x3037: *value = 0; break; case 0x3036: *value = 0; break; case 0x3035: *value = 0; break; case 0x302D: *value = 0; break; case 0x302F: *value = 0x3038; break; case 0x302E: *value = 0; break;
  default:
   tglc_error_set(0x3004);
   return 0;
 }
 return 1;
}
