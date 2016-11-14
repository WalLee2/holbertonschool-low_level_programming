#include <stdlib.h>
#include "holberton.h"
/**
 *
 *
 *
 *
 *
 */
int **alloc_grid(int width, int height)
{
	int i, a;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while(i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return(NULL);
		}
	}
	for (i = 0; i < height; i++)
		for(a = 0; a < width; a++)
			grid[i][a] = 0;
	return (grid);
}
