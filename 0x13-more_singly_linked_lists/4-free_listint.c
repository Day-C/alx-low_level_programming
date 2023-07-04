#include "lists.h"
/**
 * free_listint - function frees memory allocated to a linked list
 * @head: pointer to the first element of the lists
 * Return: nothing (void)
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	if (head == NULL)
		return;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
