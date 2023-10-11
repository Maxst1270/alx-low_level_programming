#include "function_pointers.h"

/**
 * array_iterator - executes function given as parameter
 *
 * @array:given array
 * @size:size of the array
 * @action:given function to execute
 *
 * Return:returns void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int x;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
