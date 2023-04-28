#include "lists.h"
#include <stdio.h>
/**
 * print_list - function prints content of linked list
 * @h: content
 * Return: [0] nil if str if null or str if not
 */
size_t print_list(const list_t *h)
{
	size_t st = 0;
	while (h)
	{
		if (!h -> str)
		{
			printf("[0] (nuil");
		}
		else 
			printf("[%u] %s\n", h -> len, h -> str);
		h = h -> next;
		st++;
	}
	return (st);
}
