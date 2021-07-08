#include "holberton.h"
#include <stdio.h>
/**
* print_array - prints n elements of array of ints
* @a: pointer to array
* @n: numbers of elements to print
*
* Return: void
*/

void print_array(int *a, int n)
{
int i = 0;

while (i < n)
{
printf("%d", a[i]);
if (i < (n - 1))
printf(", ");
i++;
}
printf("\n");
}
