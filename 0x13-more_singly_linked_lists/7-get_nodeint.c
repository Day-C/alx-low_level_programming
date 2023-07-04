#include "lists.h"
unsigned int list_len(listint_t *head);
/**
 * get_nodeint_at_index - functionreturns a node of given index
 * @head: double pointer to the first node
 * @index: index of node (location)
 * Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int count, n;

	if (head == NULL)
		return (NULL);
	n = list_len(head);
	if (n < index)
		return (NULL);

	count = 0;
	while (count < index)
	{
		temp = temp->next;
		count++;
	}
	return (temp);
}

/**
 * list_len - function counts the number of of elements in the list
 * @head: first element of the list
 * Return: count of the number of elements
 */
unsigned int list_len(listint_t *head)
{
	unsigned int i;
	listint_t *temp = head;

	i = 0;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
