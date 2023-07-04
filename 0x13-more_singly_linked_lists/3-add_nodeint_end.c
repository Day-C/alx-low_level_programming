#include  "lists.h"
/**
 * add_nodeint_end - function adds a new node at the end of a list
 * @head: D-pointer to the forst node
 * @n: new int value
 * Return: pointer to a structure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	temp = (*head);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}


