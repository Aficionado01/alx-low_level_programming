#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints the natural numbers from n to 98
 * @n: The starting number to move towards 98
 */
void print_to_98(int n)
{
	int limit = 98;
	int num = (n);
	int step = n > limit ? -1 : 1;
	int stop;

	while (!stop)
	{
		printf("%d%s", num, (num == limit ? "\n" : ", "));
		stop = num == limit;
		num += step;
	}
}
