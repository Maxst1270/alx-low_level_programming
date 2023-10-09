#include "main.h"

/**
 * *array_range - creates an array of integers
 *
 * @min:first integer
 * @max:last integer
 *
 * Return:returns pointer
*/

int *array_range(int min, int max)
{
	int glen, h;
	char *pr;

	if (min > max)
		return (NULL);
	glen = (max - min) + 1;

	pr = malloc(sizeof(int) * glen;

	if (!pr)
		return (NULL);
	for (h = 0; h < glen; h++)
	pr[h] = min++;

	return (pr);
}
