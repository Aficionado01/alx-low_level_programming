#include "holberton.h"

/**
 * print_line - draws a straight line
 * @n: the length of the line
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
