#include <stdio.h>
/**
 * main - fonction takes cmd arguments and return an int
 * @argc: argument count
 * @argv: argument vectore
 * Return: return 0 in success
 */
int main(int argc, char *argv[])
{
	if (argc != 0)
	printf("%s\n", argv[0]);
	return (0);
}
