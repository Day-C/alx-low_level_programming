#include "lists.h"
/**
 * print_listint - function prints all elements of a liked list
 * @h: links the list to print
 * Return: content of liked list
 */
size_t print_listint(const listint_t *h)
{
	size_t cont = 0;

	while (h)
	{
		printf("%d\n", h->n);
		cont++;
		h = h->next;
	}
	return (cont);
}
