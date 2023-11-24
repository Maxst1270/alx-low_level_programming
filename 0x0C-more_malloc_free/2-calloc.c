#include "main.h"

/**
 * *_membas - fills memory
 *
 * @m:pointer to const
 * @v:const
 * @y:maxim byte *
 * Return:returns point
*/

char *_membas(char *m, char v, unsigned int y)
{
	char *b = m;

	while (y--)
		*m++ = v;

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

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	_membas(p, 0, size * nmemb);

	return (p);
}
