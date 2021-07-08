#include "holberton.h"

/**
* _sqrt - checks for the square root of c
* @i: sqrt
* @x: number to find sqrt of
*
* Return: -1 or sqrt of c
*/
int _sqrt(int i, int x)
{
if (i * i == x)
return (i);
if (i * i > x)
return (-1);
return (_sqrt(i + 1, x));
}

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: integer to find sqrt of
*
* Return: natural square root or -1
*/
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (_sqrt(1, n));
}
