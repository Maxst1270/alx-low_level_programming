#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 *
 * @head:the address of first node pointer
 *
 * Return:returns the head address
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *nd = NULL, *next = NULL;

	if (!*head || !head)
		return (NULL);

	nd = *head;
	*head = NULL;

	for ( ; nd; )
	{
		next = nd->next;
		nd->next = *head;
		*head = nd;
		nd = next;
	}

	return (*head);
}
