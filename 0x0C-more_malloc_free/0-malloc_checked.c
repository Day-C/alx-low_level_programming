#include "main.h"

/**
 * malloc_checked -  function allocates meemory usint malloc
 * @b: size to ba allocated
 * Return: return pointer to allocated memory if successful
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
