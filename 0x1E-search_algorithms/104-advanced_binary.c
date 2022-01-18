#include "search_algos.h"

/**
 * binary_search_index1 - Searches a value in a sorted array using \
 * a binary search.
 * @array: The array to search in.
 * @l: The left index of the array.
 * @r: The right index of the array.
 * @value: The value to look for.
 *
 * Return: The first index of the value in the array, otherwise -1.
 */
int binary_search_index1(int *array, size_t l, size_t r, int value)
{
	size_t i, m;
	int index;

	if (!array)
		return (-1);
	if (l != r)
	{
		printf("Searching in array: ");
		for (i = l; i < l + (r - l + 1); i++)
			printf("%d%s", *(array + i), i < l + (r - l) ? ", " : "\n");
	}
	m = l + ((r - l) / 2);
	if (l == r)
		return (*(array + m) == value ? (int)m : -1);
	if (value < *(array + m))
	{
		index = binary_search_index1(array, l, m, value);
		return (index);
	}
	else if (value == *(array + m))
	{
		if ((m > 0) && (*(array + m - 1) == value))
			index = binary_search_index1(array, l, m, value);
		else
			index = (int)m;
		return (index);
	}
	else
	{
		index = binary_search_index1(
			array,
			m + 1,
			r,
			value
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
	if (!array || !size)
		return (-1);
	return (binary_search_index1(array, 0, size - 1, value));
}
