#include "holberton.h"

/**
 * is_prime - Checks if a given integer is a prime number
 * @i: The divisor
 * @n: The number to check
 *
 * Return: 1 if the number is prime, otherwise 0
 */
int is_prime(int i, int n)
{
	if (n > 1)
	{
		if (i == n)
			return (1);
		else if (n % i == 0)
			return (0);
		else
			return (is_prime(i + 1, n));
	}
	return (0);
}

/**
 * is_prime_number - Checks if a given integer is a prime number
 * @n: The number to check
 *
 * Return: 1 if the number is prime, otherwise 0
 */
int is_prime_number(int n)
{
	int start = 2;

	if (n <= 1 || (n % 2 == 0 && n != 2)
		|| (n % 3 == 0 && n != 3)
		|| (n % 5 == 0 && n != 5)
		|| (n % 7 == 0 && n != 7))
	{
		return (0);
	}
	else
		return (is_prime(start, n));
}
