#include "function_pointers.h"
/**
 * array_iterator - function iterates through an array
 * @array: array to go through
 * @size: size of array
 * @action: function pointer returning a void and taking an int as parameter
 * Return: nothing (void)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	void (*ptr)(int);
	unsigned int i = 0;

	if (action == NULL)
		return;
	if ((!array) || (size <= 0))
		return;

	ptr = *action;
	while (i < size)
	{
		ptr(array[i]);
		i++;
	}
}
