#include "main.h"

/**
 * free_grid - free grid
 *
 * @grid: grid in memory
 * @height:integer
 *
 * Return:nothing
*/

void free_grid(int **grid, int height)
{
	int l;

	for (l = 0; l < height; l++)
		free(grid[l]);
	free(grid);
}
