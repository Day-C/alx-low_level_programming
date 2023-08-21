#include "main.h"
#include <ctype.h>
/**
 * _islower - this function checks for lower case letters
 *@c: the character being passed inside the function.
 * Return: return an int
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
