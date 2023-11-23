#include "main.h"
#include <stdio.h>

/**
 * get_bit - function gets the bit of a number at a given index
 * @n: decimal number to be used
 * @index: the index of the bit to get
 * Return: returns the value of the bit at index otherwise -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
