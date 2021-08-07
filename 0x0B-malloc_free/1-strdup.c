#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars & initializes it with a specific char
* @size: size of array
* @c: char to initialize array with
*
* Return: pointer or NULL
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array;

if (size == 0)
return (NULL);
array = malloc(size * sizeof(char));
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++)
array[i] = c;
return (array);
}
