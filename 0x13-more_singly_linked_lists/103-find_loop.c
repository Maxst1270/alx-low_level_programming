#include "lists.h"

/**
 * find_listint_loop - finding a loop in linked list
 *
 * @head:the linked list search
 *
 * Return:returns the address of which the loop started
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *gcr, *end;

	if (!head)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);

		for (gcr = head; gcr != end; gcr = gcr->next)
			if (gcr == end->next)
				return (end->next);
	}

	return (NULL);
}
