#include "variadic_functions.h"
int str_len(const char * const s);
/**
 * print_all - function print all the specified types of arguments
 * @format: string containing parameter type
 * Return: nothing (void)
 */
void print_all(const char * const format, ...)
{
	int i, format_len;

	va_list args;

	va_start(args, format);
	
	format_len = str_len(format);

	i = 0;
	while (i < format_len)
	{
		if (format[i] == 'c')
			printf("%c", va_arg(args, int));
		else if (format[i] == 'i')
			printf("%d", va_arg(args, int));
		else if (format[i] == 'f')
			printf("%f", va_arg(args, double));
		else if (format[i] == 's')
			printf("%s", va_arg(args, char *));
		else
			i++;
	}
	printf("\n");
}
 /**
  * str_len - function gets lenght of string
  * @s: sting argument
  * Return: strings lenght
  */
int str_len(const char * const s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
