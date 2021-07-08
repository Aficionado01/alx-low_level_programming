#include "holberton.h"
#include <string.h>

/**
* print_rev - prints a string in reverse followed by a new line
* @s: string to print
*
* Return: void
*/

void print_rev(char *s)
{
int i;
for (i = 0; s[i]; i++)
;
for (; i > 0; i--)
_putchar(s[i - 1]);
_putchar('\n');
}
