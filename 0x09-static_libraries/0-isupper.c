#include "main.c"

/**
 * _isupper - function checks for uppercase letters
 * @c: the character to be checked
 * Return: returns i if character is uppercase and 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
