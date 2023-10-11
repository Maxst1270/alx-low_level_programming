#include "function_pointers.h"

/**
 * int_index - searches for an int
 *
 * @array:point to array
 * @size:size of the given array
 * @cmp:point to a function that compares int
 *
 * Return:returns index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int v;

	if (size <= 0)
		return (-1);

	if (array && size && cmp)
	{
		for (v = 0; v < size; v++)
		{
			cmp(array[v]);
			return (v);
		}
	}

}
