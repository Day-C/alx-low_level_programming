#include "main.h"

/**
 * _strchr - function searches if character 'c' is in string.
 * @s: the pointer to the string to be searched
 * @c: the character being searched from the string
 * Return: returns a chareacter
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i >= '\n'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
