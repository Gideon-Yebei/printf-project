#ifndef PRINTF_PRINT_BINARY_H
#define PRINTF_PRINT_BINARY_H
/*
 * Created by zenith on 2/3/24.
 */

#include "stdarg.h"

#define UNUSED(x) (void)(x)

int print_binary(va_list types, char buffer[],
				 int flags, int width, int precision, int size);


#endif /*PRINTF_PRINT_BINARY_H*/
