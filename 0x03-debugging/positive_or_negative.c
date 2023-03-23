#include "main.h"
/**
 * positive_or_negative - identifies positve and negative numbers
 * @i: this is theparameter passed ionto the fuction
 * Return: returns a  number and letlls check if it is positiv or negative
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
