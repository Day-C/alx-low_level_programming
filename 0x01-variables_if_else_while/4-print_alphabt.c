#include <stdio.h>
/**
 * main - print letter except e and q
 * Return: always 0 whrn all is good
 */
int main(void)
{
	char i;

	for  (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
