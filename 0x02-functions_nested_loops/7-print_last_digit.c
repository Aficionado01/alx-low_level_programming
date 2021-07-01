#include "holberton.h"
/**
* _abs - returns -n if n is less than0 otherwise n
* @n: integer to be tested
* Return: _abs(n)
*/
int _abs(int n)
{
if (n >= 0)
return (n);
else
return (-1 * n);
}
/**
* print_last_digit - prints the lastdigit of a number
* @n: integer whose last digit is tobe printed
* Return: lastdigit
*/
int print_last_digit(int n)
{
int lastDigit;

lastDigit = _abs((n % 10));
_putchar(lastDigit + 48);
return (lastDigit);
}
