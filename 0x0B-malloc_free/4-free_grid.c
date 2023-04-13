#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function frees a 2 dimentional grid array created by
 * alloc_grid function
 * @grid: arrays grid
 * @height: height of array
 * Return: returs 2 dimentional array
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
