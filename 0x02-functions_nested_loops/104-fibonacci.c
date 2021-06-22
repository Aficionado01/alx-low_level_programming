#include <stdio.h>
#include <stdint.h>
#include <math.h>

void print_long_double(long double num);
int int_div_ld(long double num, long double den);
long double b10_pow_128(int idx);

/**
 * main - prints the first 98 fibonacci numbers
 *
 * Return: 0 if successful
 */
int main(void)
{
	int limit = 98;
	printf("sizeof int: %d\n", sizeof(long double));
	long double num1 = 0.0;
	long double num2 = 1.0;
	int i;
	long double test = 455.0f;
	puts("354224848179261915075");
	print_long_double(test);
	putchar('\n');

	for (i = 0; i < limit; i++)
	{
		long double temp = num1;
		long double current_num = num1 + num2;

		if (i < limit)
		{
			print_long_double(current_num);
			printf("%s", i == limit - 1 ? "\n" : ", ");
		}

		num1 = num2;
		num2 += temp;
	}

	return (0);
}

/**
 * b10_pow_128 - Computes the power of 10 to the given index
 * @idx: The index to which 10 is raised to.
 *
 * Return: A power of 10
 */
long double b10_pow_128(int idx)
{
	int i;
	long double result = 1;

	if (idx < 0)
		return 0;

	for (i = 0; i < idx; i++)
	{
		result *= 10;
	}
	return result;
}

void print_long_double(long double num)
{
	long double rem = num + 1;
	int i;

	for (i = 37; i >= 0; i--)
	{
		long double power = b10_pow_128(i);

		if (rem > power - 1){
			putchar((int)(int_div_ld(rem, power) % 10) + '0');
		}
	}
}

int int_div_ld(long double num, long double den)
{
	int result = 0;
	int rem = num;

	while (rem > den)
	{
		rem -= den;
		result++;
	}
	return result;
}
