#include "main.h"

/**
 * _strncat - function concatenates two strings using n bytes from src
 * @dest: first input value and destination
 * @src: second input value and source
 * @n: number of bytes to be concatenated (input)
 * Return: returns dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}