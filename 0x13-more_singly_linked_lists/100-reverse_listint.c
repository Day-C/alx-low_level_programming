#include "lists.h"
/**
 * reverse_listint = funstion reverses a linked list
 * @head: the firsr elemment of the list
 * Return: reversed liked list
 */
listint_t *reverse_listint(listint_t **head)
{

	listint_t *temp;

	temp = *head;
	if (!*head)
		return (NULL);
	if (*head)
	{
		temp = (*head)->next;
	}
	return (temp);
}
