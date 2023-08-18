#include "lists.h"
/**
 * insert_dnodeint_at_index - function add a new node at a give index
 * @h: head
 * @idx: index
 * @n: new numbet to be added tothe list
 * Return: list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *new_node = NULL;
	dlistint_t *bfr_i = NULL;
	dlistint_t *aft_i = NULL;
	unsigned int i = 0;

	temp = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	while (temp)
	{
		if (i == idx - 1)
			bfr_i = temp;

		if (i == idx)
			aft_i = temp;
		i++;
		temp = temp->next;
	}
	if (idx > i)
		return (NULL);

	bfr_i->next = new_node;
	new_node->prev = bfr_i;
	new_node->next = aft_i;
	aft_i->prev = new_node;

	return (*h);
}
