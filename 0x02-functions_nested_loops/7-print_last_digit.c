#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	_putchar((n % 10) + '0');
	return (n % 10);
}
