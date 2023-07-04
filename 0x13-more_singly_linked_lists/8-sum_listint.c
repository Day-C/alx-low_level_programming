#include "lists.h"
/**
 * sum_listint - function adds all node data of a linked list
 * @head: a pointer to teh first element of alinked list
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int i;

	if (head == NULL)
		return (0);
	i = 0;
	while (ptr != NULL)
	{
		i += ptr->n;
		ptr = ptr->next;
	}
	return (i);
}
