#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - Finds the operation for the given operator
 * @s: The operator argument
 *
 * Return: The pointer to the operator's function, otherwise NULL
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5 && s)
	{
		if (*(ops + i)->op == *s && *(s + 1) == '\0')
			return (*(ops + i)->f);
		i++;
	}
	return (NULL);
}
