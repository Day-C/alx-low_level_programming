#include "variadic_functions.h"

/**
 * print_numbers - function prints number followed by a separator
 * @separator: character to separate the numbers
 * @n: number of parameters
 * Return: nothing (void)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list numbs;

	va_start(numbs, n);
	if (n == 0)
		return;

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbs, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbs);
}
