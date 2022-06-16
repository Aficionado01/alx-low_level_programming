#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an integer array
 * @a: The array of integers
 * @n: The number of elements to print
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		printf("\n");

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
	b10_pow(10);
}
