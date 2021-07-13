#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: The pointer to the array or NULL if memory allocation
 * fails
 */
char *str_concat(char *s1, char *s2)
{
	int i, len;
	char *str;

	for (len = 0; *(s1 + len) != '\0' && s1 != NULL; len++)
		;
	for (i = 0; *(s2 + i) != '\0' && s2 != NULL; i++)
		;
	len += i;
	str = malloc(sizeof(char) * len + 1);
	if (str)
	{
		for (len = 0; *(s1 + len) != '\0' && s1 != NULL; len++)
			*(str + len) = *(s1 + len);
		for (i = 0; *(s2 + i) != '\0' && s2 != NULL; i++)
			*(str + len + i) = *(s2 + i);
		len += i;
		*(str + len) = '\0';
		return (str);
	}
	else
	{
		return (NULL);
	}
}
