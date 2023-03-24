#include "main.h"

/**
 * _isupper - chechs to find the upper case character
 * @c: c is the parameter passed into the function
 * Retuen: returns 1 if c is uppercase and 0 if not
*/

int _isupper(int c)
{
	if  (c >= 65  && c <= 90)
	{
		return (1);
	}
	return (0);
}
