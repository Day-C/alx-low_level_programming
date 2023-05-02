#include "lists.h"
/**
 * free_listint2 - function frees a linked list
 * @head: pointer to first element on list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	if (*head == NULL)
		return;
	*head = NULL;
}
