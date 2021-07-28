#include "holberton.h"

/**
 * print_repeat - Prints a character n times
 * @c: The character to print
 * @n: The number of times to print the character
 */
void print_repeat(char c, int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar(c);
}
