#include "holberton.h"

/**
 * _strstr - Locates a substring in a given string
 * @haystack: The source string
 * @needle: The substring
 *
 * Return: a pointer to the beginning of the located substring,
 * otherwise NULL
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		for (j = 0; *(needle + j) != '\0' && *(needle + j) == *(haystack + i + j);)
			j++;
		if (*(needle + j) == '\0')
			return (haystack + i);
	}
	return (*(needle + j) == '\0' ? haystack + i : 0);
}
