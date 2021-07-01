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
putchar(ch);
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
