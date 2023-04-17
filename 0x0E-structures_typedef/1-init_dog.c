#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - function that initializes the variables of the dog struture
 * @d:  pointer to structure whoes variables will be initialized
 * @name: first member of the structure
 * @age: second memeber
 * @owner: third member
 * Return: noting
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
