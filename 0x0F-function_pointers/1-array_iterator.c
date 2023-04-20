#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function executes parameter function on elements of array
 * @array: pointer array of integers passed to function
 * @size: size of array
 * @action: pointer to unction to be passed.
 * Return: void (nothing)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		(action)(*array);
		array++;
	}

}
