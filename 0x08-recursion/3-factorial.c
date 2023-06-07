#include "main.h"
/**
 * factorial - function retuns the factorial in an integer argument
 * @n: integer value(argument to function)
 * Return: return 0 if fatorial is less tha 0 and -1 to indiucate an error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
