#include "main.h"

/**
 * _isalpha - function checks if stinr in in alphabet
 * @c: string to be checked
 * Return: return 0 for success an 1 otherwise
 */
int _isalpha(int c)
{
	if (c >= 54 && c <= 90)
	{
		_putchar('0' + c);
		return (0);
	}
	return (0);
}
