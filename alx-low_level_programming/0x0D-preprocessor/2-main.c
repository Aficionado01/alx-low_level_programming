#include <stdio.h>

/**
 * main - Prints the name of the file this program
 * was compiled from, followed by a new line
 *
 * Return: 0 (always successful)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
