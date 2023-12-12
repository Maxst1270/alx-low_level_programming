#include "lists.h"

/**
 * sum_listint - sums all the data
 * @head:first nodes pointer
 *
 * Return:returns the sum of collected data
*/

int sum_listint(listint_t *head)
{
	int col;

	for (col = 0; head; )
	{
		col += head->n;
		head = head->next;
	}

	return (col);
}
