# 1 "examples/breakout/breakout.c++"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "examples/breakout/breakout.c++"

# 1 "src/gamebase.c++" 1



# 1 "src/gamebase.h" 1



# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 149 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 211 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 3 4
typedef unsigned int size_t;
# 5 "src/gamebase.h" 2
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 322 "/usr/include/features.h" 3 4
# 1 "/usr/include/bits/predefs.h" 1 3 4
# 323 "/usr/include/features.h" 2 3 4
# 355 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 353 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 354 "/usr/include/sys/cdefs.h" 2 3 4
# 356 "/usr/include/features.h" 2 3 4
# 387 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4



# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 5 "/usr/include/gnu/stubs.h" 2 3 4


# 1 "/usr/include/gnu/stubs-32.h" 1 3 4
# 8 "/usr/include/gnu/stubs.h" 2 3 4
# 388 "/usr/include/features.h" 2 3 4
# 27 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/bits/wchar.h" 1 3 4
# 28 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 37 "/usr/include/stdint.h" 3 4
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;



__extension__
typedef long long int int64_t;




typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;





__extension__
typedef unsigned long long int uint64_t;






typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;



__extension__
typedef long long int int_least64_t;



typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;



__extension__
typedef unsigned long long int uint_least64_t;






typedef signed char int_fast8_t;





typedef int int_fast16_t;
typedef int int_fast32_t;
__extension__
typedef long long int int_fast64_t;



typedef unsigned char uint_fast8_t;





typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
__extension__
typedef unsigned long long int uint_fast64_t;
# 126 "/usr/include/stdint.h" 3 4
typedef int intptr_t;


typedef unsigned int uintptr_t;
# 138 "/usr/include/stdint.h" 3 4
__extension__
typedef long long int intmax_t;
__extension__
typedef unsigned long long int uintmax_t;
# 6 "src/gamebase.h" 2
# 1 "/usr/include/math.h" 1 3 4
# 30 "/usr/include/math.h" 3 4
extern "C" {



# 1 "/usr/include/bits/huge_val.h" 1 3 4
# 35 "/usr/include/math.h" 2 3 4

# 1 "/usr/include/bits/huge_valf.h" 1 3 4
# 37 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/bits/huge_vall.h" 1 3 4
# 38 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/bits/inf.h" 1 3 4
# 41 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/bits/nan.h" 1 3 4
# 44 "/usr/include/math.h" 2 3 4



# 1 "/usr/include/bits/mathdef.h" 1 3 4
# 26 "/usr/include/bits/mathdef.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 27 "/usr/include/bits/mathdef.h" 2 3 4
# 38 "/usr/include/bits/mathdef.h" 3 4
typedef long double float_t;

typedef long double double_t;
# 48 "/usr/include/math.h" 2 3 4
# 71 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/bits/mathcalls.h" 3 4


extern double acos (double __x) throw (); extern double __acos (double __x) throw ();

extern double asin (double __x) throw (); extern double __asin (double __x) throw ();

extern double atan (double __x) throw (); extern double __atan (double __x) throw ();

extern double atan2 (double __y, double __x) throw (); extern double __atan2 (double __y, double __x) throw ();


extern double cos (double __x) throw (); extern double __cos (double __x) throw ();

extern double sin (double __x) throw (); extern double __sin (double __x) throw ();

extern double tan (double __x) throw (); extern double __tan (double __x) throw ();




extern double cosh (double __x) throw (); extern double __cosh (double __x) throw ();

extern double sinh (double __x) throw (); extern double __sinh (double __x) throw ();

extern double tanh (double __x) throw (); extern double __tanh (double __x) throw ();




extern void sincos (double __x, double *__sinx, double *__cosx) throw (); extern void __sincos (double __x, double *__sinx, double *__cosx) throw ();






extern double acosh (double __x) throw (); extern double __acosh (double __x) throw ();

extern double asinh (double __x) throw (); extern double __asinh (double __x) throw ();

extern double atanh (double __x) throw (); extern double __atanh (double __x) throw ();







extern double exp (double __x) throw (); extern double __exp (double __x) throw ();


extern double frexp (double __x, int *__exponent) throw (); extern double __frexp (double __x, int *__exponent) throw ();


extern double ldexp (double __x, int __exponent) throw (); extern double __ldexp (double __x, int __exponent) throw ();


extern double log (double __x) throw (); extern double __log (double __x) throw ();


extern double log10 (double __x) throw (); extern double __log10 (double __x) throw ();


extern double modf (double __x, double *__iptr) throw (); extern double __modf (double __x, double *__iptr) throw ();




extern double exp10 (double __x) throw (); extern double __exp10 (double __x) throw ();

extern double pow10 (double __x) throw (); extern double __pow10 (double __x) throw ();





extern double expm1 (double __x) throw (); extern double __expm1 (double __x) throw ();


extern double log1p (double __x) throw (); extern double __log1p (double __x) throw ();


extern double logb (double __x) throw (); extern double __logb (double __x) throw ();






extern double exp2 (double __x) throw (); extern double __exp2 (double __x) throw ();


extern double log2 (double __x) throw (); extern double __log2 (double __x) throw ();








extern double pow (double __x, double __y) throw (); extern double __pow (double __x, double __y) throw ();


extern double sqrt (double __x) throw (); extern double __sqrt (double __x) throw ();





extern double hypot (double __x, double __y) throw (); extern double __hypot (double __x, double __y) throw ();






extern double cbrt (double __x) throw (); extern double __cbrt (double __x) throw ();








extern double ceil (double __x) throw () __attribute__ ((__const__)); extern double __ceil (double __x) throw () __attribute__ ((__const__));


extern double fabs (double __x) throw () __attribute__ ((__const__)); extern double __fabs (double __x) throw () __attribute__ ((__const__));


extern double floor (double __x) throw () __attribute__ ((__const__)); extern double __floor (double __x) throw () __attribute__ ((__const__));


extern double fmod (double __x, double __y) throw (); extern double __fmod (double __x, double __y) throw ();




extern int __isinf (double __value) throw () __attribute__ ((__const__));


extern int __finite (double __value) throw () __attribute__ ((__const__));





extern int isinf (double __value) throw () __attribute__ ((__const__));


extern int finite (double __value) throw () __attribute__ ((__const__));


extern double drem (double __x, double __y) throw (); extern double __drem (double __x, double __y) throw ();



extern double significand (double __x) throw (); extern double __significand (double __x) throw ();





extern double copysign (double __x, double __y) throw () __attribute__ ((__const__)); extern double __copysign (double __x, double __y) throw () __attribute__ ((__const__));






extern double nan (__const char *__tagb) throw () __attribute__ ((__const__)); extern double __nan (__const char *__tagb) throw () __attribute__ ((__const__));





extern int __isnan (double __value) throw () __attribute__ ((__const__));



extern int isnan (double __value) throw () __attribute__ ((__const__));


extern double j0 (double) throw (); extern double __j0 (double) throw ();
extern double j1 (double) throw (); extern double __j1 (double) throw ();
extern double jn (int, double) throw (); extern double __jn (int, double) throw ();
extern double y0 (double) throw (); extern double __y0 (double) throw ();
extern double y1 (double) throw (); extern double __y1 (double) throw ();
extern double yn (int, double) throw (); extern double __yn (int, double) throw ();






extern double erf (double) throw (); extern double __erf (double) throw ();
extern double erfc (double) throw (); extern double __erfc (double) throw ();
extern double lgamma (double) throw (); extern double __lgamma (double) throw ();






extern double tgamma (double) throw (); extern double __tgamma (double) throw ();





extern double gamma (double) throw (); extern double __gamma (double) throw ();






extern double lgamma_r (double, int *__signgamp) throw (); extern double __lgamma_r (double, int *__signgamp) throw ();







extern double rint (double __x) throw (); extern double __rint (double __x) throw ();


extern double nextafter (double __x, double __y) throw () __attribute__ ((__const__)); extern double __nextafter (double __x, double __y) throw () __attribute__ ((__const__));

extern double nexttoward (double __x, long double __y) throw () __attribute__ ((__const__)); extern double __nexttoward (double __x, long double __y) throw () __attribute__ ((__const__));



extern double remainder (double __x, double __y) throw (); extern double __remainder (double __x, double __y) throw ();



extern double scalbn (double __x, int __n) throw (); extern double __scalbn (double __x, int __n) throw ();



extern int ilogb (double __x) throw (); extern int __ilogb (double __x) throw ();




extern double scalbln (double __x, long int __n) throw (); extern double __scalbln (double __x, long int __n) throw ();



extern double nearbyint (double __x) throw (); extern double __nearbyint (double __x) throw ();



extern double round (double __x) throw () __attribute__ ((__const__)); extern double __round (double __x) throw () __attribute__ ((__const__));



extern double trunc (double __x) throw () __attribute__ ((__const__)); extern double __trunc (double __x) throw () __attribute__ ((__const__));




extern double remquo (double __x, double __y, int *__quo) throw (); extern double __remquo (double __x, double __y, int *__quo) throw ();






extern long int lrint (double __x) throw (); extern long int __lrint (double __x) throw ();
extern long long int llrint (double __x) throw (); extern long long int __llrint (double __x) throw ();



extern long int lround (double __x) throw (); extern long int __lround (double __x) throw ();
extern long long int llround (double __x) throw (); extern long long int __llround (double __x) throw ();



extern double fdim (double __x, double __y) throw (); extern double __fdim (double __x, double __y) throw ();


extern double fmax (double __x, double __y) throw (); extern double __fmax (double __x, double __y) throw ();


extern double fmin (double __x, double __y) throw (); extern double __fmin (double __x, double __y) throw ();



extern int __fpclassify (double __value) throw ()
     __attribute__ ((__const__));


extern int __signbit (double __value) throw ()
     __attribute__ ((__const__));



extern double fma (double __x, double __y, double __z) throw (); extern double __fma (double __x, double __y, double __z) throw ();








extern double scalb (double __x, double __n) throw (); extern double __scalb (double __x, double __n) throw ();
# 72 "/usr/include/math.h" 2 3 4
# 94 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/bits/mathcalls.h" 3 4


extern float acosf (float __x) throw (); extern float __acosf (float __x) throw ();

extern float asinf (float __x) throw (); extern float __asinf (float __x) throw ();

extern float atanf (float __x) throw (); extern float __atanf (float __x) throw ();

extern float atan2f (float __y, float __x) throw (); extern float __atan2f (float __y, float __x) throw ();


extern float cosf (float __x) throw (); extern float __cosf (float __x) throw ();

extern float sinf (float __x) throw (); extern float __sinf (float __x) throw ();

extern float tanf (float __x) throw (); extern float __tanf (float __x) throw ();




extern float coshf (float __x) throw (); extern float __coshf (float __x) throw ();

extern float sinhf (float __x) throw (); extern float __sinhf (float __x) throw ();

extern float tanhf (float __x) throw (); extern float __tanhf (float __x) throw ();




extern void sincosf (float __x, float *__sinx, float *__cosx) throw (); extern void __sincosf (float __x, float *__sinx, float *__cosx) throw ();






extern float acoshf (float __x) throw (); extern float __acoshf (float __x) throw ();

extern float asinhf (float __x) throw (); extern float __asinhf (float __x) throw ();

extern float atanhf (float __x) throw (); extern float __atanhf (float __x) throw ();







extern float expf (float __x) throw (); extern float __expf (float __x) throw ();


extern float frexpf (float __x, int *__exponent) throw (); extern float __frexpf (float __x, int *__exponent) throw ();


extern float ldexpf (float __x, int __exponent) throw (); extern float __ldexpf (float __x, int __exponent) throw ();


extern float logf (float __x) throw (); extern float __logf (float __x) throw ();


extern float log10f (float __x) throw (); extern float __log10f (float __x) throw ();


extern float modff (float __x, float *__iptr) throw (); extern float __modff (float __x, float *__iptr) throw ();




extern float exp10f (float __x) throw (); extern float __exp10f (float __x) throw ();

extern float pow10f (float __x) throw (); extern float __pow10f (float __x) throw ();





extern float expm1f (float __x) throw (); extern float __expm1f (float __x) throw ();


extern float log1pf (float __x) throw (); extern float __log1pf (float __x) throw ();


extern float logbf (float __x) throw (); extern float __logbf (float __x) throw ();






extern float exp2f (float __x) throw (); extern float __exp2f (float __x) throw ();


extern float log2f (float __x) throw (); extern float __log2f (float __x) throw ();








extern float powf (float __x, float __y) throw (); extern float __powf (float __x, float __y) throw ();


extern float sqrtf (float __x) throw (); extern float __sqrtf (float __x) throw ();





extern float hypotf (float __x, float __y) throw (); extern float __hypotf (float __x, float __y) throw ();






extern float cbrtf (float __x) throw (); extern float __cbrtf (float __x) throw ();








extern float ceilf (float __x) throw () __attribute__ ((__const__)); extern float __ceilf (float __x) throw () __attribute__ ((__const__));


extern float fabsf (float __x) throw () __attribute__ ((__const__)); extern float __fabsf (float __x) throw () __attribute__ ((__const__));


extern float floorf (float __x) throw () __attribute__ ((__const__)); extern float __floorf (float __x) throw () __attribute__ ((__const__));


extern float fmodf (float __x, float __y) throw (); extern float __fmodf (float __x, float __y) throw ();




extern int __isinff (float __value) throw () __attribute__ ((__const__));


extern int __finitef (float __value) throw () __attribute__ ((__const__));





extern int isinff (float __value) throw () __attribute__ ((__const__));


extern int finitef (float __value) throw () __attribute__ ((__const__));


extern float dremf (float __x, float __y) throw (); extern float __dremf (float __x, float __y) throw ();



extern float significandf (float __x) throw (); extern float __significandf (float __x) throw ();





extern float copysignf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) throw () __attribute__ ((__const__));






extern float nanf (__const char *__tagb) throw () __attribute__ ((__const__)); extern float __nanf (__const char *__tagb) throw () __attribute__ ((__const__));





extern int __isnanf (float __value) throw () __attribute__ ((__const__));



extern int isnanf (float __value) throw () __attribute__ ((__const__));


extern float j0f (float) throw (); extern float __j0f (float) throw ();
extern float j1f (float) throw (); extern float __j1f (float) throw ();
extern float jnf (int, float) throw (); extern float __jnf (int, float) throw ();
extern float y0f (float) throw (); extern float __y0f (float) throw ();
extern float y1f (float) throw (); extern float __y1f (float) throw ();
extern float ynf (int, float) throw (); extern float __ynf (int, float) throw ();






extern float erff (float) throw (); extern float __erff (float) throw ();
extern float erfcf (float) throw (); extern float __erfcf (float) throw ();
extern float lgammaf (float) throw (); extern float __lgammaf (float) throw ();






extern float tgammaf (float) throw (); extern float __tgammaf (float) throw ();





extern float gammaf (float) throw (); extern float __gammaf (float) throw ();






extern float lgammaf_r (float, int *__signgamp) throw (); extern float __lgammaf_r (float, int *__signgamp) throw ();







extern float rintf (float __x) throw (); extern float __rintf (float __x) throw ();


extern float nextafterf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __nextafterf (float __x, float __y) throw () __attribute__ ((__const__));

extern float nexttowardf (float __x, long double __y) throw () __attribute__ ((__const__)); extern float __nexttowardf (float __x, long double __y) throw () __attribute__ ((__const__));



extern float remainderf (float __x, float __y) throw (); extern float __remainderf (float __x, float __y) throw ();



extern float scalbnf (float __x, int __n) throw (); extern float __scalbnf (float __x, int __n) throw ();



extern int ilogbf (float __x) throw (); extern int __ilogbf (float __x) throw ();




extern float scalblnf (float __x, long int __n) throw (); extern float __scalblnf (float __x, long int __n) throw ();



extern float nearbyintf (float __x) throw (); extern float __nearbyintf (float __x) throw ();



extern float roundf (float __x) throw () __attribute__ ((__const__)); extern float __roundf (float __x) throw () __attribute__ ((__const__));



extern float truncf (float __x) throw () __attribute__ ((__const__)); extern float __truncf (float __x) throw () __attribute__ ((__const__));




extern float remquof (float __x, float __y, int *__quo) throw (); extern float __remquof (float __x, float __y, int *__quo) throw ();






extern long int lrintf (float __x) throw (); extern long int __lrintf (float __x) throw ();
extern long long int llrintf (float __x) throw (); extern long long int __llrintf (float __x) throw ();



extern long int lroundf (float __x) throw (); extern long int __lroundf (float __x) throw ();
extern long long int llroundf (float __x) throw (); extern long long int __llroundf (float __x) throw ();



extern float fdimf (float __x, float __y) throw (); extern float __fdimf (float __x, float __y) throw ();


extern float fmaxf (float __x, float __y) throw (); extern float __fmaxf (float __x, float __y) throw ();


extern float fminf (float __x, float __y) throw (); extern float __fminf (float __x, float __y) throw ();



extern int __fpclassifyf (float __value) throw ()
     __attribute__ ((__const__));


extern int __signbitf (float __value) throw ()
     __attribute__ ((__const__));



extern float fmaf (float __x, float __y, float __z) throw (); extern float __fmaf (float __x, float __y, float __z) throw ();








extern float scalbf (float __x, float __n) throw (); extern float __scalbf (float __x, float __n) throw ();
# 95 "/usr/include/math.h" 2 3 4
# 145 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/bits/mathcalls.h" 3 4


extern long double acosl (long double __x) throw (); extern long double __acosl (long double __x) throw ();

extern long double asinl (long double __x) throw (); extern long double __asinl (long double __x) throw ();

extern long double atanl (long double __x) throw (); extern long double __atanl (long double __x) throw ();

extern long double atan2l (long double __y, long double __x) throw (); extern long double __atan2l (long double __y, long double __x) throw ();


extern long double cosl (long double __x) throw (); extern long double __cosl (long double __x) throw ();

extern long double sinl (long double __x) throw (); extern long double __sinl (long double __x) throw ();

extern long double tanl (long double __x) throw (); extern long double __tanl (long double __x) throw ();




extern long double coshl (long double __x) throw (); extern long double __coshl (long double __x) throw ();

extern long double sinhl (long double __x) throw (); extern long double __sinhl (long double __x) throw ();

extern long double tanhl (long double __x) throw (); extern long double __tanhl (long double __x) throw ();




extern void sincosl (long double __x, long double *__sinx, long double *__cosx) throw (); extern void __sincosl (long double __x, long double *__sinx, long double *__cosx) throw ();






extern long double acoshl (long double __x) throw (); extern long double __acoshl (long double __x) throw ();

extern long double asinhl (long double __x) throw (); extern long double __asinhl (long double __x) throw ();

extern long double atanhl (long double __x) throw (); extern long double __atanhl (long double __x) throw ();







extern long double expl (long double __x) throw (); extern long double __expl (long double __x) throw ();


extern long double frexpl (long double __x, int *__exponent) throw (); extern long double __frexpl (long double __x, int *__exponent) throw ();


extern long double ldexpl (long double __x, int __exponent) throw (); extern long double __ldexpl (long double __x, int __exponent) throw ();


extern long double logl (long double __x) throw (); extern long double __logl (long double __x) throw ();


extern long double log10l (long double __x) throw (); extern long double __log10l (long double __x) throw ();


extern long double modfl (long double __x, long double *__iptr) throw (); extern long double __modfl (long double __x, long double *__iptr) throw ();




extern long double exp10l (long double __x) throw (); extern long double __exp10l (long double __x) throw ();

extern long double pow10l (long double __x) throw (); extern long double __pow10l (long double __x) throw ();





extern long double expm1l (long double __x) throw (); extern long double __expm1l (long double __x) throw ();


extern long double log1pl (long double __x) throw (); extern long double __log1pl (long double __x) throw ();


extern long double logbl (long double __x) throw (); extern long double __logbl (long double __x) throw ();






extern long double exp2l (long double __x) throw (); extern long double __exp2l (long double __x) throw ();


extern long double log2l (long double __x) throw (); extern long double __log2l (long double __x) throw ();








extern long double powl (long double __x, long double __y) throw (); extern long double __powl (long double __x, long double __y) throw ();


extern long double sqrtl (long double __x) throw (); extern long double __sqrtl (long double __x) throw ();





extern long double hypotl (long double __x, long double __y) throw (); extern long double __hypotl (long double __x, long double __y) throw ();






extern long double cbrtl (long double __x) throw (); extern long double __cbrtl (long double __x) throw ();








extern long double ceill (long double __x) throw () __attribute__ ((__const__)); extern long double __ceill (long double __x) throw () __attribute__ ((__const__));


extern long double fabsl (long double __x) throw () __attribute__ ((__const__)); extern long double __fabsl (long double __x) throw () __attribute__ ((__const__));


extern long double floorl (long double __x) throw () __attribute__ ((__const__)); extern long double __floorl (long double __x) throw () __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) throw (); extern long double __fmodl (long double __x, long double __y) throw ();




extern int __isinfl (long double __value) throw () __attribute__ ((__const__));


extern int __finitel (long double __value) throw () __attribute__ ((__const__));





extern int isinfl (long double __value) throw () __attribute__ ((__const__));


extern int finitel (long double __value) throw () __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) throw (); extern long double __dreml (long double __x, long double __y) throw ();



extern long double significandl (long double __x) throw (); extern long double __significandl (long double __x) throw ();





extern long double copysignl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) throw () __attribute__ ((__const__));






extern long double nanl (__const char *__tagb) throw () __attribute__ ((__const__)); extern long double __nanl (__const char *__tagb) throw () __attribute__ ((__const__));





extern int __isnanl (long double __value) throw () __attribute__ ((__const__));



extern int isnanl (long double __value) throw () __attribute__ ((__const__));


extern long double j0l (long double) throw (); extern long double __j0l (long double) throw ();
extern long double j1l (long double) throw (); extern long double __j1l (long double) throw ();
extern long double jnl (int, long double) throw (); extern long double __jnl (int, long double) throw ();
extern long double y0l (long double) throw (); extern long double __y0l (long double) throw ();
extern long double y1l (long double) throw (); extern long double __y1l (long double) throw ();
extern long double ynl (int, long double) throw (); extern long double __ynl (int, long double) throw ();






extern long double erfl (long double) throw (); extern long double __erfl (long double) throw ();
extern long double erfcl (long double) throw (); extern long double __erfcl (long double) throw ();
extern long double lgammal (long double) throw (); extern long double __lgammal (long double) throw ();






extern long double tgammal (long double) throw (); extern long double __tgammal (long double) throw ();





extern long double gammal (long double) throw (); extern long double __gammal (long double) throw ();






extern long double lgammal_r (long double, int *__signgamp) throw (); extern long double __lgammal_r (long double, int *__signgamp) throw ();







extern long double rintl (long double __x) throw (); extern long double __rintl (long double __x) throw ();


extern long double nextafterl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __nextafterl (long double __x, long double __y) throw () __attribute__ ((__const__));

extern long double nexttowardl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __nexttowardl (long double __x, long double __y) throw () __attribute__ ((__const__));



extern long double remainderl (long double __x, long double __y) throw (); extern long double __remainderl (long double __x, long double __y) throw ();



extern long double scalbnl (long double __x, int __n) throw (); extern long double __scalbnl (long double __x, int __n) throw ();



extern int ilogbl (long double __x) throw (); extern int __ilogbl (long double __x) throw ();




extern long double scalblnl (long double __x, long int __n) throw (); extern long double __scalblnl (long double __x, long int __n) throw ();



extern long double nearbyintl (long double __x) throw (); extern long double __nearbyintl (long double __x) throw ();



extern long double roundl (long double __x) throw () __attribute__ ((__const__)); extern long double __roundl (long double __x) throw () __attribute__ ((__const__));



extern long double truncl (long double __x) throw () __attribute__ ((__const__)); extern long double __truncl (long double __x) throw () __attribute__ ((__const__));




extern long double remquol (long double __x, long double __y, int *__quo) throw (); extern long double __remquol (long double __x, long double __y, int *__quo) throw ();






extern long int lrintl (long double __x) throw (); extern long int __lrintl (long double __x) throw ();
extern long long int llrintl (long double __x) throw (); extern long long int __llrintl (long double __x) throw ();



extern long int lroundl (long double __x) throw (); extern long int __lroundl (long double __x) throw ();
extern long long int llroundl (long double __x) throw (); extern long long int __llroundl (long double __x) throw ();



extern long double fdiml (long double __x, long double __y) throw (); extern long double __fdiml (long double __x, long double __y) throw ();


extern long double fmaxl (long double __x, long double __y) throw (); extern long double __fmaxl (long double __x, long double __y) throw ();


extern long double fminl (long double __x, long double __y) throw (); extern long double __fminl (long double __x, long double __y) throw ();



extern int __fpclassifyl (long double __value) throw ()
     __attribute__ ((__const__));


extern int __signbitl (long double __value) throw ()
     __attribute__ ((__const__));



extern long double fmal (long double __x, long double __y, long double __z) throw (); extern long double __fmal (long double __x, long double __y, long double __z) throw ();








extern long double scalbl (long double __x, long double __n) throw (); extern long double __scalbl (long double __x, long double __n) throw ();
# 146 "/usr/include/math.h" 2 3 4
# 161 "/usr/include/math.h" 3 4
extern int signgam;
# 202 "/usr/include/math.h" 3 4
enum
  {
    FP_NAN,

    FP_INFINITE,

    FP_ZERO,

    FP_SUBNORMAL,

    FP_NORMAL

  };
# 295 "/usr/include/math.h" 3 4
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;




extern _LIB_VERSION_TYPE _LIB_VERSION;
# 318 "/usr/include/math.h" 3 4
struct __exception



  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };


extern int matherr (struct __exception *__exc) throw ();
# 476 "/usr/include/math.h" 3 4
}
# 7 "src/gamebase.h" 2
# 1 "/usr/include/setjmp.h" 1 3 4
# 28 "/usr/include/setjmp.h" 3 4
extern "C" {

# 1 "/usr/include/bits/setjmp.h" 1 3 4
# 27 "/usr/include/bits/setjmp.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 28 "/usr/include/bits/setjmp.h" 2 3 4






typedef int __jmp_buf[6];
# 31 "/usr/include/setjmp.h" 2 3 4
# 1 "/usr/include/bits/sigset.h" 1 3 4
# 24 "/usr/include/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 32 "/usr/include/setjmp.h" 2 3 4



struct __jmp_buf_tag
  {




    __jmp_buf __jmpbuf;
    int __mask_was_saved;
    __sigset_t __saved_mask;
  };




typedef struct __jmp_buf_tag jmp_buf[1];



extern int setjmp (jmp_buf __env) throw ();






extern int __sigsetjmp (struct __jmp_buf_tag __env[1], int __savemask) throw ();




extern int _setjmp (struct __jmp_buf_tag __env[1]) throw ();
# 78 "/usr/include/setjmp.h" 3 4




extern void longjmp (struct __jmp_buf_tag __env[1], int __val)
     throw () __attribute__ ((__noreturn__));







extern void _longjmp (struct __jmp_buf_tag __env[1], int __val)
     throw () __attribute__ ((__noreturn__));







typedef struct __jmp_buf_tag sigjmp_buf[1];
# 110 "/usr/include/setjmp.h" 3 4
extern void siglongjmp (sigjmp_buf __env, int __val)
     throw () __attribute__ ((__noreturn__));
# 120 "/usr/include/setjmp.h" 3 4
}
# 8 "src/gamebase.h" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 30 "/usr/include/stdio.h" 3 4
extern "C" {



# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 35 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/bits/types.h" 1 3 4
# 28 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;




__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;







__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;
# 131 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 132 "/usr/include/bits/types.h" 2 3 4


__extension__ typedef __u_quad_t __dev_t;
__extension__ typedef unsigned int __uid_t;
__extension__ typedef unsigned int __gid_t;
__extension__ typedef unsigned long int __ino_t;
__extension__ typedef __u_quad_t __ino64_t;
__extension__ typedef unsigned int __mode_t;
__extension__ typedef unsigned int __nlink_t;
__extension__ typedef long int __off_t;
__extension__ typedef __quad_t __off64_t;
__extension__ typedef int __pid_t;
__extension__ typedef struct { int __val[2]; } __fsid_t;
__extension__ typedef long int __clock_t;
__extension__ typedef unsigned long int __rlim_t;
__extension__ typedef __u_quad_t __rlim64_t;
__extension__ typedef unsigned int __id_t;
__extension__ typedef long int __time_t;
__extension__ typedef unsigned int __useconds_t;
__extension__ typedef long int __suseconds_t;

__extension__ typedef int __daddr_t;
__extension__ typedef long int __swblk_t;
__extension__ typedef int __key_t;


__extension__ typedef int __clockid_t;


__extension__ typedef void * __timer_t;


__extension__ typedef long int __blksize_t;




__extension__ typedef long int __blkcnt_t;
__extension__ typedef __quad_t __blkcnt64_t;


__extension__ typedef unsigned long int __fsblkcnt_t;
__extension__ typedef __u_quad_t __fsblkcnt64_t;


__extension__ typedef unsigned long int __fsfilcnt_t;
__extension__ typedef __u_quad_t __fsfilcnt64_t;

__extension__ typedef int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


__extension__ typedef int __intptr_t;


__extension__ typedef unsigned int __socklen_t;
# 37 "/usr/include/stdio.h" 2 3 4
# 45 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 65 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 75 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 32 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 83 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4

typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 53 "/usr/include/_G_config.h" 3 4
typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));
# 33 "/usr/include/libio.h" 2 3 4
# 53 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 54 "/usr/include/libio.h" 2 3 4
# 170 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 180 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 203 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 271 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 319 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 328 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};





struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 364 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);




typedef __io_read_fn cookie_read_function_t;
typedef __io_write_fn cookie_write_function_t;
typedef __io_seek_fn cookie_seek_function_t;
typedef __io_close_fn cookie_close_function_t;


