#include "main.h"
#include <stdlib.h>

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

	grid = malloc(height * sizeof(int));
	if (grid == NULL || width == 0 || height == 0)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
