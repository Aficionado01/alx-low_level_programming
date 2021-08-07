#include <stdio.h>
/**
* main - prints all passed arguments
* @argc: number of arguments passed to the function
* @argv: argument vector of pointers to strings
*
* Return: always 0
*/
int main(int argc, char const *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
