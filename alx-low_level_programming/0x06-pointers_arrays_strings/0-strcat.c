#include "holberton.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The string to append to dest
 *
 * Return: The destination string
 */
char *_strcat(char *dest, char *src)
{
	int dest_length = 0;
	int src_length = 0;

	while (*(dest + dest_length) != '\0')
		dest_length++;

	while (*(src + src_length) != '\0')
	{
		*(dest + dest_length + src_length) = *(src + src_length);
		src_length++;
	}
	*(dest + dest_length + src_length) = '\0';
	return (dest);
}
