#include <stdio.h>
#include <stdint.h>

/**
 * main - prints the even fibonacci numbers that are less than 4000000
 *
 * Return: 0 if successful
 */
int main(void)
{
	int32_t maxValue = 4000000;
	int32_t num1 = 0;
	int32_t num2 = 1;
	int32_t sum = 0;

	while (num2 < maxValue)
	{
		int32_t temp = num1;

		num1 = num2;
		num2 += temp;

		if (num2 % 2 == 0 && num2 < maxValue)
			sum += num2;
	}
	printf("%d\n", sum);

	return (0);
}
