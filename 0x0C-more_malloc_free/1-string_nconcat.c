#include "main.h"

int str_len(char *str);
/**
 * string_nconcat - function concatenates two strings to allocated memory
 * @s1: first string
 * @s2: second string
 * @n: index of secons string to be be concatenated
 * Return: concatenated string if successful otherwise NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int str1_len, str2_len;
	char *point;
	unsigned int size, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (!n)
		return (NULL);

	str1_len = str_len(s1);
	str2_len = str_len(s2);

	if (n >= str2_len)
		n = str2_len;

	size = str1_len + n;

	point = malloc(sizeof(char) * size + 1);
	if (point == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		point[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{

		point[i] = s2[j];
		i++;
	}
	point[i] = '\0';

	return (point);
}

/**
 * str_len - function to sheck the lenght of a sting
 * @str: string to be checked
 * Return: return length of string
 */
int str_len(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
