#include "holberton.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The source string
 *
 * Return: The string
 */
char *cap_string(char *str)
{
	int idx, i;
	char previous_char = '\t';
	char word_separators[] = {' ', '\t', '\r', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}'};
	char word_separators_length = 14;
	char should_capitalize = idx = 0;

	while (*(str + idx) != '\0')
	{
		for (i = 0; i < word_separators_length; i++)
		{
			if (word_separators[i] == previous_char)
			{
				should_capitalize = 1;
				break;
			}
			should_capitalize = 0;
		}
		if ((*(str + idx) >= 'a' && *(str + idx) <= 'z') && should_capitalize)
			*(str + idx) = *(str + idx) - 6 - 26;
		previous_char = *(str + idx);
		idx++;
	}
	return (str);
}
