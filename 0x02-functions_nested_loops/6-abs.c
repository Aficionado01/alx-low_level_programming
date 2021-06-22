#include "holberton.h"

/**
 * _abs - prints the absolute value of a number
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
