#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: the first parameter to the function
 * @b: the second parameter to the function
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
