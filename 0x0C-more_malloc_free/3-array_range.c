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
	int len, i;

	if (min > max)
		return (NULL);
	len = max - min + 1;

	array = malloc(sizeof(int) * len);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
