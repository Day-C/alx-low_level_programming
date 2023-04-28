#include "lists.h"
#include  <stdio.h>

/**
 * list_len - function prints the number of elemts in a linked list
 * @h: pointer to a lits_ list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t len;

	len = 0;
	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
