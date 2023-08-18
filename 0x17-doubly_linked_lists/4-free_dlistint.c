#include "lists.h"
/**
 * free_dlistint - function frees a list
 * @head: first element on the list
 * Return: void (nothing)
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curent = NULL;
	while (head)
	{
		curent = head->next;
		free(head);
		head = curent;
	}
}
