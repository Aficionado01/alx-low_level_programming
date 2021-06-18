#include <stdio.h>

/**
 * main - prints all possible different combinations of two two-digit
 * base-10 numbers
 *
 * Return: 0 if execution was successful
 */
int main(void)
{
	int num1;
	int num2;
	int upper_limit;

	upper_limit = 99;

	for (num1 = 0; num1 <= upper_limit; num1++)
	{
		for (num2 = 0; num2 <= upper_limit; num2++)
		{
			if (num1 < num2)
			{
				if (num1 >= 0 && num2 > 1)
				{
					putchar(',');
					putchar(' ');
				}

				putchar((num1 / 10) + 0x30);
				putchar((num1 % 10) + 0x30);
				putchar(' ');
				putchar((num2 / 10) + 0x30);
				putchar((num2 % 10) + 0x30);
			}
		}
	}

	putchar('\n');
	return (0);
}
