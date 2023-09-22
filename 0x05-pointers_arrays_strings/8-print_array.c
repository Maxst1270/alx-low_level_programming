#include "main.h"

/**
 * print_array - prints n array elements
 *
 * @a:string par
 * @n:element par
 *
 * Return:no return
*/

void print_array(int *a, int n)
{
	int y = 0;

	while (y < n)
	{
		if (y != (n - 1))
		{
			printf("%d, ", a[y]);
		}
		else
			printf("%d, ", a[y]);

		y++;
	}
	printf("\n");

}
