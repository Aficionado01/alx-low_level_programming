#include <stdio.h>
#include <stdint.h>
#include <math.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: 0 if successful
 */
int main(void)
{
	int64_t num = 6000000;/**/
	int64_t add = 100000;
	int64_t mid = 70499;
	int64_t largest;
	int64_t i;

	num *= 100000;
	add *= 100000;
	mid *= 10000;
	num += add;
	num += mid;
	num += INT32_MAX;
	num += 1496;

	while (num % 2 == 0)
	{
		largest = 2;
		num /= 2;
	}

	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			if (i > largest)
				largest = i;
			num /= i;
		}
	}

	if (num > 2 && num > largest)
		largest = num;

	printf("%ld\n", (long int)largest);
	return (0);
}
