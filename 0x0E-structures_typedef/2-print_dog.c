#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - function to print structure content
 * @d: pointer to the structure
 * Return: nothing
 */
void print_dog(struct dog *d)
{

	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s\n", d->name);
	if (d->age > 0)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)");
	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s\n", d->owner);
}
