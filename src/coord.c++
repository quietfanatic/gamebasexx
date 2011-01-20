#ifndef _HAVE_COORD_CPP
#define _HAVE_COORD_CPP

#ifdef GAMEBASE_USE_FLOAT
#define GAMEBASE_COORD_TYPE float
#define GAMEBASE_LONG_COORD_TYPE double
#else
#ifdef GAMEBASE_USE_FP

#ifndef GAMEBASE_FP_HIGH
#define GAMEBASE_FP_HIGH 65536
#endif

template <int denom>
class fixed {
public:
	int32 repr;

	fixed<denom> () { }
	fixed<denom> (int x) { repr = x * denom; }
	fixed<denom> (double x) { repr = x * denom; }
	fixed<denom> operator + (fixed<denom> b) { fixed<denom> r; r.repr = repr + b.repr; return r; }
	fixed<denom> operator - (fixed<denom> b) { fixed<denom> r; r.repr = repr - b.repr; return r; }
	fixed<denom> operator % (fixed<denom> b) { fixed<denom> r; r.repr = repr % b.repr; return r; }
	long_fixed<denom>
		operator * (fixed<denom> b) { long_fixed<denom> r; r.repr = repr *(int64) b.repr; return r; }
	long_fixed<denom>
		operator / (fixed<denom> b) { long_fixed<denom> r; r.repr = repr /(int64) b.repr; return r; }
	
	operator int () { return repr / denom; }
	operator double () { return repr / denom; }
	operator long_fixed<denom> () { long_fixed<denom> r; r.repr = repr*denom; return r; }
//	fixed<denom> operator = (int x) { repr = x * denom; }
//	fixed<denom> operator = (double x) { repr = x * denom; }
};

template <int denom>
class long_fixed {
public:
	int64 repr;

	long_fixed<denom> () { }
	long_fixed<denom> (int x) { repr = x * denom*(int64)denom; }
	long_fixed<denom> (double x) { repr = x * denom*(int64)denom; }
	long_fixed<denom> operator + (long_fixed<denom> b) { long_fixed<denom> r; r.repr = repr + b.repr; return r; }
	long_fixed<denom> operator - (long_fixed<denom> b) { long_fixed<denom> r; r.repr = repr - b.repr; return r; }
	long_fixed<denom> operator % (long_fixed<denom> b) { long_fixed<denom> r; r.repr = repr % b.repr; return r; }
	long_fixed<denom>
		operator * (long_fixed<denom> b) { long_fixed<denom> r; r.repr = repr *(int64) b.repr; return r; }
	long_fixed<denom>
		operator / (long_fixed<denom> b) { long_fixed<denom> r; r.repr = repr /(int64) b.repr; return r; }
	operator int () { return repr / denom; }
	operator double () { return repr / denom; }
	operator fixed<denom> () { fixed<denom> r; r.repr = repr/denom; return r; }
//	long_fixed<denom> operator = (int x) { repr = x * denom; }
//	long_fixed<denom> operator = (double x) { repr = x * denom; }
};

#define GAMEBASE_COORD_TYPE fixed< GAMEBASE_FP_HIGH >
#define GAMEBASE_LONG_COORD_TYPE fixed< GAMEBASE_FP_HIGH >



#else
#define GAMEBASE_COORD_TYPE int16
#define GAMEBASE_LONG_COORD_TYPE int32
#endif
#endif


#endif
