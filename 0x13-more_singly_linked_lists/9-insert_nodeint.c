#include "lists.h"
/**
 * insert_nodeint_at_index - function inserts new node at
 * a given positioni
 * @head: first element of the list
 * @idx: the position to input the new element
 * @n: teh element to be added to list
 * Return: list with new element at partucular position else NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *newB;
	unsigned int i = 0;

	temp = *head;
	newB = malloc(sizeof(listint_t));
	if (!newB || !head)
		return (NULL);
	newB->n = n;
	newB->next = NULL;

	if (idx == 0)
	{
		newB->next = *head;
		*head = newB;
		return (newB);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newB->next = temp->next;
			temp->next = newB;
			return (newB);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
