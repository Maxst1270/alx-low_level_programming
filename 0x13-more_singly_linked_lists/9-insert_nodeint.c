#include "lists.h"

/**
 * insert_nodeint_at_index - adds new node at given ind
 * @head:the address to the pointer of the first node
 * @idx:index for the new added node
 * @n:new node val
 *
 * Return:returns the address to the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nd, *w_node = malloc(sizeof(listint_t));
	unsigned int x = 0;

	if (!w_node || !head)
		return (NULL);

	w_node->n = n;
	w_node->next = NULL;

	if (!idx)
	{
		w_node->next = *head;
		*head = w_node;
		return (w_node);
	}

	nd = *head;

	for ( ; nd; )
	{
		if (x == idx - 1)
		{
			w_node->next = nd->next;
			nd->next = w_node;
			return (w_node);
		}
		x++;

		nd = nd->next;
	}

	free(w_node);

	return (NULL);
}
