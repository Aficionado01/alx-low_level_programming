#include "holberton.h"

/**
 * _strncat - Concatenates two strings
 * @dest: The destination string
 * @src: The string containing the substring to append to dest
 * @n: The maximum number of characters to copy from src string
 *
 * Return: The destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_length = 0;
	int src_length = 0;

	while (*(dest + dest_length) != '\0')
		dest_length++;

	while (*(src + src_length) != '\0' && src_length < n)
	{
		*(dest + dest_length + src_length) = *(src + src_length);
		src_length++;
	}
	*(dest + dest_length + src_length) = '\0';
	return (dest + 0);
}
