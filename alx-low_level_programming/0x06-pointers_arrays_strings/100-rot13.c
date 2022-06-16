#include "holberton.h"

/**
 * rot13 - Encodes a string using rot13
 * @str: The source string
 *
 * Return: The string
 */
char *rot13(char *str)
{
	int idx = 0;

	while (*(str + idx) != '\0')
	{
		int is_low_1 = *(str + idx) >= 'a' && *(str + idx) <= 'm';
		int is_low_2 = *(str + idx) >= 'A' && *(str + idx) <= 'M';
		int is_upper = *(str + idx) >= 'A' && *(str + idx) <= 'Z';
		int is_lower = *(str + idx) >= 'a' && *(str + idx) <= 'z';

		if (is_lower || is_upper)
		{
			*(str + idx) = ((is_low_1 + is_low_2) * (*(str + idx) + 13))
				+ ((1 - is_low_1 - is_low_2) * (*(str + idx) - 13));
		}
		idx++;
	}

	return (str);
}
