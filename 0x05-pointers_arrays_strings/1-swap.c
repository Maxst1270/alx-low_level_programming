#include "main.h"

/**
 * swap_int - swaps two integers
 *
 * @a:first swaped int
 * @b:second swaped int
 *
 * Return: no return value
*/

void swap_int(int *a, int *b)
{
	int swp;

	swp = *b;

	*b = *a;

	*a = swp;
}
