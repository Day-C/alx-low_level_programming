#include "lists.h"
/**
 * free_list - function frees a list
 * @head: beginning of the list
 * Return: nothing (void)
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free(head);
}
