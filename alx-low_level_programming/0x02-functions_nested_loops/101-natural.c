#include <stdio.h>

/**
 * main - prints the n times table
 *
 * Return: 0 if successful
 */
int main(void)
{
	int limit = 1024;
	int i;
	int sum = 0;

	for (i = 1; i < limit; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	printf("%d\n", sum);

	return (0);
}
