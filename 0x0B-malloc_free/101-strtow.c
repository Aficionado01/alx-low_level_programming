#include "holberton.h"
#include <stdlib.h>

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
	char *word;
	int i, j, k;
	int len = 0;
	int words_count = 0;
	char prev_char = ' ';

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) != ' ' && prev_char == ' ')
		{
			words_count++;
			j = 0;
		}
		if (*(str + i) != ' ')
			j++;
		if (*(str + i) != ' ' && (*(str + i + 1) == '\0' || *(str + i + 1) == ' '))
			len = j > len ? j : len;
		prev_char = *(str + i);
	}
	len++;
	words = malloc((sizeof(char *) * (words_count + 1))
		+ (sizeof(char) * len * words_count));
	if (words)
	{
		word = (char *)(words + words_count + 1);
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
					*(words + j) = (char *)(word + j * len);
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
	else
	{
		return (NULL);
	}
}
