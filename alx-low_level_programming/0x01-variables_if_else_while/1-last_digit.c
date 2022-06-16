#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - assign a random number to a variable
 * and prints its last digit
 *
 * Return: 0 if execution was successful
 */
int main(void)
{
	int n;
	char num[32];
	char dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	sprintf(num, "%d", n);
	dig = num[strlen(num) - 1];

	if (dig > '5' && n > 0)
		printf("Last digit of %d is %c and is greater than 5\n", n, dig);
	else if (dig == '0')
		printf("Last digit of %d is %c and is 0\n", n, dig);
	else
		printf("Last digit of %d is -%c and is less than 6 and not 0\n", n, dig);
	return (0);
}
