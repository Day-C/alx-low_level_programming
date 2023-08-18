#include "lists.h"
/**
 * sum_dlistint - function returns the sum all the data (n) of a list
 * @head: beginning node
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *cur;
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		cur = head->next;
		head = cur;
	}
	return (sum);
}
