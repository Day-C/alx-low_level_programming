#include "main.h"

/**
 * reverse_array - function to reverse an array
 * @a: array of integers
 * @n: the number of elements to swap
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int changed, count;

	n = n - 1;
	count = 0;
	while (count <= n)
	{
		changed = a[count];
		a[count++] = a[n];
		a[n--] = changed;
	}
}
