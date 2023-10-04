#include "main.h"

/**
 * *create_array - creates array init with specific char
 *
 * @size:array size
 * @c:char to init
 *
 * Return:returns pointer to init arr
*/

char *create_array(unsigned int size, char c)
{
	char *x =malloc(size);

	if (size == 0 || x == NULL)
		return (0);

	while (size--)
		x[size] = c;

	return (x);
}
