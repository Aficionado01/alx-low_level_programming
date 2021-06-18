#include <stdio.h>

/**
 * main - prints the English alphabet in lowercase
 *
 * Return: 0 if execution was successful
 */
int main(void)
{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');
	return (0);
}
