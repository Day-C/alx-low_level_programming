#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - create an arr
 * @size: size
 * @c: character
 * Return: character
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr =  malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
