#include "main.h"
/**
 * _strncpy - function copies a string
 * @dest: first string input (destination)
 * @src: second string input (source)
 * @n: number of bytes to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
