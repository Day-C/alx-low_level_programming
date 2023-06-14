#include "main.h"
int **_two_d(int *arr, int row, int col);
/**
 * alloc_grid - function returns pointer to 2D array
 * @width: first dimension
 * @height: second dimension
 * Return: retur pointer or null if not successful
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 ||height <= 0)
		return (NULL);

	array = malloc(sizeof(int) * height);

	if (array == NULL)
		return(NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);

		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(array[j]);
		}
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;

		}
	}
	return array;
}
