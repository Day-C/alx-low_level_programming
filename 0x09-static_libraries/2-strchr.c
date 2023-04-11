#include "main.h"
/**
 * _strchr - function compares two strings
 * @s: pounter to first input
 * @c: second input
 * Return: returns 0 for success
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
