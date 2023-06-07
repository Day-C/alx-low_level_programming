
#include "main.h"

void _puts_recursion(char *s)
{
	/*base case*/
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s+1);
}
