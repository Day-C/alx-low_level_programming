#include "main.h"
/**
 * set_bit - function chaneges a bit value into 1 at given index
 * @n: decimal number
 * @index: index of bit beginning from 0
 * Return: int value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
