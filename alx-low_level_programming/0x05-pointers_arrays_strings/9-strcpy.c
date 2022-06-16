#include "holberton.h"

/**
 * _strcpy - Copies the contents of a string to another
 * @dest: The destination of the copied characters
 * @src: The string whose characters are to be copied
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int stop = 0;
	int i = 0;

	while (!stop)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) != '\0')
			i++;
		else
			stop = 1;
	}
	b10_pow(10);
	return (dest);
}
