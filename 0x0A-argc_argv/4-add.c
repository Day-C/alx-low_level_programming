#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - function to add positive numbers
 * @argc: number of arguments passed to the program
 * @argv: pointer to array of characters
 * Return: returns 0 if no number is passed or 1 if one number contains symbol
 */
int main(int argc, char *argv[])
{
	int i, j;

	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
