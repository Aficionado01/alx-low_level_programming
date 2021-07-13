#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - Creates a 2 dimensional array of integers
 * @width: The number of columns in the array
 * @height: The number of rows in the array
 *
 * Return: The pointer to the array or NULL if memory allocation
 * fails or one of the dimension is 0
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int**)malloc(sizeof(int*) * height);
	if (grid)
	{
		for (i = 0; i < height; i++)
		{
			*(grid + i) = (int*)malloc(sizeof(int) * width);
			if (*(grid + i) == NULL)
				return (NULL);
			for (j = 0; j < width; j++)
				*(*(grid + i) + j) = 0;
		}
		return (grid);
	}
	else
	{
		return (NULL);
	}
}
