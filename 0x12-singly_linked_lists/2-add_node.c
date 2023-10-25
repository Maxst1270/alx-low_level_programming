#include "lists.h"

/**
 * add_node - add a node to the lists beginning
 *
 * @head:the pointer to nodes head address
 * @str:node field
 *
 * Return:list size
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *w_head = malloc(sizeof(list_t));

	if (!w_head || !head)
		return (NULL);

	if (str)
	{
		w_head->str = strdup(str);
		if (!w_head->str)
		{
			free(w_head);
			return (NULL);
		}
		w_head->len = _strlen(w_head->str);
	}

	w_head->next = *head;
	*head = w_head;

	return (w_head);
}
