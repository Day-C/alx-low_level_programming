#include "lists.h"
/**
 * insert_dnodeint_at_index - function insert new node at given index
 * @h: pointer to adress of head node;
 * @idx: index to insert at
 * @n: value to insert
 * Return: return pointer to first node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new_node, *prev_node;
	unsigned int count = 0;

	if (idx < count)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*h == NULL && idx == 0)
		*h = new_node;

	else
	{
		while (current->next != NULL)
		{
			prev_node= current->prev;
			if (count == idx)
			{
				prev_node->next = new_node;
				new_node->prev = prev_node;
				new_node->next = current;
				current->prev = new_node;
				break;
			}
			current = current->next;
			count++;
		}

		if (idx == count)
			new_node->prev = current;
	
		else if (idx > count)
			return (NULL);
	}
	return (*h);
}



