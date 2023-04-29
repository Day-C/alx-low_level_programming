#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * strglen - function returns the length of string
 * @str: string to be checked
 * Return: length of str;
 */
int strglen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
/**
 * string_nconcat - function contatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes to concat
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	int nm, i, j, len;

	nm = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (nm < 0)
		return (NULL);

	if (nm >= strglen(s2))
		nm = strglen(s2);

	len = strglen(s1) + nm + 1;

	s = malloc(sizeof(*s) * len);
	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; j < nm; j++)
		s[i + j] = s2[j];
	s[i + j] = '\0';
	return (s);
}
