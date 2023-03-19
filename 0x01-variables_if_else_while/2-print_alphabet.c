#include <stdio.h>
/**
 * main - prints theletters of the alphabet o new lines
 * Return: always zero when all goes well
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
