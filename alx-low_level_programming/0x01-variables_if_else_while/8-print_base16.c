#include <stdio.h>

/**
 * main - prints the base-16 digits
 *
 * Return: 0 if execution was successful
 */
int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	for (digit = 'a'; digit <= 'f'; digit++)
	{
		putchar(digit);
	}

	putchar('\n');
	return (0);
}
