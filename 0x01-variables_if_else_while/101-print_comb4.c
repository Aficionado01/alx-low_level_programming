#include <stdio.h>
#include <string.h>

/**
 * main - prints all possible different combinations of three base-10 digits
 *
 * Return: 0 if execution was successful
 */
int main(void)
{
	int digit1;
	int digit2;
	int digit3;

	for (digit1 = 0x30; digit1 <= 0x39; digit1++)
	{
		for (digit2 = 0x30; digit2 <= 0x39; digit2++)
		{
			for (digit3 = 0x30; digit3 <= 0x39; digit3++)
			{
				if (digit1 < digit2 && digit2 < digit3)
				{
					int req1;
					int req2;

					putchar(digit1);
					putchar(digit2);
					putchar(digit3);
					req1 = digit1 >= 0x30 && digit1 < 0x37;
					req2 = digit2 >= 0x30 && digit2 <= 0x38;

					if (req1 && req2 && digit3 <= 0x39)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
