#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function takes in pointer name and function pointer
 * @name: pointer to name char
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	f(name);
}
