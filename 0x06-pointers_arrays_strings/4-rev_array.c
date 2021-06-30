#include "holberton.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: The pointer to the integer array
 * @n: The length of the array
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int temp = *(a + n - i - 1);

		*(a + n - i - 1) = *(a + i);
		*(a + i) = temp;
	}
}
