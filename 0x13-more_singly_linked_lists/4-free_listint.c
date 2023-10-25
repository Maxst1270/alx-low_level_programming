#include "lists.h"

/**
 * free_listint - frees linked list of integers
 * @head:first node pointer
*/

void free_listint(listint_t *head)
{
	listint_t *nd;

	while (head)
	{
		nd = head;
		head = head->next;
		free(nd);
	}
}
