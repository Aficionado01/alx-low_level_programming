#include <stdio.h>

/**
* main - Prints all argument to the function
* @argc: The argument count
* @argv: The argument vector
* Return: Always 0
*/

int main(int argc, char *argv[])
{
int i;


for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);

return (0);
}
