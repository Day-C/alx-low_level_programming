#include "lists.h"
/**
 * listint_len - function returns the number of elements in a list.
 * @h: linked list of type listint_t
 * Return: return the number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	for (count = 0; h; count++)
		h = h->next;

	return (count);
}
