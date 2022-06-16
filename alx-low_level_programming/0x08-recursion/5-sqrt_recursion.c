#include "holberton.h"

/**
 * _sqrt_recursion_update - Computes the square root of a number
 * @i: The index
 * @n: The radicand
 *
 * Return: The square root of the number
 */
int _sqrt_recursion_update(int i, int n)
{
	return (i * i >= n ? i : _sqrt_recursion_update(i + 1, n));
}

/**
 * _sqrt_recursion - Computes the square root of an integer
 * @n: The radicand
 *
 * Return: The square root if it is a perfect square and natural, otherwise -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		int root = _sqrt_recursion_update(0, n);

		if (root * root == n)
			return (root);
		else
			return (-1);
	}
}
