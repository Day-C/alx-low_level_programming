#include "main.h"

/**
 * _strcmp - function to compare string values
 * @s1: first srting input
 * @s2: second string input
 * Return: returns the difference between the two strings
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
