#include "variadic_functions.h"

/**
 * print_all - function prints all arguments passed to it;
 * @format: the type of argument passed to the function
 * Return: passed arrguments
 */
void print_all(const char * const format, ...)
{
	int i = 0;

	char *str, *p = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", p, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", p, va_arg(list, double));
					break;
				case 'i':
					printf("%s%d", p, va_arg(list, int));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", p, str);
					break;
				default:
					i++;
					continue;
			}
			p = ", ";
			i++;
		}
	}
	va_end(list);
	printf("\n");
}
