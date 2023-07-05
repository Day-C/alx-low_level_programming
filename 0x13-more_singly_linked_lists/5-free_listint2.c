#include "lists.h"
/**
 * free_listint2 - function frees memory allocated to a linked list
 * @head: double pointer to the first node of the list
 * Return: nothing (void)
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = (*head);

	if (*head == NULL)
		return;
	while (temp != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
