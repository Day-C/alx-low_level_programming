#include "main.h"

/**
 * rev_string - revereses a string
 * @s: is the string to be reversed and parameter to the function
 * Return: returns a void
 */

void rev_string(char *s)
{
	int a, b, c;
	char rev;

	for (a  = 0; s[a] != '\0'; a++)
	;
	b = 0;
	c = a / 2;

	while (c--)
	{
		rev = s[a - b - 1];
		s[a - b - 1] = s[b];
		s[b] = rev;
		b++;
	}
}
