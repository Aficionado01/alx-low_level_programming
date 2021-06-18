#include <stdio.h>

/**
 * main - prints the English alphabet in lowercase
 * and uppercase
 *
 * Return: 0 if execution was successful
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');
	return (0);
}
