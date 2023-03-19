#include <stdio.h>
/**
 * main - reverce alphabet
 * Return: always a zero
 */
int main(void)
{
	int i;

	for (i = 'z' ; i != 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
