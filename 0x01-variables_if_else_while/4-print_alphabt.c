#include <stdio.h>
/**
* main - Entry point
* Description: Print lower case a-z
* Return: Return
*/
int main(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
putchar(ch);
}
putchar('\n');
return (0);
}
