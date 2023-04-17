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
	
	d = malloc(sizeof(d) * 2);
	if (d == NULL)
		printf(" ");
	else if (d->name == NULL)
		printf("name: (nil)");
	else if (d->age == NULL)
		printf("(nil)");
	else if (d->owner == NULL)
		printf("(nil)");
	
	printf("%s\ %f\n %s\n", d->name, d->age, d->owner);
}	