typedef struct
{
  __io_read_fn *read;
  __io_write_fn *write;
  __io_seek_fn *seek;
  __io_close_fn *close;
} _IO_cookie_io_functions_t;
typedef _IO_cookie_io_functions_t cookie_io_functions_t;

struct _IO_cookie_file;


extern void _IO_cookie_init (struct _IO_cookie_file *__cfile, int __read_write,
        void *__cookie, _IO_cookie_io_functions_t __fns);




extern "C" {


extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 460 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) throw ();
extern int _IO_ferror (_IO_FILE *__fp) throw ();

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) throw ();
extern void _IO_funlockfile (_IO_FILE *) throw ();
extern int _IO_ftrylockfile (_IO_FILE *) throw ();
# 490 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) throw ();
# 552 "/usr/include/libio.h" 3 4
}
# 76 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 91 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;





typedef _G_fpos64_t fpos64_t;
# 161 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 162 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (__const char *__filename) throw ();

extern int rename (__const char *__old, __const char *__new) throw ();




extern int renameat (int __oldfd, __const char *__old, int __newfd,
       __const char *__new) throw ();








extern FILE *tmpfile (void) ;
# 202 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile64 (void) ;



extern char *tmpnam (char *__s) throw () ;





extern char *tmpnam_r (char *__s) throw () ;
# 224 "/usr/include/stdio.h" 3 4
extern char *tempnam (__const char *__dir, __const char *__pfx)
     throw () __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 249 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 259 "/usr/include/stdio.h" 3 4
extern int fcloseall (void);









extern FILE *fopen (__const char *__restrict __filename,
      __const char *__restrict __modes) ;




extern FILE *freopen (__const char *__restrict __filename,
        __const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 292 "/usr/include/stdio.h" 3 4


extern FILE *fopen64 (__const char *__restrict __filename,
        __const char *__restrict __modes) ;
extern FILE *freopen64 (__const char *__restrict __filename,
   __const char *__restrict __modes,
   FILE *__restrict __stream) ;




extern FILE *fdopen (int __fd, __const char *__modes) throw () ;





extern FILE *fopencookie (void *__restrict __magic_cookie,
     __const char *__restrict __modes,
     _IO_cookie_io_functions_t __io_funcs) throw () ;




extern FILE *fmemopen (void *__s, size_t __len, __const char *__modes)
  throw () ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) throw () ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) throw ();



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) throw ();





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) throw ();


extern void setlinebuf (FILE *__stream) throw ();








extern int fprintf (FILE *__restrict __stream,
      __const char *__restrict __format, ...);




extern int printf (__const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      __const char *__restrict __format, ...) throw ();





extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg) throw ();





extern int snprintf (char *__restrict __s, size_t __maxlen,
       __const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        __const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 3, 0)));






extern int vasprintf (char **__restrict __ptr, __const char *__restrict __f,
        __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 2, 0))) ;
extern int __asprintf (char **__restrict __ptr,
         __const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int asprintf (char **__restrict __ptr,
       __const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) ;
# 414 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, __const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, __const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     __const char *__restrict __format, ...) ;




extern int scanf (__const char *__restrict __format, ...) ;

extern int sscanf (__const char *__restrict __s,
     __const char *__restrict __format, ...) throw ();
# 465 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (__const char *__restrict __s,
      __const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__scanf__, 2, 0)));
# 524 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 552 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 563 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 596 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;






extern char *gets (char *__s) ;

# 642 "/usr/include/stdio.h" 3 4
extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) ;
# 658 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);





extern int puts (__const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

# 719 "/usr/include/stdio.h" 3 4
extern int fputs_unlocked (__const char *__restrict __s,
      FILE *__restrict __stream);
# 730 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 766 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 785 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, __const fpos_t *__pos);
# 808 "/usr/include/stdio.h" 3 4



extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) ;
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, __const fpos64_t *__pos);




extern void clearerr (FILE *__stream) throw ();

extern int feof (FILE *__stream) throw () ;

extern int ferror (FILE *__stream) throw () ;




extern void clearerr_unlocked (FILE *__stream) throw ();
extern int feof_unlocked (FILE *__stream) throw () ;
extern int ferror_unlocked (FILE *__stream) throw () ;








extern void perror (__const char *__s);






# 1 "/usr/include/bits/sys_errlist.h" 1 3 4
# 27 "/usr/include/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern __const char *__const sys_errlist[];


extern int _sys_nerr;
extern __const char *__const _sys_errlist[];
# 847 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) throw () ;




extern int fileno_unlocked (FILE *__stream) throw () ;
# 866 "/usr/include/stdio.h" 3 4
extern FILE *popen (__const char *__command, __const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) throw ();





extern char *cuserid (char *__s);




struct obstack;


extern int obstack_printf (struct obstack *__restrict __obstack,
      __const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       __const char *__restrict __format,
       __gnuc_va_list __args)
     throw () __attribute__ ((__format__ (__printf__, 2, 0)));







extern void flockfile (FILE *__stream) throw ();



extern int ftrylockfile (FILE *__stream) throw () ;


extern void funlockfile (FILE *__stream) throw ();
# 936 "/usr/include/stdio.h" 3 4
}
# 9 "src/gamebase.h" 2
# 1 "/usr/include/string.h" 1 3 4
# 29 "/usr/include/string.h" 3 4
extern "C" {




# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 35 "/usr/include/string.h" 2 3 4









extern void *memcpy (void *__restrict __dest,
       __const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, __const void *__src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, __const void *__restrict __src,
        int __c, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) throw () __attribute__ ((__nonnull__ (1)));


extern int memcmp (__const void *__s1, __const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern "C++"
{
extern void *memchr (void *__s, int __c, size_t __n)
      throw () __asm ("memchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const void *memchr (__const void *__s, int __c, size_t __n)
      throw () __asm ("memchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 93 "/usr/include/string.h" 3 4
}










extern "C++" void *rawmemchr (void *__s, int __c)
     throw () __asm ("rawmemchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" __const void *rawmemchr (__const void *__s, int __c)
     throw () __asm ("rawmemchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));







extern "C++" void *memrchr (void *__s, int __c, size_t __n)
      throw () __asm ("memrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" __const void *memrchr (__const void *__s, int __c, size_t __n)
      throw () __asm ("memrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));









extern char *strcpy (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, __const char *__restrict __src,
        size_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (__const char *__s1, __const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (2)));






# 1 "/usr/include/xlocale.h" 1 3 4
# 28 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 163 "/usr/include/string.h" 2 3 4


extern int strcoll_l (__const char *__s1, __const char *__s2, __locale_t __l)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, __const char *__src, size_t __n,
    __locale_t __l) throw () __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (__const char *__s)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (__const char *__string, size_t __n)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 210 "/usr/include/string.h" 3 4



extern "C++"
{
extern char *strchr (char *__s, int __c)
     throw () __asm ("strchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const char *strchr (__const char *__s, int __c)
     throw () __asm ("strchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 233 "/usr/include/string.h" 3 4
}






extern "C++"
{
extern char *strrchr (char *__s, int __c)
     throw () __asm ("strrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const char *strrchr (__const char *__s, int __c)
     throw () __asm ("strrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 260 "/usr/include/string.h" 3 4
}










extern "C++" char *strchrnul (char *__s, int __c)
     throw () __asm ("strchrnul") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" __const char *strchrnul (__const char *__s, int __c)
     throw () __asm ("strchrnul") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));









extern size_t strcspn (__const char *__s, __const char *__reject)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (__const char *__s, __const char *__accept)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern "C++"
{
extern char *strpbrk (char *__s, __const char *__accept)
     throw () __asm ("strpbrk") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern __const char *strpbrk (__const char *__s, __const char *__accept)
     throw () __asm ("strpbrk") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 312 "/usr/include/string.h" 3 4
}






extern "C++"
{
extern char *strstr (char *__haystack, __const char *__needle)
     throw () __asm ("strstr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern __const char *strstr (__const char *__haystack,
        __const char *__needle)
     throw () __asm ("strstr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 340 "/usr/include/string.h" 3 4
}







extern char *strtok (char *__restrict __s, __const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    __const char *__restrict __delim,
    char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, __const char *__restrict __delim,
         char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));





extern "C++" char *strcasestr (char *__haystack, __const char *__needle)
     throw () __asm ("strcasestr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern "C++" __const char *strcasestr (__const char *__haystack,
           __const char *__needle)
     throw () __asm ("strcasestr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 382 "/usr/include/string.h" 3 4
extern void *memmem (__const void *__haystack, size_t __haystacklen,
       __const void *__needle, size_t __needlelen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)));



extern void *__mempcpy (void *__restrict __dest,
   __const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        __const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern size_t strlen (__const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (__const char *__string, size_t __maxlen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) throw ();

# 438 "/usr/include/string.h" 3 4
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));





extern char *strerror_l (int __errnum, __locale_t __l) throw ();





extern void __bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));



extern void bcopy (__const void *__src, void *__dest, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));


extern int bcmp (__const void *__s1, __const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern "C++"
{
extern char *index (char *__s, int __c)
     throw () __asm ("index") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const char *index (__const char *__s, int __c)
     throw () __asm ("index") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 487 "/usr/include/string.h" 3 4
}







extern "C++"
{
extern char *rindex (char *__s, int __c)
     throw () __asm ("rindex") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const char *rindex (__const char *__s, int __c)
     throw () __asm ("rindex") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 515 "/usr/include/string.h" 3 4
}







extern int ffs (int __i) throw () __attribute__ ((__const__));




extern int ffsl (long int __l) throw () __attribute__ ((__const__));

__extension__ extern int ffsll (long long int __ll)
     throw () __attribute__ ((__const__));




extern int strcasecmp (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));





extern int strcasecmp_l (__const char *__s1, __const char *__s2,
    __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern int strncasecmp_l (__const char *__s1, __const char *__s2,
     size_t __n, __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));





extern char *strsep (char **__restrict __stringp,
       __const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) throw ();


extern char *__stpcpy (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int strverscmp (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strfry (char *__string) throw () __attribute__ ((__nonnull__ (1)));


extern void *memfrob (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));







extern "C++" char *basename (char *__filename)
     throw () __asm ("basename") __attribute__ ((__nonnull__ (1)));
extern "C++" __const char *basename (__const char *__filename)
     throw () __asm ("basename") __attribute__ ((__nonnull__ (1)));
# 646 "/usr/include/string.h" 3 4
}
# 10 "src/gamebase.h" 2
# 1 "/usr/include/SDL/SDL.h" 1 3 4
# 30 "/usr/include/SDL/SDL.h" 3 4
# 1 "/usr/include/SDL/SDL_main.h" 1 3 4
# 26 "/usr/include/SDL/SDL_main.h" 3 4
# 1 "/usr/include/SDL/SDL_stdinc.h" 1 3 4
# 30 "/usr/include/SDL/SDL_stdinc.h" 3 4
# 1 "/usr/include/SDL/SDL_config.h" 1 3 4
# 30 "/usr/include/SDL/SDL_config.h" 3 4
# 1 "/usr/include/SDL/SDL_platform.h" 1 3 4
# 31 "/usr/include/SDL/SDL_config.h" 2 3 4
# 31 "/usr/include/SDL/SDL_stdinc.h" 2 3 4



# 1 "/usr/include/sys/types.h" 1 3 4
# 28 "/usr/include/sys/types.h" 3 4
extern "C" {





typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;






typedef __ino64_t ino64_t;




typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
# 99 "/usr/include/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;
# 116 "/usr/include/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 133 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 58 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 74 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 92 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 104 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 134 "/usr/include/sys/types.h" 2 3 4



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;





# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 148 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 201 "/usr/include/sys/types.h" 3 4
typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 217 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 38 "/usr/include/endian.h" 2 3 4
# 61 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 28 "/usr/include/bits/byteswap.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/byteswap.h" 2 3 4
# 62 "/usr/include/endian.h" 2 3 4
# 218 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/select.h" 1 3 4
# 31 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 23 "/usr/include/bits/select.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 24 "/usr/include/bits/select.h" 2 3 4
# 32 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 35 "/usr/include/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    long int tv_nsec;
  };
# 45 "/usr/include/sys/select.h" 2 3 4

# 1 "/usr/include/bits/time.h" 1 3 4
# 75 "/usr/include/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 47 "/usr/include/sys/select.h" 2 3 4
# 55 "/usr/include/sys/select.h" 3 4
typedef long int __fd_mask;
# 67 "/usr/include/sys/select.h" 3 4
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





  } fd_set;






typedef __fd_mask fd_mask;
# 99 "/usr/include/sys/select.h" 3 4
extern "C" {
# 109 "/usr/include/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 121 "/usr/include/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);


}
# 221 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 30 "/usr/include/sys/sysmacros.h" 3 4
__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     throw ();
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     throw ();
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     throw ();
# 224 "/usr/include/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 263 "/usr/include/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;





# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 23 "/usr/include/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 24 "/usr/include/bits/pthreadtypes.h" 2 3 4
# 50 "/usr/include/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


typedef union
{
  char __size[36];
  long int __align;
} pthread_attr_t;
# 67 "/usr/include/bits/pthreadtypes.h" 3 4
typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;





typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;





    int __kind;





    unsigned int __nusers;
    __extension__ union
    {
      int __spins;
      __pthread_slist_t __list;
    };

  } __data;
  char __size[24];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{
# 170 "/usr/include/bits/pthreadtypes.h" 3 4
  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;


    unsigned char __flags;
    unsigned char __shared;
    unsigned char __pad1;
    unsigned char __pad2;
    int __writer;
  } __data;

  char __size[32];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[20];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 272 "/usr/include/sys/types.h" 2 3 4


}
# 35 "/usr/include/SDL/SDL_stdinc.h" 2 3 4





# 1 "/usr/include/stdlib.h" 1 3 4
# 33 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 34 "/usr/include/stdlib.h" 2 3 4

extern "C" {






# 1 "/usr/include/bits/waitflags.h" 1 3 4
# 43 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/bits/waitstatus.h" 1 3 4
# 67 "/usr/include/bits/waitstatus.h" 3 4
union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };
# 44 "/usr/include/stdlib.h" 2 3 4
# 96 "/usr/include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


# 140 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) throw () ;




extern double atof (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (__const char *__restrict __nptr,
        char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1))) ;





extern float strtof (__const char *__restrict __nptr,
       char **__restrict __endptr) throw () __attribute__ ((__nonnull__ (1))) ;

extern long double strtold (__const char *__restrict __nptr,
       char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1))) ;





extern long int strtol (__const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;

extern unsigned long int strtoul (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;




__extension__
extern long long int strtoq (__const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtouq (__const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;





__extension__
extern long long int strtoll (__const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtoull (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;

# 240 "/usr/include/stdlib.h" 3 4
extern long int strtol_l (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     __locale_t __loc) throw () __attribute__ ((__nonnull__ (1, 4))) ;

extern unsigned long int strtoul_l (__const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4))) ;

__extension__
extern long long int strtoll_l (__const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4))) ;

__extension__
extern unsigned long long int strtoull_l (__const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4))) ;

extern double strtod_l (__const char *__restrict __nptr,
   char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3))) ;

extern float strtof_l (__const char *__restrict __nptr,
         char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3))) ;

extern long double strtold_l (__const char *__restrict __nptr,
         char **__restrict __endptr,
         __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3))) ;
# 311 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) throw () ;


extern long int a64l (__const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;
# 327 "/usr/include/stdlib.h" 3 4
extern long int random (void) throw ();


extern void srandom (unsigned int __seed) throw ();





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) throw () __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) throw () __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     throw () __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) throw ();

extern void srand (unsigned int __seed) throw ();




extern int rand_r (unsigned int *__seed) throw ();







extern double drand48 (void) throw ();
extern double erand48 (unsigned short int __xsubi[3]) throw () __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) throw ();
extern long int nrand48 (unsigned short int __xsubi[3])
     throw () __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) throw ();
extern long int jrand48 (unsigned short int __xsubi[3])
     throw () __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) throw ();
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     throw () __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) throw () __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     throw () __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) throw () __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     throw () __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) throw () __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     throw () __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     throw () __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) throw ();




extern void cfree (void *__ptr) throw ();



# 1 "/usr/include/alloca.h" 1 3 4
# 25 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 26 "/usr/include/alloca.h" 2 3 4

extern "C" {





extern void *alloca (size_t __size) throw ();





}
# 498 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) throw () __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     throw () __attribute__ ((__nonnull__ (1))) ;




extern void abort (void) throw () __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) throw () __attribute__ ((__nonnull__ (1)));






extern "C++" int at_quick_exit (void (*__func) (void))
     throw () __asm ("at_quick_exit") __attribute__ ((__nonnull__ (1)));









extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     throw () __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) throw () __attribute__ ((__noreturn__));







extern void quick_exit (int __status) throw () __attribute__ ((__noreturn__));







extern void _Exit (int __status) throw () __attribute__ ((__noreturn__));






extern char *getenv (__const char *__name) throw () __attribute__ ((__nonnull__ (1))) ;




extern char *__secure_getenv (__const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;





extern int putenv (char *__string) throw () __attribute__ ((__nonnull__ (1)));





extern int setenv (__const char *__name, __const char *__value, int __replace)
     throw () __attribute__ ((__nonnull__ (2)));


extern int unsetenv (__const char *__name) throw () __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) throw ();
# 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) throw () __attribute__ ((__nonnull__ (1))) ;
# 620 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 630 "/usr/include/stdlib.h" 3 4
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 642 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 652 "/usr/include/stdlib.h" 3 4
extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) ;
# 663 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) throw () __attribute__ ((__nonnull__ (1))) ;
# 674 "/usr/include/stdlib.h" 3 4
extern int mkostemp (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 684 "/usr/include/stdlib.h" 3 4
extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 694 "/usr/include/stdlib.h" 3 4
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
# 706 "/usr/include/stdlib.h" 3 4
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;









extern int system (__const char *__command) ;






extern char *canonicalize_file_name (__const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;
# 734 "/usr/include/stdlib.h" 3 4
extern char *realpath (__const char *__restrict __name,
         char *__restrict __resolved) throw () ;






typedef int (*__compar_fn_t) (__const void *, __const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (__const void *, __const void *, void *);





extern void *bsearch (__const void *__key, __const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;



extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));

extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  __attribute__ ((__nonnull__ (1, 4)));




extern int abs (int __x) throw () __attribute__ ((__const__)) ;
extern long int labs (long int __x) throw () __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     throw () __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     throw () __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     throw () __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     throw () __attribute__ ((__const__)) ;

# 808 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) throw () __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (3, 4, 5)));







extern int mblen (__const char *__s, size_t __n) throw () ;


extern int mbtowc (wchar_t *__restrict __pwc,
     __const char *__restrict __s, size_t __n) throw () ;


extern int wctomb (char *__s, wchar_t __wchar) throw () ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   __const char *__restrict __s, size_t __n) throw ();

extern size_t wcstombs (char *__restrict __s,
   __const wchar_t *__restrict __pwcs, size_t __n)
     throw ();








extern int rpmatch (__const char *__response) throw () __attribute__ ((__nonnull__ (1))) ;
# 896 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *__const *__restrict __tokens,
        char **__restrict __valuep)
     throw () __attribute__ ((__nonnull__ (1, 2, 3))) ;





extern void setkey (__const char *__key) throw () __attribute__ ((__nonnull__ (1)));







extern int posix_openpt (int __oflag) ;







extern int grantpt (int __fd) throw ();



extern int unlockpt (int __fd) throw ();




extern char *ptsname (int __fd) throw () ;






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));


extern int getpt (void);






extern int getloadavg (double __loadavg[], int __nelem)
     throw () __attribute__ ((__nonnull__ (1)));
# 964 "/usr/include/stdlib.h" 3 4
}
# 41 "/usr/include/SDL/SDL_stdinc.h" 2 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 42 "/usr/include/SDL/SDL_stdinc.h" 2 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h" 1 3 4
# 43 "/usr/include/SDL/SDL_stdinc.h" 2 3 4
# 63 "/usr/include/SDL/SDL_stdinc.h" 3 4
# 1 "/usr/include/strings.h" 1 3 4
# 64 "/usr/include/SDL/SDL_stdinc.h" 2 3 4


# 1 "/usr/include/inttypes.h" 1 3 4
# 274 "/usr/include/inttypes.h" 3 4
extern "C" {
# 288 "/usr/include/inttypes.h" 3 4
typedef struct
  {
    long long int quot;
    long long int rem;
  } imaxdiv_t;





extern intmax_t imaxabs (intmax_t __n) throw () __attribute__ ((__const__));


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      throw () __attribute__ ((__const__));


extern intmax_t strtoimax (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base) throw ();


extern uintmax_t strtoumax (__const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) throw ();


extern intmax_t wcstoimax (__const wchar_t *__restrict __nptr,
      wchar_t **__restrict __endptr, int __base)
     throw ();


extern uintmax_t wcstoumax (__const wchar_t *__restrict __nptr,
       wchar_t ** __restrict __endptr, int __base)
     throw ();
# 442 "/usr/include/inttypes.h" 3 4
}
# 67 "/usr/include/SDL/SDL_stdinc.h" 2 3 4




# 1 "/usr/include/ctype.h" 1 3 4
# 30 "/usr/include/ctype.h" 3 4
extern "C" {
# 48 "/usr/include/ctype.h" 3 4
enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
# 81 "/usr/include/ctype.h" 3 4
extern __const unsigned short int **__ctype_b_loc (void)
     throw () __attribute__ ((__const));
extern __const __int32_t **__ctype_tolower_loc (void)
     throw () __attribute__ ((__const));
extern __const __int32_t **__ctype_toupper_loc (void)
     throw () __attribute__ ((__const));
# 96 "/usr/include/ctype.h" 3 4






extern int isalnum (int) throw ();
extern int isalpha (int) throw ();
extern int iscntrl (int) throw ();
extern int isdigit (int) throw ();
extern int islower (int) throw ();
extern int isgraph (int) throw ();
extern int isprint (int) throw ();
extern int ispunct (int) throw ();
extern int isspace (int) throw ();
extern int isupper (int) throw ();
extern int isxdigit (int) throw ();



extern int tolower (int __c) throw ();


extern int toupper (int __c) throw ();








extern int isblank (int) throw ();






extern int isctype (int __c, int __mask) throw ();






extern int isascii (int __c) throw ();



extern int toascii (int __c) throw ();



extern int _toupper (int) throw ();
extern int _tolower (int) throw ();
# 247 "/usr/include/ctype.h" 3 4
extern int isalnum_l (int, __locale_t) throw ();
extern int isalpha_l (int, __locale_t) throw ();
extern int iscntrl_l (int, __locale_t) throw ();
extern int isdigit_l (int, __locale_t) throw ();
extern int islower_l (int, __locale_t) throw ();
extern int isgraph_l (int, __locale_t) throw ();
extern int isprint_l (int, __locale_t) throw ();
extern int ispunct_l (int, __locale_t) throw ();
extern int isspace_l (int, __locale_t) throw ();
extern int isupper_l (int, __locale_t) throw ();
extern int isxdigit_l (int, __locale_t) throw ();

extern int isblank_l (int, __locale_t) throw ();



extern int __tolower_l (int __c, __locale_t __l) throw ();
extern int tolower_l (int __c, __locale_t __l) throw ();


extern int __toupper_l (int __c, __locale_t __l) throw ();
extern int toupper_l (int __c, __locale_t __l) throw ();
# 323 "/usr/include/ctype.h" 3 4
}
# 72 "/usr/include/SDL/SDL_stdinc.h" 2 3 4


# 1 "/usr/include/iconv.h" 1 3 4
# 24 "/usr/include/iconv.h" 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 25 "/usr/include/iconv.h" 2 3 4


extern "C" {


typedef void *iconv_t;







extern iconv_t iconv_open (__const char *__tocode, __const char *__fromcode);




extern size_t iconv (iconv_t __cd, char **__restrict __inbuf,
       size_t *__restrict __inbytesleft,
       char **__restrict __outbuf,
       size_t *__restrict __outbytesleft);





extern int iconv_close (iconv_t __cd);

}
# 75 "/usr/include/SDL/SDL_stdinc.h" 2 3 4
# 93 "/usr/include/SDL/SDL_stdinc.h" 3 4
typedef enum {
 SDL_FALSE = 0,
 SDL_TRUE = 1
} SDL_bool;

typedef int8_t Sint8;
typedef uint8_t Uint8;
typedef int16_t Sint16;
typedef uint16_t Uint16;
typedef int32_t Sint32;
typedef uint32_t Uint32;


typedef int64_t Sint64;

typedef uint64_t Uint64;
# 125 "/usr/include/SDL/SDL_stdinc.h" 3 4
typedef int SDL_dummy_uint8[(sizeof(Uint8) == 1) * 2 - 1];
typedef int SDL_dummy_sint8[(sizeof(Sint8) == 1) * 2 - 1];
typedef int SDL_dummy_uint16[(sizeof(Uint16) == 2) * 2 - 1];
typedef int SDL_dummy_sint16[(sizeof(Sint16) == 2) * 2 - 1];
typedef int SDL_dummy_uint32[(sizeof(Uint32) == 4) * 2 - 1];
typedef int SDL_dummy_sint32[(sizeof(Sint32) == 4) * 2 - 1];
typedef int SDL_dummy_uint64[(sizeof(Uint64) == 8) * 2 - 1];
typedef int SDL_dummy_sint64[(sizeof(Sint64) == 8) * 2 - 1];
# 146 "/usr/include/SDL/SDL_stdinc.h" 3 4
typedef enum {
 DUMMY_ENUM_VALUE
} SDL_DUMMY_ENUM;


typedef int SDL_dummy_enum[(sizeof(SDL_DUMMY_ENUM) == sizeof(int)) * 2 - 1];



# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 156 "/usr/include/SDL/SDL_stdinc.h" 2 3 4


extern "C" {
# 403 "/usr/include/SDL/SDL_stdinc.h" 3 4
extern __attribute__ ((visibility("default"))) size_t SDL_strlcpy(char *dst, const char *src, size_t maxlen);





extern __attribute__ ((visibility("default"))) size_t SDL_strlcat(char *dst, const char *src, size_t maxlen);
# 421 "/usr/include/SDL/SDL_stdinc.h" 3 4
extern __attribute__ ((visibility("default"))) char * SDL_strrev(char *string);





extern __attribute__ ((visibility("default"))) char * SDL_strupr(char *string);





extern __attribute__ ((visibility("default"))) char * SDL_strlwr(char *string);
# 467 "/usr/include/SDL/SDL_stdinc.h" 3 4
extern __attribute__ ((visibility("default"))) char * SDL_ltoa(long value, char *string, int radix);
# 479 "/usr/include/SDL/SDL_stdinc.h" 3 4
extern __attribute__ ((visibility("default"))) char * SDL_ultoa(unsigned long value, char *string, int radix);
# 499 "/usr/include/SDL/SDL_stdinc.h" 3 4
extern __attribute__ ((visibility("default"))) char* SDL_lltoa(Sint64 value, char *string, int radix);





extern __attribute__ ((visibility("default"))) char* SDL_ulltoa(Uint64 value, char *string, int radix);
# 605 "/usr/include/SDL/SDL_stdinc.h" 3 4
extern __attribute__ ((visibility("default"))) size_t SDL_iconv(iconv_t cd, const char **inbuf, size_t *inbytesleft, char **outbuf, size_t *outbytesleft);



extern __attribute__ ((visibility("default"))) char * SDL_iconv_string(const char *tocode, const char *fromcode, const char *inbuf, size_t inbytesleft);






}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 619 "/usr/include/SDL/SDL_stdinc.h" 2 3 4
# 27 "/usr/include/SDL/SDL_main.h" 2 3 4
# 31 "/usr/include/SDL/SDL.h" 2 3 4

# 1 "/usr/include/SDL/SDL_audio.h" 1 3 4
# 32 "/usr/include/SDL/SDL_audio.h" 3 4
# 1 "/usr/include/SDL/SDL_error.h" 1 3 4
# 33 "/usr/include/SDL/SDL_error.h" 3 4
# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 34 "/usr/include/SDL/SDL_error.h" 2 3 4


extern "C" {






extern __attribute__ ((visibility("default"))) void SDL_SetError(const char *fmt, ...);
extern __attribute__ ((visibility("default"))) char * SDL_GetError(void);
extern __attribute__ ((visibility("default"))) void SDL_ClearError(void);
# 55 "/usr/include/SDL/SDL_error.h" 3 4
typedef enum {
 SDL_ENOMEM,
 SDL_EFREAD,
 SDL_EFWRITE,
 SDL_EFSEEK,
 SDL_UNSUPPORTED,
 SDL_LASTERROR
} SDL_errorcode;
extern __attribute__ ((visibility("default"))) void SDL_Error(SDL_errorcode code);




}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 71 "/usr/include/SDL/SDL_error.h" 2 3 4
# 33 "/usr/include/SDL/SDL_audio.h" 2 3 4
# 1 "/usr/include/SDL/SDL_endian.h" 1 3 4
# 54 "/usr/include/SDL/SDL_endian.h" 3 4
# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 55 "/usr/include/SDL/SDL_endian.h" 2 3 4


