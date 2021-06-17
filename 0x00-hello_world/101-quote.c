#include <stdio.h>

/**
 * main - Prints a string with printf
 *
 * Return: 0 if program executed successfully
 */
int main(void)
{
	char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fprintf(stderr, "%s\n", quote);
	return (1);
}
