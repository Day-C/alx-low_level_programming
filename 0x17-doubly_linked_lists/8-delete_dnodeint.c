#include "lists.h"
/**
 * delete_dnodeint_at_index - function deletes a node at an ondex
 * @head: double pointer to the head
 * @index: index of node to be removed
 * Return: 1 if successful or -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp;
	dlistint_t *bfr_n = NULL;
	dlistint_t *aft_n = NULL;
	dlistint_t *x = NULL;

	if (*head == NULL)
		return (-1);

	temp = *head;
	while (temp)
	{
		if (count == (index - 1) && index != 0)
			bfr_n = temp;
		if (count == index + 1)
			aft_n = temp;
		if (count == index)
			x = temp;
		count++;
		temp = temp->next;
	}
	
	if (index == 0)
	{
		(*head)->next = aft_n;
		aft_n->prev = NULL;
		*head = aft_n;
	}
	else
	{
		bfr_n->next = aft_n;
		aft_n->prev = bfr_n;
	}

	free(x);
	return (1);
}
