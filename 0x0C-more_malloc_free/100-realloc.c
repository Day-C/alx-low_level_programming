#include "main.h"
#include <stdio.h>
/**
 * _realloc - function realocates a memory block
 * @ptr: pointer to previous memory allocation
 * @old_size: size in bytes of allocated space of ptr
 * @new_size: new size of memory block
 * Return: nothing.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptl, *ptlo;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);

	ptl = malloc(new_size);
	if (ptl == NULL)
		return (ptl);

	if (new_size == 0 && ptl)
	{
		free(ptl);
		return (NULL);
	}

	if (!ptl)
		return (NULL);
	ptlo = ptl;

	if (new_size < old_size)
	{
		while (i < new_size)
		{
			ptl[i] = ptlo[i];
			i++;
		}
	}

	free(ptl);
	return (ptl);
}
