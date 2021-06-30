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
	int i = 0;
	int src_length = 0;

	while (*(src + src_length) != '\0' && src_length < n)
		*(dest + src_length++) = *(src + src_length);
	while (src_length < n)
		*(dest + src_length++) = '\0';
	return (dest + 0);
}
