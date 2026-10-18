#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the grid created byalloc_grid fxn
 * @grid: the grid
 * @height: num of rows
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
