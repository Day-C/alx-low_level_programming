#include "main.h"

/**
 * print_square - prints square  of given inputs
 * @size: parameter fot the function
 * Return: return a void
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size;  j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
