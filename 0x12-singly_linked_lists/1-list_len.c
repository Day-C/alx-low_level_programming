#include "lists.h"
/**
 * list_len - function counts the number of elements in a liked list
 * @h: firs element of the liked list (head)
 * Return: lenght of list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *temp;

	if (h == NULL)
		return (0);
	temp = h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
