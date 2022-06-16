#include "holberton.h"

/**
 * print_number - Prints an integer
 * @n: The integer to print
 */
void print_number(int n)
{
	double num = n < 0 ? -1 * n : n;
	int minVal = n + 1 == -2147483640 - 7 ? 1 : 0;
	int i, j, digit;
	int show_zeroes = 0;

	if (n < 0)
		_putchar('-');
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = 9; i >= 0; i--)
	{
		int power = 1;

		for (j = 0; j < i; j++)
			power *= 10;
		if (minVal)
			digit = i == 0 ? '8' : ('0' - (int)(((int)(num - minVal) / power) % 10));
		else
			digit = (int)(((int)num / power) % 10) + '0';
		show_zeroes = show_zeroes ? 1 : digit > '0' || minVal;
		if (show_zeroes)
			_putchar(digit);
	}
}
