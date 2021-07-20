
/**
 * int_index - searches for an integer in an array
 * @array: The array to look in
 * @size: The length of the array
 * @cmp: The pointer to the function to compare values
 *
 * Return: The index of the first element for which the cmp
 * function does not return 0, otherwise -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!cmp)
		return (-1);
	while (!cmp(*(array + i)) && i < size)
		i++;
	return (cmp(*(array + i)) && size > 0 ? i : -1);
}
