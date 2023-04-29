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
	char elem;


	elem = malloc(sizeof(size)* nmemb);

	if (nmemb == 0)
		return (NULL);i
	if (size ==0)
		return (NULL);
	if (elem == NULL)
		return NULL;

	elemset(elem, 0, nmemb * size);
	return (prt);
}
/**
 * elemset - functio prints element to allocated space
 * @str: memory area to fill
 * @num: character to print
 * @mem: number of times to copy
 * Return: pointer to memory area
 */
char *_elemset(char *str, char num, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++:set)
	{
		str[i] = num;
	}
	return (str);
}
