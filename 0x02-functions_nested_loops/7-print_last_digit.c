#include "main.h"
/**
 * print_last_digit - displays the last digitin a sequence
 * @c: the sequenc to be checked
 * Return: returns the last number
 */
int print_last_digit(int c)
{
	int r;

	r = (c % 10);
	if (r < 0)
	{
	r = (r * -1);
	}
	_putchar(r + '0');
	return (r);
}
