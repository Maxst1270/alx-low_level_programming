#include "lists.h"

/**
 * _all - realloc memory for array of pointers to linked list nodes
 *
 * @lt:old list
 * @w:new list size
 * @lux:the new node to add in the list
 *
 * Return:returns the new list pointer
*/

const listint_t **_all(const listint_t **lt, size_t w, const listint_t *lux)
{
	const listint_t **wlist;
	size_t k = 0;

	wlist = malloc(w * sizeof(listint_t *));

	if (!wlist)
	{
		free(lt);
		exit(98);
	}

	for ( ; k < w - 1; k++)
	{
		wlist[k] = lt[k];
	}

	wlist[k] = lux;
	free(lt);
	return (wlist);
}

/**
 * print_listint_safe - prints listint_t linked list
 *
 * @head:ppinter to the beginning of tge list
 *
 * Return:returns the nodes in the lists number
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t x, ind = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (x = 0; x < ind; x++)
		{
			if (head == list[x])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (ind);
			}
		}
		ind++;
		list = _all(list, ind, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}

	free(list);
	return (ind);
}
