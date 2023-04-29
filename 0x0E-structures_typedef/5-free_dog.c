#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function frees memory allocation for structure
 * @d: structure to be freed
 * Return: nothing
 */
void free_dog(dog_t *dog)
{
	if (dog)
	{
		free(dog);
		free(dog->owner);
		free(dog->name);
	}
}
