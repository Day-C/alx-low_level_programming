#include <stdio.h>
/**
 * main - function to multiply two numbers
 * @argc: number count of arguments
 * @argv: pointer to an array of arguments
 * Return: returns 1 if no argument is passed and 0 for success
 */
int main(int argc, char *argv[])
{
	int i, j, ans;

	(void) argc;
	sscanf(argv[1], "%d", &i);
	sscanf(argv[2], "%d", &j);
	ans = i * j;
	printf("%d\n", ans);
	return (0);
}
