#include "function_pointers.h"
/**
 * int_index - function searches for an integer in an array
 * @array: array to be searched
 * @size: size of array
 * @cmp: pointer to function
 * Return: return 0 for success;
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int num;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (num = 0; num < size; num++)
	{
		if (cmp(array[num]))
			return (num);
	}
	return (-1);
}
