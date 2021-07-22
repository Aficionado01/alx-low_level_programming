#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - Prints a character from an arguments list
 * @args: The arguments list
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_integer - Prints an integer from an arguments list
 * @args: The arguments list
 */
void print_integer(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float from an arguments list
 * @args: The arguments list
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a character array from an arguments list
 * @args: The arguments list
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str)
		printf("%s", str);
	printf("(nil)");
}

/**
 * print_all - Prints anything
 * @format: A list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j;
	va_list args;
	char *str;
	fmt_printer_t fmt_printers[4] = {
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string}
	};

	va_start(args, format);
	while (*(format + i) != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (*(format + i) == (fmt_printers + j)->type)
				(fmt_printers + j)->func(args);
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
