#include "main.h"
/**
 * free_grid - function frees a 2dimentional array
 * @grid: 2d array t be freed
 * @height: of array
 * Return: nothingyou (void);
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid);
		i++;
	}
}
