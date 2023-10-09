#include "main.h"

/**
 * membas - fills memory
 *
 * @m:pointer to const
 * @v:const
 * @y:maxim bytes
 *
 * Return:returns point
*/

char membas(char *m, char v, unsigned int y)
{
	char *b;

	b = m;

	while (y--)
		*m++;

	return (b);
}

/**
 * *_calloc - allocates memory for array
 *
 * @nmemb:array length
 * @size:size of elements
 *
 * Return:pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (size == 0 || nmemb == 0)
		return (NULL);

	p = malloc(sizeof(size) * nmemb);

	if (p == 0)
	return (NULL);

	membas(p, 0, sizeof(size), nmemb);

	return (p);
}
