#include "lists.h"
/**
 * sum_dlistint = function adds all the values of the list
 * @head: pointer to the first node
 * Return: return sum of values on success otherwise 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_ = 0;

	if (head == NULL)
		return (sum_);

	while (head)
	{
		sum_ += head->n;
		head = head->next;
	}
	return (sum_);
}
