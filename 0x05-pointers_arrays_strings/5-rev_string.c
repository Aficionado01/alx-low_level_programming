#include "holberton.h"

/**
* rev_string - revers a string
* @s: string to reverse
*
* Return: void
*/

void rev_string(char *s)
{
int i, n;
char c;

for (n = 0; s[n]; n++)
;
for (i = 0; i < n / 2; i++)
{
c = s[i];
s[i] = s[n - i - 1];
s[n - i - 1] = c;
}
}
