#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created
 * by alloc_grid function
 *
 * @grid: the address of the 2D array
 * @height: the height of the grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
