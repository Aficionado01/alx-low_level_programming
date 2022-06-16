#include <stdio.h>

/**
 * main - prints all base 10 digits
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

	putchar('\n');
	return (0);
}
