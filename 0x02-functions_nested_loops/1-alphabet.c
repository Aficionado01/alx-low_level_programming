#include "holberton.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 */
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
