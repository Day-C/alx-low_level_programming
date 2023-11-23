#include "main.h"
#include <stdio.h>

/**
 * clear_bit - function sets the bit at a given index to 0
 * @n: decimal number
 * @index: index
 * Return: return 1 on success or -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1ul << index) & *n);
	return (1);
}
