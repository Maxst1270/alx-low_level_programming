#include "lists.h"

/**
 * _strlen - gives the length of string
 * @s:string to be get length of
 *
 * Return:returns the string len
*/

int _strlen(char *s)
{
	int v = 0;

	if (s == NULL)
		return (0);

	else
		while (*s++)
			v++;
	return (v);
}

/**
 * print_list - print linked lists
 *
 * @h:point to the first node in list
 *
 * Return:list size
*/
size_t print_list(const list_t *h)
{
	size_t k;

	for (k = 0; h; k++)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
	}

	return (k);
}