extern "C" {
# 70 "/usr/include/SDL/SDL_endian.h" 3 4
static __inline__ Uint16 SDL_Swap16(Uint16 x)
{
 __asm__("xchgb %b0,%h0" : "=q" (x) : "0" (x));
 return x;
}
# 103 "/usr/include/SDL/SDL_endian.h" 3 4
static __inline__ Uint32 SDL_Swap32(Uint32 x)
{
 __asm__("bswap %0" : "=r" (x) : "0" (x));
 return x;
}
# 139 "/usr/include/SDL/SDL_endian.h" 3 4
static __inline__ Uint64 SDL_Swap64(Uint64 x)
{
 union {
  struct { Uint32 a,b; } s;
  Uint64 u;
 } v;
 v.u = x;
 __asm__("bswapl %0 ; bswapl %1 ; xchgl %0,%1"
         : "=r" (v.s.a), "=r" (v.s.b)
         : "0" (v.s.a), "1" (v.s.b));
 return v.u;
}
# 205 "/usr/include/SDL/SDL_endian.h" 3 4
}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 208 "/usr/include/SDL/SDL_endian.h" 2 3 4
# 34 "/usr/include/SDL/SDL_audio.h" 2 3 4
# 1 "/usr/include/SDL/SDL_mutex.h" 1 3 4
# 35 "/usr/include/SDL/SDL_mutex.h" 3 4
# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 36 "/usr/include/SDL/SDL_mutex.h" 2 3 4


extern "C" {
# 55 "/usr/include/SDL/SDL_mutex.h" 3 4
struct SDL_mutex;
typedef struct SDL_mutex SDL_mutex;


extern __attribute__ ((visibility("default"))) SDL_mutex * SDL_CreateMutex(void);





extern __attribute__ ((visibility("default"))) int SDL_mutexP(SDL_mutex *mutex);
# 74 "/usr/include/SDL/SDL_mutex.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_mutexV(SDL_mutex *mutex);


extern __attribute__ ((visibility("default"))) void SDL_DestroyMutex(SDL_mutex *mutex);
# 86 "/usr/include/SDL/SDL_mutex.h" 3 4
struct SDL_semaphore;
typedef struct SDL_semaphore SDL_sem;


extern __attribute__ ((visibility("default"))) SDL_sem * SDL_CreateSemaphore(Uint32 initial_value);


extern __attribute__ ((visibility("default"))) void SDL_DestroySemaphore(SDL_sem *sem);






extern __attribute__ ((visibility("default"))) int SDL_SemWait(SDL_sem *sem);





extern __attribute__ ((visibility("default"))) int SDL_SemTryWait(SDL_sem *sem);
# 115 "/usr/include/SDL/SDL_mutex.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_SemWaitTimeout(SDL_sem *sem, Uint32 ms);




extern __attribute__ ((visibility("default"))) int SDL_SemPost(SDL_sem *sem);


extern __attribute__ ((visibility("default"))) Uint32 SDL_SemValue(SDL_sem *sem);
# 133 "/usr/include/SDL/SDL_mutex.h" 3 4
struct SDL_cond;
typedef struct SDL_cond SDL_cond;



extern __attribute__ ((visibility("default"))) SDL_cond * SDL_CreateCond(void);


extern __attribute__ ((visibility("default"))) void SDL_DestroyCond(SDL_cond *cond);




extern __attribute__ ((visibility("default"))) int SDL_CondSignal(SDL_cond *cond);




extern __attribute__ ((visibility("default"))) int SDL_CondBroadcast(SDL_cond *cond);






extern __attribute__ ((visibility("default"))) int SDL_CondWait(SDL_cond *cond, SDL_mutex *mut);







extern __attribute__ ((visibility("default"))) int SDL_CondWaitTimeout(SDL_cond *cond, SDL_mutex *mutex, Uint32 ms);





}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 175 "/usr/include/SDL/SDL_mutex.h" 2 3 4
# 35 "/usr/include/SDL/SDL_audio.h" 2 3 4
# 1 "/usr/include/SDL/SDL_thread.h" 1 3 4
# 38 "/usr/include/SDL/SDL_thread.h" 3 4
# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 39 "/usr/include/SDL/SDL_thread.h" 2 3 4


extern "C" {



struct SDL_Thread;
typedef struct SDL_Thread SDL_Thread;
# 93 "/usr/include/SDL/SDL_thread.h" 3 4
extern __attribute__ ((visibility("default"))) SDL_Thread * SDL_CreateThread(int ( *fn)(void *), void *data);



extern __attribute__ ((visibility("default"))) Uint32 SDL_ThreadID(void);




extern __attribute__ ((visibility("default"))) Uint32 SDL_GetThreadID(SDL_Thread *thread);





extern __attribute__ ((visibility("default"))) void SDL_WaitThread(SDL_Thread *thread, int *status);


extern __attribute__ ((visibility("default"))) void SDL_KillThread(SDL_Thread *thread);




}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 119 "/usr/include/SDL/SDL_thread.h" 2 3 4
# 36 "/usr/include/SDL/SDL_audio.h" 2 3 4
# 1 "/usr/include/SDL/SDL_rwops.h" 1 3 4
# 34 "/usr/include/SDL/SDL_rwops.h" 3 4
# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 35 "/usr/include/SDL/SDL_rwops.h" 2 3 4


extern "C" {




typedef struct SDL_RWops {




 int ( *seek)(struct SDL_RWops *context, int offset, int whence);





 int ( *read)(struct SDL_RWops *context, void *ptr, int size, int maxnum);





 int ( *write)(struct SDL_RWops *context, const void *ptr, int size, int num);


 int ( *close)(struct SDL_RWops *context);

 Uint32 type;
 union {
# 78 "/usr/include/SDL/SDL_rwops.h" 3 4
     struct {
  int autoclose;
   FILE *fp;
     } stdio;

     struct {
  Uint8 *base;
   Uint8 *here;
  Uint8 *stop;
     } mem;
     struct {
  void *data1;
     } unknown;
 } hidden;

} SDL_RWops;





extern __attribute__ ((visibility("default"))) SDL_RWops * SDL_RWFromFile(const char *file, const char *mode);


extern __attribute__ ((visibility("default"))) SDL_RWops * SDL_RWFromFP(FILE *fp, int autoclose);


extern __attribute__ ((visibility("default"))) SDL_RWops * SDL_RWFromMem(void *mem, int size);
extern __attribute__ ((visibility("default"))) SDL_RWops * SDL_RWFromConstMem(const void *mem, int size);

extern __attribute__ ((visibility("default"))) SDL_RWops * SDL_AllocRW(void);
extern __attribute__ ((visibility("default"))) void SDL_FreeRW(SDL_RWops *area);
# 131 "/usr/include/SDL/SDL_rwops.h" 3 4
extern __attribute__ ((visibility("default"))) Uint16 SDL_ReadLE16(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) Uint16 SDL_ReadBE16(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) Uint32 SDL_ReadLE32(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) Uint32 SDL_ReadBE32(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) Uint64 SDL_ReadLE64(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) Uint64 SDL_ReadBE64(SDL_RWops *src);




extern __attribute__ ((visibility("default"))) int SDL_WriteLE16(SDL_RWops *dst, Uint16 value);
extern __attribute__ ((visibility("default"))) int SDL_WriteBE16(SDL_RWops *dst, Uint16 value);
extern __attribute__ ((visibility("default"))) int SDL_WriteLE32(SDL_RWops *dst, Uint32 value);
extern __attribute__ ((visibility("default"))) int SDL_WriteBE32(SDL_RWops *dst, Uint32 value);
extern __attribute__ ((visibility("default"))) int SDL_WriteLE64(SDL_RWops *dst, Uint64 value);
extern __attribute__ ((visibility("default"))) int SDL_WriteBE64(SDL_RWops *dst, Uint64 value);




}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 154 "/usr/include/SDL/SDL_rwops.h" 2 3 4
# 37 "/usr/include/SDL/SDL_audio.h" 2 3 4

# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 39 "/usr/include/SDL/SDL_audio.h" 2 3 4


extern "C" {
# 74 "/usr/include/SDL/SDL_audio.h" 3 4
typedef struct SDL_AudioSpec {
 int freq;
 Uint16 format;
 Uint8 channels;
 Uint8 silence;
 Uint16 samples;
 Uint16 padding;
 Uint32 size;
# 91 "/usr/include/SDL/SDL_audio.h" 3 4
 void ( *callback)(void *userdata, Uint8 *stream, int len);
 void *userdata;
} SDL_AudioSpec;
# 126 "/usr/include/SDL/SDL_audio.h" 3 4
typedef struct SDL_AudioCVT {
 int needed;
 Uint16 src_format;
 Uint16 dst_format;
 double rate_incr;
 Uint8 *buf;
 int len;
 int len_cvt;
 int len_mult;
 double len_ratio;
 void ( *filters[10])(struct SDL_AudioCVT *cvt, Uint16 format);
 int filter_index;
} SDL_AudioCVT;
# 150 "/usr/include/SDL/SDL_audio.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_AudioInit(const char *driver_name);
extern __attribute__ ((visibility("default"))) void SDL_AudioQuit(void);







extern __attribute__ ((visibility("default"))) char * SDL_AudioDriverName(char *namebuf, int maxlen);
# 178 "/usr/include/SDL/SDL_audio.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_OpenAudio(SDL_AudioSpec *desired, SDL_AudioSpec *obtained);

typedef enum {
 SDL_AUDIO_STOPPED = 0,
 SDL_AUDIO_PLAYING,
 SDL_AUDIO_PAUSED
} SDL_audiostatus;


extern __attribute__ ((visibility("default"))) SDL_audiostatus SDL_GetAudioStatus(void);
# 196 "/usr/include/SDL/SDL_audio.h" 3 4
extern __attribute__ ((visibility("default"))) void SDL_PauseAudio(int pause_on);
# 215 "/usr/include/SDL/SDL_audio.h" 3 4
extern __attribute__ ((visibility("default"))) SDL_AudioSpec * SDL_LoadWAV_RW(SDL_RWops *src, int freesrc, SDL_AudioSpec *spec, Uint8 **audio_buf, Uint32 *audio_len);
# 224 "/usr/include/SDL/SDL_audio.h" 3 4
extern __attribute__ ((visibility("default"))) void SDL_FreeWAV(Uint8 *audio_buf);
# 234 "/usr/include/SDL/SDL_audio.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_BuildAudioCVT(SDL_AudioCVT *cvt,
  Uint16 src_format, Uint8 src_channels, int src_rate,
  Uint16 dst_format, Uint8 dst_channels, int dst_rate);
# 247 "/usr/include/SDL/SDL_audio.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_ConvertAudio(SDL_AudioCVT *cvt);
# 258 "/usr/include/SDL/SDL_audio.h" 3 4
extern __attribute__ ((visibility("default"))) void SDL_MixAudio(Uint8 *dst, const Uint8 *src, Uint32 len, int volume);
# 268 "/usr/include/SDL/SDL_audio.h" 3 4
extern __attribute__ ((visibility("default"))) void SDL_LockAudio(void);
extern __attribute__ ((visibility("default"))) void SDL_UnlockAudio(void);





extern __attribute__ ((visibility("default"))) void SDL_CloseAudio(void);




}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 283 "/usr/include/SDL/SDL_audio.h" 2 3 4
# 33 "/usr/include/SDL/SDL.h" 2 3 4
# 1 "/usr/include/SDL/SDL_cdrom.h" 1 3 4
# 34 "/usr/include/SDL/SDL_cdrom.h" 3 4
# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 35 "/usr/include/SDL/SDL_cdrom.h" 2 3 4


extern "C" {
# 59 "/usr/include/SDL/SDL_cdrom.h" 3 4
typedef enum {
 CD_TRAYEMPTY,
 CD_STOPPED,
 CD_PLAYING,
 CD_PAUSED,
 CD_ERROR = -1
} CDstatus;




typedef struct SDL_CDtrack {
 Uint8 id;
 Uint8 type;
 Uint16 unused;
 Uint32 length;
 Uint32 offset;
} SDL_CDtrack;


typedef struct SDL_CD {
 int id;
 CDstatus status;



 int numtracks;
 int cur_track;
 int cur_frame;
 SDL_CDtrack track[99 +1];

} SDL_CD;
# 114 "/usr/include/SDL/SDL_cdrom.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_CDNumDrives(void);
# 123 "/usr/include/SDL/SDL_cdrom.h" 3 4
extern __attribute__ ((visibility("default"))) const char * SDL_CDName(int drive);
# 132 "/usr/include/SDL/SDL_cdrom.h" 3 4
extern __attribute__ ((visibility("default"))) SDL_CD * SDL_CDOpen(int drive);






extern __attribute__ ((visibility("default"))) CDstatus SDL_CDStatus(SDL_CD *cdrom);
# 163 "/usr/include/SDL/SDL_cdrom.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_CDPlayTracks(SDL_CD *cdrom,
  int start_track, int start_frame, int ntracks, int nframes);





extern __attribute__ ((visibility("default"))) int SDL_CDPlay(SDL_CD *cdrom, int start, int length);




extern __attribute__ ((visibility("default"))) int SDL_CDPause(SDL_CD *cdrom);




extern __attribute__ ((visibility("default"))) int SDL_CDResume(SDL_CD *cdrom);




extern __attribute__ ((visibility("default"))) int SDL_CDStop(SDL_CD *cdrom);




extern __attribute__ ((visibility("default"))) int SDL_CDEject(SDL_CD *cdrom);


extern __attribute__ ((visibility("default"))) void SDL_CDClose(SDL_CD *cdrom);




}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 201 "/usr/include/SDL/SDL_cdrom.h" 2 3 4
# 34 "/usr/include/SDL/SDL.h" 2 3 4
# 1 "/usr/include/SDL/SDL_cpuinfo.h" 1 3 4
# 33 "/usr/include/SDL/SDL_cpuinfo.h" 3 4
# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 34 "/usr/include/SDL/SDL_cpuinfo.h" 2 3 4


extern "C" {



extern __attribute__ ((visibility("default"))) SDL_bool SDL_HasRDTSC(void);


extern __attribute__ ((visibility("default"))) SDL_bool SDL_HasMMX(void);


extern __attribute__ ((visibility("default"))) SDL_bool SDL_HasMMXExt(void);


extern __attribute__ ((visibility("default"))) SDL_bool SDL_Has3DNow(void);


extern __attribute__ ((visibility("default"))) SDL_bool SDL_Has3DNowExt(void);


extern __attribute__ ((visibility("default"))) SDL_bool SDL_HasSSE(void);


extern __attribute__ ((visibility("default"))) SDL_bool SDL_HasSSE2(void);


extern __attribute__ ((visibility("default"))) SDL_bool SDL_HasAltiVec(void);



}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 68 "/usr/include/SDL/SDL_cpuinfo.h" 2 3 4
# 35 "/usr/include/SDL/SDL.h" 2 3 4


# 1 "/usr/include/SDL/SDL_events.h" 1 3 4
# 33 "/usr/include/SDL/SDL_events.h" 3 4
# 1 "/usr/include/SDL/SDL_active.h" 1 3 4
# 34 "/usr/include/SDL/SDL_active.h" 3 4
# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 35 "/usr/include/SDL/SDL_active.h" 2 3 4


extern "C" {
# 54 "/usr/include/SDL/SDL_active.h" 3 4
extern __attribute__ ((visibility("default"))) Uint8 SDL_GetAppState(void);




}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 62 "/usr/include/SDL/SDL_active.h" 2 3 4
# 34 "/usr/include/SDL/SDL_events.h" 2 3 4
# 1 "/usr/include/SDL/SDL_keyboard.h" 1 3 4
# 32 "/usr/include/SDL/SDL_keyboard.h" 3 4
# 1 "/usr/include/SDL/SDL_keysym.h" 1 3 4
# 31 "/usr/include/SDL/SDL_keysym.h" 3 4
typedef enum {




 SDLK_UNKNOWN = 0,
 SDLK_FIRST = 0,
 SDLK_BACKSPACE = 8,
 SDLK_TAB = 9,
 SDLK_CLEAR = 12,
 SDLK_RETURN = 13,
 SDLK_PAUSE = 19,
 SDLK_ESCAPE = 27,
 SDLK_SPACE = 32,
 SDLK_EXCLAIM = 33,
 SDLK_QUOTEDBL = 34,
 SDLK_HASH = 35,
 SDLK_DOLLAR = 36,
 SDLK_AMPERSAND = 38,
 SDLK_QUOTE = 39,
 SDLK_LEFTPAREN = 40,
 SDLK_RIGHTPAREN = 41,
 SDLK_ASTERISK = 42,
 SDLK_PLUS = 43,
 SDLK_COMMA = 44,
 SDLK_MINUS = 45,
 SDLK_PERIOD = 46,
 SDLK_SLASH = 47,
 SDLK_0 = 48,
 SDLK_1 = 49,
 SDLK_2 = 50,
 SDLK_3 = 51,
 SDLK_4 = 52,
 SDLK_5 = 53,
 SDLK_6 = 54,
 SDLK_7 = 55,
 SDLK_8 = 56,
 SDLK_9 = 57,
 SDLK_COLON = 58,
 SDLK_SEMICOLON = 59,
 SDLK_LESS = 60,
 SDLK_EQUALS = 61,
 SDLK_GREATER = 62,
 SDLK_QUESTION = 63,
 SDLK_AT = 64,



 SDLK_LEFTBRACKET = 91,
 SDLK_BACKSLASH = 92,
 SDLK_RIGHTBRACKET = 93,
 SDLK_CARET = 94,
 SDLK_UNDERSCORE = 95,
 SDLK_BACKQUOTE = 96,
 SDLK_a = 97,
 SDLK_b = 98,
 SDLK_c = 99,
 SDLK_d = 100,
 SDLK_e = 101,
 SDLK_f = 102,
 SDLK_g = 103,
 SDLK_h = 104,
 SDLK_i = 105,
 SDLK_j = 106,
 SDLK_k = 107,
 SDLK_l = 108,
 SDLK_m = 109,
 SDLK_n = 110,
 SDLK_o = 111,
 SDLK_p = 112,
 SDLK_q = 113,
 SDLK_r = 114,
 SDLK_s = 115,
 SDLK_t = 116,
 SDLK_u = 117,
 SDLK_v = 118,
 SDLK_w = 119,
 SDLK_x = 120,
 SDLK_y = 121,
 SDLK_z = 122,
 SDLK_DELETE = 127,





 SDLK_WORLD_0 = 160,
 SDLK_WORLD_1 = 161,
 SDLK_WORLD_2 = 162,
 SDLK_WORLD_3 = 163,
 SDLK_WORLD_4 = 164,
 SDLK_WORLD_5 = 165,
 SDLK_WORLD_6 = 166,
 SDLK_WORLD_7 = 167,
 SDLK_WORLD_8 = 168,
 SDLK_WORLD_9 = 169,
 SDLK_WORLD_10 = 170,
 SDLK_WORLD_11 = 171,
 SDLK_WORLD_12 = 172,
 SDLK_WORLD_13 = 173,
 SDLK_WORLD_14 = 174,
 SDLK_WORLD_15 = 175,
 SDLK_WORLD_16 = 176,
 SDLK_WORLD_17 = 177,
 SDLK_WORLD_18 = 178,
 SDLK_WORLD_19 = 179,
 SDLK_WORLD_20 = 180,
 SDLK_WORLD_21 = 181,
 SDLK_WORLD_22 = 182,
 SDLK_WORLD_23 = 183,
 SDLK_WORLD_24 = 184,
 SDLK_WORLD_25 = 185,
 SDLK_WORLD_26 = 186,
 SDLK_WORLD_27 = 187,
 SDLK_WORLD_28 = 188,
 SDLK_WORLD_29 = 189,
 SDLK_WORLD_30 = 190,
 SDLK_WORLD_31 = 191,
 SDLK_WORLD_32 = 192,
 SDLK_WORLD_33 = 193,
 SDLK_WORLD_34 = 194,
 SDLK_WORLD_35 = 195,
 SDLK_WORLD_36 = 196,
 SDLK_WORLD_37 = 197,
 SDLK_WORLD_38 = 198,
 SDLK_WORLD_39 = 199,
 SDLK_WORLD_40 = 200,
 SDLK_WORLD_41 = 201,
 SDLK_WORLD_42 = 202,
 SDLK_WORLD_43 = 203,
 SDLK_WORLD_44 = 204,
 SDLK_WORLD_45 = 205,
 SDLK_WORLD_46 = 206,
 SDLK_WORLD_47 = 207,
 SDLK_WORLD_48 = 208,
 SDLK_WORLD_49 = 209,
 SDLK_WORLD_50 = 210,
 SDLK_WORLD_51 = 211,
 SDLK_WORLD_52 = 212,
 SDLK_WORLD_53 = 213,
 SDLK_WORLD_54 = 214,
 SDLK_WORLD_55 = 215,
 SDLK_WORLD_56 = 216,
 SDLK_WORLD_57 = 217,
 SDLK_WORLD_58 = 218,
 SDLK_WORLD_59 = 219,
 SDLK_WORLD_60 = 220,
 SDLK_WORLD_61 = 221,
 SDLK_WORLD_62 = 222,
 SDLK_WORLD_63 = 223,
 SDLK_WORLD_64 = 224,
 SDLK_WORLD_65 = 225,
 SDLK_WORLD_66 = 226,
 SDLK_WORLD_67 = 227,
 SDLK_WORLD_68 = 228,
 SDLK_WORLD_69 = 229,
 SDLK_WORLD_70 = 230,
 SDLK_WORLD_71 = 231,
 SDLK_WORLD_72 = 232,
 SDLK_WORLD_73 = 233,
 SDLK_WORLD_74 = 234,
 SDLK_WORLD_75 = 235,
 SDLK_WORLD_76 = 236,
 SDLK_WORLD_77 = 237,
 SDLK_WORLD_78 = 238,
 SDLK_WORLD_79 = 239,
 SDLK_WORLD_80 = 240,
 SDLK_WORLD_81 = 241,
 SDLK_WORLD_82 = 242,
 SDLK_WORLD_83 = 243,
 SDLK_WORLD_84 = 244,
 SDLK_WORLD_85 = 245,
 SDLK_WORLD_86 = 246,
 SDLK_WORLD_87 = 247,
 SDLK_WORLD_88 = 248,
 SDLK_WORLD_89 = 249,
 SDLK_WORLD_90 = 250,
 SDLK_WORLD_91 = 251,
 SDLK_WORLD_92 = 252,
 SDLK_WORLD_93 = 253,
 SDLK_WORLD_94 = 254,
 SDLK_WORLD_95 = 255,




 SDLK_KP0 = 256,
 SDLK_KP1 = 257,
 SDLK_KP2 = 258,
 SDLK_KP3 = 259,
 SDLK_KP4 = 260,
 SDLK_KP5 = 261,
 SDLK_KP6 = 262,
 SDLK_KP7 = 263,
 SDLK_KP8 = 264,
 SDLK_KP9 = 265,
 SDLK_KP_PERIOD = 266,
 SDLK_KP_DIVIDE = 267,
 SDLK_KP_MULTIPLY = 268,
 SDLK_KP_MINUS = 269,
 SDLK_KP_PLUS = 270,
 SDLK_KP_ENTER = 271,
 SDLK_KP_EQUALS = 272,




 SDLK_UP = 273,
 SDLK_DOWN = 274,
 SDLK_RIGHT = 275,
 SDLK_LEFT = 276,
 SDLK_INSERT = 277,
 SDLK_HOME = 278,
 SDLK_END = 279,
 SDLK_PAGEUP = 280,
 SDLK_PAGEDOWN = 281,




 SDLK_F1 = 282,
 SDLK_F2 = 283,
 SDLK_F3 = 284,
 SDLK_F4 = 285,
 SDLK_F5 = 286,
 SDLK_F6 = 287,
 SDLK_F7 = 288,
 SDLK_F8 = 289,
 SDLK_F9 = 290,
 SDLK_F10 = 291,
 SDLK_F11 = 292,
 SDLK_F12 = 293,
 SDLK_F13 = 294,
 SDLK_F14 = 295,
 SDLK_F15 = 296,




 SDLK_NUMLOCK = 300,
 SDLK_CAPSLOCK = 301,
 SDLK_SCROLLOCK = 302,
 SDLK_RSHIFT = 303,
 SDLK_LSHIFT = 304,
 SDLK_RCTRL = 305,
 SDLK_LCTRL = 306,
 SDLK_RALT = 307,
 SDLK_LALT = 308,
 SDLK_RMETA = 309,
 SDLK_LMETA = 310,
 SDLK_LSUPER = 311,
 SDLK_RSUPER = 312,
 SDLK_MODE = 313,
 SDLK_COMPOSE = 314,




 SDLK_HELP = 315,
 SDLK_PRINT = 316,
 SDLK_SYSREQ = 317,
 SDLK_BREAK = 318,
 SDLK_MENU = 319,
 SDLK_POWER = 320,
 SDLK_EURO = 321,
 SDLK_UNDO = 322,




 SDLK_LAST
} SDLKey;


typedef enum {
 KMOD_NONE = 0x0000,
 KMOD_LSHIFT= 0x0001,
 KMOD_RSHIFT= 0x0002,
 KMOD_LCTRL = 0x0040,
 KMOD_RCTRL = 0x0080,
 KMOD_LALT = 0x0100,
 KMOD_RALT = 0x0200,
 KMOD_LMETA = 0x0400,
 KMOD_RMETA = 0x0800,
 KMOD_NUM = 0x1000,
 KMOD_CAPS = 0x2000,
 KMOD_MODE = 0x4000,
 KMOD_RESERVED = 0x8000
} SDLMod;
# 33 "/usr/include/SDL/SDL_keyboard.h" 2 3 4

# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 35 "/usr/include/SDL/SDL_keyboard.h" 2 3 4


extern "C" {
# 59 "/usr/include/SDL/SDL_keyboard.h" 3 4
typedef struct SDL_keysym {
 Uint8 scancode;
 SDLKey sym;
 SDLMod mod;
 Uint16 unicode;
} SDL_keysym;
# 82 "/usr/include/SDL/SDL_keyboard.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_EnableUNICODE(int enable);
# 98 "/usr/include/SDL/SDL_keyboard.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_EnableKeyRepeat(int delay, int interval);
extern __attribute__ ((visibility("default"))) void SDL_GetKeyRepeat(int *delay, int *interval);
# 110 "/usr/include/SDL/SDL_keyboard.h" 3 4
extern __attribute__ ((visibility("default"))) Uint8 * SDL_GetKeyState(int *numkeys);




extern __attribute__ ((visibility("default"))) SDLMod SDL_GetModState(void);





extern __attribute__ ((visibility("default"))) void SDL_SetModState(SDLMod modstate);




extern __attribute__ ((visibility("default"))) char * SDL_GetKeyName(SDLKey key);




}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 134 "/usr/include/SDL/SDL_keyboard.h" 2 3 4
# 35 "/usr/include/SDL/SDL_events.h" 2 3 4
# 1 "/usr/include/SDL/SDL_mouse.h" 1 3 4
# 32 "/usr/include/SDL/SDL_mouse.h" 3 4
# 1 "/usr/include/SDL/SDL_video.h" 1 3 4
# 34 "/usr/include/SDL/SDL_video.h" 3 4
# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 35 "/usr/include/SDL/SDL_video.h" 2 3 4


extern "C" {
# 50 "/usr/include/SDL/SDL_video.h" 3 4
typedef struct SDL_Rect {
 Sint16 x, y;
 Uint16 w, h;
} SDL_Rect;

typedef struct SDL_Color {
 Uint8 r;
 Uint8 g;
 Uint8 b;
 Uint8 unused;
} SDL_Color;


typedef struct SDL_Palette {
 int ncolors;
 SDL_Color *colors;
} SDL_Palette;



typedef struct SDL_PixelFormat {
 SDL_Palette *palette;
 Uint8 BitsPerPixel;
 Uint8 BytesPerPixel;
 Uint8 Rloss;
 Uint8 Gloss;
 Uint8 Bloss;
 Uint8 Aloss;
 Uint8 Rshift;
 Uint8 Gshift;
 Uint8 Bshift;
 Uint8 Ashift;
 Uint32 Rmask;
 Uint32 Gmask;
 Uint32 Bmask;
 Uint32 Amask;


 Uint32 colorkey;

 Uint8 alpha;
} SDL_PixelFormat;




typedef struct SDL_Surface {
 Uint32 flags;
 SDL_PixelFormat *format;
 int w, h;
 Uint16 pitch;
 void *pixels;
 int offset;


 struct private_hwdata *hwdata;


 SDL_Rect clip_rect;
 Uint32 unused1;


 Uint32 locked;


 struct SDL_BlitMap *map;


 unsigned int format_version;


 int refcount;
} SDL_Surface;
# 166 "/usr/include/SDL/SDL_video.h" 3 4
typedef int (*SDL_blit)(struct SDL_Surface *src, SDL_Rect *srcrect,
   struct SDL_Surface *dst, SDL_Rect *dstrect);



typedef struct SDL_VideoInfo {
 Uint32 hw_available :1;
 Uint32 wm_available :1;
 Uint32 UnusedBits1 :6;
 Uint32 UnusedBits2 :1;
 Uint32 blit_hw :1;
 Uint32 blit_hw_CC :1;
 Uint32 blit_hw_A :1;
 Uint32 blit_sw :1;
 Uint32 blit_sw_CC :1;
 Uint32 blit_sw_A :1;
 Uint32 blit_fill :1;
 Uint32 UnusedBits3 :16;
 Uint32 video_mem;
 SDL_PixelFormat *vfmt;
 int current_w;
 int current_h;
} SDL_VideoInfo;
# 208 "/usr/include/SDL/SDL_video.h" 3 4
typedef struct SDL_Overlay {
 Uint32 format;
 int w, h;
 int planes;
 Uint16 *pitches;
 Uint8 **pixels;



 struct private_yuvhwfuncs *hwfuncs;
 struct private_yuvhwdata *hwdata;




 Uint32 hw_overlay :1;
 Uint32 UnusedBits :31;

} SDL_Overlay;



typedef enum {
    SDL_GL_RED_SIZE,
    SDL_GL_GREEN_SIZE,
    SDL_GL_BLUE_SIZE,
    SDL_GL_ALPHA_SIZE,
    SDL_GL_BUFFER_SIZE,
    SDL_GL_DOUBLEBUFFER,
    SDL_GL_DEPTH_SIZE,
    SDL_GL_STENCIL_SIZE,
    SDL_GL_ACCUM_RED_SIZE,
    SDL_GL_ACCUM_GREEN_SIZE,
    SDL_GL_ACCUM_BLUE_SIZE,
    SDL_GL_ACCUM_ALPHA_SIZE,
    SDL_GL_STEREO,
    SDL_GL_MULTISAMPLEBUFFERS,
    SDL_GL_MULTISAMPLESAMPLES,
    SDL_GL_ACCELERATED_VISUAL,
    SDL_GL_SWAP_CONTROL
} SDL_GLattr;
# 275 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_VideoInit(const char *driver_name, Uint32 flags);
extern __attribute__ ((visibility("default"))) void SDL_VideoQuit(void);







extern __attribute__ ((visibility("default"))) char * SDL_VideoDriverName(char *namebuf, int maxlen);







extern __attribute__ ((visibility("default"))) SDL_Surface * SDL_GetVideoSurface(void);







extern __attribute__ ((visibility("default"))) const SDL_VideoInfo * SDL_GetVideoInfo(void);
# 313 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_VideoModeOK(int width, int height, int bpp, Uint32 flags);
# 324 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) SDL_Rect ** SDL_ListModes(SDL_PixelFormat *format, Uint32 flags);
# 384 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) SDL_Surface * SDL_SetVideoMode
   (int width, int height, int bpp, Uint32 flags);
# 394 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) void SDL_UpdateRects
  (SDL_Surface *screen, int numrects, SDL_Rect *rects);




extern __attribute__ ((visibility("default"))) void SDL_UpdateRect
  (SDL_Surface *screen, Sint32 x, Sint32 y, Uint32 w, Uint32 h);
# 414 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_Flip(SDL_Surface *screen);
# 424 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_SetGamma(float red, float green, float blue);
# 438 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_SetGammaRamp(const Uint16 *red, const Uint16 *green, const Uint16 *blue);
# 449 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_GetGammaRamp(Uint16 *red, Uint16 *green, Uint16 *blue);
# 466 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_SetColors(SDL_Surface *surface,
   SDL_Color *colors, int firstcolor, int ncolors);
