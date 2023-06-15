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
	unsigned int str1_len;
	char *point;
	unsigned int size, i, j;
		/*check if string is NULL and return an empty string*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
		/* get the length of the first string */
	str1_len = str_len(s1);
		/* add length of first string and index of second sting */
	size = str1_len + n;
		/* allocating memory */
	point = malloc(sizeof(char) + size);
	if (point == NULL)
		return (NULL);
		/* concatenating the stings */
	for (i = 0; s1[i] != '\0'; i++)
	{
		point[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0' && j <= n; j++, ++i)
	{
		point[i] = s2[j];
	}

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