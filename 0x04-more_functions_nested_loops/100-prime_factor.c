#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: 0 if successful
 */
int main(void)
{
	long long int num = 612852475143;
	long long int largest, i;

	while (num % 2 == 0)
	{
		largest = 2;
		num /= 2;
	}

	/* n must be odd at this point.  So we can */
	/* skip one element (Note i = i +2) */
	for (i = 3; i <= sqrt(num); i+= 2)
	{
		/* While i divides n, print i and divide n */
		while (num % i == 0)
		{
			if (i > largest)
				largest = i;
			num /= i;
		}
	}

	/* This condition is to handle the case whien */
	/* n is a prime number greater than 2 */
	if (num > 2 && num > largest)
		largest = num;

	printf("%ld\n", largest);
	return (0);
}
