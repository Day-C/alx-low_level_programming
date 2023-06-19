#include "dog.h"
/**
 * print_dog - function prints content of a structure
 * @d: pointer to the stucture
 * Return: nothing (void)
 */
void print_dog(struct dog *d)
{

	if (d == NULL)
		printf("nothing");
	if (d->name == NULL)
		printf("(nil)");
	if (!d->age)
		printf("(nil");
	if (d->owner == NULL)
		printf("(nil)");
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
