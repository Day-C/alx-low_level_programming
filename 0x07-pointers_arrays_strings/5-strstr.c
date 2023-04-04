#include "main.h"

/**
 * _strstr - function finds first occurence of substring in a string
 * @haystack: the sting to be used
 * @needle: the substing that is being searched
 * Return: returns pointer to beginning of the located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (*haystack == *needle)
			{
				return (haystack++);
			}
		}
		haystack++;
	}
	return ('\0');
}
