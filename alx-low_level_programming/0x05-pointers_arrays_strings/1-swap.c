#include "holberton.h"

/**
 * swap_int - swaps the values of two integers
 * @a: The first integer's pointer
 * @b: The second integer's pointer
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	b10_pow(10);
}
