#include "dog.h"
/**
 * init_dog - function initializes variables of the structure
 * @d: pointer to  a variable of the structure
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return: nothing (void)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
