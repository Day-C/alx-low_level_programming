#include <stdio.h>
/**
 * main - foction prints all arguments passed to program
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 * Return: returns a  for success
 */
int main(int argc, char *argv[])
{
	int i;

	for  (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
