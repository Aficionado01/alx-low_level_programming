#include "holberton.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers.
* @min: first integer number
* @max: last integer number
*
* Return: pointer to newly allocated memory or NULL if fails
*/
int *array_range(int min, int max)
{
int i, length;
int *array;

if (min > max)
return (NULL);
length = max - min + 1;
array = malloc(sizeof(int) * length);
if (array == NULL)
return (NULL);
for (i = 0; i < length; i++, min++)
{
array[i] = min;
}
return (array);
}
