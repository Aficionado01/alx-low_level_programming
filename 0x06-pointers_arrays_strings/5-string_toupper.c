#include "holberton.h"

/**
 * _strncat - Changes all lowercase letters of a string to uppercase
 * @str: The destination string
 *
 * Return: The string
 */
char *string_toupper(char *str)
{
	int idx = 0;

	while (*(str + idx) != '\0')
	{
		if (*(str + idx) >= 'a' && *(str + idx) <= 'z')
			*(str + idx) = *(str + idx) - 6 - 26;
		idx++;
	}
	return (str);
}
