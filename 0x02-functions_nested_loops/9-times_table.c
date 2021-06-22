#include "holberton.h"

/**
 * times_table - prints the 9 times table,
 * starting with 0
 */
void times_table(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			int product = num1 * num2;

			if (num2 > 0)
				_putchar(product > 9 ? (product / 10) + '0' : ' ');
			_putchar((product % 10) + '0');

			if (num2 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
