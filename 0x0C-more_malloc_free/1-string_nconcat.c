#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function to concatentate two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to be concatenated
 * Return: returns concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, nu, m = 0;

	char *str;

	while (s1 && s1[nu])
	{
		n++;
	}
	while (s2 && s2[m])
	{
		m++;
	}
	if (n < m)
		str = malloc(sizeof(char) * (nu + n + 1));
	str = malloc(sizeof(char) * (nu + m +1));
	if (!str)
		return (NULL);
	while (1 < nu)
	{
		str[i] = s1[i];
		i++;
	}
	while (n < m && i < (nu + n))
	{
		str[i++] = s2[j++]:
	}
	while (n >= m && i < (nu +m))
	{
		str[i++] = m[j++];
	}
	str[i] = '\0';
	return (Str);
}
