#include <stdio.h>

/**
* print_buffer - print hex view of buffer
*  with 10(!) bytes per row
*
* @b: buffer
* @size: size of @b
*/
void print_buffer(char *b, int size)
{
int i;
char j, c;

if (size <= 0)
{
putchar('\n');
return;
}
for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);
for (j = 0; j < 10; j++)
{
if (i + j < size)
printf("%02x", (unsigned char)b[i + j]);
else
printf("  ");
if (j & 1)
putchar(' ');
}
for (j = 0; j < 10; j++)
{
if (i + j >= size)
break;
c = b[i + j];
if (c >= ' ' && c <= '~')
putchar(c);
else
putchar('.');
}
putchar('\n');
}
}
