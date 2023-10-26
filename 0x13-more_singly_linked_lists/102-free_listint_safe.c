#include "lists.h"

/**
 * find_listint_loop_fx - find the loop in linked lists
 *
 * @hd:list to search
 *
 * Return:the address for node in which loop start, NULL if there is no loop
*/

listint_t *find_listint_loop_fx(listint_t *hd)
{
	listint_t *dpr, *fn;

	if (!hd)
		return (NULL);

	for (fn = hd->next; fn != NULL; fn = fn->next)
	{
		if (fn == fn->next)
			return (fn);

		for (dpr = head; dpr != fn; dpr = dpr->next)
		{
			if (dpr == fn->next)
				return (fn->next);
		}
	}

	return (NULL);
}

/**
 * free_listint_safe - frees listint list even with loop
 *
 * @h:lists head
 *
 * Return:returns the number of freed nodes
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *lpnode;
	size_t leng;
	int lp = 1;

	if (!*h || !h)
		return (0);

	lpnode = find_listint_loop_fx(*h);

	for (leng = 0; (*h != lpnode || lp) && *h != NULL; *h = next)
	{
		leng++;
		next = (*h)->next;

		if (*h == lpnode && lp)
		{
			if (lpnode == lpnode->next)
			{
				free(*h);
				break;
			}
			leng++;
			next = next->next;
			free((*h)->next);
			lp = 0;
		}
		free(*h);
	}
	*h = NULL;

	return (leng);
}
