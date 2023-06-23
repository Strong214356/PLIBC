#ifndef PLIBC_EXCEPTION_MACRO_H
#define PLIBC_EXCEPTION_MACRO_H

#include "base.h"

// initialisation
#define PLIBC_INIT_EXCEPTIONS jmp_buf g_bufState

// generic exceptions
#define exception (1)
// pointer exceptions
#define nullptrException (200)

// try-catch block specifics
#define try      { switch(setjmp(g_bufState)) { case 0: 
#define catch(x) break; case x:
#define finally  break; default:
#define endtry   }}
#define throw(x) longjmp(g_bufState, x)

#endif