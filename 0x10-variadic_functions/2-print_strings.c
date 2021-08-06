#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_strings - prints strings, followed by a new line.
* @separator: separator to print between the strings
* @n: number of strings to print
*
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
char *str;

va_start(args, n);
for (i = 0; i < n; i++)
{
str = va_arg(args, char *);
printf("%s", (str) ? str : "(nil)");
if (i < n - 1 && separator)
printf("%s", separator);
}

printf("\n");
va_end(args);
}
