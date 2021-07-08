#include "holberton.h"

/**
* swap_int - swaps value of two ints
* @a: first int to swap
* @b: second int to swap
*
* Return: void
*/

void swap_int(int *a, int *b)
{
*a += *b;
*b = *a - *b;
*a -= *b;
}
