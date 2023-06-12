#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *
 *
 * Return: character
 */
char *create_array(unsigned int size, char c)
{
	char ar[1];
	char *ptr = ar;

	if (size == 0)
		return (0);
	ar[0] = c;
	return(ptr);
}
