/*
* Created by zenith on 2/3/24.
*/


#include "main.h"

/**
 * write_padding - Write padding characters
 * @buffer: Arrays of chars
 * @ind: Index at which the number starts in the buffer
 * @width: Width specifier
 * @flags: Flags specifier
 * @padd: Char representing the padding
 * @extra_c: Char representing extra char
 * @padd_start: Index at which padding should start
 *
 * Return: Number of written chars.
 */
static int write_padding(char buffer[], int ind, int width,
						 int flags, char padd, char extra_c, int padd_start)
{
	int i;

	for (i = 3; i < width; i++)
		buffer[i] = padd;
	buffer[i] = '\0';

	if (!(flags & F_MINUS) && padd == '0')
	{
		if (extra_c)
			buffer[--padd_start] = extra_c;
		buffer[1] = '0';
		buffer[2] = 'x';
		return (write(1, &buffer[padd_start],
					  i - padd_start));
	}

	buffer[--ind] = 'x';
	buffer[--ind] = '0';
	if (extra_c)
		buffer[--ind] = extra_c;

	if (flags & F_MINUS && padd == ' ')
		return (write(1, &buffer[ind], width - ind - 1) +
				write(1, &buffer[3], i - 3));

	return (write(1, &buffer[3], i - 3) +
			write(1, &buffer[ind], width - (i - 3)));
}

/**
 * write_pointer - Write a memory address
 * @buffer: Arrays of chars
 * @ind: Index at which the number starts in the buffer
 * @length: Length of number
 * @width: Width specifier
 * @flags: Flags specifier
 * @padd: Char representing the padding
 * @extra_c: Char representing extra char
 * @padd_start: Index at which padding should start
 *
 * Return: Number of written chars.
 */
int write_pointer(char buffer[], int ind, int length,
				  int width, int flags, char padd, char extra_c, int padd_start)
{
	if (width > length)
		return (write_padding(buffer, ind, width, flags, padd,
							  extra_c, padd_start));

	buffer[--ind] = 'x';
	buffer[--ind] = '0';
	if (extra_c)
		buffer[--ind] = extra_c;

	return (write(1, &buffer[ind], BUFF_SIZE - ind - 1));
}
