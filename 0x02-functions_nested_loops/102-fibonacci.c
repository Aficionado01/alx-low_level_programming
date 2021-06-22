#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: 0 if successful
 */
int main(void)
{
	int limit = 50;
	int64_t num1 = 0;
	int64_t num2 = 1;
	int i;

	for (i = 0; i < limit; i++)
	{
		int64_t temp = num1;

		printf("%ld%s", num1 + num2, i == limit - 1 ? "\n" : ", ");
		num1 = num2;
		num2 += temp;
	}

	return (0);
}
