#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function sums all the integer inputs
 * @n: the number of arguments
 * Return: returns the sum or 0 if "n" is exactly 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int l, sum = 0;
	va_list numlist;

	va_start(numlist, n);

	for (l = 0; l < n; l++)
	{
		sum += va_arg(numlist, int);
	}
	va_end(numlist);
	return (sum);
}
