#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initializes it with
 * a specific char
 * @size: The size of the array of chars
 * @c: The char to initialize the array with
 *
 * Return: The pointer to the array or NULL if memory allocation fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr)
	{
		for (i = 0; i < size; i++)
			*(arr + i) = c;
		return (arr);
	}
	else
	{
		return (NULL);
	}
}
