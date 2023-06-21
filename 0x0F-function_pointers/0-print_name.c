#include "function_pointers.h"
/**
 * print_name - function 
 * @name: string to print
 *
 * Return: nothing (void)
 */
 void print_name(char *name, void (*f)(char *))
{

	void (*ptr)(char *);

	if (name == NULL)
			return;
	ptr = *f;
	ptr(name);

}
