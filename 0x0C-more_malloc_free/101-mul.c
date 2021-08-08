#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* printError - prints "Error\n".
*
* Return: string.
*/
void printError(void)
{
int i;
char *e = "Error\n";

for (i = 0; e[i]; i++)
_putchar(e[i]);
exit(98);
}
/**
* allDigits - checks arguments are digits.
* @arg: the arguments of program.
* Return: 1 or 0.
*/
int allDigits(char **arg)
{
int i, j;

for (i = 1; i <= 2; i++)
for (j = 0; arg[i][j]; j++)
{
if (arg[i][j] < '0' || arg[i][j] > '9')
return (0);
}
return (1);
}
/**
* _calloc- initializes memory spaces with zero.
* @nmemb: string 1.
* @size: string 2, concatenated to 1
*
* Return: pointer to the concatenated string.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *newArray;

if (nmemb == 0 || size == 0)
return (NULL);

newArray = malloc(nmemb * size);
if (newArray == NULL)
return (NULL);

for (i = 0; i < (nmemb * size); i++)
*(newArray + i) = 0;

return (newArray);
}
/**
* main- multiplies 2 positive numbers.
* @argc: counter of arguments.
* @argv: vector of arguments
* Return: ans or Error.
*/

int main(int argc, char **argv)
{
int i, j, carry, length, length_s1 = 0, length_s2 = 0;
char *s1 = *(argv + 1), *s2 = *(argv + 2);
int *a, *b, *ans;
if (argc != 3 || allDigits(argv) != 1)
printError();
if (*s1 == '0' || *s2 == '0')
_putchar('0');
while (*(*(argv + 1) + length_s1))
length_s1++;
while (*(*(argv + 2) + length_s2))
length_s2++;
length = length_s1 + length_s2 + 1;
a = (int *)malloc(length_s1 *sizeof(int));
b = (int *)malloc(length_s2 *sizeof(int));
ans = _calloc(length, sizeof(int));
if (a == NULL || b == NULL || ans == NULL)
printError();
for (i = length_s1 - 1, j = 0; i >= 0; i--, j++)
*(a + j) = *(s1 + i) - '0';
for (i = length_s2 - 1, j = 0; i >= 0; i--, j++)
*(b + j) = *(s2 + i) - '0';
for (i = 0; i < length_s2; i++)
for (j = 0; j < length_s1; j++)
*(ans + i + j) = *(ans + i + j) + *(b + i) * *(a + j);
for (i = 0; i < length_s1 + length_s2; i++)
{
carry = *(ans + i) / 10, *(ans + i) = *(ans + i) % 10;
*(ans + i + 1) = *(ans + i + 1) + carry;
}
for (i = length_s1 + length_s2; i >= 0; i--)
if (*(ans + i) > 0)
break;
for (; i >= 0; i--)
_putchar(*(ans + i) + '0');
_putchar('\n');
free(a), free(b), free(ans);
return (0);
}
