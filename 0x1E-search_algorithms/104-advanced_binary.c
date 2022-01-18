#include "search_algos.h"

/**
 * binary_search_index - Searches a value in a sorted array using \
 * a binary search.
 * @array: The array to search in.
 * @size: The length of the array.
 * @value: The value to look for.
 * @offset: The number of positions from the beginning of the initial array.
 *
 * Return: The first index of the value in the array, otherwise -1.
 */
int binary_search_index(int *array, size_t size, int value, int offset)
{
	size_t i, m = size;
	int index;

	if (!array || !size)
		return (-1);
	if (size > 0)
	{
		printf("Searching in array: ");
		for (i = 0; i < size; i++)
			printf("%d%s", *(array + i), i < (size - 1) ? ", " : "\n");
	}
	m = size / 2;
	if (size <= 1)
	{
		return (*(array + m) == value ? offset : -1);
	}
	else if (*(array + m) > value)
	{
		index = binary_search_index(array, m, value, offset);
		return (index);
	}
	else if (*(array + m) == value)
	{
		if ((m > 0) && (*(array + m - 1) == value))
			index = binary_search_index(array, m - 1, value, offset);
		else
			index = offset + (int)m;
		return (index);
	}
	else
	{
		index = binary_search_index(
			array + m,
			size - m - (size % 2 ? 1 : 0),
			value,
			(int)m + offset
		);
		return (index);
	}
}

/**
 * advanced_binary - Searches a value in a sorted array using a binary search.
 * @array: The array to search in.
 * @size: The length of the array.
 * @value: The value to look for.
 *
 * Return: The first index of the value in the array, otherwise -1.
 */
int advanced_binary(int *array, size_t size, int value)
{
	return (binary_search_index(array, size, value, 0));
}
