#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

void print_uint64(uint64_t v, uint64_t radix, char prepend_zeros);

/**
 * main - prints the first 98 fibonacci numbers
 *
 * Return: 0 if successful
 */
int main(void)
{
	int limit = 98;
	uint64_t carried_previous = 0, previous = 1;
	uint64_t carried_current = 0, current = 2;
	uint64_t carried_accumulated = 0, accumulated;
	int i;
	uint64_t max = 100000000;

	max *= 100000000; /*max=10^16*/
	putchar('1');
	putchar(',');
	putchar(' ');
	putchar('2');
	putchar(',');
	putchar(' ');

	for (i = 3; i <= limit; i++)
	{
		carried_accumulated = carried_current + carried_previous;
		accumulated = current + previous;

		carried_previous = carried_current;
		previous = current;

		carried_current = carried_accumulated;
		current = accumulated;

		while (current >= max)
		{
			carried_current += 1;
			current -= max;
		}

		if (i != 3)
		{
			putchar(',');
			putchar(' ');
		}
		print_uint64(carried_current, max / 10, 0);
		print_uint64(current, max / 10, carried_current > 0);
	}
	putchar('\n');

	return (0);
}

/**
 * print_uint64 - Prints an uint64_t number
 * @v: The value to print
 * @radix: The initial divisor
 * @prepend_zeros: specifies whether zeros should be printed
 */
void print_uint64(uint64_t v, uint64_t radix, char prepend_zeros)
{
	uint64_t divisor = radix;
	uint64_t quotient = v;
	char significant_zero = 0;

	for (; divisor != 0; divisor /= 10)
	{
		char digit = quotient / divisor;

		if (digit == 0 && !significant_zero && !prepend_zeros)
			continue;
		significant_zero = 1;

		putchar(digit + '0');
		quotient = quotient % divisor;
	}
}