# 485 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_SetPalette(SDL_Surface *surface, int flags,
       SDL_Color *colors, int firstcolor,
       int ncolors);




extern __attribute__ ((visibility("default"))) Uint32 SDL_MapRGB
(const SDL_PixelFormat * const format,
 const Uint8 r, const Uint8 g, const Uint8 b);




extern __attribute__ ((visibility("default"))) Uint32 SDL_MapRGBA
(const SDL_PixelFormat * const format,
 const Uint8 r, const Uint8 g, const Uint8 b, const Uint8 a);




extern __attribute__ ((visibility("default"))) void SDL_GetRGB(Uint32 pixel,
    const SDL_PixelFormat * const fmt,
    Uint8 *r, Uint8 *g, Uint8 *b);




extern __attribute__ ((visibility("default"))) void SDL_GetRGBA(Uint32 pixel,
    const SDL_PixelFormat * const fmt,
    Uint8 *r, Uint8 *g, Uint8 *b, Uint8 *a);
# 553 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) SDL_Surface * SDL_CreateRGBSurface
   (Uint32 flags, int width, int height, int depth,
   Uint32 Rmask, Uint32 Gmask, Uint32 Bmask, Uint32 Amask);

extern __attribute__ ((visibility("default"))) SDL_Surface * SDL_CreateRGBSurfaceFrom(void *pixels,
   int width, int height, int depth, int pitch,
   Uint32 Rmask, Uint32 Gmask, Uint32 Bmask, Uint32 Amask);
extern __attribute__ ((visibility("default"))) void SDL_FreeSurface(SDL_Surface *surface);
# 580 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_LockSurface(SDL_Surface *surface);
extern __attribute__ ((visibility("default"))) void SDL_UnlockSurface(SDL_Surface *surface);







extern __attribute__ ((visibility("default"))) SDL_Surface * SDL_LoadBMP_RW(SDL_RWops *src, int freesrc);
# 599 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_SaveBMP_RW
  (SDL_Surface *surface, SDL_RWops *dst, int freedst);
# 615 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_SetColorKey
   (SDL_Surface *surface, Uint32 flag, Uint32 key);
# 633 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_SetAlpha(SDL_Surface *surface, Uint32 flag, Uint8 alpha);
# 647 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) SDL_bool SDL_SetClipRect(SDL_Surface *surface, const SDL_Rect *rect);






extern __attribute__ ((visibility("default"))) void SDL_GetClipRect(SDL_Surface *surface, SDL_Rect *rect);
# 668 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) SDL_Surface * SDL_ConvertSurface
   (SDL_Surface *src, SDL_PixelFormat *fmt, Uint32 flags);
# 748 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_UpperBlit
   (SDL_Surface *src, SDL_Rect *srcrect,
    SDL_Surface *dst, SDL_Rect *dstrect);



extern __attribute__ ((visibility("default"))) int SDL_LowerBlit
   (SDL_Surface *src, SDL_Rect *srcrect,
    SDL_Surface *dst, SDL_Rect *dstrect);
# 767 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_FillRect
  (SDL_Surface *dst, SDL_Rect *dstrect, Uint32 color);
# 781 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) SDL_Surface * SDL_DisplayFormat(SDL_Surface *surface);
# 795 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) SDL_Surface * SDL_DisplayFormatAlpha(SDL_Surface *surface);
# 807 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) SDL_Overlay * SDL_CreateYUVOverlay(int width, int height,
    Uint32 format, SDL_Surface *display);


extern __attribute__ ((visibility("default"))) int SDL_LockYUVOverlay(SDL_Overlay *overlay);
extern __attribute__ ((visibility("default"))) void SDL_UnlockYUVOverlay(SDL_Overlay *overlay);







extern __attribute__ ((visibility("default"))) int SDL_DisplayYUVOverlay(SDL_Overlay *overlay, SDL_Rect *dstrect);


extern __attribute__ ((visibility("default"))) void SDL_FreeYUVOverlay(SDL_Overlay *overlay);
# 837 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_GL_LoadLibrary(const char *path);




extern __attribute__ ((visibility("default"))) void * SDL_GL_GetProcAddress(const char* proc);




extern __attribute__ ((visibility("default"))) int SDL_GL_SetAttribute(SDL_GLattr attr, int value);
# 858 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_GL_GetAttribute(SDL_GLattr attr, int* value);




extern __attribute__ ((visibility("default"))) void SDL_GL_SwapBuffers(void);






extern __attribute__ ((visibility("default"))) void SDL_GL_UpdateRects(int numrects, SDL_Rect* rects);
extern __attribute__ ((visibility("default"))) void SDL_GL_Lock(void);
extern __attribute__ ((visibility("default"))) void SDL_GL_Unlock(void);
# 885 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) void SDL_WM_SetCaption(const char *title, const char *icon);



extern __attribute__ ((visibility("default"))) void SDL_WM_GetCaption(char **title, char **icon);







extern __attribute__ ((visibility("default"))) void SDL_WM_SetIcon(SDL_Surface *icon, Uint8 *mask);






extern __attribute__ ((visibility("default"))) int SDL_WM_IconifyWindow(void);
# 921 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_WM_ToggleFullScreen(SDL_Surface *surface);

typedef enum {
 SDL_GRAB_QUERY = -1,
 SDL_GRAB_OFF = 0,
 SDL_GRAB_ON = 1,
 SDL_GRAB_FULLSCREEN
} SDL_GrabMode;
# 937 "/usr/include/SDL/SDL_video.h" 3 4
extern __attribute__ ((visibility("default"))) SDL_GrabMode SDL_WM_GrabInput(SDL_GrabMode mode);




extern __attribute__ ((visibility("default"))) int SDL_SoftStretch(SDL_Surface *src, SDL_Rect *srcrect,
                                    SDL_Surface *dst, SDL_Rect *dstrect);



}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 950 "/usr/include/SDL/SDL_video.h" 2 3 4
# 33 "/usr/include/SDL/SDL_mouse.h" 2 3 4

# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 35 "/usr/include/SDL/SDL_mouse.h" 2 3 4


extern "C" {


typedef struct WMcursor WMcursor;
typedef struct SDL_Cursor {
 SDL_Rect area;
 Sint16 hot_x, hot_y;
 Uint8 *data;
 Uint8 *mask;
 Uint8 *save[2];
 WMcursor *wm_cursor;
} SDL_Cursor;
# 57 "/usr/include/SDL/SDL_mouse.h" 3 4
extern __attribute__ ((visibility("default"))) Uint8 SDL_GetMouseState(int *x, int *y);







extern __attribute__ ((visibility("default"))) Uint8 SDL_GetRelativeMouseState(int *x, int *y);




extern __attribute__ ((visibility("default"))) void SDL_WarpMouse(Uint16 x, Uint16 y);
# 85 "/usr/include/SDL/SDL_mouse.h" 3 4
extern __attribute__ ((visibility("default"))) SDL_Cursor * SDL_CreateCursor
  (Uint8 *data, Uint8 *mask, int w, int h, int hot_x, int hot_y);






extern __attribute__ ((visibility("default"))) void SDL_SetCursor(SDL_Cursor *cursor);




extern __attribute__ ((visibility("default"))) SDL_Cursor * SDL_GetCursor(void);




extern __attribute__ ((visibility("default"))) void SDL_FreeCursor(SDL_Cursor *cursor);
# 112 "/usr/include/SDL/SDL_mouse.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_ShowCursor(int toggle);
# 139 "/usr/include/SDL/SDL_mouse.h" 3 4
}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 142 "/usr/include/SDL/SDL_mouse.h" 2 3 4
# 36 "/usr/include/SDL/SDL_events.h" 2 3 4
# 1 "/usr/include/SDL/SDL_joystick.h" 1 3 4
# 33 "/usr/include/SDL/SDL_joystick.h" 3 4
# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 34 "/usr/include/SDL/SDL_joystick.h" 2 3 4


extern "C" {
# 46 "/usr/include/SDL/SDL_joystick.h" 3 4
struct _SDL_Joystick;
typedef struct _SDL_Joystick SDL_Joystick;





extern __attribute__ ((visibility("default"))) int SDL_NumJoysticks(void);







extern __attribute__ ((visibility("default"))) const char * SDL_JoystickName(int device_index);
# 73 "/usr/include/SDL/SDL_joystick.h" 3 4
extern __attribute__ ((visibility("default"))) SDL_Joystick * SDL_JoystickOpen(int device_index);




extern __attribute__ ((visibility("default"))) int SDL_JoystickOpened(int device_index);




extern __attribute__ ((visibility("default"))) int SDL_JoystickIndex(SDL_Joystick *joystick);




extern __attribute__ ((visibility("default"))) int SDL_JoystickNumAxes(SDL_Joystick *joystick);







extern __attribute__ ((visibility("default"))) int SDL_JoystickNumBalls(SDL_Joystick *joystick);




extern __attribute__ ((visibility("default"))) int SDL_JoystickNumHats(SDL_Joystick *joystick);




extern __attribute__ ((visibility("default"))) int SDL_JoystickNumButtons(SDL_Joystick *joystick);







extern __attribute__ ((visibility("default"))) void SDL_JoystickUpdate(void);
# 125 "/usr/include/SDL/SDL_joystick.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_JoystickEventState(int state);
# 134 "/usr/include/SDL/SDL_joystick.h" 3 4
extern __attribute__ ((visibility("default"))) Sint16 SDL_JoystickGetAxis(SDL_Joystick *joystick, int axis);
# 157 "/usr/include/SDL/SDL_joystick.h" 3 4
extern __attribute__ ((visibility("default"))) Uint8 SDL_JoystickGetHat(SDL_Joystick *joystick, int hat);
# 166 "/usr/include/SDL/SDL_joystick.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_JoystickGetBall(SDL_Joystick *joystick, int ball, int *dx, int *dy);






extern __attribute__ ((visibility("default"))) Uint8 SDL_JoystickGetButton(SDL_Joystick *joystick, int button);




extern __attribute__ ((visibility("default"))) void SDL_JoystickClose(SDL_Joystick *joystick);




}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 186 "/usr/include/SDL/SDL_joystick.h" 2 3 4
# 37 "/usr/include/SDL/SDL_events.h" 2 3 4
# 1 "/usr/include/SDL/SDL_quit.h" 1 3 4
# 38 "/usr/include/SDL/SDL_events.h" 2 3 4

# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 40 "/usr/include/SDL/SDL_events.h" 2 3 4


extern "C" {
# 52 "/usr/include/SDL/SDL_events.h" 3 4
typedef enum {
       SDL_NOEVENT = 0,
       SDL_ACTIVEEVENT,
       SDL_KEYDOWN,
       SDL_KEYUP,
       SDL_MOUSEMOTION,
       SDL_MOUSEBUTTONDOWN,
       SDL_MOUSEBUTTONUP,
       SDL_JOYAXISMOTION,
       SDL_JOYBALLMOTION,
       SDL_JOYHATMOTION,
       SDL_JOYBUTTONDOWN,
       SDL_JOYBUTTONUP,
       SDL_QUIT,
       SDL_SYSWMEVENT,
       SDL_EVENT_RESERVEDA,
       SDL_EVENT_RESERVEDB,
       SDL_VIDEORESIZE,
       SDL_VIDEOEXPOSE,
       SDL_EVENT_RESERVED2,
       SDL_EVENT_RESERVED3,
       SDL_EVENT_RESERVED4,
       SDL_EVENT_RESERVED5,
       SDL_EVENT_RESERVED6,
       SDL_EVENT_RESERVED7,

       SDL_USEREVENT = 24,



       SDL_NUMEVENTS = 32
} SDL_EventType;




typedef enum {
 SDL_ACTIVEEVENTMASK = (1<<(SDL_ACTIVEEVENT)),
 SDL_KEYDOWNMASK = (1<<(SDL_KEYDOWN)),
 SDL_KEYUPMASK = (1<<(SDL_KEYUP)),
 SDL_KEYEVENTMASK = (1<<(SDL_KEYDOWN))|
                           (1<<(SDL_KEYUP)),
 SDL_MOUSEMOTIONMASK = (1<<(SDL_MOUSEMOTION)),
 SDL_MOUSEBUTTONDOWNMASK = (1<<(SDL_MOUSEBUTTONDOWN)),
 SDL_MOUSEBUTTONUPMASK = (1<<(SDL_MOUSEBUTTONUP)),
 SDL_MOUSEEVENTMASK = (1<<(SDL_MOUSEMOTION))|
                           (1<<(SDL_MOUSEBUTTONDOWN))|
                           (1<<(SDL_MOUSEBUTTONUP)),
 SDL_JOYAXISMOTIONMASK = (1<<(SDL_JOYAXISMOTION)),
 SDL_JOYBALLMOTIONMASK = (1<<(SDL_JOYBALLMOTION)),
 SDL_JOYHATMOTIONMASK = (1<<(SDL_JOYHATMOTION)),
 SDL_JOYBUTTONDOWNMASK = (1<<(SDL_JOYBUTTONDOWN)),
 SDL_JOYBUTTONUPMASK = (1<<(SDL_JOYBUTTONUP)),
 SDL_JOYEVENTMASK = (1<<(SDL_JOYAXISMOTION))|
                           (1<<(SDL_JOYBALLMOTION))|
                           (1<<(SDL_JOYHATMOTION))|
                           (1<<(SDL_JOYBUTTONDOWN))|
                           (1<<(SDL_JOYBUTTONUP)),
 SDL_VIDEORESIZEMASK = (1<<(SDL_VIDEORESIZE)),
 SDL_VIDEOEXPOSEMASK = (1<<(SDL_VIDEOEXPOSE)),
 SDL_QUITMASK = (1<<(SDL_QUIT)),
 SDL_SYSWMEVENTMASK = (1<<(SDL_SYSWMEVENT))
} SDL_EventMask ;




typedef struct SDL_ActiveEvent {
 Uint8 type;
 Uint8 gain;
 Uint8 state;
} SDL_ActiveEvent;


typedef struct SDL_KeyboardEvent {
 Uint8 type;
 Uint8 which;
 Uint8 state;
 SDL_keysym keysym;
} SDL_KeyboardEvent;


typedef struct SDL_MouseMotionEvent {
 Uint8 type;
 Uint8 which;
 Uint8 state;
 Uint16 x, y;
 Sint16 xrel;
 Sint16 yrel;
} SDL_MouseMotionEvent;


typedef struct SDL_MouseButtonEvent {
 Uint8 type;
 Uint8 which;
 Uint8 button;
 Uint8 state;
 Uint16 x, y;
} SDL_MouseButtonEvent;


typedef struct SDL_JoyAxisEvent {
 Uint8 type;
 Uint8 which;
 Uint8 axis;
 Sint16 value;
} SDL_JoyAxisEvent;


typedef struct SDL_JoyBallEvent {
 Uint8 type;
 Uint8 which;
 Uint8 ball;
 Sint16 xrel;
 Sint16 yrel;
} SDL_JoyBallEvent;


typedef struct SDL_JoyHatEvent {
 Uint8 type;
 Uint8 which;
 Uint8 hat;
 Uint8 value;





} SDL_JoyHatEvent;


typedef struct SDL_JoyButtonEvent {
 Uint8 type;
 Uint8 which;
 Uint8 button;
 Uint8 state;
} SDL_JoyButtonEvent;





typedef struct SDL_ResizeEvent {
 Uint8 type;
 int w;
 int h;
} SDL_ResizeEvent;


typedef struct SDL_ExposeEvent {
 Uint8 type;
} SDL_ExposeEvent;


typedef struct SDL_QuitEvent {
 Uint8 type;
} SDL_QuitEvent;


typedef struct SDL_UserEvent {
 Uint8 type;
 int code;
 void *data1;
 void *data2;
} SDL_UserEvent;


struct SDL_SysWMmsg;
typedef struct SDL_SysWMmsg SDL_SysWMmsg;
typedef struct SDL_SysWMEvent {
 Uint8 type;
 SDL_SysWMmsg *msg;
} SDL_SysWMEvent;


typedef union SDL_Event {
 Uint8 type;
 SDL_ActiveEvent active;
 SDL_KeyboardEvent key;
 SDL_MouseMotionEvent motion;
 SDL_MouseButtonEvent button;
 SDL_JoyAxisEvent jaxis;
 SDL_JoyBallEvent jball;
 SDL_JoyHatEvent jhat;
 SDL_JoyButtonEvent jbutton;
 SDL_ResizeEvent resize;
 SDL_ExposeEvent expose;
 SDL_QuitEvent quit;
 SDL_UserEvent user;
 SDL_SysWMEvent syswm;
} SDL_Event;
# 251 "/usr/include/SDL/SDL_events.h" 3 4
extern __attribute__ ((visibility("default"))) void SDL_PumpEvents(void);

typedef enum {
 SDL_ADDEVENT,
 SDL_PEEKEVENT,
 SDL_GETEVENT
} SDL_eventaction;
# 277 "/usr/include/SDL/SDL_events.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_PeepEvents(SDL_Event *events, int numevents,
    SDL_eventaction action, Uint32 mask);





extern __attribute__ ((visibility("default"))) int SDL_PollEvent(SDL_Event *event);





extern __attribute__ ((visibility("default"))) int SDL_WaitEvent(SDL_Event *event);





extern __attribute__ ((visibility("default"))) int SDL_PushEvent(SDL_Event *event);



typedef int ( *SDL_EventFilter)(const SDL_Event *event);
# 323 "/usr/include/SDL/SDL_events.h" 3 4
extern __attribute__ ((visibility("default"))) void SDL_SetEventFilter(SDL_EventFilter filter);





extern __attribute__ ((visibility("default"))) SDL_EventFilter SDL_GetEventFilter(void);
# 348 "/usr/include/SDL/SDL_events.h" 3 4
extern __attribute__ ((visibility("default"))) Uint8 SDL_EventState(Uint8 type, int state);



}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 355 "/usr/include/SDL/SDL_events.h" 2 3 4
# 38 "/usr/include/SDL/SDL.h" 2 3 4
# 1 "/usr/include/SDL/SDL_loadso.h" 1 3 4
# 49 "/usr/include/SDL/SDL_loadso.h" 3 4
# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 50 "/usr/include/SDL/SDL_loadso.h" 2 3 4


extern "C" {







extern __attribute__ ((visibility("default"))) void * SDL_LoadObject(const char *sofile);






extern __attribute__ ((visibility("default"))) void * SDL_LoadFunction(void *handle, const char *name);


extern __attribute__ ((visibility("default"))) void SDL_UnloadObject(void *handle);



}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 77 "/usr/include/SDL/SDL_loadso.h" 2 3 4
# 39 "/usr/include/SDL/SDL.h" 2 3 4



# 1 "/usr/include/SDL/SDL_timer.h" 1 3 4
# 33 "/usr/include/SDL/SDL_timer.h" 3 4
# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 34 "/usr/include/SDL/SDL_timer.h" 2 3 4


extern "C" {
# 49 "/usr/include/SDL/SDL_timer.h" 3 4
extern __attribute__ ((visibility("default"))) Uint32 SDL_GetTicks(void);


extern __attribute__ ((visibility("default"))) void SDL_Delay(Uint32 ms);


typedef Uint32 ( *SDL_TimerCallback)(Uint32 interval);
# 86 "/usr/include/SDL/SDL_timer.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_SetTimer(Uint32 interval, SDL_TimerCallback callback);
# 101 "/usr/include/SDL/SDL_timer.h" 3 4
typedef Uint32 ( *SDL_NewTimerCallback)(Uint32 interval, void *param);


typedef struct _SDL_TimerID *SDL_TimerID;




extern __attribute__ ((visibility("default"))) SDL_TimerID SDL_AddTimer(Uint32 interval, SDL_NewTimerCallback callback, void *param);





extern __attribute__ ((visibility("default"))) SDL_bool SDL_RemoveTimer(SDL_TimerID t);





}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 124 "/usr/include/SDL/SDL_timer.h" 2 3 4
# 43 "/usr/include/SDL/SDL.h" 2 3 4

# 1 "/usr/include/SDL/SDL_version.h" 1 3 4
# 32 "/usr/include/SDL/SDL_version.h" 3 4
# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 33 "/usr/include/SDL/SDL_version.h" 2 3 4


extern "C" {
# 47 "/usr/include/SDL/SDL_version.h" 3 4
typedef struct SDL_version {
 Uint8 major;
 Uint8 minor;
 Uint8 patch;
} SDL_version;
# 83 "/usr/include/SDL/SDL_version.h" 3 4
extern __attribute__ ((visibility("default"))) const SDL_version * SDL_Linked_Version(void);



}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 90 "/usr/include/SDL/SDL_version.h" 2 3 4
# 45 "/usr/include/SDL/SDL.h" 2 3 4

# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 47 "/usr/include/SDL/SDL.h" 2 3 4


extern "C" {
# 76 "/usr/include/SDL/SDL.h" 3 4
extern __attribute__ ((visibility("default"))) int SDL_Init(Uint32 flags);


extern __attribute__ ((visibility("default"))) int SDL_InitSubSystem(Uint32 flags);


extern __attribute__ ((visibility("default"))) void SDL_QuitSubSystem(Uint32 flags);





extern __attribute__ ((visibility("default"))) Uint32 SDL_WasInit(Uint32 flags);




extern __attribute__ ((visibility("default"))) void SDL_Quit(void);



}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 100 "/usr/include/SDL/SDL.h" 2 3 4
# 11 "src/gamebase.h" 2
# 1 "/usr/include/SDL/SDL_image.h" 1 3 4
# 28 "/usr/include/SDL/SDL_image.h" 3 4
# 1 "/usr/include/SDL/SDL.h" 1 3 4
# 29 "/usr/include/SDL/SDL_image.h" 2 3 4

# 1 "/usr/include/SDL/begin_code.h" 1 3 4
# 31 "/usr/include/SDL/SDL_image.h" 2 3 4



extern "C" {
# 57 "/usr/include/SDL/SDL_image.h" 3 4
extern __attribute__ ((visibility("default"))) const SDL_version * IMG_Linked_Version(void);

typedef enum
{
    IMG_INIT_JPG = 0x00000001,
    IMG_INIT_PNG = 0x00000002,
    IMG_INIT_TIF = 0x00000004
} IMG_InitFlags;





extern __attribute__ ((visibility("default"))) int IMG_Init(int flags);


extern __attribute__ ((visibility("default"))) void IMG_Quit(void);
# 83 "/usr/include/SDL/SDL_image.h" 3 4
extern __attribute__ ((visibility("default"))) SDL_Surface * IMG_LoadTyped_RW(SDL_RWops *src, int freesrc, char *type);

extern __attribute__ ((visibility("default"))) SDL_Surface * IMG_Load(const char *file);
extern __attribute__ ((visibility("default"))) SDL_Surface * IMG_Load_RW(SDL_RWops *src, int freesrc);




extern __attribute__ ((visibility("default"))) int IMG_InvertAlpha(int on);


extern __attribute__ ((visibility("default"))) int IMG_isICO(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) int IMG_isCUR(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) int IMG_isBMP(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) int IMG_isGIF(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) int IMG_isJPG(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) int IMG_isLBM(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) int IMG_isPCX(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) int IMG_isPNG(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) int IMG_isPNM(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) int IMG_isTIF(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) int IMG_isXCF(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) int IMG_isXPM(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) int IMG_isXV(SDL_RWops *src);


extern __attribute__ ((visibility("default"))) SDL_Surface * IMG_LoadICO_RW(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) SDL_Surface * IMG_LoadCUR_RW(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) SDL_Surface * IMG_LoadBMP_RW(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) SDL_Surface * IMG_LoadGIF_RW(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) SDL_Surface * IMG_LoadJPG_RW(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) SDL_Surface * IMG_LoadLBM_RW(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) SDL_Surface * IMG_LoadPCX_RW(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) SDL_Surface * IMG_LoadPNG_RW(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) SDL_Surface * IMG_LoadPNM_RW(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) SDL_Surface * IMG_LoadTGA_RW(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) SDL_Surface * IMG_LoadTIF_RW(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) SDL_Surface * IMG_LoadXCF_RW(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) SDL_Surface * IMG_LoadXPM_RW(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) SDL_Surface * IMG_LoadXV_RW(SDL_RWops *src);

extern __attribute__ ((visibility("default"))) SDL_Surface * IMG_ReadXPMFromArray(char **xpm);







}

# 1 "/usr/include/SDL/close_code.h" 1 3 4
# 135 "/usr/include/SDL/SDL_image.h" 2 3 4
# 12 "src/gamebase.h" 2
# 1 "/usr/include/SDL/SDL_framerate.h" 1 3 4
# 15 "/usr/include/SDL/SDL_framerate.h" 3 4
extern "C" {
# 32 "/usr/include/SDL/SDL_framerate.h" 3 4
    typedef struct {
 Uint32 framecount;
 float rateticks;
 Uint32 lastticks;
 Uint32 rate;
    } FPSmanager;
# 56 "/usr/include/SDL/SDL_framerate.h" 3 4
    extern void SDL_initFramerate(FPSmanager * manager);
    extern int SDL_setFramerate(FPSmanager * manager, int rate);
    extern int SDL_getFramerate(FPSmanager * manager);
    extern void SDL_framerateDelay(FPSmanager * manager);





}
# 13 "src/gamebase.h" 2
# 1 "/usr/include/gc/gc_cpp.h" 1 3 4
# 134 "/usr/include/gc/gc_cpp.h" 3 4
# 1 "/usr/include/gc/gc.h" 1 3 4
# 33 "/usr/include/gc/gc.h" 3 4
# 1 "/usr/include/gc/gc_config_macros.h" 1 3 4
# 126 "/usr/include/gc/gc_config_macros.h" 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 127 "/usr/include/gc/gc_config_macros.h" 2 3 4
# 34 "/usr/include/gc/gc.h" 2 3 4



    typedef void * GC_PTR;
