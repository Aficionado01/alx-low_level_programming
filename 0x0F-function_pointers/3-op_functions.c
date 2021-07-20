#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Computes the sum of two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: The sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Computes the difference of two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: The difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Computes the product of two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: The product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Computes the quotient of two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: The quotient if b is not 0, otherwise 0 and program fails
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	puts("Error");
	exit(100);
	return (0);
}

/**
 * op_mod - Computes the remainder of the division of two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: The remainder if b is not 0, otherwise 0 and program fails
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	puts("Error");
	exit(100);
	return (0);
}
