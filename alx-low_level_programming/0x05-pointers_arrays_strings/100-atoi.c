#include "holberton.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The string to be converted
 * Return: The first integer in the string
 */
int _atoi(char *s)
{
	short sign = 1;
	double result = 0;
	int len, digits_seen_count, i, pass, positive, old_sign;

	len = i = digits_seen_count = pass = old_sign = 0;
	while (pass <= 1)
	{
		positive = old_sign != 0 ? old_sign == *(s + len) : *(s + len) == '+';
		if (*(s + len) == '\0')
		{
			pass++;
			len = 0;
			continue;
		}
		else if (*(s + len) >= '0' && *(s + len) <= '9')
		{
			if (pass == 0)
				digits_seen_count++;
			else
				result += (*(s + len) - '0') * b10_pow(digits_seen_count - i++ - 1);
		}
		else
		{
			if (pass == 0 && digits_seen_count > 0)
			{
				pass++;
				len -= digits_seen_count;
				continue;
			}
			if ((*(s + len) == '+' || *(s + len) == '-') && digits_seen_count == 0)
			{
				sign = positive ? 1 : 0 - 1;
				old_sign = positive ? '+' : '-';
			}
		}
		len++;
	}
	return (result * sign);
}
