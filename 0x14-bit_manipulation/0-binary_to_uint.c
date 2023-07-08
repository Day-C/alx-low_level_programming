#include "main.h"
/**
 * binary_to_uint - function convers binarry number to insigned int
 * @b: pointer to string of 1s and 0s
 * Return: converted number or 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n, bin = 0;
	unsigned int rem, decimal, i = 0;
	int weight = 1;
	while (b[i] != '\0')
	{
		if (b[i] != 48 && b[i] != 49)
		{
			return (0);
		}
		n = n * 10 + (b[i] - 48);
		i++;
	}
	bin = n;
	while (bin != 0)
	{
		rem = bin % 10;
		decimal = decimal + rem * weight;
		weight = weight * 2;
		bin = bin / 10;
	}
	return (decimal);
}
