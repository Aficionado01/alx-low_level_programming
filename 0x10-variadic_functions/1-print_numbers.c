#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers followed by a new line
 * @separator: The string to be printed between numbers
 * @n: The number of arguments that are passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i > 0 && i < n && separator)
			printf("%s", separator);
		printf("%d", va_arg(args, int));
	}
	printf("\n");
	va_end(args);
}
