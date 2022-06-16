#include "holberton.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The source string
 * @accept: The substring
 *
 * Return: a pointer to the byte in s that matches one of the bytes
 * in accept, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return (0);
}
