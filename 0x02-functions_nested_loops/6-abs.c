#include "main.h"
/**
 * _abs - chechs the absolue value
 *@c: is the number that his needed to be compiled
 * Return: returns is not  only zero
 */
int _abs(int c)
{
	if (c < 0)
	{
		int absval;

		absval = c * -1;
		return (absval);
	}
	return (c);
}
