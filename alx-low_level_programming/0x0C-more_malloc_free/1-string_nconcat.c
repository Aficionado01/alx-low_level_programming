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
	unsigned int i;
	unsigned int len;
	char *str;

	s1 = s1 != NULL ? s1 : "";
	s2 = s2 != NULL ? s2 : "";
	len = 0;
	for (len = 0; *(s1 + len) != '\0'; len++)
		continue;
	for (i = 0; *(s2 + i) != '\0' && i < n; i++)
		len++;
	str = malloc(sizeof(char) * (len + 1));
	if (str != NULL)
	{
		for (len = 0; *(s1 + len) != '\0'; len++)
			*(str + len) = *(s1 + len);
		for (i = 0; i < n && *(s2 + i) != '\0'; i++)
		{
			*(str + len) = *(s2 + i);
			len++;
		}
		*(str + len) = '\0';
		return (str);
	}
	return (NULL);
}
