#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *to_binary(unsigned long int a);
/**
 * flip_bits - function counts the number of flips to go from num_1 to num_2
 * @n: number to change from
 * @m: number to change to
 * Return: return number of flips
 */
unsigned int flip_bits(unsigned long n, unsigned long int m)
{
	unsigned long int current;
	int idx, flips = 0;
	unsigned long int xor = n ^ m;

	for (idx = 63; idx >= 0; idx--)
	{
		current = xor >> idx;
		if (current & 1)
			flips++;
	}
	return (flips);
}
