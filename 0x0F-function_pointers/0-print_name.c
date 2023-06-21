#include "function_pointers.h"
/**
 * print_name - function passes pointer  to pointer function
 * @name: string to print
 * @f: function pointer
 * Return: nothing (void)
 */
void print_name(char *name, void (*f)(char *))
{

	void (*ptr)(char *);

	if (name == NULL || f == NULL)
		return;
	ptr = *f;
	ptr(name);

}
