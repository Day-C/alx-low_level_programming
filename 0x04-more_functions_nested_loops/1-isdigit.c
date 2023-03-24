#include "main.h"

/**
 * _isdigit - checks parameter if it isa digit
 * @c: the parameter passed into the function
 * Return: returns 1 if its a digit and 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
