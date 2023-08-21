#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination of string
 * @src: source of string
 * @n: number of bytes to be coppied
 * Return: returns copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int byte_count;

	for (byte_count = 0; byte_count < n && src[byte_count] != '\0'; byte_count++)
	dest[byte_count] = src[byte_count];

	for (; byte_count < n; byte_count++)
	dest[byte_count] = '\0';
	return (dest);
}
