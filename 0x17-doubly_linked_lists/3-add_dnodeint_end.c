#include "lists.h"
/**
 * add_dnodeint_end - function adds new node at end of lis
 * @head: adress of pointer to first node
 * @n: daata to add
 * Return: return pointer to first node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	current = (*head);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;


	if ((*head) == NULL)
	{
		(*head) = new_node;
		return (*head);
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_node;
	new_node->prev = current;
	return (*head);
}
