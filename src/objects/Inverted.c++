#ifndef _HAVE_BOUNDARY_CPP
#define _HAVE_BOUNDARY_CPP

#include "objects/Inverted.h"

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




#endif
