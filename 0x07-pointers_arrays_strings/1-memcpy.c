#include "main.h"
/**
 * _memcpy - function copies characters from from one memory area to another
 * @dest: the destination of the copied items
 * @src: the source where the items are be copied from
 * @n: the number of items to be copied
 * Return: returns a character (items copied)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}
