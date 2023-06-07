
#include "main.h"
/**
 * _puts_recursion - the function takes in a pointer to a string as an argument
 * @s: a pointer to a sting
 * Return: nothing (void)
 */
void _puts_recursion(char *s)
{
	/*base case*/
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
