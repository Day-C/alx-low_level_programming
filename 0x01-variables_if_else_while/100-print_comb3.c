#include <stdio.h>
/**
 * main - function for printing2digits
 * Return: alwasy zero
 */
int main(void)
{
	int i;
	int j;

	for (i = 0 ; i <= 9 ; i++)
	{
		for  (j = i + 1 ; j <= 9 ; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i == 8 && j == 9)
				putchar('\n');
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
