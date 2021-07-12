#include <stdio.h>

/**
 * main - Prints the product of two numbers passed to this program
 *
 * Return: 0 if successfull, otherwise 1
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc == 3)
	{
		sscanf(argv[1], "%d", &num1);
		sscanf(argv[2], "%d", &num2);
		printf("%d\n", num1 * num2);
		return (0);
	}
	else
	{
		puts("Error");
		return (1);
	}
}
