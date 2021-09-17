#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid from the heap.
 * @grid: 2D array.
 * @height: the number of rows.
 *
 * Return: nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
