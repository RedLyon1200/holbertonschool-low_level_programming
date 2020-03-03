#include <stdlib.h>
#include "holberton.h"
/**
 * free_grid - free grid
 * @grid: grid
 * @height: size
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
