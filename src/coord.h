#ifndef _HAVE_COORD_CPP
#define _HAVE_COORD_CPP

#include <stdint.h>

#ifndef COORD_REPR
#define COORD_REPR int32_t
#endif
#ifndef COORD_FRAC
#define COORD_FRAC 65536
#endif


 // The coord type is a fixed-point representation with only minimal arithmetic.
 // The reason for using fixed-point here is not speed, but consistent accuracy.
 // For more complex math floating point is used.

struct coord {
	COORD_REPR repr;
	 // Conversion
	coord () { }
	template <class T>
	coord (T x) :repr(x*COORD_FRAC) { }
	template <class T>
	operator T () {
		 // Differentiate between floatly and intly
		 // Decision ought to be optimized away
		if ((T)0.5 == (T)0)
			return repr / COORD_FRAC;
		else
			return repr / (double) COORD_FRAC;
	}
};

 // Arithmetic (hopefully these'll all be inlined)
inline coord operator - (coord x) { coord r; r.repr = -x.repr; return r; }

inline coord operator + (coord x, coord y) { coord r; r.repr = x.repr + y.repr; return r; }
inline coord operator - (coord x, coord y) { coord r; r.repr = x.repr - y.repr; return r; }
inline coord operator % (coord x, coord y) { coord r; r.repr = x.repr % y.repr; return r; }
inline double operator * (coord x, coord y) { return (double)x * (double)y; }
inline double operator / (coord x, coord y) { return (double)x / (double)y; }
inline coord& operator += (coord& x, coord y) { x.repr += y.repr; return x; }
inline coord& operator -= (coord& x, coord y) { x.repr -= y.repr; return x; }
inline coord& operator %= (coord& x, coord y) { x.repr %= y.repr; return x; }
inline coord& operator *= (coord& x, coord y) { x.repr = (x.repr *(int64_t)y.repr)/COORD_FRAC; return x; }
inline coord& operator /= (coord& x, coord y) { x.repr /= (double)y; return x; }
template <class T> inline coord operator + (coord x, T y) { return x + (coord)y; }
template <class T> inline coord operator - (coord x, T y) { return x - (coord)y; }
template <class T> inline coord operator % (coord x, T y) { return x % (coord)y; }
template <class T> inline T operator * (coord x, T y) { return (T)x * y; }
template <class T> inline T operator / (coord x, T y) { return (T)x / y; }
template <class T> inline coord& operator += (coord& x, T y) { return x += (coord)y; }
template <class T> inline coord& operator -= (coord& x, T y) { return x -= (coord)y; }
template <class T> inline coord& operator %= (coord& x, T y) { return x %= (coord)y; }
template <class T> inline coord& operator *= (coord& x, T y) { x.repr *= y; return x; }
template <class T> inline coord& operator /= (coord& x, T y) { x.repr /= y; return x; }
template <class T> inline T& operator += (T& x, coord y) { return x += (T)y; }
template <class T> inline T& operator -= (T& x, coord y) { return x -= (T)y; }
template <class T> inline T& operator %= (T& x, coord y) { return x %= (T)y; }
template <class T> inline T& operator *= (T& x, coord y) { return x *= (T)y; }
template <class T> inline T& operator /= (T& x, coord y) { return x /= (T)y; }
 // Comparison  (Note that comparisons to other types use coord's accuracy)
inline bool operator == (coord x, coord y) { return x.repr == y.repr; }
inline bool operator != (coord x, coord y) { return x.repr != y.repr; }
inline bool operator > (coord x, coord y) { return x.repr > y.repr; }
inline bool operator < (coord x, coord y) { return x.repr < y.repr; }
inline bool operator >= (coord x, coord y) { return x.repr >= y.repr; }
inline bool operator <= (coord x, coord y) { return x.repr <= y.repr; }
template <class T> inline bool operator == (coord x, T y) { return x == (coord)y; }
template <class T> inline bool operator != (coord x, T y) { return x != (coord)y; }
template <class T> inline bool operator > (coord x, T y) { return x > (coord)y; }
template <class T> inline bool operator < (coord x, T y) { return x < (coord)y; }
template <class T> inline bool operator >= (coord x, T y) { return x >= (coord)y; }
template <class T> inline bool operator <= (coord x, T y) { return x <= (coord)y; }




static inline coord coord_wrap (COORD_REPR x) { coord r; r.repr = x; return r; }

#endif
