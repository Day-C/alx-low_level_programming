#include <stdio.h>
#include <stdlib.h>

/**
 * main - function prints the upper cse of its own main function
 * @argc: number of arguments
 * @argv: array oof argumentsts
 * Return: int
 */
int main(int argc, char argv[])
{
	int b, i;
	char *arg;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atio(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arg = (char *)main;
	for (i = 0; i < b; i++)
	{
		if (i == b - 1)
		{
			printf("%02hhx\n", arg[i]);
			break;
		}
		printf("%02hhx", arr[i]);
	}
	return (0);
}
