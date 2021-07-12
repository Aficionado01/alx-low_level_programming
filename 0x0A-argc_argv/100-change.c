#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to make change for an amount
 * of money passed to this program
 *
 * Return: 0 if successfull, otherwise 1
 */
int main(int argc, char *argv[])
{
	int cents, coins_count, rem, i;
	int coins[5] = {25, 10, 5, 2, 1};
	int freq[5] = { 0 };

	if (argc == 2)
	{
		cents = atoi(argv[1]);

		if (cents <= 0)
		{
			puts("0");
		}
		else
		{
			coins_count = 0;
			rem = 0;
			i = 0;
			while (rem != cents)
			{
				if (rem + coins[i] <= cents)
				{
					rem += coins[i];
					freq[i]++;
				}
				else
				{
					i++;
				}
			}
			for (i = 0; i < 5; i++)
				coins_count += freq[i];
			printf("%d\n", coins_count);
		}
		return (0);
	}
	else
	{
		puts("Error");
		return (1);
	}
}
