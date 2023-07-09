#include "main.h"
/**
 * get_bit -function returns the value of a bit at given index
 * @n: integer number
 * @index: index of bitto get
 * Return: return value at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_at_idx;

	if (index > 63)
		return (-1);
	bit_at_idx = (n >> index) & 1;
	return (bit_at_idx);
}
