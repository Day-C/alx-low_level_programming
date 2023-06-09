#include <stdio.h>
#include <stdlib.h>
/**
 * main - function pultiplies two numbers and prints the result
 * @argc: argument count number of arguments )
 * @argv: argument vector ( array of arguments )
 * Return: retutns miltiplication for success ot 1 if error
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
	}
	return (0);
}
