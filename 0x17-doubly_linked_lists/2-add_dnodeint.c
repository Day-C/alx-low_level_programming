#include "lists.h"
/**
 * add_dnodeint - function adds anew node at the beginning of a list
 * @head: pointer to address og first node
 * @n: element to add
 * Return: pointer to first node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if ((*head) != NULL)
	{
		(*head)->prev = new_node;
	}
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
