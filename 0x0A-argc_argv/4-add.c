#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the sum of the whole numbers passed to this program
 * @argc: The number of command-line arguments
 * @argv: The command-line arguments
 *
 * Return: 0 if successfull, otherwise 1
 */
int main(int argc, char *argv[])
{
	int num, i, j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
			{
				j++;
			}
			else
			{
				puts("Error");
				return (1);
			}
		}
		num = atoi(argv[i]);
		/* sscanf(argv[i], "%d", &num); */
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
