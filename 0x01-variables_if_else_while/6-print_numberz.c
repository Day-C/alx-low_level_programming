#include <stdio.h>
/**
 * main - main function is active
 * Return: always zero
 */
int main(void)
{
	int j;

	for (j = 0 ; j < 10 ; j++)
		putchar(j + '0');
	putchar('\n');
	return (0);
}
