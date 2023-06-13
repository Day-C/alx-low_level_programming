#include "main.h"
int _strlen(char *str);
char *_strcopy(char *ptr, char *str);

/**
 * _strdup - function returns pointer to newly allocated space in memory
 * @str: poimter to string arguent
 * Return: char pointer if successful or NULL otherwise
 */
char *_strdup(char *str)
{
	char *ptr;

	int length;

	/* chack if there is an input to function */
	if (str == NULL)
		return (NULL);
	/* allocate memory */
	length = _strlen(str);
	ptr = malloc(sizeof(char) * length);

	/* chack if memory was allocated */
	if (ptr == NULL)
		return (NULL);
	_strcopy(ptr, str);
	return (ptr);
}

/**
 * _strlen = function to check string length
 * @str: pointer string
 * Return: return string len
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
 * _strcopy - function copies str into location
 * @str: srting to be copied
 * @ptr: destination to copy to
 * Return: destination if successful
 */
char *_strcopy(char *ptr, char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
