#include "lists.h"

/**
 * add_node_end - add node the list end
 *
 * @head:the pointer to head nodes address
 * @str:node field
 *
 * Return:list size
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *frsh_node = malloc(sizeof(list_t));
	list_t *nd = *head;

	if (!frsh_node || !head)
		return (NULL);

	if (str)
	{
		frsh_node->str = strdup(str);
		if (!frsh_node)
		{
			free(frsh_node);
			return (NULL);
		}

		frsh_node->len = _strlen(frsh_node->str);
	}

	if (nd)
	{
		while (nd->next)
			nd = nd->next;
		nd->next = frsh_node;
	}
	else
		*head = frsh_node;

	return (frsh_node);
}
