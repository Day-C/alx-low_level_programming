#include "main.h"
/**
 * get_bit - function get the value of a bit at a given index
 * @n: decimal number
 * @index: index of binary number starting from 0
 * Return: the bit value at index  or -1 otherwise
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);
	bit = n >> index;
	bit = bit & 1;
	return (bit);
}
