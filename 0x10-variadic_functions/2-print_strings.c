#include "variadic_functions.h"
/**
 * print_strings - finction prints argument string
 * @separator: string printed between strings
 * @n: number of string to be passed
 * Return: print strings separated with space and comma
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char  *str;

	va_list prtstr;

	va_start(prtstr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(prtstr, char *);

		if (str == NULL)
			printf("(nil");

		else if (str)
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(prtstr);
	printf("\n");
}
