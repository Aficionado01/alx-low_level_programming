#include <stdio.h>

/**
 * main - Prints all arguments passed to this program
 *
 * Return: 0 (always successfull)
 */
int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
