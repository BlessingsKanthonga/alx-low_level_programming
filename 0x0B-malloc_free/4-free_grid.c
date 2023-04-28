#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees memory allocated by alloc_grid fn
 * @grid: 2d array of integers allocated by alloc_grid
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
		free(grid);
	}
}
