#include "holberton.h"

/**
 * leet - Encodes a string into 1337
 * @str: The source string
 *
 * Return: The string
 */
char *leet(char *str)
{
	int idx;
	char mappings[26 * 2];

	for (idx = 0; idx < 26 * 2; idx++)
		mappings[idx] = 0;
	mappings['a' - 'a'] = mappings['A' - 'A' + 26] = '4';
	mappings['e' - 'a'] = mappings['E' - 'A' + 26] = '3';
	mappings['o' - 'a'] = mappings['O' - 'A' + 26] = '0';
	mappings['t' - 'a'] = mappings['T' - 'A' + 26] = '7';
	mappings['l' - 'a'] = mappings['L' - 'A' + 26] = '1';

	for (idx = 0; *(str + idx) != '\0'; idx++)
	{
		int is_lower = *(str + idx) >= 'a' && *(str + idx) <= 'z';
		int is_upper = *(str + idx) >= 'A' && *(str + idx) <= 'Z';
		int key = *(str + idx) - (is_lower * 'a') - (is_upper * ('A' - 26));

		if ((is_lower || is_upper) && mappings[key] != 0)
			*(str + idx) = mappings[key];
	}

	return (str);
}
