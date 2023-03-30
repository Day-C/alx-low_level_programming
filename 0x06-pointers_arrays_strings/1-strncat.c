#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: numbe3r of bytes to concatenated
 * Return: returs a string (character)
 */

char *_strncat(char *dest, char *src, int n)
{
	int length, n_count;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (n_count = 0; n_count < n &&  src[n_count] != '\0'; n_count++, length++)
	{
		dest[length] = src[n_count];
	}
	dest[length] = '\0';
	return (dest);
}
