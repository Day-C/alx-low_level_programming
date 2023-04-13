#include <stdio.h>
#include <stdlib.h>
/**
 * main - function prints the number of arguments passed to the program
 * @argc: argument count
 * @argv: argument vector(pointer to arguments)
 * Return: returs 0 for success
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", (argc - 1));
	return (0);
}