# 46 "/usr/include/gc/gc.h" 3 4
    extern "C" {
# 58 "/usr/include/gc/gc.h" 3 4
  typedef unsigned long GC_word;
  typedef long GC_signed_word;
# 70 "/usr/include/gc/gc.h" 3 4
extern GC_word GC_gc_no;


extern int GC_parallel;
# 86 "/usr/include/gc/gc.h" 3 4
extern GC_PTR (*GC_oom_fn) (size_t bytes_requested);
# 95 "/usr/include/gc/gc.h" 3 4
extern int GC_find_leak;





extern int GC_all_interior_pointers;
# 113 "/usr/include/gc/gc.h" 3 4
extern int GC_quiet;




extern int GC_finalize_on_demand;






extern int GC_java_finalization;






extern void (* GC_finalizer_notifier) (void);
# 141 "/usr/include/gc/gc.h" 3 4
extern int GC_dont_gc;
# 150 "/usr/include/gc/gc.h" 3 4
extern int GC_dont_expand;



extern int GC_use_entire_heap;
# 165 "/usr/include/gc/gc.h" 3 4
extern int GC_full_freq;
# 175 "/usr/include/gc/gc.h" 3 4
extern GC_word GC_non_gc_bytes;





extern int GC_no_dls;







extern GC_word GC_free_space_divisor;
# 202 "/usr/include/gc/gc.h" 3 4
extern GC_word GC_max_retries;





extern char *GC_stackbottom;
# 220 "/usr/include/gc/gc.h" 3 4
extern int GC_dont_precollect;







extern unsigned long GC_time_limit;
# 250 "/usr/include/gc/gc.h" 3 4
extern void GC_init (void);
# 268 "/usr/include/gc/gc.h" 3 4
extern GC_PTR GC_malloc (size_t size_in_bytes);
extern GC_PTR GC_malloc_atomic (size_t size_in_bytes);
extern char *GC_strdup (const char *str);
extern GC_PTR GC_malloc_uncollectable (size_t size_in_bytes);
extern GC_PTR GC_malloc_stubborn (size_t size_in_bytes);



extern GC_PTR GC_malloc_atomic_uncollectable (size_t size_in_bytes);







extern void GC_free (GC_PTR object_addr);
# 301 "/usr/include/gc/gc.h" 3 4
extern void GC_change_stubborn (GC_PTR);
extern void GC_end_stubborn_change (GC_PTR);
# 315 "/usr/include/gc/gc.h" 3 4
extern GC_PTR GC_base (GC_PTR displaced_pointer);




extern size_t GC_size (GC_PTR object_addr);
# 330 "/usr/include/gc/gc.h" 3 4
extern GC_PTR GC_realloc
 (GC_PTR old_object, size_t new_size_in_bytes);



extern int GC_expand_hp (size_t number_of_bytes);




extern void GC_set_max_heap_size (GC_word n);






extern void GC_exclude_static_roots (GC_PTR start, GC_PTR finish);


extern void GC_clear_roots (void);


extern void GC_add_roots (char * low_address, char * high_address_plus_1);



extern void GC_remove_roots (char * low_address, char * high_address_plus_1);
# 372 "/usr/include/gc/gc.h" 3 4
extern void GC_register_displacement (GC_word n);



extern void GC_debug_register_displacement (GC_word n);


extern void GC_gcollect (void);
# 390 "/usr/include/gc/gc.h" 3 4
typedef int (* GC_stop_func) (void);
extern int GC_try_to_collect (GC_stop_func stop_func);




extern size_t GC_get_heap_size (void);


extern size_t GC_get_free_bytes (void);


extern size_t GC_get_bytes_since_gc (void);



extern size_t GC_get_total_bytes (void);



extern void GC_disable (void);




extern void GC_enable (void);
# 429 "/usr/include/gc/gc.h" 3 4
extern void GC_enable_incremental (void);
# 439 "/usr/include/gc/gc.h" 3 4
extern int GC_incremental_protection_needs (void);
# 448 "/usr/include/gc/gc.h" 3 4
extern int GC_collect_a_little (void);
# 464 "/usr/include/gc/gc.h" 3 4
extern GC_PTR GC_malloc_ignore_off_page (size_t lb);
extern GC_PTR GC_malloc_atomic_ignore_off_page (size_t lb);
# 523 "/usr/include/gc/gc.h" 3 4
extern GC_PTR GC_debug_malloc
 (size_t size_in_bytes, const char * s, int i);
extern GC_PTR GC_debug_malloc_atomic
 (size_t size_in_bytes, const char * s, int i);
extern char *GC_debug_strdup
       (const char *str, const char * s, int i);
extern GC_PTR GC_debug_malloc_uncollectable
 (size_t size_in_bytes, const char * s, int i);
extern GC_PTR GC_debug_malloc_stubborn
 (size_t size_in_bytes, const char * s, int i);
extern GC_PTR GC_debug_malloc_ignore_off_page
 (size_t size_in_bytes, const char * s, int i);
extern GC_PTR GC_debug_malloc_atomic_ignore_off_page
 (size_t size_in_bytes, const char * s, int i);
extern void GC_debug_free (GC_PTR object_addr);
extern GC_PTR GC_debug_realloc
 (GC_PTR old_object, size_t new_size_in_bytes, const char * s, int i);

extern void GC_debug_change_stubborn (GC_PTR);
extern void GC_debug_end_stubborn_change (GC_PTR);
# 556 "/usr/include/gc/gc.h" 3 4
extern GC_PTR GC_debug_malloc_replacement (size_t size_in_bytes);
extern GC_PTR GC_debug_realloc_replacement
       (GC_PTR object_addr, size_t size_in_bytes);
# 624 "/usr/include/gc/gc.h" 3 4
typedef void (*GC_finalization_proc)
   (GC_PTR obj, GC_PTR client_data);

extern void GC_register_finalizer
     (GC_PTR obj, GC_finalization_proc fn, GC_PTR cd, GC_finalization_proc *ofn, GC_PTR *ocd);

extern void GC_debug_register_finalizer
     (GC_PTR obj, GC_finalization_proc fn, GC_PTR cd, GC_finalization_proc *ofn, GC_PTR *ocd);
# 675 "/usr/include/gc/gc.h" 3 4
extern void GC_register_finalizer_ignore_self
 (GC_PTR obj, GC_finalization_proc fn, GC_PTR cd, GC_finalization_proc *ofn, GC_PTR *ocd);

extern void GC_debug_register_finalizer_ignore_self
 (GC_PTR obj, GC_finalization_proc fn, GC_PTR cd, GC_finalization_proc *ofn, GC_PTR *ocd);






extern void GC_register_finalizer_no_order
 (GC_PTR obj, GC_finalization_proc fn, GC_PTR cd, GC_finalization_proc *ofn, GC_PTR *ocd);

extern void GC_debug_register_finalizer_no_order
 (GC_PTR obj, GC_finalization_proc fn, GC_PTR cd, GC_finalization_proc *ofn, GC_PTR *ocd);
# 701 "/usr/include/gc/gc.h" 3 4
extern int GC_register_disappearing_link (GC_PTR * );
# 721 "/usr/include/gc/gc.h" 3 4
extern int GC_general_register_disappearing_link
 (GC_PTR * , GC_PTR obj);
# 740 "/usr/include/gc/gc.h" 3 4
extern int GC_unregister_disappearing_link (GC_PTR * );





extern int GC_should_invoke_finalizers (void);

extern int GC_invoke_finalizers (void);
# 758 "/usr/include/gc/gc.h" 3 4
typedef void (*GC_warn_proc) (char *msg, GC_word arg);
extern GC_warn_proc GC_set_warn_proc (GC_warn_proc p);


extern GC_word GC_set_free_space_divisor (GC_word value);
# 783 "/usr/include/gc/gc.h" 3 4
typedef GC_PTR (*GC_fn_type) (GC_PTR client_data);
extern GC_PTR GC_call_with_alloc_lock
         (GC_fn_type fn, GC_PTR client_data);
# 796 "/usr/include/gc/gc.h" 3 4
extern GC_PTR GC_same_obj (GC_PTR p, GC_PTR q);





extern GC_PTR GC_pre_incr (GC_PTR *p, size_t how_much);
extern GC_PTR GC_post_incr (GC_PTR *p, size_t how_much);
# 813 "/usr/include/gc/gc.h" 3 4
extern GC_PTR GC_is_visible (GC_PTR p);






extern GC_PTR GC_is_valid_displacement (GC_PTR p);
# 868 "/usr/include/gc/gc.h" 3 4
extern void (*GC_same_obj_print_proc) (GC_PTR p, GC_PTR q);

extern void (*GC_is_valid_displacement_print_proc)
 (GC_PTR p);

extern void (*GC_is_visible_print_proc)
 (GC_PTR p);
# 1010 "/usr/include/gc/gc.h" 3 4
    }
# 135 "/usr/include/gc/gc_cpp.h" 2 3 4
# 160 "/usr/include/gc/gc_cpp.h" 3 4
enum GCPlacement {UseGC,

    GC=UseGC,

                  NoGC, PointerFreeGC};

class gc {public:
    inline void* operator new( size_t size );
    inline void* operator new( size_t size, GCPlacement gcp );
    inline void* operator new( size_t size, void *p );


    inline void operator delete( void* obj );

      inline void operator delete( void*, void* );



    inline void* operator new[]( size_t size );
    inline void* operator new[]( size_t size, GCPlacement gcp );
    inline void* operator new[]( size_t size, void *p );
    inline void operator delete[]( void* obj );

      inline void operator delete[]( void*, void* );


    };





class gc_cleanup: virtual public gc {public:
    inline gc_cleanup();
    inline virtual ~gc_cleanup();
private:
    inline static void cleanup( void* obj, void* clientData );};







extern "C" {typedef void (*GCCleanUpFunc)( void* obj, void* clientData );}







inline void* operator new(
    size_t size,
    GCPlacement gcp,
    GCCleanUpFunc cleanup = 0,
    void* clientData = 0 );
# 257 "/usr/include/gc/gc_cpp.h" 3 4
inline void* operator new[](
    size_t size,
    GCPlacement gcp,
    GCCleanUpFunc cleanup = 0,
    void* clientData = 0 );
# 273 "/usr/include/gc/gc_cpp.h" 3 4
inline void* gc::operator new( size_t size ) {
    return GC_malloc(size);}

inline void* gc::operator new( size_t size, GCPlacement gcp ) {
    if (gcp == UseGC)
        return GC_malloc(size);
    else if (gcp == PointerFreeGC)
 return GC_malloc_atomic(size);
    else
        return GC_malloc_uncollectable(size);}

inline void* gc::operator new( size_t size, void *p ) {
    return p;}

inline void gc::operator delete( void* obj ) {
    GC_free(obj);}


  inline void gc::operator delete( void*, void* ) {}




inline void* gc::operator new[]( size_t size ) {
    return gc::operator new( size );}

inline void* gc::operator new[]( size_t size, GCPlacement gcp ) {
    return gc::operator new( size, gcp );}

inline void* gc::operator new[]( size_t size, void *p ) {
    return p;}

inline void gc::operator delete[]( void* obj ) {
    gc::operator delete( obj );}


  inline void gc::operator delete[]( void*, void* ) {}





inline gc_cleanup::~gc_cleanup() {
    GC_register_finalizer_ignore_self( GC_base(this), 0, 0, 0, 0 );}

inline void gc_cleanup::cleanup( void* obj, void* displ ) {
    ((gc_cleanup*) ((char*) obj + (ptrdiff_t) displ))->~gc_cleanup();}

inline gc_cleanup::gc_cleanup() {
    GC_finalization_proc oldProc;
    void* oldData;
    void* base = GC_base( (void *) this );
    if (0 != base) {

      GC_register_finalizer_ignore_self(
        base, (GC_finalization_proc)cleanup, (void*) ((char*) this - (char*) base),
        &oldProc, &oldData );
      if (0 != oldProc) {
        GC_register_finalizer_ignore_self( base, oldProc, oldData, 0, 0 );}}}

inline void* operator new(
    size_t size,
    GCPlacement gcp,
    GCCleanUpFunc cleanup,
    void* clientData )
{
    void* obj;

    if (gcp == UseGC) {
        obj = GC_malloc(size);
        if (cleanup != 0)
            GC_register_finalizer_ignore_self(obj, cleanup, clientData, 0, 0);}

    else if (gcp == PointerFreeGC) {
        obj = GC_malloc_atomic(size);}
    else {
        obj = GC_malloc_uncollectable(size);};
    return obj;}




inline void* operator new[](
    size_t size,
    GCPlacement gcp,
    GCCleanUpFunc cleanup,
    void* clientData )
{
    return ::operator new( size, gcp, cleanup, clientData );}
# 14 "src/gamebase.h" 2
# 1 "/usr/include/gc/gc_allocator.h" 1 3 4
# 56 "/usr/include/gc/gc_allocator.h" 3 4
struct GC_true_type {};
struct GC_false_type {};

template <class GC_tp>
struct GC_type_traits {
  GC_false_type GC_is_ptr_free;
};




template<> struct GC_type_traits<signed char> { GC_true_type GC_is_ptr_free; };
template<> struct GC_type_traits<unsigned char> { GC_true_type GC_is_ptr_free; };
template<> struct GC_type_traits<signed short> { GC_true_type GC_is_ptr_free; };
template<> struct GC_type_traits<unsigned short> { GC_true_type GC_is_ptr_free; };
template<> struct GC_type_traits<signed int> { GC_true_type GC_is_ptr_free; };
template<> struct GC_type_traits<unsigned int> { GC_true_type GC_is_ptr_free; };
template<> struct GC_type_traits<signed long> { GC_true_type GC_is_ptr_free; };
template<> struct GC_type_traits<unsigned long> { GC_true_type GC_is_ptr_free; };
template<> struct GC_type_traits<float> { GC_true_type GC_is_ptr_free; };
template<> struct GC_type_traits<double> { GC_true_type GC_is_ptr_free; };




template <class GC_Tp>
inline void * GC_selective_alloc(size_t n, GC_Tp) {
    return GC_malloc(n);
}

template <>
inline void * GC_selective_alloc<GC_true_type>(size_t n, GC_true_type) {
    return GC_malloc_atomic(n);
}



template <class GC_Tp>
class gc_allocator {
public:
  typedef size_t size_type;
  typedef ptrdiff_t difference_type;
  typedef GC_Tp* pointer;
  typedef const GC_Tp* const_pointer;
  typedef GC_Tp& reference;
  typedef const GC_Tp& const_reference;
  typedef GC_Tp value_type;

  template <class GC_Tp1> struct rebind {
    typedef gc_allocator<GC_Tp1> other;
  };

  gc_allocator() {}




    gc_allocator(const gc_allocator&) throw() {}

  template <class GC_Tp1> gc_allocator(const gc_allocator<GC_Tp1>&) throw() {}
  ~gc_allocator() throw() {}

  pointer address(reference GC_x) const { return &GC_x; }
  const_pointer address(const_reference GC_x) const { return &GC_x; }



  GC_Tp* allocate(size_type GC_n, const void* = 0) {
    GC_type_traits<GC_Tp> traits;
    return static_cast<GC_Tp *>
     (GC_selective_alloc(GC_n * sizeof(GC_Tp),
           traits.GC_is_ptr_free));
  }


  void deallocate(pointer __p, size_type __attribute__((unused)) GC_n)
    { GC_free(__p); }

  size_type max_size() const throw()
    { return size_t(-1) / sizeof(GC_Tp); }

  void construct(pointer __p, const GC_Tp& __val) { new(__p) GC_Tp(__val); }
  void destroy(pointer __p) { __p->~GC_Tp(); }
};

template<>
class gc_allocator<void> {
  typedef size_t size_type;
  typedef ptrdiff_t difference_type;
  typedef void* pointer;
  typedef const void* const_pointer;
  typedef void value_type;

  template <class GC_Tp1> struct rebind {
    typedef gc_allocator<GC_Tp1> other;
  };
};


template <class GC_T1, class GC_T2>
inline bool operator==(const gc_allocator<GC_T1>&, const gc_allocator<GC_T2>&)
{
  return true;
}

template <class GC_T1, class GC_T2>
inline bool operator!=(const gc_allocator<GC_T1>&, const gc_allocator<GC_T2>&)
{
  return false;
}
# 174 "/usr/include/gc/gc_allocator.h" 3 4
template <class GC_Tp>
class traceable_allocator {
public:
  typedef size_t size_type;
  typedef ptrdiff_t difference_type;
  typedef GC_Tp* pointer;
  typedef const GC_Tp* const_pointer;
  typedef GC_Tp& reference;
  typedef const GC_Tp& const_reference;
  typedef GC_Tp value_type;

  template <class GC_Tp1> struct rebind {
    typedef traceable_allocator<GC_Tp1> other;
  };

  traceable_allocator() throw() {}

    traceable_allocator(const traceable_allocator&) throw() {}

  template <class GC_Tp1> traceable_allocator
   (const traceable_allocator<GC_Tp1>&) throw() {}
  ~traceable_allocator() throw() {}

  pointer address(reference GC_x) const { return &GC_x; }
  const_pointer address(const_reference GC_x) const { return &GC_x; }



  GC_Tp* allocate(size_type GC_n, const void* = 0) {
    return static_cast<GC_Tp*>(GC_malloc_uncollectable(GC_n * sizeof(GC_Tp)));
  }


  void deallocate(pointer __p, size_type __attribute__((unused)) GC_n)
    { GC_free(__p); }

  size_type max_size() const throw()
    { return size_t(-1) / sizeof(GC_Tp); }

  void construct(pointer __p, const GC_Tp& __val) { new(__p) GC_Tp(__val); }
  void destroy(pointer __p) { __p->~GC_Tp(); }
};

template<>
class traceable_allocator<void> {
  typedef size_t size_type;
  typedef ptrdiff_t difference_type;
  typedef void* pointer;
  typedef const void* const_pointer;
  typedef void value_type;

  template <class GC_Tp1> struct rebind {
    typedef traceable_allocator<GC_Tp1> other;
  };
};


template <class GC_T1, class GC_T2>
inline bool operator==(const traceable_allocator<GC_T1>&, const traceable_allocator<GC_T2>&)
{
  return true;
}

template <class GC_T1, class GC_T2>
inline bool operator!=(const traceable_allocator<GC_T1>&, const traceable_allocator<GC_T2>&)
{
  return false;
}
# 15 "src/gamebase.h" 2
# 1 "/usr/include/c++/4.4/list" 1 3
# 59 "/usr/include/c++/4.4/list" 3
       
# 60 "/usr/include/c++/4.4/list" 3

# 1 "/usr/include/c++/4.4/bits/stl_algobase.h" 1 3
# 60 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
# 1 "/usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h" 1 3
# 243 "/usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h" 3
# 1 "/usr/include/c++/4.4/i686-linux-gnu/bits/os_defines.h" 1 3
# 244 "/usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h" 2 3


# 1 "/usr/include/c++/4.4/i686-linux-gnu/bits/cpu_defines.h" 1 3
# 247 "/usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h" 2 3
# 61 "/usr/include/c++/4.4/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 41 "/usr/include/c++/4.4/cstddef" 3
       
# 42 "/usr/include/c++/4.4/cstddef" 3


# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 45 "/usr/include/c++/4.4/cstddef" 2 3




namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::ptrdiff_t;
  using ::size_t;

}
# 62 "/usr/include/c++/4.4/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/4.4/bits/functexcept.h" 1 3
# 37 "/usr/include/c++/4.4/bits/functexcept.h" 3
# 1 "/usr/include/c++/4.4/exception_defines.h" 1 3
# 38 "/usr/include/c++/4.4/bits/functexcept.h" 2 3

namespace std __attribute__ ((__visibility__ ("default"))) {


  void
  __throw_bad_exception(void) __attribute__((__noreturn__));


  void
  __throw_bad_alloc(void) __attribute__((__noreturn__));


  void
  __throw_bad_cast(void) __attribute__((__noreturn__));

  void
  __throw_bad_typeid(void) __attribute__((__noreturn__));


  void
  __throw_logic_error(const char*) __attribute__((__noreturn__));

  void
  __throw_domain_error(const char*) __attribute__((__noreturn__));

  void
  __throw_invalid_argument(const char*) __attribute__((__noreturn__));

  void
  __throw_length_error(const char*) __attribute__((__noreturn__));

  void
  __throw_out_of_range(const char*) __attribute__((__noreturn__));

  void
  __throw_runtime_error(const char*) __attribute__((__noreturn__));

  void
  __throw_range_error(const char*) __attribute__((__noreturn__));

  void
  __throw_overflow_error(const char*) __attribute__((__noreturn__));

  void
  __throw_underflow_error(const char*) __attribute__((__noreturn__));


  void
  __throw_ios_failure(const char*) __attribute__((__noreturn__));

  void
  __throw_system_error(int) __attribute__((__noreturn__));

}
# 63 "/usr/include/c++/4.4/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 1 3
# 36 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
       
# 37 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
# 69 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {

  template<typename _Iterator, typename _Container>
    class __normal_iterator;

}

namespace std __attribute__ ((__visibility__ ("default"))) {

  struct __true_type { };
  struct __false_type { };

  template<bool>
    struct __truth_type
    { typedef __false_type __type; };

  template<>
    struct __truth_type<true>
    { typedef __true_type __type; };



  template<class _Sp, class _Tp>
    struct __traitor
    {
      enum { __value = bool(_Sp::__value) || bool(_Tp::__value) };
      typedef typename __truth_type<__value>::__type __type;
    };


  template<typename, typename>
    struct __are_same
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Tp>
    struct __are_same<_Tp, _Tp>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<typename _Tp>
    struct __is_void
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_void<void>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_integer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };




  template<>
    struct __is_integer<bool>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_integer<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
# 194 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
  template<>
    struct __is_integer<short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_floating
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };


  template<>
    struct __is_floating<float>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_floating<double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_floating<long double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_pointer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Tp>
    struct __is_pointer<_Tp*>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_normal_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Iterator, typename _Container>
    struct __is_normal_iterator< __gnu_cxx::__normal_iterator<_Iterator,
             _Container> >
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_arithmetic
    : public __traitor<__is_integer<_Tp>, __is_floating<_Tp> >
    { };




  template<typename _Tp>
    struct __is_fundamental
    : public __traitor<__is_void<_Tp>, __is_arithmetic<_Tp> >
    { };




  template<typename _Tp>
    struct __is_scalar
    : public __traitor<__is_arithmetic<_Tp>, __is_pointer<_Tp> >
    { };




  template<typename _Tp>
    struct __is_char
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_char<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_char<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<typename _Tp>
    struct __is_byte
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_byte<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_byte<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_byte<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_move_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
# 417 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
}
# 64 "/usr/include/c++/4.4/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/4.4/ext/type_traits.h" 1 3
# 32 "/usr/include/c++/4.4/ext/type_traits.h" 3
       
# 33 "/usr/include/c++/4.4/ext/type_traits.h" 3




namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {


  template<bool, typename>
    struct __enable_if
    { };

  template<typename _Tp>
    struct __enable_if<true, _Tp>
    { typedef _Tp __type; };



  template<bool _Cond, typename _Iftrue, typename _Iffalse>
    struct __conditional_type
    { typedef _Iftrue __type; };

  template<typename _Iftrue, typename _Iffalse>
    struct __conditional_type<false, _Iftrue, _Iffalse>
    { typedef _Iffalse __type; };



  template<typename _Tp>
    struct __add_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;

    public:
      typedef typename __if_type::__type __type;
    };

  template<>
    struct __add_unsigned<char>
    { typedef unsigned char __type; };

  template<>
    struct __add_unsigned<signed char>
    { typedef unsigned char __type; };

  template<>
    struct __add_unsigned<short>
    { typedef unsigned short __type; };

  template<>
    struct __add_unsigned<int>
    { typedef unsigned int __type; };

  template<>
    struct __add_unsigned<long>
    { typedef unsigned long __type; };

  template<>
    struct __add_unsigned<long long>
    { typedef unsigned long long __type; };


  template<>
    struct __add_unsigned<bool>;

  template<>
    struct __add_unsigned<wchar_t>;



  template<typename _Tp>
    struct __remove_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;

    public:
      typedef typename __if_type::__type __type;
    };

  template<>
    struct __remove_unsigned<char>
    { typedef signed char __type; };

  template<>
    struct __remove_unsigned<unsigned char>
    { typedef signed char __type; };

  template<>
    struct __remove_unsigned<unsigned short>
    { typedef short __type; };

  template<>
    struct __remove_unsigned<unsigned int>
    { typedef int __type; };

  template<>
    struct __remove_unsigned<unsigned long>
    { typedef long __type; };

  template<>
    struct __remove_unsigned<unsigned long long>
    { typedef long long __type; };


  template<>
    struct __remove_unsigned<bool>;

  template<>
    struct __remove_unsigned<wchar_t>;



  template<typename _Type>
    inline bool
    __is_null_pointer(_Type* __ptr)
    { return __ptr == 0; }

  template<typename _Type>
    inline bool
    __is_null_pointer(_Type)
    { return false; }



  template<typename _Tp, bool = std::__is_integer<_Tp>::__value>
    struct __promote
    { typedef double __type; };

  template<typename _Tp>
    struct __promote<_Tp, false>
    { typedef _Tp __type; };

  template<typename _Tp, typename _Up>
    struct __promote_2
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;

    public:
      typedef __typeof__(__type1() + __type2()) __type;
    };

  template<typename _Tp, typename _Up, typename _Vp>
    struct __promote_3
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;
      typedef typename __promote<_Vp>::__type __type3;

    public:
      typedef __typeof__(__type1() + __type2() + __type3()) __type;
    };

  template<typename _Tp, typename _Up, typename _Vp, typename _Wp>
    struct __promote_4
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;
      typedef typename __promote<_Vp>::__type __type3;
      typedef typename __promote<_Wp>::__type __type4;

    public:
      typedef __typeof__(__type1() + __type2() + __type3() + __type4()) __type;
    };

}
# 65 "/usr/include/c++/4.4/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/4.4/ext/numeric_traits.h" 1 3
# 32 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
       
# 33 "/usr/include/c++/4.4/ext/numeric_traits.h" 3




namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {
# 52 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
  template<typename _Value>
    struct __numeric_traits_integer
    {

      static const _Value __min = (((_Value)(-1) < 0) ? (_Value)1 << (sizeof(_Value) * 8 - ((_Value)(-1) < 0)) : (_Value)0);
      static const _Value __max = (((_Value)(-1) < 0) ? (((((_Value)1 << ((sizeof(_Value) * 8 - ((_Value)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(_Value)0);



      static const bool __is_signed = ((_Value)(-1) < 0);
      static const int __digits = (sizeof(_Value) * 8 - ((_Value)(-1) < 0));
    };

  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__min;

  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__max;

  template<typename _Value>
    const bool __numeric_traits_integer<_Value>::__is_signed;

  template<typename _Value>
    const int __numeric_traits_integer<_Value>::__digits;
# 97 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
  template<typename _Value>
    struct __numeric_traits_floating
    {

      static const int __max_digits10 = (2 + (std::__are_same<_Value, float>::__value ? 24 : std::__are_same<_Value, double>::__value ? 53 : 64) * 3010 / 10000);


      static const bool __is_signed = true;
      static const int __digits10 = (std::__are_same<_Value, float>::__value ? 6 : std::__are_same<_Value, double>::__value ? 15 : 18);
      static const int __max_exponent10 = (std::__are_same<_Value, float>::__value ? 38 : std::__are_same<_Value, double>::__value ? 308 : 4932);
    };

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_digits10;

  template<typename _Value>
    const bool __numeric_traits_floating<_Value>::__is_signed;

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__digits10;

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_exponent10;

  template<typename _Value>
    struct __numeric_traits
    : public __conditional_type<std::__is_integer<_Value>::__value,
    __numeric_traits_integer<_Value>,
    __numeric_traits_floating<_Value> >::__type
    { };

}
# 66 "/usr/include/c++/4.4/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/4.4/bits/stl_pair.h" 1 3
# 60 "/usr/include/c++/4.4/bits/stl_pair.h" 3
# 1 "/usr/include/c++/4.4/bits/move.h" 1 3
# 34 "/usr/include/c++/4.4/bits/move.h" 3
# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 41 "/usr/include/c++/4.4/cstddef" 3
       
# 42 "/usr/include/c++/4.4/cstddef" 3


# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 45 "/usr/include/c++/4.4/cstddef" 2 3
# 35 "/usr/include/c++/4.4/bits/move.h" 2 3
# 1 "/usr/include/c++/4.4/bits/concept_check.h" 1 3
# 33 "/usr/include/c++/4.4/bits/concept_check.h" 3
       
# 34 "/usr/include/c++/4.4/bits/concept_check.h" 3
# 36 "/usr/include/c++/4.4/bits/move.h" 2 3
# 66 "/usr/include/c++/4.4/bits/move.h" 3
namespace std __attribute__ ((__visibility__ ("default"))) {







  template<typename _Tp>
    inline void
    swap(_Tp& __a, _Tp& __b)
    {

     

      _Tp __tmp = (__a);
      __a = (__b);
      __b = (__tmp);
    }



  template<typename _Tp, size_t _Nm>
    inline void
    swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
    {
      for (size_t __n = 0; __n < _Nm; ++__n)
 swap(__a[__n], __b[__n]);
    }

}
# 61 "/usr/include/c++/4.4/bits/stl_pair.h" 2 3


namespace std __attribute__ ((__visibility__ ("default"))) {


  template<class _T1, class _T2>
    struct pair
    {
      typedef _T1 first_type;
      typedef _T2 second_type;

      _T1 first;
      _T2 second;





      pair()
      : first(), second() { }


      pair(const _T1& __a, const _T2& __b)
      : first(__a), second(__b) { }
# 98 "/usr/include/c++/4.4/bits/stl_pair.h" 3
      template<class _U1, class _U2>
        pair(const pair<_U1, _U2>& __p)
 : first(__p.first),
   second(__p.second) { }
# 141 "/usr/include/c++/4.4/bits/stl_pair.h" 3
    };


  template<class _T1, class _T2>
    inline bool
    operator==(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first == __y.first && __x.second == __y.second; }


  template<class _T1, class _T2>
    inline bool
    operator<(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first < __y.first
      || (!(__y.first < __x.first) && __x.second < __y.second); }


  template<class _T1, class _T2>
    inline bool
    operator!=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x == __y); }


  template<class _T1, class _T2>
    inline bool
    operator>(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __y < __x; }


  template<class _T1, class _T2>
    inline bool
    operator<=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__y < __x); }


  template<class _T1, class _T2>
    inline bool
    operator>=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x < __y); }
# 213 "/usr/include/c++/4.4/bits/stl_pair.h" 3
  template<class _T1, class _T2>
    inline pair<_T1, _T2>
    make_pair(_T1 __x, _T2 __y)
    { return pair<_T1, _T2>(__x, __y); }
# 259 "/usr/include/c++/4.4/bits/stl_pair.h" 3
}
# 67 "/usr/include/c++/4.4/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 1 3
# 63 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
       
# 64 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3


# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 41 "/usr/include/c++/4.4/cstddef" 3
       
# 42 "/usr/include/c++/4.4/cstddef" 3


# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 45 "/usr/include/c++/4.4/cstddef" 2 3
# 67 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 2 3

namespace std __attribute__ ((__visibility__ ("default"))) {
# 79 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
  struct input_iterator_tag { };

  struct output_iterator_tag { };

  struct forward_iterator_tag : public input_iterator_tag { };


  struct bidirectional_iterator_tag : public forward_iterator_tag { };


  struct random_access_iterator_tag : public bidirectional_iterator_tag { };
# 102 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
  template<typename _Category, typename _Tp, typename _Distance = ptrdiff_t,
           typename _Pointer = _Tp*, typename _Reference = _Tp&>
    struct iterator
    {

      typedef _Category iterator_category;

      typedef _Tp value_type;

      typedef _Distance difference_type;

      typedef _Pointer pointer;

      typedef _Reference reference;
    };







  template<typename _Iterator>
    struct iterator_traits
    {
      typedef typename _Iterator::iterator_category iterator_category;
      typedef typename _Iterator::value_type value_type;
      typedef typename _Iterator::difference_type difference_type;
      typedef typename _Iterator::pointer pointer;
      typedef typename _Iterator::reference reference;
    };

  template<typename _Tp>
    struct iterator_traits<_Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef _Tp& reference;
    };

  template<typename _Tp>
    struct iterator_traits<const _Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef const _Tp* pointer;
      typedef const _Tp& reference;
    };





  template<typename _Iter>
    inline typename iterator_traits<_Iter>::iterator_category
    __iterator_category(const _Iter&)
    { return typename iterator_traits<_Iter>::iterator_category(); }



}
# 68 "/usr/include/c++/4.4/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 1 3
# 63 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3
       
