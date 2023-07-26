#include "main.h"
#include <stdlib.h>


/**
 * clean_up - free the rows if there is an error with malloc
 *
 * @grid: grid to free
 *
 * @idx: row to free
 */
void clean_up(int **grid, int idx)
{
	while (idx >= 0)
	{
		free(grid[idx]);
		idx--;
	}
	free(grid);
}


/**
 * alloc_grid - create a grid and initilize it to 0
 *
 * @width: Width of the grid
 *
 * @height: Height of the grid
 *
 * Return: double pointer to the created grid
 */

int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			clean_up(grid, i);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
