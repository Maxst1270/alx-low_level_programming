#include "lists.h"

/**
 * add_nodeint - add a node to at the head
 * @head:first node pointer
 * @n:new nodes val
 *
 * Return:returns a pointer to the new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *w_node = malloc(sizeof(listint_t));

	if (!w_node || !head)
		return (NULL);

	w_node->next = NULL;
	w_node->n = n;

	if (*head)
		w_node->next = *head;
	*head = w_node;

	return (w_node);
}
