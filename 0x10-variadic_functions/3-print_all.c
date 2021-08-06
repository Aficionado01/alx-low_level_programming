#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_char - print a char
* @c: char to print
*
* Return: void
*/
void print_char(va_list c)
{
printf("%c", va_arg(c, int));
}

/**
* print_str - prints a string
* @s: string to print
*
* Return: void
*/

void print_str(va_list s)
{
char *str = va_arg(s, char *);

if (str == NULL)
str = "(nil)";
printf("%s", str);
}

/**
* print_int - prints an int
* @i: int to print
*
* Return: void
*/
void print_int(va_list i)
{
printf("%d", va_arg(i, int));
}

/**
* print_float - prints a float
* @f: float to print
*
* Return: void
*/

void print_float(va_list f)
{
printf("%f", va_arg(f, double));
}

/**
* print_all - prints anything
* @format: list of argument types passed to the function
*
* Return: void
*/
void print_all(const char *const format, ...)
{
print_f format_arr[] = {
{"c", print_char},
{"s", print_str},
{"i", print_int},
{"f", print_float},
{NULL, NULL}
};
va_list args;
unsigned int i = 0, j;
char *separator = "";

va_start(args, format);
i = 0;
while (format && format[i])
{
j = 0;
while (format_arr[j].c != NULL)
{
if (*(format_arr[j].c) == format[i])
{
printf("%s", separator);
format_arr[j].func(args);
separator = ", ";
break;
}
j++;
}
i++;
}
va_end(args);
printf("\n");
}
