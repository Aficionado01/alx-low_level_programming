#include <stdio.h>
/**
* main - Entry point
* Description: Print lower case a-z
* Return: Return
*/
int main(void)
{
char ch;

for (ch = 'z'; ch >= 'a'; ch--)
putchar(ch);
putchar('\n');
return (0);
}
