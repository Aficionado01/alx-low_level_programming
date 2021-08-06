#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - performs simple operations
* @argc: number of arguments passed
* @argv: array of pointers to arguments
*
* Return: always 0
*/
int main(int argc, char *argv[])
{
int first_num, second_num, result;
int (*op)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}
first_num = atoi(argv[1]);
second_num = atoi(argv[3]);
op = get_op_func(argv[2]);
if (op == NULL)
{
printf("Error\n");
exit(99);
}
result = op(first_num, second_num);
printf("%d\n", result);
return (0);
}
