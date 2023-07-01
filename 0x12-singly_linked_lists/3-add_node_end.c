#include "lists.h"
/**
 * string_len - function gets lenght of string
 * @str: string parameter
 * Return: string lenght
 */
int string_len(const char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node_end - function adds a node at the end of a list
 * @str: element to be addes
 * @head: beginning of list
 * Return: list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *list = *head;
	unsigned int len;

	len = string_len(str);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (list->next != NULL)
	{
		list = list->next;
	}
	list->next = new;

	return (new);
}
