#include <stdio.h>

/**
 * main - Prints the name of this program
 * @argc: The number of command-line arguments
 * @argv: The command-line arguments
 *
 * Return: 0 (always successfull)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
