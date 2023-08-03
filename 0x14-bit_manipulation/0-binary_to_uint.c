#include "main.h"
/**
 * binary_to_uint -  function converts buary number to an integer
 * @b: pointer to string holding the binary number
 * Return: converted number or 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i = 0;

	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		n = 2 * n + (b[i] - '0');
		i++;
	}
	return (n);
}
