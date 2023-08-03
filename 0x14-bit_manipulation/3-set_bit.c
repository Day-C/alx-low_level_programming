#include "main.h"
/**
 * set_bit - function set the bit at a given index to 1
 * @n: number to be used
 * @index: index of binary number starting from 
 * Return: 1 if successful or -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
