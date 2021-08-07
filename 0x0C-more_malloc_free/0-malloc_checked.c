#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory to allocate
 *
 * Return: pointer to allocated memory or normal process termination if error
 */
void *malloc_checked(unsigned int b)
{
void *pointer;

pointer = malloc(b);
if (pointer == NULL)
exit(98);
return (pointer);
}
