#include "lists.h"
/**
 * print_listint - function prints all elements of a liked list
 * @h: pointer to the first node
 * Return: structure
 */
size_t print_listint(const listint_t *h)
{
	size_t count;
	const listint_t *ptr = h;

	if (h == NULL)
		return (1);
	count = 0;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
