#ifndef _HAVE_COORD_CPP
#define _HAVE_COORD_CPP

#ifdef GAMEBASE_USE_FLOAT
#define GAMEBASE_COORD_TYPE float
#define GAMEBASE_LONG_COORD_TYPE double
#define P 1.0
#else
#ifdef GAMEBASE_USE_FP

#ifndef GAMEBASE_FP_HIGH
#define GAMEBASE_FP_HIGH 65536
#define P GAMEBASE_FP_HIGH
#endif

#define GAMEBASE_COORD_TYPE int32
#define GAMEBASE_LONG_COORD_TYPE int64



#else
#define GAMEBASE_COORD_TYPE int16
#define GAMEBASE_LONG_COORD_TYPE int32
#define P 1
#endif
#endif


#endif
