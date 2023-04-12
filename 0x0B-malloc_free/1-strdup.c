#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function returns pointer to newly alocated space in memory
 * which contains the string of a given parameter
 * @str: the string to be passed
 * Return: returns pointer to allocated space in memory
 */
char *_strdup(char *str)
{
	char *strng;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	strng = malloc(sizeof(char) * (i + 1));
	if (strng == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
	{
		strng[j] = str[j];
	}
	return (strng);
}
