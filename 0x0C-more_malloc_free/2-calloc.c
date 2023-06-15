#include "main.h"
/**
 * _calloc - function allocates memory for an array
 * @nmemb: content of array
 * @size: size of array
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (!size)
		return (NULL);
	array = malloc(sizeof(char) * size * nmemb);

	if (array == NULL)
		return (NULL);
	return (array);
}
