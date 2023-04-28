#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns pointer to 2d array
 * @width: 1st dimension
 * @height: 2nd dimension
 * Return: pointer to array or NULL if h or w is <= 0
 */

int **alloc_grid(int width, int height)
{
	int **grid = (int **) malloc(height * sizeof(int *));
	int i;
	int j;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++) 
	{
		grid[i] = (int *) malloc(width * sizeof(int));
		if (grid[i] == NULL) 
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
