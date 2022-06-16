#include "holberton.h"

/**
 * main - prints "Holberton"
 *
 * Return: 0 if execution was successful
 */
int main(void)
{
	char *text = "Holberton\n";
	int textLen = 10;
	int i = 0;

	for (; i < textLen; i++)
	{
		_putchar(text[i]);
	}
	return (0);
}
