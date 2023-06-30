#include "lists.h"
/**
 * print_list - function printf elements of a liked list
 * @h: head of liks
 * Return: size_t if successful or (nill) otherwise
 */
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
			printf("[%d] %s", temp->len, temp->str);
		temp = temp->next;
		printf("\n");
		count++;

	}
	return (count);
}
