#include "lists.h"
/**
 * get_nodeint_at_index - function returns the nth node of a liked list
 * @head: the first element of the list
 * @index: the node to be found
 * Return: return NULL if node does not exist or node if it does
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int num = 0;

	temp = head;
	for (num = 0; num < index;  num++)
	{
		if (temp)
			temp = temp->next;
	}
	return (temp ? temp : NULL);
}
