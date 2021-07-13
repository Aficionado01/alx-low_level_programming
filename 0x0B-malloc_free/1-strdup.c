#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - Creates a newly allocated space in memory, which contains
 * a copy of the given string
 * @str: The string to copy
 *
 * Return: The pointer to the array or NULL if memory allocation
 * fails or str is NULL
 */
char *_strdup(char *str)
{
	char *arr;
	int i = 0;
	int len = 0;

	if (str == NULL)
		return (NULL);
	while (*(str + len) != '\0')
		len++;
	arr = malloc(sizeof(char) * len + 1);
	if (arr)
	{
		while (i < len)
		{
			*(arr + i) = *(str + i);
			i++;
		}
		*(arr + i) = '\0';
		return (arr);
	}
	else
	{
		return (NULL);
	}
}
