#include <stdio.h>
/**
 * main - function prints the alphabet in both small and capital letters
 * Return: always 0 showing all went well
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
