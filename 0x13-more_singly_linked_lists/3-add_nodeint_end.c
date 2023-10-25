#include "lists.h"

/**
 * add_nodeint_end - add anode to the end
 * @head:first node pointer
 * @n:new node val
 *
 * Return:returns new node pointer
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *w_node = malloc(sizeof(listint_t));
	listint_t *nd;

	if (!w_node || !head)
		return (NULL);

	w_node->next = NULL;
	w_node->n = n;

	if (!*head)
		*head = w_node;
	else
	{
		nd = *head;
		while (nd->next)
			nd = nd->next;
		nd->next w_node;
	}

	return (w_node);
}
