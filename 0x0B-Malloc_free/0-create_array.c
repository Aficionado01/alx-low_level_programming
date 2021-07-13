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

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr)
		return (arr);
	else
		return (NULL);
}
