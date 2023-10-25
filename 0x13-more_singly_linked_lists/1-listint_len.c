#include "lists.h"

/**
 * listint_len - print the linked list
 * @h:first node pointer
 *
 * Return:returns list size
*/

size_t listint_len(const listint_t *h)
{
	size_t p;

	for (p = 0; h; p++)
	{
		h = h->next;
	}
	return (p);
}
