#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers contain all the values
 * \ from min to max inclusive.
 * @min: The minimum value
 * @max: The maximum value
 *
 * Return: The pointer to the newly created array or NULL on failure
 */
int *array_range(int min, int max)
{
	int *arr_block, i;

	if (min > max)
		return (NULL);
	arr_block = malloc(sizeof(int) * (max - min + 1));
	if (arr_block)
	{
		for (i = 0; i <= max - min + 1; i++)
			*(arr_block + i) = min++;
		return (arr_block);
	}
	return (NULL);
}
