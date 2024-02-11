#ifndef PRINTF_GET_PRECISION_H
#define PRINTF_GET_PRECISION_H
/*
 * Created by zenith on 2/3/24.
 */

#include <stdarg.h>
#include "is_digit.h"

int get_precision(const char *format, int *i, va_list list);

#endif /*PRINTF_GET_PRECISION_H*/
