#include "lists.h"
/**
 * add_nodeint - function adds a new node at the beginning os a list
 * @head: a pointer first node of the linked list
 * @n: new data to be contained buy the new node
 * Return: a pointer to a singly linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
