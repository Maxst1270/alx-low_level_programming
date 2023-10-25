#include "lists.h"

/**
 * pop_listint - pop the head node in the list
 * @head:the first node pointer address
 *
 * Return:returns poped node val
*/

int pop_listint(listint_t **head)
{
	listint_t *nd;
	int k;

	if (!*head || !head)
		return (0);

	nd = (*head)->next;
	k = (*head)->n;
	free(*head);
	*head = nd;

	return (k);
}
