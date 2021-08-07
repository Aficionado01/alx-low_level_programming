#include <stdio.h>
#include <stdlib.h>

/**
* main - prints minimum number of coins to make change for an amount of money.
* @argc: number of arguments passed to the function
* @argv: argument vector of pointers to strings
*
* Return: 0 if no errors, else 1
*/
int main(int argc, char const *argv[])
{
int amount, coins_count = 0, nbr_coin, i = 0;
int coins[5] = {25, 10, 5, 2, 1};

if (argc != 2)
{
puts("Error");
return (1);
}
amount = atoi(argv[1]);
if (amount <= 0)
{
puts("0");
return (1);
}
while (amount && i < 5)
{
nbr_coin = amount / coins[i];
amount = amount % coins[i];
coins_count += nbr_coin;
i++;
}
printf("%d\n", coins_count);
return (0);
}
