#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array of chars and initilize with specific char
 * @size: takes the size needed
 * @c: the character
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char  *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0)
		return (NULL);
	free(str);
	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
