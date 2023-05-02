#include "lists.h"
/**
 * add_nodeint_end - function addsa new node at the end of the list
 * @head: pointer to the list head
 * @n: the content to be added
 * Return: list wit new content at the end of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *temp;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = newNode;
	return (newNode);
}
