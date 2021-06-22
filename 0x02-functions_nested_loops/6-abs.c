#include "holberton.h"

/**
 * _abs - prints the absolute value of a number
 * @n: The number whose absolute value is to be found
 *
 * Return: |n| of n
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
