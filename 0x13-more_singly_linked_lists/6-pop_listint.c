#include "lists.h"
/**
 * pop_listint - function deletes the head node of a list and returns list
 * @head: pointer to the first element of the limked list
 * Return: returns list or 0 if linked list is enpty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (!head)
		return (0);

	i = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (i);
}