# 64 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3


namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    __distance(_InputIterator __first, _InputIterator __last,
               input_iterator_tag)
    {

     

      typename iterator_traits<_InputIterator>::difference_type __n = 0;
      while (__first != __last)
 {
   ++__first;
   ++__n;
 }
      return __n;
    }

  template<typename _RandomAccessIterator>
    inline typename iterator_traits<_RandomAccessIterator>::difference_type
    __distance(_RandomAccessIterator __first, _RandomAccessIterator __last,
               random_access_iterator_tag)
    {

     

      return __last - __first;
    }
# 108 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3
  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    distance(_InputIterator __first, _InputIterator __last)
    {

      return std::__distance(__first, __last,
        std::__iterator_category(__first));
    }

  template<typename _InputIterator, typename _Distance>
    inline void
    __advance(_InputIterator& __i, _Distance __n, input_iterator_tag)
    {

     
      while (__n--)
 ++__i;
    }

  template<typename _BidirectionalIterator, typename _Distance>
    inline void
    __advance(_BidirectionalIterator& __i, _Distance __n,
       bidirectional_iterator_tag)
    {

     

      if (__n > 0)
        while (__n--)
   ++__i;
      else
        while (__n++)
   --__i;
    }

  template<typename _RandomAccessIterator, typename _Distance>
    inline void
    __advance(_RandomAccessIterator& __i, _Distance __n,
              random_access_iterator_tag)
    {

     

      __i += __n;
    }
# 166 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3
  template<typename _InputIterator, typename _Distance>
    inline void
    advance(_InputIterator& __i, _Distance __n)
    {

      typename iterator_traits<_InputIterator>::difference_type __d = __n;
      std::__advance(__i, __d, std::__iterator_category(__i));
    }
# 195 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3
}
# 69 "/usr/include/c++/4.4/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/4.4/bits/stl_iterator.h" 1 3
# 68 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
namespace std __attribute__ ((__visibility__ ("default"))) {
# 89 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
  template<typename _Iterator>
    class reverse_iterator
    : public iterator<typename iterator_traits<_Iterator>::iterator_category,
        typename iterator_traits<_Iterator>::value_type,
        typename iterator_traits<_Iterator>::difference_type,
        typename iterator_traits<_Iterator>::pointer,
                      typename iterator_traits<_Iterator>::reference>
    {
    protected:
      _Iterator current;

    public:
      typedef _Iterator iterator_type;
      typedef typename iterator_traits<_Iterator>::difference_type
              difference_type;
      typedef typename iterator_traits<_Iterator>::reference reference;
      typedef typename iterator_traits<_Iterator>::pointer pointer;

    public:






      reverse_iterator() : current() { }




      explicit
      reverse_iterator(iterator_type __x) : current(__x) { }




      reverse_iterator(const reverse_iterator& __x)
      : current(__x.current) { }





      template<typename _Iter>
        reverse_iterator(const reverse_iterator<_Iter>& __x)
 : current(__x.base()) { }




      iterator_type
      base() const
      { return current; }






      reference
      operator*() const
      {
 _Iterator __tmp = current;
 return *--__tmp;
      }






      pointer
      operator->() const
      { return &(operator*()); }






      reverse_iterator&
      operator++()
      {
 --current;
 return *this;
      }






      reverse_iterator
      operator++(int)
      {
 reverse_iterator __tmp = *this;
 --current;
 return __tmp;
      }






      reverse_iterator&
      operator--()
      {
 ++current;
 return *this;
      }






      reverse_iterator
      operator--(int)
      {
 reverse_iterator __tmp = *this;
 ++current;
 return __tmp;
      }






      reverse_iterator
      operator+(difference_type __n) const
      { return reverse_iterator(current - __n); }






      reverse_iterator&
      operator+=(difference_type __n)
      {
 current -= __n;
 return *this;
      }






      reverse_iterator
      operator-(difference_type __n) const
      { return reverse_iterator(current + __n); }






      reverse_iterator&
      operator-=(difference_type __n)
      {
 current += __n;
 return *this;
      }






      reference
      operator[](difference_type __n) const
      { return *(*this + __n); }
    };
# 276 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
  template<typename _Iterator>
    inline bool
    operator==(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return __x.base() == __y.base(); }

  template<typename _Iterator>
    inline bool
    operator<(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y.base() < __x.base(); }

  template<typename _Iterator>
    inline bool
    operator!=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x == __y); }

  template<typename _Iterator>
    inline bool
    operator>(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y < __x; }

  template<typename _Iterator>
    inline bool
    operator<=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__y < __x); }

  template<typename _Iterator>
    inline bool
    operator>=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x < __y); }

  template<typename _Iterator>
    inline typename reverse_iterator<_Iterator>::difference_type
    operator-(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y.base() - __x.base(); }

  template<typename _Iterator>
    inline reverse_iterator<_Iterator>
    operator+(typename reverse_iterator<_Iterator>::difference_type __n,
       const reverse_iterator<_Iterator>& __x)
    { return reverse_iterator<_Iterator>(__x.base() - __n); }



  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator==(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return __x.base() == __y.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y.base() < __x.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator!=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__x == __y); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y < __x; }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__y < __x); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__x < __y); }

  template<typename _IteratorL, typename _IteratorR>







    inline typename reverse_iterator<_IteratorL>::difference_type
    operator-(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)

    { return __y.base() - __x.base(); }
# 388 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
  template<typename _Container>
    class back_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;

    public:

      typedef _Container container_type;


      explicit
      back_insert_iterator(_Container& __x) : container(&__x) { }
# 414 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
      back_insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 container->push_back(__value);
 return *this;
      }
# 431 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
      back_insert_iterator&
      operator*()
      { return *this; }


      back_insert_iterator&
      operator++()
      { return *this; }


      back_insert_iterator
      operator++(int)
      { return *this; }
    };
# 457 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
  template<typename _Container>
    inline back_insert_iterator<_Container>
    back_inserter(_Container& __x)
    { return back_insert_iterator<_Container>(__x); }
# 472 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
  template<typename _Container>
    class front_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;

    public:

      typedef _Container container_type;


      explicit front_insert_iterator(_Container& __x) : container(&__x) { }
# 497 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
      front_insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 container->push_front(__value);
 return *this;
      }
# 514 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
      front_insert_iterator&
      operator*()
      { return *this; }


      front_insert_iterator&
      operator++()
      { return *this; }


      front_insert_iterator
      operator++(int)
      { return *this; }
    };
# 540 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
  template<typename _Container>
    inline front_insert_iterator<_Container>
    front_inserter(_Container& __x)
    { return front_insert_iterator<_Container>(__x); }
# 559 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
  template<typename _Container>
    class insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;
      typename _Container::iterator iter;

    public:

      typedef _Container container_type;





      insert_iterator(_Container& __x, typename _Container::iterator __i)
      : container(&__x), iter(__i) {}
# 601 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
      insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 iter = container->insert(iter, __value);
 ++iter;
 return *this;
      }
# 620 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
      insert_iterator&
      operator*()
      { return *this; }


      insert_iterator&
      operator++()
      { return *this; }


      insert_iterator&
      operator++(int)
      { return *this; }
    };
# 646 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
  template<typename _Container, typename _Iterator>
    inline insert_iterator<_Container>
    inserter(_Container& __x, _Iterator __i)
    {
      return insert_iterator<_Container>(__x,
      typename _Container::iterator(__i));
    }

}

namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {
# 665 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
  using std::iterator_traits;
  using std::iterator;
  template<typename _Iterator, typename _Container>
    class __normal_iterator
    {
    protected:
      _Iterator _M_current;

    public:
      typedef _Iterator iterator_type;
      typedef typename iterator_traits<_Iterator>::iterator_category
                                                             iterator_category;
      typedef typename iterator_traits<_Iterator>::value_type value_type;
      typedef typename iterator_traits<_Iterator>::difference_type
                                                             difference_type;
      typedef typename iterator_traits<_Iterator>::reference reference;
      typedef typename iterator_traits<_Iterator>::pointer pointer;

      __normal_iterator() : _M_current(_Iterator()) { }

      explicit
      __normal_iterator(const _Iterator& __i) : _M_current(__i) { }


      template<typename _Iter>
        __normal_iterator(const __normal_iterator<_Iter,
     typename __enable_if<
              (std::__are_same<_Iter, typename _Container::pointer>::__value),
        _Container>::__type>& __i)
        : _M_current(__i.base()) { }


      reference
      operator*() const
      { return *_M_current; }

      pointer
      operator->() const
      { return _M_current; }

      __normal_iterator&
      operator++()
      {
 ++_M_current;
 return *this;
      }

      __normal_iterator
      operator++(int)
      { return __normal_iterator(_M_current++); }


      __normal_iterator&
      operator--()
      {
 --_M_current;
 return *this;
      }

      __normal_iterator
      operator--(int)
      { return __normal_iterator(_M_current--); }


      reference
      operator[](const difference_type& __n) const
      { return _M_current[__n]; }

      __normal_iterator&
      operator+=(const difference_type& __n)
      { _M_current += __n; return *this; }

      __normal_iterator
      operator+(const difference_type& __n) const
      { return __normal_iterator(_M_current + __n); }

      __normal_iterator&
      operator-=(const difference_type& __n)
      { _M_current -= __n; return *this; }

      __normal_iterator
      operator-(const difference_type& __n) const
      { return __normal_iterator(_M_current - __n); }

      const _Iterator&
      base() const
      { return _M_current; }
    };
# 763 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator==(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() == __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator==(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() == __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() != __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() != __rhs.base(); }


  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() < __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator<(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() < __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() > __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator>(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() > __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() <= __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() <= __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() >= __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() >= __rhs.base(); }





  template<typename _IteratorL, typename _IteratorR, typename _Container>







    inline typename __normal_iterator<_IteratorL, _Container>::difference_type
    operator-(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)

    { return __lhs.base() - __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline typename __normal_iterator<_Iterator, _Container>::difference_type
    operator-(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() - __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline __normal_iterator<_Iterator, _Container>
    operator+(typename __normal_iterator<_Iterator, _Container>::difference_type
       __n, const __normal_iterator<_Iterator, _Container>& __i)
    { return __normal_iterator<_Iterator, _Container>(__i.base() + __n); }

}
# 70 "/usr/include/c++/4.4/bits/stl_algobase.h" 2 3

# 1 "/usr/include/c++/4.4/debug/debug.h" 1 3
# 47 "/usr/include/c++/4.4/debug/debug.h" 3
namespace std
{
  namespace __debug { }
}




namespace __gnu_debug
{
  using namespace std::__debug;
}
# 72 "/usr/include/c++/4.4/bits/stl_algobase.h" 2 3


namespace std __attribute__ ((__visibility__ ("default"))) {




  template<bool _BoolType>
    struct __iter_swap
    {
      template<typename _ForwardIterator1, typename _ForwardIterator2>
        static void
        iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
        {
          typedef typename iterator_traits<_ForwardIterator1>::value_type
            _ValueType1;
          _ValueType1 __tmp = (*__a);
          *__a = (*__b);
          *__b = (__tmp);
 }
    };

  template<>
    struct __iter_swap<true>
    {
      template<typename _ForwardIterator1, typename _ForwardIterator2>
        static void
        iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
        {
          swap(*__a, *__b);
        }
    };
# 115 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    inline void
    iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
    {
      typedef typename iterator_traits<_ForwardIterator1>::value_type
 _ValueType1;
      typedef typename iterator_traits<_ForwardIterator2>::value_type
 _ValueType2;


     

     

     

     


      typedef typename iterator_traits<_ForwardIterator1>::reference
 _ReferenceType1;
      typedef typename iterator_traits<_ForwardIterator2>::reference
 _ReferenceType2;
      std::__iter_swap<__are_same<_ValueType1, _ValueType2>::__value
 && __are_same<_ValueType1&, _ReferenceType1>::__value
 && __are_same<_ValueType2&, _ReferenceType2>::__value>::
 iter_swap(__a, __b);
    }
# 156 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    _ForwardIterator2
    swap_ranges(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
  _ForwardIterator2 __first2)
    {

     

     

      ;

      for (; __first1 != __last1; ++__first1, ++__first2)
 std::iter_swap(__first1, __first2);
      return __first2;
    }
# 184 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _Tp>
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b)
    {

     

      if (__b < __a)
 return __b;
      return __a;
    }
# 207 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _Tp>
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b)
    {

     

      if (__a < __b)
 return __b;
      return __a;
    }
# 230 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _Tp, typename _Compare>
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {

      if (__comp(__b, __a))
 return __b;
      return __a;
    }
# 251 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _Tp, typename _Compare>
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {

      if (__comp(__a, __b))
 return __b;
      return __a;
    }




  template<typename _Iterator,
    bool _IsNormal = __is_normal_iterator<_Iterator>::__value>
    struct __niter_base
    {
      static _Iterator
      __b(_Iterator __it)
      { return __it; }
    };

  template<typename _Iterator>
    struct __niter_base<_Iterator, true>
    {
      static typename _Iterator::iterator_type
      __b(_Iterator __it)
      { return __it.base(); }
    };


  template<typename _Iterator,
    bool _IsMove = __is_move_iterator<_Iterator>::__value>
    struct __miter_base
    {
      static _Iterator
      __b(_Iterator __it)
      { return __it; }
    };

  template<typename _Iterator>
    struct __miter_base<_Iterator, true>
    {
      static typename _Iterator::iterator_type
      __b(_Iterator __it)
      { return __it.base(); }
    };







  template<bool, bool, typename>
    struct __copy_move
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   for (; __first != __last; ++__result, ++__first)
     *__result = *__first;
   return __result;
 }
    };
# 333 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<>
    struct __copy_move<false, false, random_access_iterator_tag>
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   typedef typename iterator_traits<_II>::difference_type _Distance;
   for(_Distance __n = __last - __first; __n > 0; --__n)
     {
       *__result = *__first;
       ++__first;
       ++__result;
     }
   return __result;
 }
    };
# 371 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<bool _IsMove>
    struct __copy_move<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
        static _Tp*
        __copy_m(const _Tp* __first, const _Tp* __last, _Tp* __result)
        {
   __builtin_memmove(__result, __first,
       sizeof(_Tp) * (__last - __first));
   return __result + (__last - __first);
 }
    };

  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a(_II __first, _II __last, _OI __result)
    {
      typedef typename iterator_traits<_II>::value_type _ValueTypeI;
      typedef typename iterator_traits<_OI>::value_type _ValueTypeO;
      typedef typename iterator_traits<_II>::iterator_category _Category;
      const bool __simple = (__is_pod(_ValueTypeI)
                      && __is_pointer<_II>::__value
                      && __is_pointer<_OI>::__value
        && __are_same<_ValueTypeI, _ValueTypeO>::__value);

      return std::__copy_move<_IsMove, __simple,
                       _Category>::__copy_m(__first, __last, __result);
    }



  template<typename _CharT>
    struct char_traits;

  template<typename _CharT, typename _Traits>
    class istreambuf_iterator;

  template<typename _CharT, typename _Traits>
    class ostreambuf_iterator;

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
      ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(_CharT*, _CharT*,
     ostreambuf_iterator<_CharT, char_traits<_CharT> >);

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
      ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(const _CharT*, const _CharT*,
     ostreambuf_iterator<_CharT, char_traits<_CharT> >);

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
        _CharT*>::__type
    __copy_move_a2(istreambuf_iterator<_CharT, char_traits<_CharT> >,
     istreambuf_iterator<_CharT, char_traits<_CharT> >, _CharT*);

  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a2(_II __first, _II __last, _OI __result)
    {
      return _OI(std::__copy_move_a<_IsMove>
   (std::__niter_base<_II>::__b(__first),
    std::__niter_base<_II>::__b(__last),
    std::__niter_base<_OI>::__b(__result)));
    }
# 456 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _II, typename _OI>
    inline _OI
    copy(_II __first, _II __last, _OI __result)
    {

     
     

      ;

      return (std::__copy_move_a2<__is_move_iterator<_II>::__value>
       (std::__miter_base<_II>::__b(__first),
        std::__miter_base<_II>::__b(__last), __result));
    }
# 509 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<bool, bool, typename>
    struct __copy_move_backward
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   while (__first != __last)
     *--__result = *--__last;
   return __result;
 }
    };
# 537 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<>
    struct __copy_move_backward<false, false, random_access_iterator_tag>
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   typename iterator_traits<_BI1>::difference_type __n;
   for (__n = __last - __first; __n > 0; --__n)
     *--__result = *--__last;
   return __result;
 }
    };
# 567 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<bool _IsMove>
    struct __copy_move_backward<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
        static _Tp*
        __copy_move_b(const _Tp* __first, const _Tp* __last, _Tp* __result)
        {
   const ptrdiff_t _Num = __last - __first;
   __builtin_memmove(__result - _Num, __first, sizeof(_Tp) * _Num);
   return __result - _Num;
 }
    };

  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      typedef typename iterator_traits<_BI1>::value_type _ValueType1;
      typedef typename iterator_traits<_BI2>::value_type _ValueType2;
      typedef typename iterator_traits<_BI1>::iterator_category _Category;
      const bool __simple = (__is_pod(_ValueType1)
                      && __is_pointer<_BI1>::__value
                      && __is_pointer<_BI2>::__value
        && __are_same<_ValueType1, _ValueType2>::__value);

      return std::__copy_move_backward<_IsMove, __simple,
                                _Category>::__copy_move_b(__first,
         __last,
         __result);
    }

  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a2(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      return _BI2(std::__copy_move_backward_a<_IsMove>
    (std::__niter_base<_BI1>::__b(__first),
     std::__niter_base<_BI1>::__b(__last),
     std::__niter_base<_BI2>::__b(__result)));
    }
# 626 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _BI1, typename _BI2>
    inline _BI2
    copy_backward(_BI1 __first, _BI1 __last, _BI2 __result)
    {

     
     
     


      ;

      return (std::__copy_move_backward_a2<__is_move_iterator<_BI1>::__value>
       (std::__miter_base<_BI1>::__b(__first),
        std::__miter_base<_BI1>::__b(__last), __result));
    }
# 684 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
       const _Tp& __value)
    {
      for (; __first != __last; ++__first)
 *__first = __value;
    }

  template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
      const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (; __first != __last; ++__first)
 *__first = __tmp;
    }


  template<typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, void>::__type
    __fill_a(_Tp* __first, _Tp* __last, const _Tp& __c)
    {
      const _Tp __tmp = __c;
      __builtin_memset(__first, static_cast<unsigned char>(__tmp),
         __last - __first);
    }
# 728 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _ForwardIterator, typename _Tp>
    inline void
    fill(_ForwardIterator __first, _ForwardIterator __last, const _Tp& __value)
    {

     

      ;

      std::__fill_a(std::__niter_base<_ForwardIterator>::__b(__first),
      std::__niter_base<_ForwardIterator>::__b(__last), __value);
    }

  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      for (; __n > 0; --__n, ++__first)
 *__first = __value;
      return __first;
    }

  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (; __n > 0; --__n, ++__first)
 *__first = __tmp;
      return __first;
    }

  template<typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, _Tp*>::__type
    __fill_n_a(_Tp* __first, _Size __n, const _Tp& __c)
    {
      std::__fill_a(__first, __first + __n, __c);
      return __first + __n;
    }
# 783 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _OI, typename _Size, typename _Tp>
    inline _OI
    fill_n(_OI __first, _Size __n, const _Tp& __value)
    {

     

      return _OI(std::__fill_n_a(std::__niter_base<_OI>::__b(__first),
     __n, __value));
    }

  template<bool _BoolType>
    struct __equal
    {
      template<typename _II1, typename _II2>
        static bool
        equal(_II1 __first1, _II1 __last1, _II2 __first2)
        {
   for (; __first1 != __last1; ++__first1, ++__first2)
     if (!(*__first1 == *__first2))
       return false;
   return true;
 }
    };

  template<>
    struct __equal<true>
    {
      template<typename _Tp>
        static bool
        equal(const _Tp* __first1, const _Tp* __last1, const _Tp* __first2)
        {
   return !__builtin_memcmp(__first1, __first2, sizeof(_Tp)
       * (__last1 - __first1));
 }
    };

  template<typename _II1, typename _II2>
    inline bool
    __equal_aux(_II1 __first1, _II1 __last1, _II2 __first2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple = (__is_integer<_ValueType1>::__value
                      && __is_pointer<_II1>::__value
                      && __is_pointer<_II2>::__value
        && __are_same<_ValueType1, _ValueType2>::__value);

      return std::__equal<__simple>::equal(__first1, __last1, __first2);
    }


  template<typename, typename>
    struct __lc_rai
    {
      template<typename _II1, typename _II2>
        static _II1
        __newlast1(_II1, _II1 __last1, _II2, _II2)
        { return __last1; }

      template<typename _II>
        static bool
        __cnd2(_II __first, _II __last)
        { return __first != __last; }
    };

  template<>
    struct __lc_rai<random_access_iterator_tag, random_access_iterator_tag>
    {
      template<typename _RAI1, typename _RAI2>
        static _RAI1
        __newlast1(_RAI1 __first1, _RAI1 __last1,
     _RAI2 __first2, _RAI2 __last2)
        {
   const typename iterator_traits<_RAI1>::difference_type
     __diff1 = __last1 - __first1;
   const typename iterator_traits<_RAI2>::difference_type
     __diff2 = __last2 - __first2;
   return __diff2 < __diff1 ? __first1 + __diff2 : __last1;
 }

      template<typename _RAI>
        static bool
        __cnd2(_RAI, _RAI)
        { return true; }
    };

  template<bool _BoolType>
    struct __lexicographical_compare
    {
      template<typename _II1, typename _II2>
        static bool __lc(_II1, _II1, _II2, _II2);
    };

  template<bool _BoolType>
    template<typename _II1, typename _II2>
      bool
      __lexicographical_compare<_BoolType>::
      __lc(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2)
      {
 typedef typename iterator_traits<_II1>::iterator_category _Category1;
 typedef typename iterator_traits<_II2>::iterator_category _Category2;
 typedef std::__lc_rai<_Category1, _Category2> __rai_type;

 __last1 = __rai_type::__newlast1(__first1, __last1,
      __first2, __last2);
 for (; __first1 != __last1 && __rai_type::__cnd2(__first2, __last2);
      ++__first1, ++__first2)
   {
     if (*__first1 < *__first2)
       return true;
     if (*__first2 < *__first1)
       return false;
   }
 return __first1 == __last1 && __first2 != __last2;
      }

  template<>
    struct __lexicographical_compare<true>
    {
      template<typename _Tp, typename _Up>
        static bool
        __lc(const _Tp* __first1, const _Tp* __last1,
      const _Up* __first2, const _Up* __last2)
 {
   const size_t __len1 = __last1 - __first1;
   const size_t __len2 = __last2 - __first2;
   const int __result = __builtin_memcmp(__first1, __first2,
      std::min(__len1, __len2));
   return __result != 0 ? __result < 0 : __len1 < __len2;
 }
    };

  template<typename _II1, typename _II2>
    inline bool
    __lexicographical_compare_aux(_II1 __first1, _II1 __last1,
      _II2 __first2, _II2 __last2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple =
 (__is_byte<_ValueType1>::__value && __is_byte<_ValueType2>::__value
  && !__gnu_cxx::__numeric_traits<_ValueType1>::__is_signed
  && !__gnu_cxx::__numeric_traits<_ValueType2>::__is_signed
  && __is_pointer<_II1>::__value
  && __is_pointer<_II2>::__value);

      return std::__lexicographical_compare<__simple>::__lc(__first1, __last1,
           __first2, __last2);
    }

}

namespace std __attribute__ ((__visibility__ ("default"))) {
# 950 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _II1, typename _II2>
    inline bool
    equal(_II1 __first1, _II1 __last1, _II2 __first2)
    {

     
     
     


      ;

      return std::__equal_aux(std::__niter_base<_II1>::__b(__first1),
         std::__niter_base<_II1>::__b(__last1),
         std::__niter_base<_II2>::__b(__first2));
    }
# 982 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _IIter1, typename _IIter2, typename _BinaryPredicate>
    inline bool
    equal(_IIter1 __first1, _IIter1 __last1,
   _IIter2 __first2, _BinaryPredicate __binary_pred)
    {

     
     
      ;

      for (; __first1 != __last1; ++__first1, ++__first2)
 if (!bool(__binary_pred(*__first1, *__first2)))
   return false;
      return true;
    }
# 1013 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _II1, typename _II2>
    inline bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2)
    {

      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
     
     
     
     
      ;
      ;

      return std::__lexicographical_compare_aux
 (std::__niter_base<_II1>::__b(__first1),
  std::__niter_base<_II1>::__b(__last1),
  std::__niter_base<_II2>::__b(__first2),
  std::__niter_base<_II2>::__b(__last2));
    }
# 1048 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _II1, typename _II2, typename _Compare>
    bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2, _Compare __comp)
    {
      typedef typename iterator_traits<_II1>::iterator_category _Category1;
      typedef typename iterator_traits<_II2>::iterator_category _Category2;
      typedef std::__lc_rai<_Category1, _Category2> __rai_type;


     
     
      ;
      ;

      __last1 = __rai_type::__newlast1(__first1, __last1, __first2, __last2);
      for (; __first1 != __last1 && __rai_type::__cnd2(__first2, __last2);
    ++__first1, ++__first2)
 {
   if (__comp(*__first1, *__first2))
     return true;
   if (__comp(*__first2, *__first1))
     return false;
 }
      return __first1 == __last1 && __first2 != __last2;
    }
# 1088 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _InputIterator1, typename _InputIterator2>
    pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2)
    {

     
     
     


      ;

      while (__first1 != __last1 && *__first1 == *__first2)
        {
   ++__first1;
   ++__first2;
        }
      return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
    }
# 1125 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _InputIterator1, typename _InputIterator2,
    typename _BinaryPredicate>
    pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2, _BinaryPredicate __binary_pred)
    {

     
     
      ;

      while (__first1 != __last1 && bool(__binary_pred(*__first1, *__first2)))
        {
   ++__first1;
   ++__first2;
        }
      return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
    }

}
# 62 "/usr/include/c++/4.4/list" 2 3
# 1 "/usr/include/c++/4.4/bits/allocator.h" 1 3
# 48 "/usr/include/c++/4.4/bits/allocator.h" 3
# 1 "/usr/include/c++/4.4/i686-linux-gnu/bits/c++allocator.h" 1 3
# 34 "/usr/include/c++/4.4/i686-linux-gnu/bits/c++allocator.h" 3
# 1 "/usr/include/c++/4.4/ext/new_allocator.h" 1 3
# 33 "/usr/include/c++/4.4/ext/new_allocator.h" 3
# 1 "/usr/include/c++/4.4/new" 1 3
# 39 "/usr/include/c++/4.4/new" 3
# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 41 "/usr/include/c++/4.4/cstddef" 3
       
# 42 "/usr/include/c++/4.4/cstddef" 3


# 1 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 45 "/usr/include/c++/4.4/cstddef" 2 3
# 40 "/usr/include/c++/4.4/new" 2 3
# 1 "/usr/include/c++/4.4/exception" 1 3
# 35 "/usr/include/c++/4.4/exception" 3
#pragma GCC visibility push(default)



extern "C++" {

namespace std
{
# 59 "/usr/include/c++/4.4/exception" 3
  class exception
  {
  public:
    exception() throw() { }
    virtual ~exception() throw();



    virtual const char* what() const throw();
  };



  class bad_exception : public exception
  {
  public:
    bad_exception() throw() { }



    virtual ~bad_exception() throw();


    virtual const char* what() const throw();
  };


  typedef void (*terminate_handler) ();


  typedef void (*unexpected_handler) ();


  terminate_handler set_terminate(terminate_handler) throw();



  void terminate() __attribute__ ((__noreturn__));


  unexpected_handler set_unexpected(unexpected_handler) throw();



  void unexpected() __attribute__ ((__noreturn__));
# 115 "/usr/include/c++/4.4/exception" 3
  bool uncaught_exception() throw();


}

namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {
# 138 "/usr/include/c++/4.4/exception" 3
  void __verbose_terminate_handler();

}

}

#pragma GCC visibility pop
# 41 "/usr/include/c++/4.4/new" 2 3

#pragma GCC visibility push(default)

