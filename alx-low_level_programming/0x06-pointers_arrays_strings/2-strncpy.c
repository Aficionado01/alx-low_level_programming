#include "holberton.h"

/**
 * _strncpy - Copies a string and pads with null bytes if necessary
 * @dest: The destination of the copied string
 * @src: The string containing the substring to append to dest
 * @n: The maximum number of characters to copy from src string
 *
 * Return: The destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int idx = 0;
	char null_pad = 0;

	while (idx < n)
	{
		null_pad = *(src + idx) == '\0' && !null_pad ? 1 : null_pad;
		*(dest + idx) = null_pad ? '\0' : *(src + idx);
		idx++;
	}
	return (dest);
}
