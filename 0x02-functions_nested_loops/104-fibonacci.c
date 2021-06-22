#include <stdio.h>
#include <stdint.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: 0 if successful
 */
int main(void)
{
	int limit = 98;
	uint64_t num1 = 0;
	uint64_t num2 = 1;
	int i;

	for (i = 0; i < limit; i++)
	{
		uint64_t temp = num1;

		printf("%lu%s", num1 + num2, i == limit - 1 ? "\n" : ", ");
		num1 = num2;
		num2+= temp;
	}

	return (0);
}
