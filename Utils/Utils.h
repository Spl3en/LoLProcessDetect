#pragma once


// ----- Type size -----
#define sizeof_array(array) \
    ((int)(sizeof(array) / sizeof(*(array))))



// ----- Boolean -----
#ifndef BOOL
#ifdef WIN32
#include <windows.h>
#else
#define BOOL char
#endif // WIN32
#endif // BOOL

#ifndef bool
#define bool BOOL
#endif

#ifndef TRUE
#define TRUE 1
#endif // TRUE

#ifndef FALSE
#define FALSE (!(TRUE))
#endif

#ifndef true
#define true TRUE
#endif

#ifndef false
#define false FALSE
#endif
