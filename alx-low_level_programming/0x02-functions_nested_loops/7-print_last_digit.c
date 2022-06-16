#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number whose last digit is to be printed
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int rem = n % 10;
	int result = n >= 0 ? rem : rem * -1;

	_putchar(result + '0');
	return (result);
}
