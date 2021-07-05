#include "holberton.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: The pointer to modify
 * @to: The char to assign to the pointer
 */
void set_string(char **s, char *to)
{
	*(s) = to;
}
