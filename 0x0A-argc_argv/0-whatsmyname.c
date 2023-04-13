#include <stdio.h>
#include <stdlib.h>
/**
 * main - function prints function name and new line
 * @argc: number of arguments passed to the programm
 * @argv: pointer array of all the arguments passed to the program
 * Return: return 0 for success.
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
