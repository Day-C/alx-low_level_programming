#include "main.h"

/**
 * print_rev - prints he reverce of a given string
 * @s: the string to tbe reverse printed
 * Return: void
 */

void print_rev(char *s)
{
	int begin = 0;

	while (s[begin])
		begin++;
	while (begin--)
		_putchar(s[begin]);
	_putchar('\n');
}
