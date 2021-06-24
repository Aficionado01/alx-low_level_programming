#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: the integer to print
 */
void print_number(int n)
{
	int i;
	int max = 1000000000;
	int rem = n < 0 ? 0 - n: n;

	if (n < 0)
		_putchar(0x2D);

	for (i = 9; i >= 0; i--)
	{
		int power = b10_pow(i);

		if (rem > power - 1)
			_putchar((int)((rem / power) % 10) + '0');
		else if (i == 0)
			_putchar((int)((rem / power) % 10) + '0');
	}

	_putchar(0x20);
}

/**
 * b10_pow - Computes the power of 10 to the given index
 * @idx: The index to which 10 is raised to.
 *
 * Return: A power of 10
 */
int b10_pow(int idx)
{
	int i;
	int result = 1;

	if (idx < 0)
		return 0;

	for (i = 0; i < idx; i++)
	{
		result *= 10;
	}
	return result;
}
