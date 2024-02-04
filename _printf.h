/*
 * Created by zenith on 2/3/24.
 */

#ifndef PRINTF__PRINTF_H
#define PRINTF__PRINTF_H

#define BUFF_SIZE 1024

int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i, va_list list, char buffer[],
                 int flags, int width, int precision, int size);
void print_buffer(char buffer[], int *buff_ind);
/* Functions to handle other specifiers */
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);

#endif /* PRINTF__PRINTF_H */
