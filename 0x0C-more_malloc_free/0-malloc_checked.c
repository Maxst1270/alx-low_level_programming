#include "main.h"

/**
 **malloc_checked - allocates memory with malloc
 *
 *@b:integer
 *
 *Return:returns pointer,or exits
*/

void *malloc_checked(unsigned int b)
{
	int *v;

	v = malloc(b);

	if (v == 0)
		exit(98);

	return (v);
}
