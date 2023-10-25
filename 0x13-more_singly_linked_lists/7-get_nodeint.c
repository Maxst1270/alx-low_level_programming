#include "lists.h"

/**
 * get_nodeint_at_index - gives the node at the index
 * @head:first node pointer
 * @index:the index to the needed node
 *
 * Return:returns the nodes pointer
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nd;
	unsigned int d;

	for (nd = head; d = 0; nd && d < index; nd = nd->next, d++)
		;

	return (nd);
}

