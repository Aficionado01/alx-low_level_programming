#include "holberton.h"

/**
 * _strcmp - Compares two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: an integer greater than, equal to or less than 0, if the string
 * pointed to by s1 is greater than, equal to or less than the string pointed
 * to by s2 respectively
 */
int _strcmp(char *s1, char *s2)
{
	int length = 0;

	while (*(s1 + length) != '\0' && *(s2 + length) != '\0')
	{
		if (*(s1 + length) != *(s2 + length))
			return (*(s1 + length) - *(s2 + length));
		length++;
	}

	if (*(s1 + length) != '\0' || *(s2 + length) != '\0')
		return (*(s1 + length) - *(s2 + length));
	else
		return (0);
}
