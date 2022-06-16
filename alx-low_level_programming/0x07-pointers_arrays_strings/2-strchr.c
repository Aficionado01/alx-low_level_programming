#include "holberton.h"

/**
 * _strchr - Locates a character in a string
 * @s: The source string
 * @c: The character to find
 *
 * Return: The pointer to the first occurrence of the character c
 * in the string s, otherwise NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0' && *(s + i) != c; i++)
		continue;
	return (*(s + i) == c ? s + i : 0);
}
