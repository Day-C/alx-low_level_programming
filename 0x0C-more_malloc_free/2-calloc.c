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
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(size * nmemb);

	if (array == NULL)
		return (NULL);
	ptr = array;

	for (i = 0; ptr[i]; i++)
		ptr[i] = 0;
	return (ptr);
}
