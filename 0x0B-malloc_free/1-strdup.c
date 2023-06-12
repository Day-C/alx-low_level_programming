#include "main.h"
/**
 * _strdup - function returns pointer to newly allocated space in memory
 * @str: poimter to string arguent
 * Return: char pointer if successful or NULL otherwise
 */
char *_strdup(char *str)
{
	char *ptr;

	if (str == NULL)
		return (NULL);
	ptr = (char *) malloc(sizeof(str) + 1);
	ptr = str;
	return (ptr);
}
