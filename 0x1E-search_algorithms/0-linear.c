#include "search_algos.h"
/**
 * linear_search - function searches for a value though a list
 * @array: pointer to the first element of an array
 * @size: length of array
 * @value: element to search for
 * Return: return index of value on success otherwise -1 
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || !value)
		return (-1);
	if (size == 0 || !size)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
