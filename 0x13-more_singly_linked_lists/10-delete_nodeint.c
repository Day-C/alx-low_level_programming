#include "lists.h"
/**
 * delete_nodeint_at_index - function deletes  node at a given index
 * @head: the first element o the list
 * @index: the index where content will be beleted
 * Return: returns 1 if successful or -1 if it faild
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *loc = NULL;
	unsigned int here;

	temp = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (here < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		here++;

	}
	loc = temp->next;
	temp->next = loc->next;
	free(loc);
	return (1);
}
