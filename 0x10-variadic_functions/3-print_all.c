#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - Prints a character from an arguments list
 * @args: The arguments list
 */
void print_char(va_list *args)
{
	printf("%c", va_arg(*args, int));
}

/**
 * print_integer - Prints an integer from an arguments list
 * @args: The arguments list
 */
void print_integer(va_list *args)
{
	printf("%d", va_arg(*args, int));
}

/**
 * print_float - Prints a float from an arguments list
 * @args: The arguments list
 */
void print_float(va_list *args)
{
	printf("%f", va_arg(*args, double));
}

/**
 * print_string - Prints a character array from an arguments list
 * @args: The arguments list
 */
void print_string(va_list *args)
{
	char *str[2];
	int i;

	str[0] = va_arg(*args, char *);
	str[1] = "(nil)";
	i = str[0] == NULL;
	printf("%s", str[i]);
}

/**
 * print_all - Prints anything
 * @format: A list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list args;
	fmt_printer_t fmt_printers[] = {
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string},
		{0, NULL},
		{NULL, NULL}
	};
	char *seps[] = {", ", "\0"};

	va_start(args, format);
	i = 0;
	while (*(format + i) != '\0')
	{
		fmt_printers[4].type = 0;
		while (fmt_printers[4].type < 4)
		{
			if (*(format + i) == (fmt_printers + fmt_printers[4].type)->type)
			{
				(fmt_printers + fmt_printers[4].type)->func(&args);
				printf("%s", seps[*(format + i + 1) == 0]);
				break;
			}
			fmt_printers[4].type++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
