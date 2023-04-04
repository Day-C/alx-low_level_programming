#include "main.h"

/**
 *  memset - function prints characters to memory through pointer s
 * @s: is the pointer to the address in memory where function is executed
 * @b: the character to occupy the the space
 * @n: the number of characters to print
 * Return: a pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
