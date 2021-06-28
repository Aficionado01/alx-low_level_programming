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
	double result = 0;
	short pass = 1;
	int len, digits_seen_count, i;
	char old_sign = '&';

	len = i = digits_seen_count = 0;
	while (pass <= 2)
	{
		int positive = old_sign != '&' ? old_sign == *(s + len) : *(s + len) == '+';

		if (*(s + len) == '\0')
		{
			pass++;
			len = 0;
			continue;
		}
		else if (*(s + len) == '+' || *(s + len) == '-')
		{
			if (pass == 1 && digits_seen_count > 0)
			{
				pass++;
				len -= digits_seen_count;
				continue;
			}
			if (digits_seen_count == 0)
			{
				sign = positive ? 1 : 0 - 1;
				old_sign = positive ? '+' : '-';
			}
		}
		else if (*(s + len) >= '0' && *(s + len) <= '9')
		{
			if (pass == 1)
				digits_seen_count++;
			else
				result += (*(s + len) - '0') * b10_pow(digits_seen_count - i++ - 1);
		}
		else
		{
			if (pass == 1 && digits_seen_count > 0)
			{
				pass++;
				len -= digits_seen_count;
				continue;
			}
		}
		len++;
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
	return ((int)result);
}
