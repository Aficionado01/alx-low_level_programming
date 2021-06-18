#include <stdio.h>

/**
 * main - prints the lowercase English alphabet in reverse
 *
 * Return: 0 if execution was successful
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');
	return (0);
}
