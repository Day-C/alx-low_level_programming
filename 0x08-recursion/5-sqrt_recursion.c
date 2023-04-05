#include "main.h"
int numbercheck(int n, int square_root);
/**
 * _sqrt_recursion - function returns the natural square root of number
 * @n: the number to searchh for its natural square root
 * Return: returns an integer
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (numbercheck(1, n));
}

/**
 * numbercheck - functoin that checks for the square root of natural number
 * @n: any number from 1
 * @square_root: the square root of to be goten
 * Return: returs a the square root of a number if any
 */
int numbercheck(int n, int square_root)
{
	if (n * n == square_root)
		return (n);
	else if (n == square_root)
		return (-1);
	else
		return (1 * numbercheck(n + 1, square_root));
}
