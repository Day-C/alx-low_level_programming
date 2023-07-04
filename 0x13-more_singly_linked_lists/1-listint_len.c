#include "lists.h"
/**
 * listint_len - function count the number of elements in the list
 * @h: pointet to the first element of the list
 * Return: return the lenght of the liked lists
 */
size_t listint_len(const listint_t *h)
{
	size_t count;
	const listint_t *ptr = h;

	if (h == NULL)
		return (0);

	count = 0;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
