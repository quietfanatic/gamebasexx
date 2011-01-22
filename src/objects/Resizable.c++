#ifndef _HAVE_RESIZABLE_CPP
#define _HAVE_RESIZABLE_CPP
#include "objects/Resizable.h"

template <class O>
inline coord Resizable<O>::r () { return w; }
template <class O>
inline coord Resizable<O>::b () { return h; }




#endif
