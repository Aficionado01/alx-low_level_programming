#include <stdio.h>

/**
 * main - Prints a string with printf
 *
 * Return: 0 if program executed successfully
 */
int main(void)
{
	char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	fprintf(stderr, quote);
	return (1);
}
