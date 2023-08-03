#include "main.h"
/**
 * clear_bit - function sets bit bit at given index to 0
 * @n: number to use
 * @index: the index of string from 0
 * Return: 1 if successful or -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
