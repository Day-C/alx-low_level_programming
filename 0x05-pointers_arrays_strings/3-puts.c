#include "main.h"

/**
 * _puts - prints string followed by new line
 * @s: paramete to the function
 * Return:  void
 */

void _puts(char *str)
{
	int pstr = 0;

	while (str[pstr])
	{
		_putchar(str[pstr]);
		pstr++;
	}
	_putchar('\n');
}
