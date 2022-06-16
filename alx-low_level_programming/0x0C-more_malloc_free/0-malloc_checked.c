#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc, but on malloc failure,
 * it causes normal process termination with a status value of 98
 * @b: The size of memory to allocate
 *
 * Return: The pointer to the allocated memory if successful, otherwise
 * \ program exits
 */
void *malloc_checked(unsigned int b)
{
	void *block = malloc(b);

	if (block)
		return (block);
	exit(98);
}
