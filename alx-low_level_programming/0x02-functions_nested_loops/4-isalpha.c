#include "holberton.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: The letter whose alphabetism is to be found
 *
 * Return: 1 if `c` is an alphabet, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
