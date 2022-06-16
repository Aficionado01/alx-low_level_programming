#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional array of integers
 * @grid: The array of integers
 * @height: The number of rows in the array
 */
void free_grid(int **grid, int height __attribute__((unused)))
{
	free(grid);
}
