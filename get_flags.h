#ifndef PRINTF_GET_FLAGS_H
#define PRINTF_GET_FLAGS_H
/*
 * Created by zenith on 2/3/24.
 */

int get_flags(const char *format, int *i);

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

#endif /*PRINTF_GET_FLAGS_H*/
