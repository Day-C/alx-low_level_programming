#include "dog.h"
/**
 * *new_dog - function creates structure
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return: pointer to structure or null if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;


	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return (ptr);
}
