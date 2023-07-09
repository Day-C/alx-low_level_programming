#include "main.h"
/**
 * clear_bit - function sets the value of indexed bit to 0
 * @n: pointer to the decimal number
 * @index: indexof bit to clear
 * Return: 1 if successful and -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
