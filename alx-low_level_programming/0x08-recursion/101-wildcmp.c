#include "holberton.h"

/**
 * wildcmp - Compares two strings
 * @s1: The first string
 * @s2: The second string (can contain the * character)
 *
 * Return: 1 if the strings can be considered identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*s1 == '\0')
			return (wildcmp(s1, s2 + 1));
		else if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		else if (wildcmp(s1, s2 + 1))
			return (1);
		else
			return (wildcmp(s1 + 1, s2));
	}
	if (*s2 == '\0')
	{
		return (*s1 == '\0');
	}
	return (*s1 == *s2 && wildcmp(s1 + 1, s2 + 1));
}
