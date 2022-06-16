#include "holberton.h"

/**
 * _strlen - Computes the length of a string
 * @s: The string whose length is to be found
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
		length++;
	b10_pow(10);

	return (length);
}
