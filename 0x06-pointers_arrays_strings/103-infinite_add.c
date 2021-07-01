#include "holberton.h"

/**
 * infinite_add - Adds two numbers
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer for storing the result
 * @size_r: The size of the buffer
 *
 * Return: If result can be stored in r, then r, otherwise 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1_len = 0, n2_len = 0, max_len, i;
	char n1_dig = 0, n2_dig = 0, carry = 0, rem = 0, tmp = 0;

	while (*(n1 + n1_len) != '\0')
		n1_len++;
	while (*(n2 + n2_len) != '\0')
		n2_len++;
	/* max_len = n1_len > n2_len ? n1_len : n2_len; */
	if (n1_len > n2_len)
		max_len = n1_len;
	else
		max_len = n1_len;
	i = max_len;
	if (size_r < i + 1)
		return (0);
	*(r + i) = '\0';
	i--;
	n1_len--;
	n2_len--;
	while (i >= 0)
	{
		/* n1_dig = n1_len >= 0 ? *(n1 + n1_len) - '0' : 0; */
		if (n1_len >= 0)
			n1_dig = *(n1 + n1_len) - '0';
		else
			n1_dig = 0;
		/* n2_dig = n2_len >= 0 ? *(n2 + n2_len) - '0' : 0; */
		if (n2_len >= 0)
			n2_dig = *(n2 + n2_len) - '0';
		else
			n2_dig = 0;
		rem = (n1_dig + n2_dig + carry) % 10;
		carry = (n1_dig + n2_dig + carry) / 10;
		*(r + i) = (rem + '0');
		n1_len--;
		n2_len--;
		i--;
	}
	if (carry > 0 && size_r >= max_len + 2)
	{
		for (i = max_len + 1; i > 0; i--)
		{
			tmp = *(r + i);
			*(r + i) = *(r + i - 1);
			*(r + i - 1) = tmp;
		}
		*(r + i) = carry + '0';
		return (r);
	}
	if ((carry > 0 && size_r < max_len + 2))
		return (0);
	return (r);
}
