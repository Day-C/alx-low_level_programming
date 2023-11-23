#include "main.h"
#include <stdio.h>

/**
 * set_bit - function sets the bit at a given index to 1
 * @n: decimal number to be used
 * @index: index of binary to be set
 * Return: return 1 if successful or -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1ul << index) | *n);
	return (1);
}
