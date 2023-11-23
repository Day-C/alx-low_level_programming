#include "main.h"
#include <stdio.h>

/**
 * print_binary - function prints the binary representation of a number
 * @n: decimal input
 * Return: nothing (void function)
 */
void print_binary(unsigned long int n)
{
	unsigned long int current;
	int count, index;

	count = 0;
	for (index = 63; index >= 0; index--)
	{
		current = n >> index;
		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if  (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
