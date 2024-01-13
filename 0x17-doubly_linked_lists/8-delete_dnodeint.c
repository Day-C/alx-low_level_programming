#include "lists.h"
/**
 * delete_dnodeint_at_index -  function removes node at indexed position
 * @head: pointer to address of first node
 * @index: position index
 * Return: return pointer to list
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev_node, *current = *head;
	dlistint_t *next_node;
	unsigned int count = 0;

	if (index < count || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}
	else
	{
		while (current->next != NULL)
		{
			prev_node = current->prev;
			next_node = current->next;
			if (count == index)
			{
				prev_node->next = next_node;
				next_node->prev = prev_node;
				free(current);
			}
			current = current->next;
			count++;
		}
		if (index == count)
		{
			prev_node = current->prev;
			free(current);
			prev_node->next = NULL;
			return (1);
		}
		if (index > count)
			return (-1);
	}
	return (1);
}
