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
	{
		return;
	}
	else if (d->age < 0)
		printf("(nil)");
	else if (d->name == NULL)
		printf("(nul)");
	else if (d->owner == NULL)
		printf("(nil)");
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
