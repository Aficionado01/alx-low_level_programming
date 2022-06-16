#include "holberton.h"

/**
 * factorial - Computes the factorial of a given number
 * @n: The number
 *
 * Return: The factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
