#include "holberton.h"

/**
 * _islower - checks for lowercase character
 * @c: The letter whose case is to be found
 *
 * Return: 1 if `c` is lowercase, otherwise 0
 */
int _islower(int c)
{
	return c >= 'a' && c <= 'z' ? (1) : (0);
}
