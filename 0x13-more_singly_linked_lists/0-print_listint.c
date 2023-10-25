#include "lists.h"

/**
 * print_listint - print the linked list
 * @h:first node pointer
 *
 * Return:returns list size
*/

size_t print_listint(const listint_t *h)
{
	size_t g;

	for (g = 0; h; g++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (g);
}
