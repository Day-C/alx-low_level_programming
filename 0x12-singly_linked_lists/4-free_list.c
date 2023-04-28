#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_list - function frees a list_t list
 * @head: list to be freed
 *Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (temp != NULL)
	{
		free(temp->str);
		free(temp);
		temp = temp->next;
	}
}
