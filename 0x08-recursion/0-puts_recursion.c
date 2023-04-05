#include "main.h"

/**
 * _puts_recursion - function prints a string followed by a new line
 * @s: the string to print
 * Return: void
 */
void _puts_recursion(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
