#include "lists.h"
/**
 * sum_listint - function sums all data of a list.
 * @head: the first element of the list
 * Retutn: returns sum or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int i;

	temp = head;
	while (temp)
	{
		i += temp->n;
		temp = temp->next;
	}
	return (i);
}
