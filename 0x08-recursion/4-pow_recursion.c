#include "main.h"
/**
 * _pow_recursion - function raises x to the power y
 * @x: the number to be raised
 * @y: the power to be raised to.
 * Return: returns x^y (integer)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
