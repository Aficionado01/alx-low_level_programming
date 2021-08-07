#include "holberton.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars,
*                and initializes it with a specific char
* @size: size af the array
* @c: character initialized to the array
* Return: NULL if it fails
*         Pointer - if successful
*/

char *create_array(unsigned int size, char c)
{
char *par;
unsigned int i;

par = malloc(sizeof(c) * size);

if (!size || !par)
return (NULL);
for (i = 0; i < size; i++)
par[i] = c;
return (par);
}
