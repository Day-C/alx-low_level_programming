#include "main.h"

/**
 * _isdigit - function checks for a digit
 * @c: the input to be checked through
 * Return: returns 1 if digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
