#include "main.h"
/**
 * get_endianness - function checks the endianness
 * if a machine is little or big endian
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;
	return (*c);
}
