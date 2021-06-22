#include <stdio.h>
#include <stdint.h>

/**
 * main - prints the even fibonacci numbers that are less than 4000000
 *
 * Return: 0 if successful
 */
int main(void)
{
	int64_t maxValue = 4000000;
	int64_t num1 = 0;
	int64_t num2 = 1;
	int64_t sum;

	while (num2 < maxValue)
	{
		int64_t temp = num1;

		num1 = num2;
		num2 += temp;

		if (num2 % 2 == 0)
			sum += num2;
	}
	printf("%ld\n", sum);

	return (0);
}
