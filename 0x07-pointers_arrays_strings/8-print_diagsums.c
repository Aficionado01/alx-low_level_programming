#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of
 * a square matrix of integers
 * @a: The square matrix
 * @size: The size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j, k;
	long sum_1, sum_2;

	i = 0;
	j = size - 1;
	sum_1 = 0;
	sum_2 = 0;
	for (k = 0; k < size; k++)
	{
		sum_1 += *(a + i);
		sum_2 += *(a + j);
		i += size + 1;
		j += size - 1;
	}
	printf("%ld, %ld\n", sum_1, sum_2);
}
