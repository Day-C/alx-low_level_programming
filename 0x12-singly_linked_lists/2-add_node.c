#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_node - function adds new node at the begining tof a list_t
 * @head: double pointer to the fitst node
 * @str: sting  to be added
 * Return: list with new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i = 0;

	while (str[i])
	{
		i++;
	}
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = i;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
