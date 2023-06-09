#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - function adds all cmd-line arguments
 * @argc: argument count
 * @argv: argument vector
 * Retutn: return 1 for success of 0 otherwise
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else if (atoi(argv[i]) >= 1)
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
