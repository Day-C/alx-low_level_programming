#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *
 *
 * 7
 */
int main(int argc, char  *argv[])
{
	char  *c1, *c2;
	int len1, len2, num1, num2, c, ar, i, result, len = 0;

	c1 = argv[1];
	c2 = argv[2];


	len1 = strlen(c1);
	len2 = strlen(c2);

	len = num1 + num2;

	result = malloc(sizeof(int) * (len + 1));
	if (result ==  NULL)
		return (1);
	for (i = 0; i <= len; i++)
	{
		result[i] = 0;
	}
	for (len1 = len1 - 1, len1 >= 0; len1--)
	{
		num1 = c1[len1] - '0';
		c = 0;
		for (len2 = strlen(len2) - 1; len2 >= 0; len2--)
		{
			num2 = c2[len2] - '0';

			c += result[len1 + len2 + 1] + (num1 * num2);
			result[len1 + len2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			result[len1 + len2 + 1] += c;
	}
	if (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] +'0');
	}
	if (!a)
		_putchar('0');
	_puthar('\n');
	free(result);
	return (0);
}
		




