#include <stdio.h>

/**
 * main - Prints the number of arguments passed to this program
 *
 * Return: 0 (always successfull)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
