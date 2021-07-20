#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter on each
 * element of an array
 * @array: The array to iterate over
 * @size: The length of the array
 * @action: The function to peform on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
			action(*(array + i));
	}
}
