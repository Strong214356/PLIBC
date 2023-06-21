#ifndef PLIBC_EXCEPTION_H
#define PLIBC_EXCEPTION_H

/*
 * Exception
 * with this lib you can use try-catch in C
 * use the try-catch block like this:
 * try {
 *   Statements;
 * } catch(exception) {
 *   Statements;
 * } finally {
 *   Statements;
 * } endtry;
 *
 *
 * you can create exceptions by defining macros :
 *   #define exceptionName (value)
 *
 * here is the list of ranges of exceptions that are available:
 * 1 - 99 : generics Exceptions:
 *      - exception;
 * 100 - 199 : user Exceptions
 * 200 - 299 : ptr  Exceptions:
 *      - nullptrException;
 *
 * do not use throw or a function that could throw an exception outside
 * of a try catch structure or it could lead to undifined behaviour
 */

// stdlib includes
#include <setjmp.h>

// plbic includes
#include "exception/base.h"
#include "exception/macros.h"

// plibc exception stdlib
#ifdef PLIBC_EXCEPTION_STDLIB
#include "exception/stdlib.h"
#endif

#endif