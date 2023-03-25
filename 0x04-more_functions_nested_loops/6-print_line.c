#include "main.h"

/**
 * print_line - the function printing the line
 * @n: parameter to the function
 * Return: retrns an interger(length of line)
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 1 ; i <= n ; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
		}
	else
	{
		_putchar('\n');
	}

}
