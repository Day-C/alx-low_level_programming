#include "main.h"
/**
 * _strlen - function checks the length of a string
 * @s: pointer to the string to be checked
 * Return: return length of string
 */
int _strlen(char *s)
{
	int length;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
