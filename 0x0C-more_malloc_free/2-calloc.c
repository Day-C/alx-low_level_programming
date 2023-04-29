#include "main.h"

char *_elemset(char *str, char num, unsigned int n);
/**
 * _calloc - function allocates memory of an array with malloc
 * @nmemb: content to fill memop=ry
 * @size: size of element
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *elem;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	elem = malloc(size * nmemb);
	if (elem == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (size * nmemb); i++)
		*((char *)(elem) + 1) = 0;
	return (elem);
}
