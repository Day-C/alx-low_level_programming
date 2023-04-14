#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function alocates memory
 * @b: integer input
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);
	return (mem);
}
