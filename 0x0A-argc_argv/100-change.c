#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to make change for an amount
 * of money passed to this program
 * @argc: The number of command-line arguments
 * @argv: The command-line arguments
 *
 * Return: 0 if successfull, otherwise 1
 */
int main(int argc, char *argv[])
{
	int cents, i;
	int coins[5] = {25, 10, 5, 2, 1};
	int coins_count;

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
			i = 0;
			while (cents > 0)
			{
				if (coins[i] <= cents)
				{
					coins_count += cents / coins[i];
					cents %= coins[i];
				}
				else
				{
					i++;
				}
			}
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
