#include "lists.h"
/**
 * print_dlistint - function prints elemenst of list
 * @h: pointer to first node
 * Return: return number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	if (!h)
		return (count);
	while (current)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}
	return (count);
}
