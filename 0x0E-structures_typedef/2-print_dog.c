#include "dog.h"
/**
 * print_dog - function prints content of a structure
 * @d: pointer to the stucture
 * Return: nothing (void)
 */
void print_dog(struct dog *d)
{

	if (d == NULL)
		return;
	if (!d->name || d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (!d->age || d->age <  1.0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);

	if (!d->owner || d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
