#include "main.h"

/**
 * *_realloc - allocating memory with malloc and free
 *
 * @ptr:pointer to memory alloc with (_old_size)
 * @old_size:size for malloc to ptr
 * @new_size:size of new memory blk
 *
 * Return:Null if failed
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *v;
	unsigned int y;

	if (old_size == new_size)
		return (ptr);

	if (new_size == NULL && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		v = malloc(new_size);
		if (v == NULL)
			return (NULL);
		return (v);
	}
	if (new_size > old_size)
	{
		v = malloc(new_size);
		if (v == NULL)
			return (NULL);
		for (y = 0; y < old_size && y < new_size; y++)
			*((char *)v + y) = *((char *)ptr + y);
		free(ptr);
	}
	return (v);
}

