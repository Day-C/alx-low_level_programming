#include "variadic_functions.h"
/**
 * print_numbers - functionprints numbers on new lines
 * @separator: the charater thta is printed between each number
 * @n: number of integers to be accepted  by the function
 *Return: returns numbersin arrangment
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list numb;

	va_start(numb, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(numb, int));
		else if (separator)
			printf("%d", va_arg(numb, int));
		printf("%s%d", separator, va_arg(numb, int));
	}
	va_end(numb);
	printf("\n");
}
