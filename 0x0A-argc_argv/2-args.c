#include <stdio.h>
/**
 * main - function prints all the arguments passed to programme
 * @argc: argument count ( number of arguments )
 * @argv: argument vector ( array of arguments )
 * Return: return 0 fo success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
