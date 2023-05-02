#include "lists.h"
/**
 * free_listint - function frees the liked list
 * @head: the begining of the list
 * Return: nothing (void)
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

