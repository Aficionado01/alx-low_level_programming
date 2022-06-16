#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the 101-crackme program
 *
 * Return: 0 if successful
 */
int main(void)
{
	int n;
	int lower = '!';
	int char_range = 90;
	int upper = lower + char_range;
	const int SUM = 2772;
	int cummulative_sum = 0;

	srand(time(0));
	while (cummulative_sum < SUM - upper)
	{
		n = lower + (int)(((double)rand() / RAND_MAX) * char_range);
		putchar(n);
		cummulative_sum += n;
	}

	if (cummulative_sum != SUM)
		putchar(SUM - cummulative_sum);
	putchar('\n');
	return (0);
}
