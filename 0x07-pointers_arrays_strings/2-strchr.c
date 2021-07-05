#include "holberton.h"

/**
 * _memcpy - Locates a character in a string
 * @dest: The destination memory area
 * @src: The source memory area
 * @n: The number of bytes to copy
 *
 * Return: The pointer to dest
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0' && *(s + i) != c; i++)
		continue;
	return (*(s + i) == c ? s + i : 0);
}
