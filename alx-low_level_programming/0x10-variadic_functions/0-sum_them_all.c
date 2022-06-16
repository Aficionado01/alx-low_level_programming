#include <stdarg.h>

/**
 * sum_them_all - Computes the sum of its parameters
 * @n: The number of parameters
 *
 * Return: The sum of the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	if (n != 0)
	{
		va_start(args, n);

		for (i = 0; i < n; i++)
			sum += va_arg(args, int);
		va_end(args);
	}
	return (sum);
}
