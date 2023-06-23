#include "function_pointers.h"
/**
 * int_index - function searches for an int f_p
 * @array: array of numbers
 * @size: size of array
 * @cmp: compare  function (function_pointer)
 * Return: returns index of the first element for which cmp function
 * does not return (0) if element maches return 1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int (*ptr)(int);
	int i;

	if (size <= 0 || !array)
		return (-1);
	ptr = *cmp;
	i = 0;
	while (i < size)
	{
		ptr(array[i]);
		if (ptr(array[i]) != 0)
		{
			return (i);
			continue;
		}
		else
			i++;
	}
	return (-1);
}
