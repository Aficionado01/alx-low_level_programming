#include <stdio.h>

/**
 * main - prints the English alphabet in lowercase
 * except e and q
 *
 * Return: 0 if execution was successful
 */
int main(void)
{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');
	return (0);
}
