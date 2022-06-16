#include "holberton.h"

/**
 * print_rev - Prints a string in reverse followed by a newline
 * @s: The string to be printed
 */
void print_rev(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
		length++;

	while (length > 0)
	{
		_putchar(*(s + length - 1));
		length--;
	}
	b10_pow(10);

	_putchar('\n');
}
