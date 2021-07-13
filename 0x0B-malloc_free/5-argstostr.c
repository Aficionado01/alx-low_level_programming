#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - Creates a string from the concatenation of all the
 * arguments of a program
 * @ac: The number of arguments to the program
 * @av: The array of arguments to the program
 *
 * Return: The pointer to the string or NULL if memory allocation
 * fails or ac is 0 or av is NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	char *str;
	int len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++)
			len++;
	}
	str = malloc(sizeof(char) * (len + i + 1));
	if (str)
	{
		len = 0;
		for (i = 0; i < ac; i++)
		{
			for (j = 0; *(*(av + i) + j) != '\0'; j++)
			{
				*(str + len) = *(*(av + i) + j);
				len++;
			}
			*(str + len) = '\n';
			len++;
		}
		*(str + len) = '\0';
		return (str);
	}
	else
	{
		return (NULL);
	}
}
