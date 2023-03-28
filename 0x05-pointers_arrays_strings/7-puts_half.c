#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: parameter of the function
 * Return: returns a void
 */

void puts_half(char *str)
{
	int whole, half;

	whole = 0;
	while (str[whole] != '\0')
		whole++;
	half = whole / 2;

	if (whole % 2 == 1)
		half++;
	while (half < whole)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
