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
	int numb, charac;
	double flot;
	char *str;

	va_list args;

	va_start(args, format);
	
	format_len = str_len(format);

	i = 0;
	while (i < format_len)
	{
		switch (format[i])
		{
			case 'c':
				charac = va_arg(args, int);
				printf("%c", charac);
			break;
			case  'i':
				numb = va_arg(args, int);
				printf("%d", numb);
			break;
			case 'f':
				flot = va_arg(args, double);
				printf("%f", flot);
			break;
			case 's':
				str = va_arg(args, char *);
				printf("%s", str);
			break;
			default:

			break;
		}
		if (i < format_len - 1)
		{
			printf(", ");
		}

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
