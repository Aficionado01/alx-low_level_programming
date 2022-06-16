#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - A program that performs simple arithmetic operations (+, -, *, /, %)
 * @argc: The number of command-line arguments
 * @argv: The command-line arguments
 *
 * Return: 0 if successful, 98 if the number of arguments are incorrect,
 * 99 for an invalid operation and 100 when there's a divide by 0 error
 */
int main(int argc, char *argv[])
{
	int result, left, right;
	int (*op_func)(int, int);

	if (argc == 4)
	{
		left = atoi(argv[1]);
		right = atoi(argv[3]);
		op_func = get_op_func(argv[2]);
		if (op_func == NULL)
		{
			printf("Error\n");
			exit(99);
		}
		result = op_func(left, right);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
