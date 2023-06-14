#include "main.h"
int _strlen(char *str);
char *_strcpy(char *memo, char *str1, char *str2);
/**
 * str_concat - function concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string or NULL otherwise
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len1, len2, len_sum;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);


	len_sum = len1 + len2;

	ptr = malloc(sizeof(char) + len_sum);

	if (ptr == NULL)
		return (NULL);
	_strcpy(ptr, s1, s2);
	return (ptr);
}
/**
 * _strlen - function to check string length
 * @str: string input
 * Return: length of stings
 */
int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - function copies string to another pointer
 * @memo: memory space
 * @str1: first string
 * @str2: second string
 * Return: return char pointer
 */
char *_strcpy(char *memo, char *str1, char *str2)
{
	/*declear varaibles*/
	int i, j;

	for (i = 0; str1[i] != '\0'; i++)
		memo[i] = str1[i];
	for (j = 0; str2[j] != '\0'; j++, i++)
		memo[i] = str2[j];
	return (memo);
}
