#include "holberton.h"

/**
 * print_times_table - prints the n times table,
 * starting with 0
 * @n: the times table to generate
 */
void print_times_table(int n)
{
	int num1;
	int num2;

	if (n > 15 || n < 0)
		return;

	for (num1 = 0; num1 < n + 1; num1++)
	{
		for (num2 = 0; num2 < n + 1; num2++)
		{
			int product = num1 * num2;

			if (num2 > 0)
			{
				_putchar(product > 99 ? (product / 100) + '0' : ' ');
				_putchar(product > 9 ? ((product / 10) % 10) + '0' : ' ');
			}
			_putchar((product % 10) + '0');

			if (num2 < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
