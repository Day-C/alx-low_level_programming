#include "lists.h"
/**
 * dlistint_len - function gets lenght of a list
 * @h: pointer to first node
 * Return: retuen len of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	if (!h)
		return (0);
	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}
