#include "main.h"
/**
 * free_grid - free 2d array
 * @grid: the 2d array
 * @height: the height
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL && height != 0)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
		free(grid)
	}
}
