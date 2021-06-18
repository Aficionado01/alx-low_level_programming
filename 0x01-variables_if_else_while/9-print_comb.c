#include <stdio.h>

/**
 * main - prints all possible combinations of base-10 digits
 *
 * Return: 0 if execution was successful
 */
int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
		if (digit != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
