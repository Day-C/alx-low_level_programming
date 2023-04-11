#include "main.h"

/**
 * _islower - chcks if character is a lower case
 * @c: the character to be checked
 * Return: return  i if lowercase or 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
