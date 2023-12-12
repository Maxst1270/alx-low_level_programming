#include "lists.h"

/**
 * list_len - gets the length of a linked list
 * @h:points to the first node
 *
 * Return:list size
*/

size_t list_len(const list_t *h)
{
	size_t s;

	for (s = 0; h; s++)
	{
		h = h->next;
	}

	return (s);
}
