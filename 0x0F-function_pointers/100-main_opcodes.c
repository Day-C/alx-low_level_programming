#include <stdio.h>
#include <stdlib.h>

/**
 * main - function prints the upper cse of its own main function
 * @argc: number of arguments
 * @argv: array oof argumentsts
 * Return: int
 */
int main(int argc, char *argv[])
{
	int b, i;
	int (*address)(int, char **) = main;
	unsigned char arg;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < b; i++)
	{
		arg = *(unsigned char *)address;
		printf("%.2x", arg);

		if (i == b - 1)
			continue;
		printf(" ");

		address++;

	}
	printf("\n");
	return (0);
}
