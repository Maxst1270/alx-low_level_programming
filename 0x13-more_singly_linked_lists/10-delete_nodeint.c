#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node of at given index
 *
 * @head:the address to the first nodes pointer
 * @index:the node to delete index
 *
 * Return:returns 1 if succeded, -1 if failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nd, *lst_node;
	unsigned int w = 0;

	if (!*head || !head)
		return (-1);

	if (!index)
	{
		nd = *head;
		*head = (*head)->next;
		free(nd);
		return (1);
	}

	nd = *head;

	while (nd)
	{
		if (w == index)
		{
			lst_node->next = nd->next;
			free(nd);
			return (1);
		}
		w++;
		lst_node = nd;
		nd = nd->next;
	}

	return (-1);
}
