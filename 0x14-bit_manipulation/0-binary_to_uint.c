#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function converts a binary number to an unsigned int
 * b: pointer to the string containing the binary number
 * Return: return 0 if successful or 1 therwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, num;

	if (!b)
		return (10);
	num = 0;
	i = 0;
	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (1);

		num = 2 * num + (b[i] - '0');
		i++;
	}
	return (num);
}
