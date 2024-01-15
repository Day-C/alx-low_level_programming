#include "main.h"

/**
 * _strspn - function gets the lenght of a prefix substing
 * @s: the pointer to the string
 * @accept: the characters to used to search for the string.
 * Return: returns unsigned integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int show = 0;
	int rev;

	while (*s)
	{
		for (rev = 0; accept[rev] ; rev++)
		{
			if (*s == accept[rev])
			{
				show++;
				break;
			}
			else if (accept[rev + 1] == '\0')
			{
				return (show);
			}
		}
		s++;
	}
	return (show);
}
