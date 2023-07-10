#include "main.h"
#include <stdlib.h>

/**
  * free_grid - two dimensional grid
  * @grid: grid
  * @height: the grid heigth
  *
  * Return: grid heigth
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
