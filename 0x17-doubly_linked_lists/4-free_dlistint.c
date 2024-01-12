#include "lists.h"
/**
 * free_dlistint - function frees a doubly linked list
 * @head: ponter to first node
 * Return: return nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

