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
	int32 repr;
public:
	fixed<denom> () { }
	fixed<denom> (int x) { repr = x * denom; }
	fixed<denom> (double x) { repr = x * denom; }
	operator int () { return repr / denom; }
	operator double () { return repr / denom; }
//	fixed<denom> operator = (int x) { repr = x * denom; }
//	fixed<denom> operator = (double x) { repr = x * denom; }
};

template <int denom>
class long_fixed {
	int64 repr;
public:
	long_fixed<denom> () { }
	long_fixed<denom> (int x) { repr = x * denom; }
	long_fixed<denom> (double x) { repr = x * denom; }
	operator int () { return repr / denom; }
	operator double () { return repr / denom; }
//	long_fixed<denom> operator = (int x) { repr = x * denom; }
//	long_fixed<denom> operator = (double x) { repr = x * denom; }
};

#define GAMEBASE_COORD_TYPE fixed< GAMEBASE_FP_HIGH >
#define GAMEBASE_LONG_COORD_TYPE fixed< GAMEBASE_FP_HIGH *(int64) GAMEBASE_FP_HIGH >



#else
#define GAMEBASE_COORD_TYPE int16
#define GAMEBASE_LONG_COORD_TYPE int32
#endif
#endif


#endif