extern "C++" {

namespace std
{






  class bad_alloc : public exception
  {
  public:
    bad_alloc() throw() { }



    virtual ~bad_alloc() throw();


    virtual const char* what() const throw();
  };

  struct nothrow_t { };

  extern const nothrow_t nothrow;



  typedef void (*new_handler)();



  new_handler set_new_handler(new_handler) throw();
}
# 91 "/usr/include/c++/4.4/new" 3
void* operator new(std::size_t) throw (std::bad_alloc);
void* operator new[](std::size_t) throw (std::bad_alloc);
void operator delete(void*) throw();
void operator delete[](void*) throw();
void* operator new(std::size_t, const std::nothrow_t&) throw();
void* operator new[](std::size_t, const std::nothrow_t&) throw();
void operator delete(void*, const std::nothrow_t&) throw();
void operator delete[](void*, const std::nothrow_t&) throw();


inline void* operator new(std::size_t, void* __p) throw() { return __p; }
inline void* operator new[](std::size_t, void* __p) throw() { return __p; }


inline void operator delete (void*, void*) throw() { }
inline void operator delete[](void*, void*) throw() { }

}

#pragma GCC visibility pop
# 34 "/usr/include/c++/4.4/ext/new_allocator.h" 2 3



namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {

  using std::size_t;
  using std::ptrdiff_t;
# 50 "/usr/include/c++/4.4/ext/new_allocator.h" 3
  template<typename _Tp>
    class new_allocator
    {
    public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp& reference;
      typedef const _Tp& const_reference;
      typedef _Tp value_type;

      template<typename _Tp1>
        struct rebind
        { typedef new_allocator<_Tp1> other; };

      new_allocator() throw() { }

      new_allocator(const new_allocator&) throw() { }

      template<typename _Tp1>
        new_allocator(const new_allocator<_Tp1>&) throw() { }

      ~new_allocator() throw() { }

      pointer
      address(reference __x) const { return &__x; }

      const_pointer
      address(const_reference __x) const { return &__x; }



      pointer
      allocate(size_type __n, const void* = 0)
      {
 if (__builtin_expect(__n > this->max_size(), false))
   std::__throw_bad_alloc();

 return static_cast<_Tp*>(::operator new(__n * sizeof(_Tp)));
      }


      void
      deallocate(pointer __p, size_type)
      { ::operator delete(__p); }

      size_type
      max_size() const throw()
      { return size_t(-1) / sizeof(_Tp); }



      void
      construct(pointer __p, const _Tp& __val)
      { ::new((void *)__p) _Tp(__val); }
# 114 "/usr/include/c++/4.4/ext/new_allocator.h" 3
      void
      destroy(pointer __p) { __p->~_Tp(); }
    };

  template<typename _Tp>
    inline bool
    operator==(const new_allocator<_Tp>&, const new_allocator<_Tp>&)
    { return true; }

  template<typename _Tp>
    inline bool
    operator!=(const new_allocator<_Tp>&, const new_allocator<_Tp>&)
    { return false; }

}
# 35 "/usr/include/c++/4.4/i686-linux-gnu/bits/c++allocator.h" 2 3
# 49 "/usr/include/c++/4.4/bits/allocator.h" 2 3

namespace std __attribute__ ((__visibility__ ("default"))) {
# 59 "/usr/include/c++/4.4/bits/allocator.h" 3
  template<typename _Tp>
    class allocator;


  template<>
    class allocator<void>
    {
    public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef void* pointer;
      typedef const void* const_pointer;
      typedef void value_type;

      template<typename _Tp1>
        struct rebind
        { typedef allocator<_Tp1> other; };
    };
# 85 "/usr/include/c++/4.4/bits/allocator.h" 3
  template<typename _Tp>
    class allocator: public __gnu_cxx::new_allocator<_Tp>
    {
   public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp& reference;
      typedef const _Tp& const_reference;
      typedef _Tp value_type;

      template<typename _Tp1>
        struct rebind
        { typedef allocator<_Tp1> other; };

      allocator() throw() { }

      allocator(const allocator& __a) throw()
      : __gnu_cxx::new_allocator<_Tp>(__a) { }

      template<typename _Tp1>
        allocator(const allocator<_Tp1>&) throw() { }

      ~allocator() throw() { }


    };

  template<typename _T1, typename _T2>
    inline bool
    operator==(const allocator<_T1>&, const allocator<_T2>&)
    { return true; }

  template<typename _Tp>
    inline bool
    operator==(const allocator<_Tp>&, const allocator<_Tp>&)
    { return true; }

  template<typename _T1, typename _T2>
    inline bool
    operator!=(const allocator<_T1>&, const allocator<_T2>&)
    { return false; }

  template<typename _Tp>
    inline bool
    operator!=(const allocator<_Tp>&, const allocator<_Tp>&)
    { return false; }





  extern template class allocator<char>;
  extern template class allocator<wchar_t>;






  template<typename _Alloc, bool = __is_empty(_Alloc)>
    struct __alloc_swap
    { static void _S_do_it(_Alloc&, _Alloc&) { } };

  template<typename _Alloc>
    struct __alloc_swap<_Alloc, false>
    {
      static void
      _S_do_it(_Alloc& __one, _Alloc& __two)
      {

 if (__one != __two)
   swap(__one, __two);
      }
    };


  template<typename _Alloc, bool = __is_empty(_Alloc)>
    struct __alloc_neq
    {
      static bool
      _S_do_it(const _Alloc&, const _Alloc&)
      { return false; }
    };

  template<typename _Alloc>
    struct __alloc_neq<_Alloc, false>
    {
      static bool
      _S_do_it(const _Alloc& __one, const _Alloc& __two)
      { return __one != __two; }
    };

}
# 63 "/usr/include/c++/4.4/list" 2 3
# 1 "/usr/include/c++/4.4/bits/stl_list.h" 1 3
# 61 "/usr/include/c++/4.4/bits/stl_list.h" 3
# 1 "/usr/include/c++/4.4/initializer_list" 1 3
# 62 "/usr/include/c++/4.4/bits/stl_list.h" 2 3

namespace std __attribute__ ((__visibility__ ("default"))) {







  struct _List_node_base
  {
    _List_node_base* _M_next;
    _List_node_base* _M_prev;

    static void
    swap(_List_node_base& __x, _List_node_base& __y);

    void
    transfer(_List_node_base * const __first,
      _List_node_base * const __last);

    void
    reverse();

    void
    hook(_List_node_base * const __position);

    void
    unhook();
  };


  template<typename _Tp>
    struct _List_node : public _List_node_base
    {

      _Tp _M_data;






    };






  template<typename _Tp>
    struct _List_iterator
    {
      typedef _List_iterator<_Tp> _Self;
      typedef _List_node<_Tp> _Node;

      typedef ptrdiff_t difference_type;
      typedef std::bidirectional_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef _Tp* pointer;
      typedef _Tp& reference;

      _List_iterator()
      : _M_node() { }

      explicit
      _List_iterator(_List_node_base* __x)
      : _M_node(__x) { }


      reference
      operator*() const
      { return static_cast<_Node*>(_M_node)->_M_data; }

      pointer
      operator->() const
      { return &static_cast<_Node*>(_M_node)->_M_data; }

      _Self&
      operator++()
      {
 _M_node = _M_node->_M_next;
 return *this;
      }

      _Self
      operator++(int)
      {
 _Self __tmp = *this;
 _M_node = _M_node->_M_next;
 return __tmp;
      }

      _Self&
      operator--()
      {
 _M_node = _M_node->_M_prev;
 return *this;
      }

      _Self
      operator--(int)
      {
 _Self __tmp = *this;
 _M_node = _M_node->_M_prev;
 return __tmp;
      }

      bool
      operator==(const _Self& __x) const
      { return _M_node == __x._M_node; }

      bool
      operator!=(const _Self& __x) const
      { return _M_node != __x._M_node; }


      _List_node_base* _M_node;
    };






  template<typename _Tp>
    struct _List_const_iterator
    {
      typedef _List_const_iterator<_Tp> _Self;
      typedef const _List_node<_Tp> _Node;
      typedef _List_iterator<_Tp> iterator;

      typedef ptrdiff_t difference_type;
      typedef std::bidirectional_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef const _Tp* pointer;
      typedef const _Tp& reference;

      _List_const_iterator()
      : _M_node() { }

      explicit
      _List_const_iterator(const _List_node_base* __x)
      : _M_node(__x) { }

      _List_const_iterator(const iterator& __x)
      : _M_node(__x._M_node) { }



      reference
      operator*() const
      { return static_cast<_Node*>(_M_node)->_M_data; }

      pointer
      operator->() const
      { return &static_cast<_Node*>(_M_node)->_M_data; }

      _Self&
      operator++()
      {
 _M_node = _M_node->_M_next;
 return *this;
      }

      _Self
      operator++(int)
      {
 _Self __tmp = *this;
 _M_node = _M_node->_M_next;
 return __tmp;
      }

      _Self&
      operator--()
      {
 _M_node = _M_node->_M_prev;
 return *this;
      }

      _Self
      operator--(int)
      {
 _Self __tmp = *this;
 _M_node = _M_node->_M_prev;
 return __tmp;
      }

      bool
      operator==(const _Self& __x) const
      { return _M_node == __x._M_node; }

      bool
      operator!=(const _Self& __x) const
      { return _M_node != __x._M_node; }


      const _List_node_base* _M_node;
    };

  template<typename _Val>
    inline bool
    operator==(const _List_iterator<_Val>& __x,
        const _List_const_iterator<_Val>& __y)
    { return __x._M_node == __y._M_node; }

  template<typename _Val>
    inline bool
    operator!=(const _List_iterator<_Val>& __x,
               const _List_const_iterator<_Val>& __y)
    { return __x._M_node != __y._M_node; }



  template<typename _Tp, typename _Alloc>
    class _List_base
    {
    protected:
# 293 "/usr/include/c++/4.4/bits/stl_list.h" 3
      typedef typename _Alloc::template rebind<_List_node<_Tp> >::other
        _Node_alloc_type;

      typedef typename _Alloc::template rebind<_Tp>::other _Tp_alloc_type;

      struct _List_impl
      : public _Node_alloc_type
      {
 _List_node_base _M_node;

 _List_impl()
 : _Node_alloc_type(), _M_node()
 { }

 _List_impl(const _Node_alloc_type& __a)
 : _Node_alloc_type(__a), _M_node()
 { }
      };

      _List_impl _M_impl;

      _List_node<_Tp>*
      _M_get_node()
      { return _M_impl._Node_alloc_type::allocate(1); }

      void
      _M_put_node(_List_node<_Tp>* __p)
      { _M_impl._Node_alloc_type::deallocate(__p, 1); }

  public:
      typedef _Alloc allocator_type;

      _Node_alloc_type&
      _M_get_Node_allocator()
      { return *static_cast<_Node_alloc_type*>(&this->_M_impl); }

      const _Node_alloc_type&
      _M_get_Node_allocator() const
      { return *static_cast<const _Node_alloc_type*>(&this->_M_impl); }

      _Tp_alloc_type
      _M_get_Tp_allocator() const
      { return _Tp_alloc_type(_M_get_Node_allocator()); }

      allocator_type
      get_allocator() const
      { return allocator_type(_M_get_Node_allocator()); }

      _List_base()
      : _M_impl()
      { _M_init(); }

      _List_base(const allocator_type& __a)
      : _M_impl(__a)
      { _M_init(); }
# 359 "/usr/include/c++/4.4/bits/stl_list.h" 3
      ~_List_base()
      { _M_clear(); }

      void
      _M_clear();

      void
      _M_init()
      {
        this->_M_impl._M_node._M_next = &this->_M_impl._M_node;
        this->_M_impl._M_node._M_prev = &this->_M_impl._M_node;
      }
    };
# 416 "/usr/include/c++/4.4/bits/stl_list.h" 3
  template<typename _Tp, typename _Alloc = std::allocator<_Tp> >
    class list : protected _List_base<_Tp, _Alloc>
    {

      typedef typename _Alloc::value_type _Alloc_value_type;
     
     

      typedef _List_base<_Tp, _Alloc> _Base;
      typedef typename _Base::_Tp_alloc_type _Tp_alloc_type;

    public:
      typedef _Tp value_type;
      typedef typename _Tp_alloc_type::pointer pointer;
      typedef typename _Tp_alloc_type::const_pointer const_pointer;
      typedef typename _Tp_alloc_type::reference reference;
      typedef typename _Tp_alloc_type::const_reference const_reference;
      typedef _List_iterator<_Tp> iterator;
      typedef _List_const_iterator<_Tp> const_iterator;
      typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
      typedef std::reverse_iterator<iterator> reverse_iterator;
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Alloc allocator_type;

    protected:


      typedef _List_node<_Tp> _Node;

      using _Base::_M_impl;
      using _Base::_M_put_node;
      using _Base::_M_get_node;
      using _Base::_M_get_Tp_allocator;
      using _Base::_M_get_Node_allocator;







      _Node*
      _M_create_node(const value_type& __x)
      {
 _Node* __p = this->_M_get_node();
 try
   {
     _M_get_Tp_allocator().construct(&__p->_M_data, __x);
   }
 catch(...)
   {
     _M_put_node(__p);
     throw;
   }
 return __p;
      }
# 493 "/usr/include/c++/4.4/bits/stl_list.h" 3
    public:





      list()
      : _Base() { }





      explicit
      list(const allocator_type& __a)
      : _Base(__a) { }
# 518 "/usr/include/c++/4.4/bits/stl_list.h" 3
      explicit
      list(size_type __n, const value_type& __value = value_type(),
    const allocator_type& __a = allocator_type())
      : _Base(__a)
      { _M_fill_initialize(__n, __value); }
# 531 "/usr/include/c++/4.4/bits/stl_list.h" 3
      list(const list& __x)
      : _Base(__x._M_get_Node_allocator())
      { _M_initialize_dispatch(__x.begin(), __x.end(), __false_type()); }
# 570 "/usr/include/c++/4.4/bits/stl_list.h" 3
      template<typename _InputIterator>
        list(_InputIterator __first, _InputIterator __last,
      const allocator_type& __a = allocator_type())
        : _Base(__a)
        {

   typedef typename std::__is_integer<_InputIterator>::__type _Integral;
   _M_initialize_dispatch(__first, __last, _Integral());
 }
# 595 "/usr/include/c++/4.4/bits/stl_list.h" 3
      list&
      operator=(const list& __x);
# 640 "/usr/include/c++/4.4/bits/stl_list.h" 3
      void
      assign(size_type __n, const value_type& __val)
      { _M_fill_assign(__n, __val); }
# 656 "/usr/include/c++/4.4/bits/stl_list.h" 3
      template<typename _InputIterator>
        void
        assign(_InputIterator __first, _InputIterator __last)
        {

   typedef typename std::__is_integer<_InputIterator>::__type _Integral;
   _M_assign_dispatch(__first, __last, _Integral());
 }
# 679 "/usr/include/c++/4.4/bits/stl_list.h" 3
      allocator_type
      get_allocator() const
      { return _Base::get_allocator(); }






      iterator
      begin()
      { return iterator(this->_M_impl._M_node._M_next); }






      const_iterator
      begin() const
      { return const_iterator(this->_M_impl._M_node._M_next); }






      iterator
      end()
      { return iterator(&this->_M_impl._M_node); }






      const_iterator
      end() const
      { return const_iterator(&this->_M_impl._M_node); }






      reverse_iterator
      rbegin()
      { return reverse_iterator(end()); }






      const_reverse_iterator
      rbegin() const
      { return const_reverse_iterator(end()); }






      reverse_iterator
      rend()
      { return reverse_iterator(begin()); }






      const_reverse_iterator
      rend() const
      { return const_reverse_iterator(begin()); }
# 798 "/usr/include/c++/4.4/bits/stl_list.h" 3
      bool
      empty() const
      { return this->_M_impl._M_node._M_next == &this->_M_impl._M_node; }


      size_type
      size() const
      { return std::distance(begin(), end()); }


      size_type
      max_size() const
      { return _M_get_Node_allocator().max_size(); }
# 822 "/usr/include/c++/4.4/bits/stl_list.h" 3
      void
      resize(size_type __new_size, value_type __x = value_type());






      reference
      front()
      { return *begin(); }





      const_reference
      front() const
      { return *begin(); }





      reference
      back()
      {
 iterator __tmp = end();
 --__tmp;
 return *__tmp;
      }





      const_reference
      back() const
      {
 const_iterator __tmp = end();
 --__tmp;
 return *__tmp;
      }
# 877 "/usr/include/c++/4.4/bits/stl_list.h" 3
      void
      push_front(const value_type& __x)
      { this->_M_insert(begin(), __x); }
# 904 "/usr/include/c++/4.4/bits/stl_list.h" 3
      void
      pop_front()
      { this->_M_erase(begin()); }
# 918 "/usr/include/c++/4.4/bits/stl_list.h" 3
      void
      push_back(const value_type& __x)
      { this->_M_insert(end(), __x); }
# 944 "/usr/include/c++/4.4/bits/stl_list.h" 3
      void
      pop_back()
      { this->_M_erase(iterator(this->_M_impl._M_node._M_prev)); }
# 977 "/usr/include/c++/4.4/bits/stl_list.h" 3
      iterator
      insert(iterator __position, const value_type& __x);
# 1026 "/usr/include/c++/4.4/bits/stl_list.h" 3
      void
      insert(iterator __position, size_type __n, const value_type& __x)
      {
 list __tmp(__n, __x, _M_get_Node_allocator());
 splice(__position, __tmp);
      }
# 1046 "/usr/include/c++/4.4/bits/stl_list.h" 3
      template<typename _InputIterator>
        void
        insert(iterator __position, _InputIterator __first,
        _InputIterator __last)
        {
   list __tmp(__first, __last, _M_get_Node_allocator());
   splice(__position, __tmp);
 }
# 1070 "/usr/include/c++/4.4/bits/stl_list.h" 3
      iterator
      erase(iterator __position);
# 1091 "/usr/include/c++/4.4/bits/stl_list.h" 3
      iterator
      erase(iterator __first, iterator __last)
      {
 while (__first != __last)
   __first = erase(__first);
 return __last;
      }
# 1108 "/usr/include/c++/4.4/bits/stl_list.h" 3
      void



      swap(list& __x)

      {
 _List_node_base::swap(this->_M_impl._M_node, __x._M_impl._M_node);



 std::__alloc_swap<typename _Base::_Node_alloc_type>::
   _S_do_it(_M_get_Node_allocator(), __x._M_get_Node_allocator());
      }







      void
      clear()
      {
        _Base::_M_clear();
        _Base::_M_init();
      }
# 1148 "/usr/include/c++/4.4/bits/stl_list.h" 3
      void



      splice(iterator __position, list& __x)

      {
 if (!__x.empty())
   {
     _M_check_equal_allocators(__x);

     this->_M_transfer(__position, __x.begin(), __x.end());
   }
      }
# 1172 "/usr/include/c++/4.4/bits/stl_list.h" 3
      void



      splice(iterator __position, list& __x, iterator __i)

      {
 iterator __j = __i;
 ++__j;
 if (__position == __i || __position == __j)
   return;

 if (this != &__x)
   _M_check_equal_allocators(__x);

 this->_M_transfer(__position, __i, __j);
      }
# 1202 "/usr/include/c++/4.4/bits/stl_list.h" 3
      void




      splice(iterator __position, list& __x, iterator __first,
      iterator __last)

      {
 if (__first != __last)
   {
     if (this != &__x)
       _M_check_equal_allocators(__x);

     this->_M_transfer(__position, __first, __last);
   }
      }
# 1231 "/usr/include/c++/4.4/bits/stl_list.h" 3
      void
      remove(const _Tp& __value);
# 1245 "/usr/include/c++/4.4/bits/stl_list.h" 3
      template<typename _Predicate>
        void
        remove_if(_Predicate);
# 1259 "/usr/include/c++/4.4/bits/stl_list.h" 3
      void
      unique();
# 1274 "/usr/include/c++/4.4/bits/stl_list.h" 3
      template<typename _BinaryPredicate>
        void
        unique(_BinaryPredicate);
# 1287 "/usr/include/c++/4.4/bits/stl_list.h" 3
      void



      merge(list& __x);
# 1306 "/usr/include/c++/4.4/bits/stl_list.h" 3
      template<typename _StrictWeakOrdering>
        void



        merge(list&, _StrictWeakOrdering);







      void
      reverse()
      { this->_M_impl._M_node.reverse(); }







      void
      sort();







      template<typename _StrictWeakOrdering>
        void
        sort(_StrictWeakOrdering);

    protected:






      template<typename _Integer>
        void
        _M_initialize_dispatch(_Integer __n, _Integer __x, __true_type)
        { _M_fill_initialize(static_cast<size_type>(__n), __x); }


      template<typename _InputIterator>
        void
        _M_initialize_dispatch(_InputIterator __first, _InputIterator __last,
          __false_type)
        {
   for (; __first != __last; ++__first)
     push_back(*__first);
 }



      void
      _M_fill_initialize(size_type __n, const value_type& __x)
      {
 for (; __n > 0; --__n)
   push_back(__x);
      }
# 1380 "/usr/include/c++/4.4/bits/stl_list.h" 3
      template<typename _Integer>
        void
        _M_assign_dispatch(_Integer __n, _Integer __val, __true_type)
        { _M_fill_assign(__n, __val); }


      template<typename _InputIterator>
        void
        _M_assign_dispatch(_InputIterator __first, _InputIterator __last,
      __false_type);



      void
      _M_fill_assign(size_type __n, const value_type& __val);



      void
      _M_transfer(iterator __position, iterator __first, iterator __last)
      { __position._M_node->transfer(__first._M_node, __last._M_node); }



      void
      _M_insert(iterator __position, const value_type& __x)
      {
        _Node* __tmp = _M_create_node(__x);
        __tmp->hook(__position._M_node);
      }
# 1421 "/usr/include/c++/4.4/bits/stl_list.h" 3
      void
      _M_erase(iterator __position)
      {
        __position._M_node->unhook();
        _Node* __n = static_cast<_Node*>(__position._M_node);



 _M_get_Tp_allocator().destroy(&__n->_M_data);

        _M_put_node(__n);
      }


      void
      _M_check_equal_allocators(list& __x)
      {
 if (std::__alloc_neq<typename _Base::_Node_alloc_type>::
     _S_do_it(_M_get_Node_allocator(), __x._M_get_Node_allocator()))
   __throw_runtime_error(("list::_M_check_equal_allocators"));
      }
    };
# 1454 "/usr/include/c++/4.4/bits/stl_list.h" 3
  template<typename _Tp, typename _Alloc>
    inline bool
    operator==(const list<_Tp, _Alloc>& __x, const list<_Tp, _Alloc>& __y)
    {
      typedef typename list<_Tp, _Alloc>::const_iterator const_iterator;
      const_iterator __end1 = __x.end();
      const_iterator __end2 = __y.end();

      const_iterator __i1 = __x.begin();
      const_iterator __i2 = __y.begin();
      while (__i1 != __end1 && __i2 != __end2 && *__i1 == *__i2)
 {
   ++__i1;
   ++__i2;
 }
      return __i1 == __end1 && __i2 == __end2;
    }
# 1483 "/usr/include/c++/4.4/bits/stl_list.h" 3
  template<typename _Tp, typename _Alloc>
    inline bool
    operator<(const list<_Tp, _Alloc>& __x, const list<_Tp, _Alloc>& __y)
    { return std::lexicographical_compare(__x.begin(), __x.end(),
       __y.begin(), __y.end()); }


  template<typename _Tp, typename _Alloc>
    inline bool
    operator!=(const list<_Tp, _Alloc>& __x, const list<_Tp, _Alloc>& __y)
    { return !(__x == __y); }


  template<typename _Tp, typename _Alloc>
    inline bool
    operator>(const list<_Tp, _Alloc>& __x, const list<_Tp, _Alloc>& __y)
    { return __y < __x; }


  template<typename _Tp, typename _Alloc>
    inline bool
    operator<=(const list<_Tp, _Alloc>& __x, const list<_Tp, _Alloc>& __y)
    { return !(__y < __x); }


  template<typename _Tp, typename _Alloc>
    inline bool
    operator>=(const list<_Tp, _Alloc>& __x, const list<_Tp, _Alloc>& __y)
    { return !(__x < __y); }


  template<typename _Tp, typename _Alloc>
    inline void
    swap(list<_Tp, _Alloc>& __x, list<_Tp, _Alloc>& __y)
    { __x.swap(__y); }
# 1531 "/usr/include/c++/4.4/bits/stl_list.h" 3
}
# 64 "/usr/include/c++/4.4/list" 2 3


# 1 "/usr/include/c++/4.4/bits/list.tcc" 1 3
# 60 "/usr/include/c++/4.4/bits/list.tcc" 3
namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _Tp, typename _Alloc>
    void
    _List_base<_Tp, _Alloc>::
    _M_clear()
    {
      typedef _List_node<_Tp> _Node;
      _Node* __cur = static_cast<_Node*>(this->_M_impl._M_node._M_next);
      while (__cur != &this->_M_impl._M_node)
 {
   _Node* __tmp = __cur;
   __cur = static_cast<_Node*>(__cur->_M_next);



   _M_get_Tp_allocator().destroy(&__tmp->_M_data);

   _M_put_node(__tmp);
 }
    }
# 95 "/usr/include/c++/4.4/bits/list.tcc" 3
  template<typename _Tp, typename _Alloc>
    typename list<_Tp, _Alloc>::iterator
    list<_Tp, _Alloc>::
    insert(iterator __position, const value_type& __x)
    {
      _Node* __tmp = _M_create_node(__x);
      __tmp->hook(__position._M_node);
      return iterator(__tmp);
    }

  template<typename _Tp, typename _Alloc>
    typename list<_Tp, _Alloc>::iterator
    list<_Tp, _Alloc>::
    erase(iterator __position)
    {
      iterator __ret = iterator(__position._M_node->_M_next);
      _M_erase(__position);
      return __ret;
    }

  template<typename _Tp, typename _Alloc>
    void
    list<_Tp, _Alloc>::
    resize(size_type __new_size, value_type __x)
    {
      iterator __i = begin();
      size_type __len = 0;
      for (; __i != end() && __len < __new_size; ++__i, ++__len)
        ;
      if (__len == __new_size)
        erase(__i, end());
      else
        insert(end(), __new_size - __len, __x);
    }

  template<typename _Tp, typename _Alloc>
    list<_Tp, _Alloc>&
    list<_Tp, _Alloc>::
    operator=(const list& __x)
    {
      if (this != &__x)
 {
   iterator __first1 = begin();
   iterator __last1 = end();
   const_iterator __first2 = __x.begin();
   const_iterator __last2 = __x.end();
   for (; __first1 != __last1 && __first2 != __last2;
        ++__first1, ++__first2)
     *__first1 = *__first2;
   if (__first2 == __last2)
     erase(__first1, __last1);
   else
     insert(__last1, __first2, __last2);
 }
      return *this;
    }

  template<typename _Tp, typename _Alloc>
    void
    list<_Tp, _Alloc>::
    _M_fill_assign(size_type __n, const value_type& __val)
    {
      iterator __i = begin();
      for (; __i != end() && __n > 0; ++__i, --__n)
        *__i = __val;
      if (__n > 0)
        insert(end(), __n, __val);
      else
        erase(__i, end());
    }

  template<typename _Tp, typename _Alloc>
    template <typename _InputIterator>
      void
      list<_Tp, _Alloc>::
      _M_assign_dispatch(_InputIterator __first2, _InputIterator __last2,
    __false_type)
      {
        iterator __first1 = begin();
        iterator __last1 = end();
        for (; __first1 != __last1 && __first2 != __last2;
      ++__first1, ++__first2)
          *__first1 = *__first2;
        if (__first2 == __last2)
          erase(__first1, __last1);
        else
          insert(__last1, __first2, __last2);
      }

  template<typename _Tp, typename _Alloc>
    void
    list<_Tp, _Alloc>::
    remove(const value_type& __value)
    {
      iterator __first = begin();
      iterator __last = end();
      iterator __extra = __last;
      while (__first != __last)
 {
   iterator __next = __first;
   ++__next;
   if (*__first == __value)
     {



       if (&*__first != &__value)
  _M_erase(__first);
       else
  __extra = __first;
     }
   __first = __next;
 }
      if (__extra != __last)
 _M_erase(__extra);
    }

  template<typename _Tp, typename _Alloc>
    void
    list<_Tp, _Alloc>::
    unique()
    {
      iterator __first = begin();
      iterator __last = end();
      if (__first == __last)
 return;
      iterator __next = __first;
      while (++__next != __last)
 {
   if (*__first == *__next)
     _M_erase(__next);
   else
     __first = __next;
   __next = __first;
 }
    }

  template<typename _Tp, typename _Alloc>
    void
    list<_Tp, _Alloc>::



    merge(list& __x)

    {


      if (this != &__x)
 {
   _M_check_equal_allocators(__x);

   iterator __first1 = begin();
   iterator __last1 = end();
   iterator __first2 = __x.begin();
   iterator __last2 = __x.end();
   while (__first1 != __last1 && __first2 != __last2)
     if (*__first2 < *__first1)
       {
  iterator __next = __first2;
  _M_transfer(__first1, __first2, ++__next);
  __first2 = __next;
       }
     else
       ++__first1;
   if (__first2 != __last2)
     _M_transfer(__last1, __first2, __last2);
 }
    }

  template<typename _Tp, typename _Alloc>
    template <typename _StrictWeakOrdering>
      void
      list<_Tp, _Alloc>::



      merge(list& __x, _StrictWeakOrdering __comp)

      {


 if (this != &__x)
   {
     _M_check_equal_allocators(__x);

     iterator __first1 = begin();
     iterator __last1 = end();
     iterator __first2 = __x.begin();
     iterator __last2 = __x.end();
     while (__first1 != __last1 && __first2 != __last2)
       if (__comp(*__first2, *__first1))
  {
    iterator __next = __first2;
    _M_transfer(__first1, __first2, ++__next);
    __first2 = __next;
  }
       else
  ++__first1;
     if (__first2 != __last2)
       _M_transfer(__last1, __first2, __last2);
   }
      }

  template<typename _Tp, typename _Alloc>
    void
    list<_Tp, _Alloc>::
    sort()
    {

      if (this->_M_impl._M_node._M_next != &this->_M_impl._M_node
   && this->_M_impl._M_node._M_next->_M_next != &this->_M_impl._M_node)
      {
        list __carry;
        list __tmp[64];
        list * __fill = &__tmp[0];
        list * __counter;

        do
   {
     __carry.splice(__carry.begin(), *this, begin());

     for(__counter = &__tmp[0];
  __counter != __fill && !__counter->empty();
  ++__counter)
       {
  __counter->merge(__carry);
  __carry.swap(*__counter);
       }
     __carry.swap(*__counter);
     if (__counter == __fill)
       ++__fill;
   }
 while ( !empty() );

        for (__counter = &__tmp[1]; __counter != __fill; ++__counter)
          __counter->merge(*(__counter - 1));
        swap( *(__fill - 1) );
      }
    }

  template<typename _Tp, typename _Alloc>
    template <typename _Predicate>
      void
      list<_Tp, _Alloc>::
      remove_if(_Predicate __pred)
      {
        iterator __first = begin();
        iterator __last = end();
        while (__first != __last)
   {
     iterator __next = __first;
     ++__next;
     if (__pred(*__first))
       _M_erase(__first);
     __first = __next;
   }
      }

  template<typename _Tp, typename _Alloc>
    template <typename _BinaryPredicate>
      void
      list<_Tp, _Alloc>::
      unique(_BinaryPredicate __binary_pred)
      {
        iterator __first = begin();
        iterator __last = end();
        if (__first == __last)
   return;
        iterator __next = __first;
        while (++__next != __last)
   {
     if (__binary_pred(*__first, *__next))
       _M_erase(__next);
     else
       __first = __next;
     __next = __first;
   }
      }

  template<typename _Tp, typename _Alloc>
    template <typename _StrictWeakOrdering>
      void
      list<_Tp, _Alloc>::
      sort(_StrictWeakOrdering __comp)
      {

 if (this->_M_impl._M_node._M_next != &this->_M_impl._M_node
     && this->_M_impl._M_node._M_next->_M_next != &this->_M_impl._M_node)
   {
     list __carry;
     list __tmp[64];
     list * __fill = &__tmp[0];
     list * __counter;

     do
       {
  __carry.splice(__carry.begin(), *this, begin());

  for(__counter = &__tmp[0];
      __counter != __fill && !__counter->empty();
      ++__counter)
    {
      __counter->merge(__carry, __comp);
      __carry.swap(*__counter);
    }
  __carry.swap(*__counter);
  if (__counter == __fill)
    ++__fill;
       }
     while ( !empty() );

     for (__counter = &__tmp[1]; __counter != __fill; ++__counter)
       __counter->merge(*(__counter - 1), __comp);
     swap(*(__fill - 1));
   }
      }

}
# 67 "/usr/include/c++/4.4/list" 2 3
# 16 "src/gamebase.h" 2
using namespace std;

