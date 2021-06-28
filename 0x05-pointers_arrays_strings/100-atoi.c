#include "holberton.h"
#include <stdio.h>

/**
 * _atoi - Converts a string to an integer
 * @s: The string to be converted
 *
 * Return: The first integer in the string
 */
int _atoi(char *s)
{
	short sign = 1;
	int result = 0;
	short pass = 1;
	int length = 0;
	short sign_seen = 0;
	char previous_sign = '&';
	short numbers_seen = 0;
	int digits_seen_count = 0;
	int i = 0;

	while (pass <= 2)
	{
		char symbol = *(s + length);
		int positive = sign_seen == 1 ? previous_sign == symbol : symbol == '+';

		if (symbol == '\0')
		{
			pass++;
			length = 0;
			continue;
		}
		else if (symbol == '+' || symbol == '-')
		{
			sign_seen = 1;
			if (pass == 1 && numbers_seen)
			{
				pass++;
				length -= digits_seen_count;
				continue;
			}
			if (!numbers_seen)
			{
				sign = positive ? 1 : 0 - 1;
				previous_sign = positive ? '+' : '-';
			}
		}
		else if (symbol >= '0' && symbol <= '9')
		{
			numbers_seen = 1;
			if (pass == 1)
			{
				digits_seen_count++;
			}
			else
			{
				int digit = symbol - '0';
				int val = digit * b10_pow(digits_seen_count - i - 1);

				result += val;
				i++;
			}
		}
		else
		{
			if (pass == 1 && numbers_seen)
			{
				pass++;
				length -= digits_seen_count;
				continue;
			}
		}
		length++;
	}
	return (result * sign);
}

/**
 * b10_pow - Computes the power of 10 to the given index
 * @idx: The index to which 10 is raised to.
 *
 * Return: A power of 10
 */
int b10_pow(int idx)
{
	int i;
	int result = 1;

	if (idx < 0)
		return (0);

	for (i = 0; i < idx; i++)
	{
		result *= 10;
	}
	return (result);
}
