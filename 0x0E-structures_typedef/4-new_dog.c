#include "dog.h"

char *_cpy(char *source, char *destin);
int _str_len(char *str);

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
	char *ptr_name;
	char *ptr_owner;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	/* allocate memory for name anf & fill*/
	ptr_name = malloc(sizeof(char) +_str_len(name));
	ptr->name = _cpy(name, ptr_name);

	ptr->age = age;
	/* allocate memory for owner & fill*/

	ptr_owner = malloc(sizeof(char) + _str_len(owner));
	ptr->owner = _cpy(owner, ptr_owner);
	return (ptr);
}

int _str_len(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char *_cpy(char *source, char *destin)
{
	int i;

	for (i = 0;  i < _str_len(source) && source[i]; i++)
	{
	 	destin[i] = source[i];

	}
	destin[i] = '\0';
	return (destin);
}
