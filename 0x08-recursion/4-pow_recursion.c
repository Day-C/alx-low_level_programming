#include "main.h"
/**
 * _pow_recursion - function raises "x" to the power of "y"
 * @x: first integer input
 * @y: second integer input
 * Return: return the raised value of "x" or if y is lower than 0 return -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x *  _pow_recursion(x, y-1));

}
