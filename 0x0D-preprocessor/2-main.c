#include <stdio.h>
/**
 * main - function prints the name of the file it is compiled from
 *
 * Return: return 0 for success
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
