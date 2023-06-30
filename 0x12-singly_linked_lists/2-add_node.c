#include "lists.h"
int string_len(const char *str);
/**
 * add_node - function adds a node to the liked list
 * @head: first element of the list
 * @str: string to be added.
 * Return: return added string
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len;

	len = string_len(str);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->len = len;
	new->str = strdup(str);
	new->next = (*head);
	(*head) = new;

	return (*head);
}
 /**
  * string_len - function to print the lenght of a sting
  * #str: pointer to string
  * Return: lenght
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
