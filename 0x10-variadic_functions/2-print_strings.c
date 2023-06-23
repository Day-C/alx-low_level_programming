#include "variadic_functions.h"
void is_str(char *str);
/**
 * print_strings - fnction prints string argument followed bu a separator
 * @separator: character to be printed after each sting
 * @n: number of argument passed to the function
 * Return: nothing (void)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list str_args;

	va_start(str_args, n);

	for (i = 0; i < n; i++)
	{
		is_str(va_arg(str_args, char *));

		if (i < n - 1)
		{
			if (separator ==  NULL)
				return;
			printf("%s", separator);
		}
	}
	printf("\n");
}

/**
 * is_str - function checks if sting is a null
 * @str: parameter to function( pointer to characters)
 * Return: return nothing (void) function;
 */
void is_str(char *str)
{
	char *ptr;

	ptr = "(nil)";
	if (str == NULL)
		printf("%s", ptr);
	else
		printf("%s", str);
}

