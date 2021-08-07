#include <stdio.h>

/**
* main - Prints the number of arguments passed into thre function
* @argc: The argument count
* @argv: The argument vector
* Return: Always 0
*/

int main(int argc, char *argv[])
{
(void)argv;

printf("%d\n", argc - 1);

return (0);
}
