#include "lists.h"
/**
 * get_dnodeint_at_index - function returns the nth node in a linked lists
 * @head: beginning node
 * @index: node index
 * Return: not at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *cur;

	while (head)
	{
		 if (i == index)
			 return (cur);
		 cur = head->next;
		 head = cur;
		 i += 1;
	}
	return (NULL);
}
