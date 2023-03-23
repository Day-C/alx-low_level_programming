#include "main.h"
/**
 * positive_or_negative - checks and displays positive and negative
 * Return: returs the positve number
 * @i: this is the parameter of the function
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive", i);
	else if (i == 0)
		printf("%d is zero", i);
	else
		printf("%d is negative", i);
}
