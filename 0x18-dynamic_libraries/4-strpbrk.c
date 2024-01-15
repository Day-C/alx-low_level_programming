#include "main.h"

/**
 * _strpbrk - function that prints characters found in a string
 * @s: pointer to the string where characters are referenced
 * @accept: the characters to be searched and if present printed
 * Return: returns a charetewr if found.
 */
char *_strpbrk(char *s, char *accept)
{

	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s ==  accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
