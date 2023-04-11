#include "main.h"
/**
 * _memcpy - function copies memory area
 * @dest: destination where content will be stored
 * @src: source: where content will be copied from
 * @n: bumber of bytes to be copied
 * Return: returns the copied content in new location
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, j;

	j = n;
	for (i = 0; i < j; r++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
