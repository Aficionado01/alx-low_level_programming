#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_dimensions - Computes the dimensions of an array of words
 * @str: The source string
 * @height: The number of words
 * @width: The maximum word size
 */
void get_dimensions(char *str, int *height, int *width)
{
	int i, j;
	char prev_char = ' ';

	*height = 0;
	*width = 0;
	for (i = 0; str != NULL && *(str + i) != '\0'; i++)
	{
		if (*(str + i) != ' ' && prev_char == ' ')
		{
			*height += 1;
			j = 0;
		}
		if (*(str + i) != ' ')
			j++;
		if (*(str + i) != ' ' && (*(str + i + 1) == '\0' || *(str + i + 1) == ' '))
			*width = j > *width ? j : *width;
		prev_char = *(str + i);
	}
}

/**
 * strtow - Splits a string into words (array of strings)
 * @str: The string to split
 *
 * Return: The pointer to the string array or NULL if memory allocation
 * fails or str is an empty string ("") or str is NULL
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, words_count;
	char prev_char = ' ';

	get_dimensions(str, &words_count, &len);
	if (str == NULL || *str == '\0' || words_count == 0)
		return (NULL);
	words = malloc((sizeof(char *) * (words_count + 1)));
	if (words)
	{
		j = -1;
		k = 0;
		prev_char = ' ';
		for (i = 0; *(str + i) != '\0'; i++)
		{
			if (*(str + i) != ' ')
			{
				if (prev_char == ' ')
				{
					j++;
					*(words + j) = malloc((sizeof(char) * (len + 1)));
					if (*(words + j) == NULL)
						return (NULL);
					k = 0;
				}
				*(*(words + j) + k) = *(str + i);
				k++;
				if (*(str + i + 1) == '\0' || *(str + i + 1) == ' ')
					*(*(words + j) + k) = '\0';
			}
			prev_char = *(str + i);
		}
		*(words + j + 1) = NULL;
		return (words);
	}
	return (NULL);
}
