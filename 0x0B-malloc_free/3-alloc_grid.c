#include "main.h"

/**
 * **alloc_grid - returns pointer to a 2 dimensional array
 *
 * @width:int
 * @height:int
 *
 * RETURN:array
*/

int **alloc_grid(int width, int height)
{
	int **bak, k, m;

	bak = malloc(sizeof(*bak) * height);

	if (width <= 0 || height <= 0 || bak == 0)
	{
		return (0);
	}
	else
	{
		for (k = 0; k < height; k++)
		{
			bak[k] = malloc(sizeof(**bak) * width);
			if (bak[k] == 0)
			{
				while (k--)
					free(bak[k]);
				free(bak);
				return (NULL);
			}

			for (m = 0; m < width; m++)
				bak[k][m] = 0;

		}
	}

	return (bak);
}
