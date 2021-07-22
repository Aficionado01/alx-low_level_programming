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
	int j;
	va_list args;
	fmt_printer_t fmt_printers[] = {
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string},
	};
	char *seps[] = {", ", "\0"};

	va_start(args, format);
	i = 0;
	while (format && *(format + i) != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (*(format + i) == (fmt_printers + j)->type)
			{
				(fmt_printers + j)->func(&args);
				printf("%s", seps[*(format + i + 1) == 0]);
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
