#include "lists.h"
/**
 * add_nodeint - function adds a new node to the begining of a list
 * @head: pointer to head of linked list
 * @n: content to be added
 * Return: returns list begining with new content
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

