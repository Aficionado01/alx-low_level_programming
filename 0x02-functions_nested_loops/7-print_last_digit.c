#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number whose last digit is to be printed
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int absVal = n > 0 ? n : n * -1;
	_putchar((absVal % 10) + '0');
	return (absVal % 10);
}
