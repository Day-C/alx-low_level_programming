#include "main.h"
/**
 * print_binary - function prints the binary value of decimal parameter
 * @n: decimal number
 * Return:
 */
void print_binary(unsigned long int n)
{
	int bin = 1;
	int index = 0;

	for (; index <= 7; index++)
	{
		if (n & bin)
			_putchar('1');
		else
			_putchar('0');
		bin >>= 1;
	}
}
