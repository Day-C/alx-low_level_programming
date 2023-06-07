#include "main.h"

int check_sqrt(int square, int root);

/**
 * _sqrt_recursion - function returns the natural squareroot of int input
 * @n: integer value to be checked
 * Return: return swuareroot or -1 if n hasno natural squareroot
 */
int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);
	return (check_sqrt(n, 0));
}

/**
 * check_sqrt - take in two int argument and returns square root;
 * @square: first integer value
 * @root: second integer value
 * Return: returns root or -1 if number has no square root
 */
int check_sqrt(int square, int root)
{
	if ((root * root) == square)
		return (root);
	else if ((root * root) > square)
		return (-1);
	else
		return (check_sqrt(square, root + 1));
}

