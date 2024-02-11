#ifndef PRINTF_WRITE_POINTER_H
#define PRINTF_WRITE_POINTER_H
/*
 * Created by zenith on 2/3/24.
 */

static int write_padding(char buffer[], int ind, int width,
						 int flags, char padd, char extra_c, int padd_start);
int write_pointer(char buffer[], int ind, int length,
				  int width, int flags, char padd, char extra_c, int padd_start);

#endif/*PRINTF_WRITE_POINTER_H*/
