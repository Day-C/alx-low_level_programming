#include "lists.h"
/**
 * dlistint_len - function counts the number of nodes in a list
 * @h: beginning node of the list
 * Return: nmber of modes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
