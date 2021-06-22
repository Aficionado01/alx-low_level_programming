#include <stdio.h>

/**
 * main - prints the first 50 fionacci numbers
 *
 * Return: 0 if successful
 */
int main(void)
{
	long int maxValue = 4000000;
	long int num1 = 0;
	long int num2 = 1;
	long sum;

	while (num2 < maxValue)
	{
		int temp = num1;
		num1 = num2;
		num2+= temp;
		if (num2 % 2 == 0)
			sum+= num2;
	}
	printf("%ld\n", sum);

	return (0);
}
