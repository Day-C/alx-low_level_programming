#include "main.h"

/**
 * _strcpy - copies string pointer to be src
 * @dest: the firt parameter to the finction
 * @src: the second parameter of the function.
 * Return: returns a character
 */

char *_strcpy(char *dest, char *src)
{
	int a = -1;

	do {
		a++;
		dest[a] = src[a];
	} while (src[a] != '\0');
	return (dest);
}
