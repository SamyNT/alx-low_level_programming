#include "lists.h"
/**
 * print_list - prints all the elements of a list_t
 * @h: head of list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		(h->str) ? printf("[%d] %s\n", h->len, h->str) :
			printf("[0] (nil)\n");
		h = h->next;
	}
	return (i);
}
