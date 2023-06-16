#include "main.h"
int _count(int min, int max);
/**
 * array_range - function create space for ann array  in memory
 * @min: minimum value
 * @max: maximu value
 * Return:  pointer
 */
int *array_range(int min, int max)
{
	int *array;
	int len;

	len = _count(min, max);

	array = malloc(sizeof(int) * len);

	if (array == NULL)
		return (NULL);
	return (array);
}

/**
 * _count -count how many vumbers are there between the min and max
 * @min: minimum
 * @max: maximum
 * Return: lenght
 */
int _count(int min, int max)
{
	int i;

	i = 0;
	while (min < max)
	{
		i++;
	}
	return (i);
}

