#include "main.h"
#include <stdio.h>

/**
* free_grid - free double pointer
* @grid: tab 2d
* @height: size of tab
* Return: tab two dimension
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

