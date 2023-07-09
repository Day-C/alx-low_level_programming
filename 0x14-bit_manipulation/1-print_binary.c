#include "main.h"
/**
 * print_binary - function prints the binary value of decimal parameter
 * @n: decimal number
 * Return:
 */
void print_binary(unsigned long int n)
{
	unsigned int cur_bit;
	int  i, count = 0;

	for (i = 63; i >= 0; i--)
	{
		cur_bit = n >> i;

		if (cur_bit & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');

}
