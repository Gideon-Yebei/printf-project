#ifndef PRINTF_HANDLE_PRINT_H
#define PRINTF_HANDLE_PRINT_H
/*
 * Created by zenith on 2/3/24.
 */

#include <stdio.h>

/* Functions to print chars and strings */
int print_char(va_list types, char buffer[], int flags, int width,
			   int precision, int size);

int print_string(va_list types, char buffer[], int flags, int width,
				 int precision, int size);

int print_percent(va_list types, char buffer[], int flags, int width,
				  int precision, int size);

/* Functions to print numbers */
int print_int(va_list types, char buffer[], int flags, int width,
			  int precision, int size);

int print_binary(va_list types, char buffer[], int flags, int width,
				 int precision, int size);

int print_unsigned(va_list types, char buffer[], int flags, int width,
				   int precision, int size);

int print_octal(va_list types, char buffer[], int flags, int width,
				int precision, int size);

int print_hexadecimal(va_list types, char buffer[], int flags, int width,
					  int precision, int size);

int print_hexa_upper(va_list types, char buffer[], int flags, int width,
					 int precision, int size);

int print_hexa(va_list types, char map_to[], char buffer[], int flags,
			   char flag_ch, int width, int precision, int size);

/* Function to print non-printable characters */
int print_non_printable(va_list types, char buffer[], int flags, int width,
						int precision, int size);

/* Function to print memory address */
int print_pointer(va_list types, char buffer[], int flags, int width,
				  int precision, int size);

/*Function to print string in reverse*/
int print_reverse(va_list types, char buffer[], int flags, int width,
				  int precision, int size);

/*Function to print a string in rot 13*/
int print_rot13string(va_list types, char buffer[], int flags, int width,
					  int precision, int size);

/**
 * struct fmt - Struct op
 *
 * @fmt: The format.
 * @fn: The function associated.
 */
struct fmt
{
	char fmt;

	int (*fn)(va_list, char[], int, int, int, int);
};

/**
 * typedef struct fmt fmt_t - Struct op
 *
 * @fmt: The format.
 * @fm_t: The function associated.
 */
typedef struct fmt fmt_t;

#endif /*PRINTF_HANDLE_PRINT_H*/
