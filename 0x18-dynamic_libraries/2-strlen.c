#include "main.h"

/**
 * _strlen -  prints the  number of characteres of a string
 * @s: the input string tothe function
 * Return: return void
 */

int _strlen(char *s)
{
	int str_len;

	str_len = 0;
	while (s[str_len])
		str_len++;
	return (str_len);
}
