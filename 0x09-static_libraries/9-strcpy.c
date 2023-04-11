#include "main.h"
/**
 * _srtcpy - finction copies the string pointed to by src
 * @dest: destination where string will be copied to
 * @src: source where string is copied from
 * Return: character str
 */
char *_srtcpy(char *dest, char *src)
{
	int i, j = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[i]  = '\0';
	return (dest);
}
