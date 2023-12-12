#include "lists.h"

/**
 * free_listint2 - free the list of integers
 * @head:the pointe of the first nodes address
*/

void free_listint2(listint_t **head)
{
	listint_t *nd, *tm;

	if (head == NULL)
		return;

	nd = *head;

	while (nd)
	{
		tm = nd;
		nd = nd->next;
		free(tm);
	}
	*head = NULL;
}
