#include "main.h"
#include <stdio.h>

/**
 * get_endianness - function check for endianness
 * endianess refers to the byte order in which a multi-byte value is stored.
 * there are 3 main types (big-endian, middle_endian, and little-endian)
 * Return: return 0 on success or 1 otherwise
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
