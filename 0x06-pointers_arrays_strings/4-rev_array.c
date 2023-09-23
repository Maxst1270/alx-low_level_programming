#include "main.h"

/**
 * reverse_array - reverse an array of integers
 *
 * @a:the array
 * @n:array par
*/

void reverse_array(int *a, int n)
{
	int h = 0, k = (n - 1), rev;

	while (h < k)
	{
		rev = a[h];
		a[h] = a[k];
		s[k] = rev;
		h++;
		k--;
	}
}
