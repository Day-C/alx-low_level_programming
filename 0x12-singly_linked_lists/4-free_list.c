#include "lists.h"
/**
 * free_list - function frees a list
 * @head: beginning of the list
 * Return: nothing (void)
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
