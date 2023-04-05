#include "main.h"
/**
 * factorial - function prints the factorial of a given number
 * @n: the number to find its factorial.
 * Return: returns the the factorial (integer)
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return  (-1);
	else
		return (n * factorial(n - 1));
}
