#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - function prints the results of an operation
 * @argc: number of arguments passed to function
 * @argv: pointer to aeguments passed
 * Return: 0 if successful
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int in1, in2;
	char *oper;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	in1 =  atoi(argv[1]);
	oper = argv[2];
	in2 = atoi( argv[3]);

	if (get_op_func(oper) == NULL || oper[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*oper == '/' && in2 == 0) || (*oper == '%' && in2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(oper)(in1, in2));
	return (0);
}
