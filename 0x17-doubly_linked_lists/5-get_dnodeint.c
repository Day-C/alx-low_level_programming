#include "lists.h"
/**
 * get_dnodeint_at_index - function gets value at an index in the DLL
 * @head: pointer to first node of list
 * @index: position of node in list
 * Return: pointer to indexed node on success otherwise NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	if (index < count)
		return (NULL);

	while (head)
	{
		if (count == index)
		{
			current = malloc(sizeof(dlistint_t));
			current->n = head->n;
			break;
		}
		head = head->next;
		count++;
	}
	if (index > count)
		return (NULL);
	return (current);
}
