#include "dog.h"
#include <stdlib.h>
char *_strcopy(char *dest, char *src);
int stringlen(char *str);
/**
 * new_dog - function to create another structrure
 * @name: first member
 * @age: second memeber
 * @owner: third member
 * Return: struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
        dog_t *doginfo;
        int i, j;

        i = stringlen(name);
        j = stringlen(owner);

        doginfo = malloc(sizeof(dog_t));
        if (doginfo == NULL)
                return (NULL);
        doginfo->name = malloc(sizeof(char)*(i + 1));
        if (doginfo->name == NULL)
        {
                free(doginfo);
                return (NULL);
	}

        doginfo->owner = malloc(sizeof(char) * (j + 1));
        if (doginfo->owner == NULL)
        {
                free(doginfo);
                free(doginfo->name);
		return (NULL);
	}
	_strcopy(doginfo->name, name);
	_strcopy(doginfo->owner, owner);
	doginfo->age = age;

	return (doginfo);
}

/**
 * stringlen - function checks length of string
 * @s: the string to check leng
 * Return: return len:
 */
int stringlen(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strcopy - function copies string from src to dest
 * @src: source
 * @dest: destination
 * return: dest
 */
char *_strcopy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; i++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
