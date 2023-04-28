#include "lists.h"
#include <stdlib.h>
#include <string.h>
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

	new  = malloc(sizeof(list_t));
	if  (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	while (str[i] != '\0')
	{
		i++;
	}

	new->len = i;
	if (*head != NULL)
		new->next = *head;
	if (*head == NULL)
		new->next = NULL;

	*head = new;
	return (*head);
}
