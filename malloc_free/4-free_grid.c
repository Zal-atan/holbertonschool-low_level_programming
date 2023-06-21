#include "main.h"

/**
 * free_grid - frees a two dimensional grid from memory
 *
 * @grid: grid to free
 *
 * @height: height of grid that needs freeing
 *
 */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
		free(grid[j]);
	free(grid);
}
