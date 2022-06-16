#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_ops - Performs some string operations
 * @op: The operation to perform (0-> set length, 1-> fill bytes,
 * 2-> left shift by one byte, 3-> print string and newline)
 * @str: The source string
 * @len: The pointer to the length of the string
 * @n: The number of bytes to fill
 * @c: The character to fill the positions with
 */
void str_ops(char op, char *str, int *len, int n, char c)
{
	int i;

	if (op == 0)
	{
		*len = 0;
		while (str != NULL && *(str + *len) != '\0')
			*len += 1;
	}
	else if (op == 1)
	{
		for (i = 0; str != NULL && i < n; i++)
			*(str + i) = c;
	}
	else if (op == 2)
	{
		for (i = 1; i <= n; i++)
		{
			str[i - 1] = str[i] != '\0' && str[i - 1] != '\0' ? str[i] : '\0';
		}
	}
	else if (op == 3)
	{
		for (i = 0; str != NULL && *(str + i) != '\0'; i++)
			_putchar(*(str + i));
		_putchar('\n');
	}
}

/**
 * program_fail - Computes the program failure instructions
 */
void program_fail(void)
{
	str_ops(3, "Error", NULL, 0, '\0');
	exit(98);
}

/**
 * multiply - Computes the product of a number and a multiple of 10
 * @num: The first number
 * @multiple: The second number (a multiple of 10)
 *
 * Return: A pointer containing the result, otherwise program fails
 */
char *multiply(char *num, char *multiple)
{
	int size, mult_len, num_len, i, j;
	char *result, rem;
	char carry = 0;

	str_ops(0, multiple, &mult_len, 0, '\0');
	str_ops(0, num, &num_len, 0, '\0');
	size = mult_len + num_len;
	result = malloc(sizeof(char) * (size + 1));
	if (result != NULL)
	{
		str_ops(1, result, NULL, size, '0');
		*(result + size) = '\0';
		mult_len--;
		j = size - mult_len - 1;
		for (i = 1; i <= mult_len; i++)
			*(result + size - i) = '0';
		for (i = num_len - 1; i >= 0; i--)
		{
			if (!(*(num + i) >= '0' && *(num + i) <= '9'))
				program_fail();
			if (!(*multiple >= '0' && *multiple <= '9'))
				program_fail();
			rem = ((*(num + i) - '0') * (*multiple - '0') + carry) % 10;
			carry = ((*(num + i) - '0') * (*multiple - '0') + carry) / 10;
			*(result + j) = rem + '0';
			j--;
		}
		if (carry > 0)
			*(result + j) = carry + '0';
		if (*result == '0')
			str_ops(2, result, NULL, size, '\0');
		return (result);
	}
	program_fail();
	return (NULL);
}

/**
 * add - Adds two numbers and stores the result in the second number
 * @num: The first number
 * @r: The second number
 * @size_r: The size of the result buffer
 */
void add(char *num, char *r, int size_r)
{
	int idx_num;
	int idx_r;
	char dig1;
	char dig2;
	char carry;
	char rem;

	str_ops(0, num, &idx_num, 0, '\0');
	carry = 0;
	idx_num--;
	for (idx_r = size_r - 1; idx_r >= 0; idx_r--)
	{
		dig1 = idx_num >= 0 ? *(num + idx_num) - '0' : 0;
		dig2 = idx_r >= 0 ? *(r + idx_r) - '0' : 0;
		rem = (dig1 + dig2 + carry) % 10;
		carry = (dig1 + dig2 + carry) / 10;
		*(r + idx_r) = rem + '0';
		idx_num--;
	}
}

/**
 * main - A program that computes the product of two numbers
 * \ that are passed to it
 * @argc: The number of command-line arguments
 * @argv: The command-line arguments
 *
 * Return: 0 if successful, otherwise 98
 */
int main(int argc, char *argv[])
{
	char *num1, *num2, *result, *product;
	int size, i, len2;

	if (argc == 3)
	{
		num1 = argv[1];
		num2 = argv[2];
		str_ops(0, num1, &size, 0, '\0');
		str_ops(0, num2, &len2, 0, '\0');
		size += len2;
		result = malloc(sizeof(char) * (size + 1));
		if (result != NULL)
		{
			str_ops(1, result, NULL, size, '0');
			*(result + size) = '\0';
			for (i = 0; i < len2; i++)
			{
				product = multiply(num1, num2 + i);
				add(product, result, size);
				free(product);
			}
			while (*result == '0' && *(result + 1) != '\0')
				str_ops(2, result, NULL, size, '\0');
			str_ops(3, result, NULL, 0, '\0');
			free(result);
			return (0);
		}
		program_fail();
	}
	program_fail();
	return (98);
}
