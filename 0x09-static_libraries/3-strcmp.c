#include "main.h"

/**
 * _strcmp - functio that compares two strings
 * @s1: the first string
 * @s2: teh second string
 * Return: returs an interger( number if characters)
 */
int _strcmp(char *s1, char *s2)
{
	int counter, value;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}
	value = s1[counter] - s2[counter];
	return (value);
}
