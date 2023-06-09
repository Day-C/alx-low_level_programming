#include <stdio.h>
/**
 * main - function print the number of arguments assed to it
 * @argc: argument count(contaions the number of arguments in argv)
 * @argv: argument vector(contains an array  of arguments)
 * Return: return 0 for success
 */

int main(int argc, char *argv[])
{
	if (argv != NULL)
		printf("%d\n", argc - 1);
	return (0);
}
