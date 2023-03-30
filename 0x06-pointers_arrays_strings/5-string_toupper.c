#include "main.h"

/**
 * string_toupper - function that converts lowercase to uppercase
 * @a: text to be converted
 * Return: string
 */

char *string_toupper(char *a)
{
	int str_length;

	str_length = 0;
	while (a[str_length] != '\0')
	{
		if (a[str_length] >= 97 && a[str_length] <= 122)
		{
			a[str_length] = a[str_length] - 32;
		}
		str_length++;
	}
	return (a);
}
