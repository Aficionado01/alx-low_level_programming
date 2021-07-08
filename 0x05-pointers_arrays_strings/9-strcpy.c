#include "holberton.h"

/**
* _strcpy - copies a string pointed to by *src to *dest
* @src: pointer to string to be copied
* @dest: pointer to copied string
*
* Return: pointer to copied string
*/

char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i]; i++)
dest[i] = src[i];
dest[i] = src[i];
return (dest);
}
