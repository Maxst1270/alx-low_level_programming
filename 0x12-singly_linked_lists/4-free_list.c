#include "lists.h"

/**
 * free_list - free list nodes
 * @head:head node pointer
 *
 * Return:retutns void
*/

void free_list(list_t *head)
{
	list_t *nd, *nx_node;

	if (head == NULL)
		return;

	nd = head;
	while (nd)
	{
		nx_node = nd->next;
		free(nd->str);
		free(nd);
		nd = nx_node;
	}
}
