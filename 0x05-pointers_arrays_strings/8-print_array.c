#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array
 * @a: is the parameter for the array
 * @n: is the parameter of the length of the array
 * Return: returns a void
 */

void print_array(int *a, int n)
{
	int array_index;

	for (array_index = 0; array_index < n; array_index++)
	{
		printf("%d", a[array_index]);
		if (array_index != (n - 1))
			printf(", ");
	}
	printf("\n");
}
