#include "main.h"
#include <stdio.h>

/**
 * malloc_checked -  function allocates meemory usint malloc
 * @b: size to ba allocated
 * Return: return pointer to allocated memory if successful
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (!ptr)
		return (NULL);
	return (ptr);
}
