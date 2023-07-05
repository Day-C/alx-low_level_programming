#include "lists.h"
/**
 * pop_listint - function deletes a head node and returns the head nodes data
 * @head: double pointer to the first node of the linked list
 * Return: data of the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int n;

	if (*head == NULL)
		return (0);

	n = temp->n;
	temp = temp->next;
	free(*head);
	*head = temp;
	return (n);
}
