#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to multiply two numbers
 * @argc: number count of arguments
 * @argv: pointer to an array of arguments
 * Return: returns 1 if no argument is passed and 0 for success
 */
int main(int argc, char *argv[])
{
	int i, j;

	/*int ans*/
	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		/*ans = i * j;*/
		printf("%d\n", i * j);
		return (0);
	}
	printf("Error\n");
	return (1);
}
