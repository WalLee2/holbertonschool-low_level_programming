#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free the memory used by alloc_grid (previous exercise)
 *
 * @grid: Grid to free
 *
 * @height: height of grid to free
 *
 */

void free_grid(int **grid, int height)
{
	height--;

	while (height >= 0)
	{
		free(grid[height]);
		height--;
	}
	free(grid);
}
