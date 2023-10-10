#include "main.h"

/**
 * membas - fills memory
 *
 * @m:pointer to const
 * @v:const
 * @y:maxim byte *
 * Return:returns point
*/

char membas(char *m, char v, unsigned int y)
{
	if (m == NULL)
		return (NULL);

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
	if (size == 0 || nmemb == 0)
		return (NULL);

	void *p = malloc(sizeof(size) * nmemb);

	if (p == NULL)
		return (NULL);

	membas(p, 0, size * nmemb);

	return (p);
}
