#include "main.h"

/**
 * *_strdup - return pointer to new alloc mem
 *
 * @str:points to string copied
 *
 * Return:pointer if success, Null if failed
*/

char *_strdup(char *str)
{
	int v = 0, load = 0;
	char *d;

	if (str == NULL)
		return (NULL);

	for (; str[load] != '\0'; load++)
	;

	d = malloc((load + 1) * sizeof(str));

	if (d == 0)
	{
		return (NULL);
	}
	else
	{
		for (; v < load; v++)
			d[v] = str[v];
	}
	return (d);
}
