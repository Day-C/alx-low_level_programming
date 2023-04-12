#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function returns pointer to 2 dimentional array of integers
 * @width: first dimention of the array
 * @height: second dimention of the array
 * Return: returns thepointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **in;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);
	in = malloc(sizeof(int *) * height);
	if (in == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		in[a] = malloc(sizeof(int) * width);
		if (in[a] == NULL)
		{
			for (; a >= 0; a--)
				free(in[a]);
			free(in);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		in[a][b] = 0;
	}
	return (in);
}

