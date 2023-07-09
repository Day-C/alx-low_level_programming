#include "main.h"
/**
 * flip_bit - func checks number of bits needed to flip to another number
 * @n: first number
 * @m: second number
 * Return: number of bits needed to flip to the next number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int ex = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = ex >> i;
		if (current & 1)
			count++;
	}
	return (count);
}
