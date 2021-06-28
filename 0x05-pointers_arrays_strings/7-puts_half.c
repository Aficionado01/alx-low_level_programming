#include "holberton.h"

/**
 * puts2 - Prints half of a string
 * @s: The string whose other characters are to be printed
 */
void puts_half(char *str)
{
	int length = 0;
	int n;

	while (*(str + length) != '\0')
		length++;
	n = length % 2 == 0 ? length / 2 : length / 2 + 1;

	while (n < length)
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
