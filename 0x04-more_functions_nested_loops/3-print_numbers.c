#include "main.h"

/**
 * print_numbers - the functiuon prints numbers in base 10
 * Return: retuen a void
 */

void print_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
