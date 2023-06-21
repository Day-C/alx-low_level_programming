#include "dog.h"
/**
 * free_dog - function frees previously allocatedd memory block
 * @d: pointer to memory to be freed
 * Return: nothing (void)
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
}
