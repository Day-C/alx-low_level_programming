#include "lists.h"
/**
 * add_dnodeint_end - functiona adds a new node at the end of a list
 * @head: geginning node
 * @n: data to add
 * Return: return list with new item at end
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *current = NULL;

	current = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (!(*head))
	{
		*head = new_node;
	}
	else
	{
		while (current->next)
		{
			current = current->next;
		}
		current->next = new_node;
		new_node->prev = current;
		current = new_node;
	}
	return (*head);
}
