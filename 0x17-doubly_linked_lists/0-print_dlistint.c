#include "lists.h"
/**
 * print_dlistint - function prints data of linked list
 * @h: pointer to the first node
 * Return: return number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count  = 0;
	const dlistint_t *current;

	if (!h)
	return (0);

	current = h;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
