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

	i = 0;
	while (*haystack)
	{
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
				return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;

	}
	return ('\0');
}
