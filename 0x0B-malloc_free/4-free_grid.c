#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that free previous code
 *
 * @grid: previous grid
 * @height: height of the grid
 *
 * Return: 0 always
 */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
		free(grid[j]);
	free(grid);
}
