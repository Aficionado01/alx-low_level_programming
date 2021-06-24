#include "holberton.h"

/**
 * _isdigit - checks for an digit character
 * @c: the character to check
 *
 * Return: 1 if the character is a digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
