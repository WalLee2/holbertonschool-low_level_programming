#include "holberton.h"
#include <stdlib.h>
/**
 *alloc_grid - a function that returns a pointer to a newly created
 *2 dimensional integer grid
 *@width: The width of the grid
 *@height: The height of the grid
 *Return Null if it fails
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, a;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	i = 0;
	while (i < height)
	{
		grid[i] = malloc(width * sizeof(int));
		i++;
	}
	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	i = 0;
	while (i < height)
	{
		a = 0;
		while (a < width)
		{
			grid[i][a] = 0;
			a++;
		}
		i++;
	}
	if (grid)
	{
		return (grid);
	}
	else
	{
		return (NULL);
	}
}
