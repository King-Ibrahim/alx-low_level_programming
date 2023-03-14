#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - This function frees memory in the alloc grid file
 * @grid: the grid pointer
 * @height: the second dimension
 * Return: clear memory
 *
 */

void free_grid(int **grid, int height)
{
	int j;

	if (grid == NULL || grid == 0)
	{
		return;
	}
	for (j = 0; j < height;  j++)
	{
		free(grid[j]);
	}
	free(grid);
}
