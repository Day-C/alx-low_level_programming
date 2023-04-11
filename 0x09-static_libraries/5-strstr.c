#include "main.h"
/**
 * _strstr - function to find an item from a list  of items
 * @haystack: pointer to a string or characters
 * @needle: item to be cheked from haystack
 * Return: character
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}
		if (*j == '\0')
			return (haystack);
	}
	return (0);
}
