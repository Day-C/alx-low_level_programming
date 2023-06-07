#include "main.h"
/**
 * _print_rev_recursion - function prints a string in reverse
 * with the help of a recursive functoin and _putchar
 * @s: pointe to a sting
 * Return: nothing (void)
 */
void _print_rev_recursion(char *s)
{
	if (!*s)
		return;		/*base case*/
	_print_rev_recursion(s + 1);	/*recurtion*/
	_putchar(*s);
}
