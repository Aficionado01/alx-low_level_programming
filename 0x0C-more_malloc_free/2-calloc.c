#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: The number of items in the array
 * @size: The size of an item in the array
 *
 * Return: The pointer to the array's block or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr_block;
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr_block = malloc(nmemb * size);
	if (arr_block != NULL)
	{
		ptr = arr_block;
		for (i = 0; i < nmemb * size; i++)
			*(ptr + i) = 0;
		return (arr_block);
	}
	return (NULL);
}
