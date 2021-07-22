#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
/**
 * struct format_printer - A structure for a type formatted printer
 * @type: The type of data to be formatted
 * @func: The format printing function
 */
struct format_printer
{
	char type;
	void (*func)(va_list);
};
typedef struct format_printer fmt_printer_t;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
