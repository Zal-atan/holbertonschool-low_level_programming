#include "main.h"

/**
 * alloc_grid - allocates a grid array to memory
 *
 * @width: width of the array
 *
 * @height: height of the array
 *
 * Return: Returns pointer to the array, or NULL if it fails
 *
 */

int **alloc_grid(int width, int height)
{
	int **grid, row, column;

	if (width < 1 || height < 1)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(sizeof(int) * width);
		if (grid[row] == NULL)
		{
			for (; row >= 0; row--)
				free(grid[row]);
			free(grid);
			return (NULL);
		}
	}

	for (row = 0; row < height; row++)
	{
		for (column = 0; column < width; column++)
			grid[row][column] = 0;
	}

	return (grid);
}
