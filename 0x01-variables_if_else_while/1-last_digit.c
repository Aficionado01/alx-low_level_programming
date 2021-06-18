#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
int m;
char o[] = "Last digit of";

srand(time(0));
n = rand() - RAND_MAX / 2;
m = n % 10;

if (m > 5)
printf("%s %d is %d and is greater than 5\n", o, n, m);
else if (m == 0)
printf("%s %d is %d and is 0\n", o, n, m);
else if (m < 6)
printf("%s %d is %d and is less than 6 and not 0\n", o, n, m);
return (0);
}
