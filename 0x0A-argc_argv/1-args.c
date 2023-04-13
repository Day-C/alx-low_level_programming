#include <stdio.h>
#include <stdlib.h>
/**
 * main - function prints teh number of arguments passed to the function
 * @argc: argument count
 * @argv: argument vector(pointer to arguments)
 * Return: returs 0 for success
 */

int main(int argc, char* argv[])
{
	(void) argv;
	printf("%d\n", argc);
	return (0);
}
