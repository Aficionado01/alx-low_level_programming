#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: 0 if successful
 */
int main(void)
{
	long long num = 612852475143;
	long long largest;
	long long i;

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

	printf("%ld\n", largest);
	return (0);
}
