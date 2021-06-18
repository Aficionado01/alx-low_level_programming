#include <stdio.h>

/**
 * main - prints all possible different combinations of two base-10 digits
 *
 * Return: 0 if execution was successful
 */
int main(void)
{
	int digit1;
	int digit2;

	for (digit1 = 0x30; digit1 <= 0x39; digit1++)
	{
		for (digit2 = 0x30; digit2 <= 0x39; digit2++)
		{
			if (digit1 < digit2)
			{
				putchar(digit1);
				putchar(digit2);

				if ((digit1 >= 0x30 && digit1 < 0x38) && digit2 <= 0x39)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
