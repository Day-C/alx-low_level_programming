#include "main.h"
/**
 * print_binary - function converts a number from decimal to binary
 * @n: decimal number to be converted
 * Return: nothing (void function)
 */
void print_binary(unsigned long int n)
{
	int idx, cnt = 0;
	unsigned long int current;

	for (idx = 63; idx >= 0; idx--)
	{
		current = n >> idx;

		if (current & 1)
		{
			_putchar('1');
			cnt++;
		}
		else if (cnt)
			_putchar('0');
	}
	if (!cnt)
		_putchar('0');
}
