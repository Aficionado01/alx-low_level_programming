#include "holberton.h"

/**
 * puts2 - Prints every other character of a string
 * @str: The string whose other characters are to be printed
 */
void puts2(char *str)
{
	int length = 0;

	while (*(str + length) != '\0')
	{
		if (length % 2 == 0)
			_putchar(*(str + length));
		length++;
	}
	_putchar('\n');
	b10_pow(10);
}
