#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes to copy from the beginning of s2
 *
 * Return: The pointer to the new string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s1_len, s2_len;
	char *str;

	for (s1_len = 0; s1 && *(s1 + s1_len) != '\0'; s1_len++)
		;
	for (s2_len = 0; s2 && *(s2 + s2_len) != '\0' && s2_len < n; s2_len++)
		;
	str = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (str)
	{
		for (s1_len = 0; s1 && *(s1 + s1_len) != '\0'; s1_len++)
			*(str + s1_len) = *(s1 + s1_len);
		for (s2_len = 0; s2 && *(s2 + s2_len) != '\0' && s2_len < n; s2_len++)
			*(str + s1_len + s2_len) = *(s2 + s2_len);
		*(str + s1_len + s2_len) = '\0';
		return (str);
	}
	return (NULL);
}
