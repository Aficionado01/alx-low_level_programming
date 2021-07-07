#include "holberton.h"

/**
 * _sqrt_recursion_update - Computes the square root of a number
 * @n: The radicand
 *
 * Return: The square root of the number
 */
double _sqrt_recursion_update(double n)
{
	double tolerance = 0.1;
	double root = n;
	double res_diff = n - root * root;
	double res_diff_abs = res_diff < 0 ? -1 * res_diff : res_diff;

	update:
	if (res_diff_abs > tolerance)
	{
		root = (root + n / root) / 2;
		res_diff = n - root * root;
		res_diff_abs = res_diff < 0 ? -1 * res_diff : res_diff;
		goto update;
	}
	return (root);
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
		double root = _sqrt_recursion_update(n);

		if ((long)root * (long)root == n)
			return ((int)root);
		else
			return (-1);
	}
}
