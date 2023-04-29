#include "main.h"

/**
 * array_range - function  creates a new array
 * @min: minimum
 * @max: maximum
 * Return: new array
 */
int *array_range(int min, int max)
{
	int r, i, *p;

	r = 0;
	if (min > max)
		return (NULL);
	r = ((max + 1) - min);
	p = malloc(sizeof(int) * r);

	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < r)
	{
		*(p + i) = min = i;
		i++;
	}
	return (p);
}
