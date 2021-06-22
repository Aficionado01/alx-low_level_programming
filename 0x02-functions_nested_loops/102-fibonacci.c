#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: 0 if successful
 */
int main(void)
{
	int limit = 50;
	long long int num1 = 0;
	long long int num2 = 1;
	int i;

	for (i = 0; i < limit; i++)
	{
		printf("%lld%s", num1 + num2, i == limit - 1 ? "\n" : ", ");
		long long int temp = num1;
		num1 = num2;
		num2 += temp;
	}

	return (0);
}
