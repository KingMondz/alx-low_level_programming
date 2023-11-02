#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: Tha dimesional array
 * @height: The numbers of rows array has
 * Return: Vooiid
 */

void free_grid(int **grid, int height)
{
	int incr;

	for (incr = 0; incr < height; incr++)
	{
		free(grid[incr]);
	}
	free(grid);
}