typedef unsigned int uint;
typedef uint64_t uint64;
typedef uint32_t uint32;
typedef uint16_t uint16;
typedef uint8_t uint8;
typedef int64_t int64;
typedef int32_t int32;
typedef int16_t int16;
typedef int8_t int8;
typedef uint16 object_flags16;
typedef uint16 geometry16;
typedef uint8 side8;


# 1 "src/coord.h" 1
# 33 "src/gamebase.h" 2

typedef int16 coord;
typedef int32 long_coord;
struct Mouse { coord x; coord y; coord xvel; coord yvel; };

# 1 "src/util.h" 1
# 39 "src/gamebase.h" 2




typedef int32 object_flags;






enum geometry {
 GEOM_RECT,
 GEOM_BOUNDARY,
 GEOM_CIRCLE,
 GEOM_OVAL,
 GEOM_SURFACE,
 GEOM_MASK,
};

typedef int32 side;
# 70 "src/gamebase.h"
# 1 "src/objects/Object.h" 1



# 1 "src/gamebase.h" 1
# 5 "src/objects/Object.h" 2






struct Object : public gc {
 coord x;
 coord y;
 object_flags flags;

 virtual float order ();

 virtual void create ();
 virtual void before_move ();
 virtual void move ();
 virtual void after_move ();
 virtual void draw ();
 virtual void after_draw ();

 virtual coord l ();
 coord L ();
 virtual coord t ();
 coord T ();
 virtual coord r ();
 coord R ();
 virtual coord b ();
 coord B ();
 virtual geometry geom ();


 void insert ();

 void remove ();


 bool collision (Object* other);
 bool collision_rect(coord rl, coord rt, coord rr, coord rb);
 side detect_side (Object* other);
 side out_of_bounds ();
 side offscreen (void* _self);
};
# 71 "src/gamebase.h" 2
# 1 "src/objects/Room.h" 1



# 1 "src/objects/Colored.h" 1






template <class O>
class Colored : public O {
public:
 uint32 color;
 Colored ();
 virtual void draw ();
};
# 5 "src/objects/Room.h" 2
# 1 "src/objects/Resizable.h" 1



template <class O>
struct Resizable : public O {
 coord w;
 coord h;
 virtual coord r ();
 virtual coord b ();
};
# 6 "src/objects/Room.h" 2
# 1 "src/objects/Inverted.h" 1




template <class O>
class Inverted : public O {
 virtual coord l ();
 virtual coord t ();
 virtual coord r ();
 virtual coord b ();
 virtual geometry geom ();
};
# 7 "src/objects/Room.h" 2

struct Camera : public Inverted< Resizable<Object> > > {
 void constrain (Inverted* b);
 void constrain_to_room ();
 void follow (Object* o, coord border, bool constrain = true);
 void center (Object* o, bool constrain = true);
};

struct Room : public Colored< Inverted< Resizable<Object> > > {
 Camera camera_start;
 float fps;
 virtual void init () { }
 Room ();
 void start ();
};



Room game;

void game_play();



void room_exit();
# 72 "src/gamebase.h" 2
typedef list<Object*>::iterator Object_i;



bool game_fullscreen = false;
bool escape_quits = true;
bool f11_toggles_fullscreen = true;




list<Object*> objects;
list<Object*> queued;
        Room* current_room = __null;
        uint8 keypress[400];
        Mouse mouse;
       Camera camera;




     jmp_buf room_exit_jmp;
SDL_Surface* game_window = __null;
        bool game_initted = false;
  FPSmanager fpsm;





uint32 window_flags = 0x00000000;
uint32 surface_flags = 0x00000000;





void game_init();
void gamebase_main_loop();
void game_quit();
void set_video();
void set_free();
void garbage_collect();

void register_object(Object* o);




 SDL_Surface* load_image (char* filename);
SDL_Surface** split_strip (SDL_Surface* image, uint width, uint height);
         void draw_color (uint32 c, coord l, coord t, coord r, coord b);
         void draw_surface (SDL_Surface* surface, coord x, coord y);
# 5 "src/gamebase.c++" 2
# 1 "src/objects/Object.c++" 1



# 1 "src/objects/Object.h" 1
# 5 "src/objects/Object.c++" 2



inline float Object::order () {return 0*1;}

inline void Object::create () {}
inline void Object::before_move () {}
inline void Object::move () {}
inline void Object::after_move () {}
inline void Object::draw () {}
inline void Object::after_draw () {}

inline coord Object::l () {return 0*1;}
inline coord Object::L () {return x-l();}
inline coord Object::t () {return 0*1;}
inline coord Object::T () {return y-t();}
inline coord Object::r () {return 0*1;}
inline coord Object::R () {return x+r();}
inline coord Object::b () {return 0*1;}
inline coord Object::B () {return y+b();}
inline geometry Object::geom () {return GEOM_RECT;}


inline void Object::insert () {
 register_object(this);
}

inline void Object::remove () {
 flags |= 4;
}


bool Object::collision (Object* other) {
 Object* self = this;
 if (self == other) return 0;
 switch ((uint)self->geom() | ((uint)other->geom())<<16) {
  case (GEOM_RECT|GEOM_RECT<<16):
   return self->L() < other->R()
       && self->T() < other->B()
       && self->R() > other->L()
       && self->B() > other->T();
  case (GEOM_BOUNDARY|GEOM_CIRCLE<<16):
  case (GEOM_BOUNDARY|GEOM_RECT<<16):
   if(1) { typeof(self) _tmp; _tmp = (self); (self) = (other); (other) = _tmp; };
  case (GEOM_CIRCLE|GEOM_BOUNDARY<<16):
  case (GEOM_RECT|GEOM_BOUNDARY<<16):
   return self->L() < other->R()
       || self->T() < other->B()
       || self->R() > other->L()
       || self->B() > other->T();
  case (GEOM_BOUNDARY|GEOM_BOUNDARY<<16):
   return 1;
  case (GEOM_RECT|GEOM_CIRCLE<<16):
   if(1) { typeof(self) _tmp; _tmp = (self); (self) = (other); (other) = _tmp; };
  case (GEOM_CIRCLE|GEOM_RECT<<16): {
   if (self->y < other->T()) {
    if (self->x < other->L())
     return ( (other->T() - self->y)
      *(long_coord) (other->T() - self->y)
                  + (other->L() - self->x)
      *(long_coord) (other->L() - self->x)
      < self->r() *(long_coord) self->r()
     );
    if (self->x <= other->R())
     return self->B() > other->T();

     return ( (other->T() - self->y)
      *(long_coord) (other->T() - self->y)
                  + (self->x - other->R())
      *(long_coord) (self->x - other->R())
      < self->r() *(long_coord) self->r()
     );
   }
   if (self->y <= other->B())
    return self->L() < other->R() && self->R() > other->L();

    if (self->x < other->L())
     return ( (self->y - other->B())
      *(long_coord) (self->y - other->B())
                  + (other->L() - self->x)
      *(long_coord) (other->L() - self->x)
      < self->r() *(long_coord) self->r()
     );
    if (self->x <= other->R())
     return self->T() < other->B();

     return ( (self->y - other->B())
      *(long_coord) (self->y - other->B())
                  + (self->x - other->R())
      *(long_coord) (self->x - other->R())
      < self->r() *(long_coord) self->r()
     );
  }
  case (GEOM_CIRCLE|GEOM_CIRCLE<<16): {
   long_coord sqdist = (self->x - other->x)
         *(long_coord) (self->x - other->x)
                  + (self->y - other->y)
         *(long_coord) (self->y - other->y);
   return sqdist < ( (self->r() + other->r())
       *(long_coord) (self->r() + other->r())
   );
  }
 }
 return false;
}

side Object::detect_side (Object* other) {
 Object* self = this;
 side s = 0;
 if (other->geom() == GEOM_RECT) {
  coord t = self->B() - other->T();
  coord l = self->R() - other->L();
  coord r = self->L() - other->R();
  coord b = self->T() - other->B();
  if (t <= l && t <= r) s |= 2;
  if (b <= l && b <= r) s |= 8;
  if (l <= t && l <= b) s |= 1;
  if (r <= t && r <= b) s |= 4;
  return s;
 }
 else if (other->geom() == GEOM_BOUNDARY) {
  if (self->T() < other->B()) s |= 8;
  if (self->L() < other->R()) s |= 4;
  if (self->B() > other->T()) s |= 2;
  if (self->R() > other->L()) s |= 1;
  return s;
 }



 return 0;
}

side Object::offscreen (void* _self) {
 side s = 0;
 if (B() < camera.y) s |= 2;
 else if (T() > camera.y + camera.h) s |= 8;
 if (R() < camera.x) s |= 1;
 else if (L() > camera.x + camera.w) s |= 4;
 return s;
}

side Object::out_of_bounds () {
 side s = 0;
 if (B() < 0) s |= 2;
 else if (T() > current_room->h) s |= 8;
 if (R() < 0) s |= 1;
 else if (L() > current_room->w) s |= 4;
 return s;
}

inline bool Object::collision_rect (coord rl, coord rt, coord rr, coord rb) {
 Resizable<Object> r;
 r.x = rl;
 r.y = rt;
 r.w = rr-rl;
 r.h = rb-rt;
 return collision(&r);
}
# 6 "src/gamebase.c++" 2
# 1 "src/objects/Room.c++" 1



# 1 "src/objects/Room.h" 1
# 5 "src/objects/Room.c++" 2
# 1 "src/objects/Colored.c++" 1






template <class O>
Colored<O>::Colored () : color(0xffffff) { }
template <class O>
inline void Colored<O>::draw () {
 O::draw();
 draw_color(color, this);
}
# 6 "src/objects/Room.c++" 2
# 1 "src/objects/Resizable.c++" 1




template <class O>
inline coord Resizable<O>::r () { return w; }
inline coord Resizable<O>::b () { return h; }
# 7 "src/objects/Room.c++" 2
# 1 "src/objects/Inverted.c++" 1





template <class O>
inline coord Inverted<O>::l () { return -O::r(); }
template <class O>
inline coord Inverted<O>::t () { return -O::b(); }
template <class O>
inline coord Inverted<O>::r () { return -O::l(); }
template <class O>
inline coord Inverted<O>::b () { return -O::t(); }
template <class O>
inline geometry Inverted<O>::geom () { return GEOM_BOUNDARY; }
};
# 8 "src/objects/Room.c++" 2


inline void Camera::constrain (Inverted* b) {
 if ((x) < (b->x)) (x) = (b->x);
 if ((x) > (b->x + b->w - w)) (x) = (b->x + b->w - w);
 if ((y) < (b->y)) (y) = (b->y);
 if ((y) > (b->y + b->h - h)) (y) = (b->y + b->h - h);
}
inline void Camera::constrain_to_room () { constrain(current_room); }
inline void Camera::follow (Object* o, coord border, bool constrain = true) {
 if ((x) > (o->x - border)) (x) = (o->x - border);
 if ((x) < (o->x + border - w)) (x) = (o->x + border - w);
 if ((y) > (o->y - border)) (y) = (o->y - border);
 if ((y) < (o->y + border - h)) (y) = (o->y + border - h);
 if (constrain) constrain_to_room();
}
inline void Camera::center (Object* o, bool constrain = true) {
 x = o->x - w/2;
 y = 0->y - h/2;
 if (constrain) constrain_to_room();
}


inline virtual void Room::init () { }
Room::Room () : fps(30), ncontents(0), contents(__null)
 { color = 0x000000; w = 640; h = 480; }

void Room::start () {
 game_init();

 current_room = this;

 camera = camera_start;
 camera.w ||= w;
 camera.h ||= h;

 init();

 set_video();
 if (_setjmp (room_exit_jmp)) goto finish_exiting_room;

 gamebase_main_loop();

 finish_exiting_room:

 objects.clear();
 garbage_collect();
}




inline void game_play() {
 game.start();
}



inline void room_exit() {
 if (current_room)
  longjmp(room_exit_jmp, 1);
}
# 7 "src/gamebase.c++" 2
# 1 "src/graphics.c++" 1
# 22 "src/graphics.c++"
SDL_PixelFormat RGBAFORMAT = {
 __null,32,4,0,0,0,0,0,0,0,0,
 0x000000ff,
 0x0000ff00,
 0x00ff0000,
 0xff000000,
 0,0
};




SDL_Surface* load_image(const char* filename) {
 game_init();
 SDL_Surface* image = IMG_Load(filename);
 if (!image) { printf("Error: Could not load \"%s\"\n", filename); exit(1); }
 SDL_Surface* surf = SDL_ConvertSurface(image, &RGBAFORMAT, surface_flags);
 SDL_FreeSurface(image);
 return surf;
}




void draw_color (uint32 color, coord l, coord t, coord r, coord b) {
 SDL_Rect draw_rect = {
  (int16)((l - camera.x)/1),
  (int16)((t - camera.y)/1),
  (uint16)((r - l)/1),
  (uint16)((b - t/1))
 };
 SDL_FillRect(
  game_window,
  &draw_rect,
  color
 );
}
inline void draw_color (uint32 color, Object* o) {
 draw_color(color, o->x - o->l(), o->y - o->t(), o->x + o->r(), o->y + o->b());
}

void draw_surface (SDL_Surface* surface, coord x, coord y) {
 SDL_Rect draw_rect = {(int16)((x - camera.x)/1), (int16)((y - camera.y)/1), 0, 0};
 SDL_UpperBlit(
  surface,
  __null,
  game_window,
  &draw_rect
 );
}
# 8 "src/gamebase.c++" 2
# 16 "src/gamebase.c++"
void game_init() {
 if (game_initted) return;
 game_initted = 1;
 SDL_Init(0x00000020);

 uint i;
 for (i=0; i < 400; i++) {
  keypress[i] = 0;
 }

 SDL_initFramerate(&fpsm);
}


void gamebase_main_loop() {
 SDL_Event event;
 for (;;) {
  list<Object*>::iterator cur;



  if (current_room->color != 0xff000000) {
   SDL_FillRect(
    game_window,
    __null,
    current_room->color
   );
  }
# 58 "src/gamebase.c++"
  for (cur = objects.begin(); cur != objects.end(); cur++)
   (*cur)->draw();

  SDL_Flip(game_window);


  SDL_framerateDelay(&fpsm);


  while (SDL_PollEvent(&event)) {
   switch (event.type) {
    case SDL_QUIT: {
     game_quit();
    }
    case SDL_KEYDOWN: {
     if (event.key.keysym.sym < 400) {



      keypress[event.key.keysym.sym] = 1;

     }
     if (escape_quits && event.key.keysym.sym == SDLK_ESCAPE)
      game_quit();
     if (f11_toggles_fullscreen && event.key.keysym.sym == SDLK_F11) {
      game_fullscreen = !game_fullscreen;
      set_video();
     }
     break;
    }
    case SDL_KEYUP: {
     if (event.key.keysym.sym < 400) {
      keypress[event.key.keysym.sym] = 0;
     }
     break;
    }
    case SDL_MOUSEMOTION: {
     mouse.x = event.motion.x;
     mouse.y = event.motion.y;
     mouse.xvel = event.motion.xrel;
     mouse.yvel = event.motion.yrel;
    }
   }
  }
# 130 "src/gamebase.c++"
  for (cur = objects.begin(); cur != objects.end(); cur++)
   (*cur)->before_move();

  for (cur = objects.begin(); cur != objects.end(); cur++)
   (*cur)->move();

  for (cur = objects.begin(); cur != objects.end(); cur++)
   (*cur)->after_move();



  for (cur = objects.begin(); cur != objects.end();) {
   if ((*cur)->flags & 4)
    objects.erase(cur++);
   else cur++;
  }

  garbage_collect();

 }
}




void game_quit() {
 SDL_Quit();
 exit(0);
}

void set_video() {
 SDL_setFramerate(&fpsm, current_room->fps);
 game_window = SDL_SetVideoMode(
  (camera.w != 0 ? camera.w : current_room->w)/1,
  (camera.h != 0 ? camera.h : current_room->h)/1,
  32,
  window_flags|(game_fullscreen ? 0x80000000 : 0)
 );
}



void register_object(Object* o) {
 if (objects.empty()) {
  objects.push_front(o);
  return;
 }
 Object_i cur = objects.begin();
 if (o->order() <= (*cur)->order()) {
  objects.push_front(o);
  return;
 }
 for (cur++; cur != objects.end(); cur++) {
  if (o->order() <= (*cur)->order()) {
   objects.insert(cur, o);
   return;
  }
 }
 objects.push_back(o);
}





void garbage_collect() {
 GC_gcollect();
}
# 3 "examples/breakout/breakout.c++" 2

# 1 "examples/breakout/Brick.c++" 1

# 1 "src/objects/Surfaced.c++" 1



# 1 "src/objects/Surfaced.h" 1






template <class O>
struct Surfaced : public O {
 SDL_Surface* surface;
 virtual coord surface_x ();
 virtual coord surface_y ();

 virtual void draw ();
};
# 5 "src/objects/Surfaced.c++" 2

template <class O>
inline coord Surfaces<O>::surface_x () { return - this->l(); }
template <class O>
inline coord Surfaced<O>::surface_y () { return - this->t(); }

template <class O>
inline void Surfaced<O>::draw () {
  O::draw();
  draw_surface(surface, this->x + surface_x(), this->y + surface_y());
}
# 3 "examples/breakout/Brick.c++" 2


SDL_Surface* brick_surface = __null;

struct Brick : public Surfaced< Colored< Object > > {
 virtual coord r () { return 32; }
 virtual coord b () { return 12; }
 Brick () { color = rand() & 0x00ffffff; surface = brick_surface; }
};
# 5 "examples/breakout/breakout.c++" 2
# 1 "examples/breakout/Paddle.c++" 1
# 1 "src/objects/Moving.c++" 1



# 1 "src/objects/Moving.h" 1





typedef uint32 collide_flags;
# 18 "src/objects/Moving.h"
template <class O>
struct Moving : public O {
 coord xvel;
 coord yvel;
 Moving ();
 virtual void move ();
 side collision_direction (Object* other);
 side collide (Object* other, collide_flags flags);
 side contact (Object* other);
 side bounce (Object* other);

 template <class OtherClass = Object>
 list<OtherClass*> get_collisions (bool order_by_hit = false);
};
# 5 "src/objects/Moving.c++" 2

template <class O>
Moving<O>::Moving () : xvel(0*1), yvel(0*1) { }
template <class O>
inline void Moving<O>::move ()
 this->x += xvel;
 this->y += yvel;
 O::move();
}

template <class O>
inline side Moving<O>::collision_direction (Object* other) {
 if (other->geom() == GEOM_BOUNDARY) {
  return this->detect_side(other);
 }
 side r = 0;
 coord xv = xvel;
 coord yv = yvel;
 Moving* m = dynamic_cast<Moving*>(other);
 if (m != __null) {
  xv -= m->xvel;
  yv -= m->yvel;
 }

 if (xv == 0) {
  return
    yv > 0 ? 2
  : yv < 0 ? 8
  : 0;
 }
 if (yv == 0) {
  return
    xv > 0 ? 1
  : xv < 0 ? 4
  : 0;
 }



 long_coord x_yv;
 long_coord y_xv;
 if (yv > 0) {
  y_xv = (this->B() - other->T()) *(long_coord) xv;
  if (xvel > 0) {
   x_yv = (this->R() - other->L()) *(long_coord) yv;
   if (x_yv >= y_xv) r |= 2;
   if (x_yv <= y_xv) r |= 1;
  }
  else {
   x_yv = (other->R() - this->L()) *(long_coord) yv;
   if (x_yv >= -y_xv) r |= 2;
   if (x_yv <= -y_xv) r |= 4;
  }
 }
 else {
  y_xv = (other->B() - this->T()) *(long_coord) xv;
  if (xvel > 0) {
   x_yv = (this->R() - other->L()) *(long_coord) yv;
   if (-x_yv >= y_xv) r |= 8;
   if (-x_yv <= y_xv) r |= 1;
  }
  else {
   x_yv = (other->R() - this->L()) *(long_coord) yv;
   if (-x_yv >= -y_xv) r |= 8;
   if (-x_yv <= -y_xv) r |= 4;
  }
 }
 return r;
}

template <class O>
inline side Moving<O>::collide (Object* other, collide_flags flags) {
 if (this->collision(other)) {
  coord oxv, oyv;
  Moving* m = dynamic_cast<Moving*>(other);
  if (m != __null) {
   oxv = m->xvel;
   oyv = m->yvel;
  }
  else
   oxv = oyv = 0;
  if (!(flags&1<<8)) flags |= 15;
  side dir = collision_direction(other);
  dir &= (flags&15);
  if (flags&1<<9) {
   if (dir&2) this->y = other->T() - this->b();
   else if (dir&8) this->y = other->B() + this->t();
   if (dir&1) this->x = other->L() - this->r();
   else if (dir&4) this->x = other->R() + this->l();
  }
  if (flags&1<<10) {
   if (dir&2) { if ((yvel) > (oyv)) (yvel) = (oyv); }
   else if (dir&8) { if ((yvel) < (oyv)) (yvel) = (oyv); }
   if (dir&1) { if ((xvel) > (oxv)) (xvel) = (oxv); }
   else if (dir&4) { if ((xvel) < (oxv)) (xvel) = (oxv); }
  }
  if (flags&1<<12) {
   if (dir&(2|8)) yvel = -yvel;
   else if (dir&(1|4)) xvel = -xvel;
  }
  if (flags&1<<11) {
   if (dir&2) this->y = 2*(other->T() - this->b()) - this->y;
   else if (dir&8) this->y = 2*(other->B() + this->t()) - this->y;
   if (dir&1) this->x = 2*(other->L() - this->r()) - this->x;
   else if (dir&4) this->x = 2*(other->R() + this->l()) - this->x;
  }
  if (flags&1<<13) {
   if (dir&(2|8)) {
    if(1) { typeof(yvel) _tmp; _tmp = (yvel); (yvel) = (oyv); (oyv) = _tmp; };
   }
   else if (dir&(1|4)) {
    if(1) { typeof(xvel) _tmp; _tmp = (xvel); (xvel) = (oxv); (oxv) = _tmp; };
   }
  }
  return dir;
 }
 return 0;
}
template <class O>
inline side Moving<O>::contact (Object* other) { return collide(other, 1<<9|1<<10); }
template <class O>
inline side Moving<O>::bounce (Object* other) { return collide(other, 1<<11|1<<12); }

template <class O>
template <class OtherClass = Object>
inline list<OtherClass*> Moving<O>::get_collisions (bool order_by_hit = false) {
 list<OtherClass*> colls;
 OtherClass* other; std::list<Object*>::iterator obj_ = objects.begin(); for (Object* obj__ = *obj_; obj_ != objects.end(); obj__ = *(++obj_)) if (other = dynamic_cast<OtherClass*>(obj__)) {
  if (!this->collision(other)) continue;
  if (!order_by_hit) {
   colls.push_back(other);
  }
  else {







   long_coord xv = xvel;
   long_coord yv = yvel;
   Moving* m;
   if (m = dynamic_cast<Moving*>(other)) {
    xv -= m->xvel;
    yv -= m->yvel;
   }
   long_coord cmp = xv*other->x + yv*other->y;

   typeof(colls.begin()) cur;
   if (cmp <= xv*(*colls.begin())->x + yv*(*colls.begin())->y) {
    colls.push_front(other);
   }
   else {
    for (cur = colls.begin(); cur != colls.end(); cur++) {
     if (cmp <= xv*(*cur)->x + yv*(*cur)->y) {
      colls.insert(cur, other);
      goto next;
     }
    }
    colls.push_back(other);
   }
  }
  next: { }
 }
 return colls;
}
# 2 "examples/breakout/Paddle.c++" 2


struct Paddle : Moving< Colored<Object> > {
 Paddle () { x = 140*1; y = 232*1; color = 0xffffff; }
 virtual coord l () { return 20*1; }
 virtual coord t () { return 2*1; }
 virtual coord r () { return 20*1; }
 virtual coord b () { return 2*1; }

 virtual void before_move () {
  if (keypress[SDLK_RIGHT]) {
   if (!keypress[SDLK_LEFT]) {
    xvel =
      xvel <= 0*1 ? 1*1
    : xvel <= 1*1 ? 2*1
    : 4*1;
   }
   else xvel = 0*1;
  }
  else if (keypress[SDLK_LEFT]) {
   xvel =
     xvel >= 0*1 ? -1*1
   : xvel >= -1*1 ? -2*1
   : -4*1;
  }
  else xvel = 0*1;
 }

 virtual void after_move () {
  contact(&game);
 }
};
# 6 "examples/breakout/breakout.c++" 2
Paddle* paddle;
# 1 "examples/breakout/Ball.c++" 1




uint brick_count = 60;
SDL_Surface* ball_surface = __null;

struct Ball : Surfaced< Moving<Object> > {
 uint finish_timer;
 uint alive;
 virtual coord l () { return 3*1; }
 virtual coord t () { return 3*1; }
 virtual coord r () { return 3*1; }
 virtual coord b () { return 3*1; }
 Ball () : finish_timer(0), alive(0) { surface = ball_surface; }
 virtual void after_move () {
  if (finish_timer == 30) room_exit();
  if (finish_timer) finish_timer++;
  if (alive) {

   collide(&game, 1<<8|8|1|4|1<<12|1<<11);

   if (out_of_bounds()) {
    alive = 0;
   }

   if (bounce(paddle)) {
    xvel += (x - paddle->x) / 6.0;
    if ((xvel) > (8*1)) (xvel) = (8*1);
    if ((xvel) < (-8*1)) (xvel) = (-8*1);
   }

   Brick* other;
   std::list<Object*>::iterator obj_ = objects.begin();
   for (Object* obj__ = *obj_; obj_ != objects.end(); obj__ = *(++obj_))
   if (other = dynamic_cast<Brick*>(obj__)) {
    if (bounce(other)) {
     other->remove();
     brick_count--;
     if (brick_count == 0) finish_timer = 1;
    }
   }
  }
  else {
   x = paddle->x;
   y = paddle->y - 7*1;
   if (keypress[SDLK_UP]) {
    alive = 1;
    xvel = 3*1;
    yvel = -3*1;
   }
  }
 }
};
# 8 "examples/breakout/breakout.c++" 2
Ball* ball;



int main () {
 game.w = 320;
 game.h = 240;
 ball_surface = load_image("examples/breakout/ball.png");
 brick_surface = load_image("examples/breakout/brick.png");
 Brick* brick;
 for (uint x = 0; x < 320; x += 32)
 for (uint y = 24; y < 96; y += 12) {
  brick = new Brick;
  brick->x = x;
  brick->y = y;
  brick->insert();
 }
 paddle = new Paddle;
 paddle->insert();
 ball = new Ball;
 ball->insert();
 game_play();
 return 0;
}
