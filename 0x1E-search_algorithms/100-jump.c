#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches a value in a sorted array using a jump search.
 * @array: The array to search in.
 * @size: The length of the array.
 * @value: The value to look for.
 *
 * Return: The index of the value in the array, otherwise -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, step, a = 0, b = 0;

	if (!array)
		return (-1);
	step = (size_t)sqrt(size);
	a = 0;
	b = step;
	while ((a < size) && (*(array + a) < value))
	{
		printf("Value checked array[%d] = [%d]\n", (int)a, *(array + a));
		if ((b >= size) || (*(array + b) >= value))
			break;
		a = b;
		b += step;
	}
	if (a >= size)
		return (-1);
	b = b >= size ? size - 1 : b;
	printf("Value found between indexes [%d] and [%d]\n", (int)a, (int)b);
	for (; a < size; a++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)a, *(array + a));
		if (*(array + a) == value)
			return ((int)a);
	}
	return (-1);
}
