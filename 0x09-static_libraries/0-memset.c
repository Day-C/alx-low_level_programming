#include "main.h"

/**
 * _memset.c - function fills a block of memory with specific value
 * @s: starting address of memory
 * @b: the character to fill space
 * @n: the number of bytes to be changed
 * Return: returns the array with changed value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
