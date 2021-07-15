#include "holberton.h"
#include <stdlib.h>

/**
 * print_str - Prints a string
 * @str: The string to print
 */
void print_str(char *str)
{
	int i = 0;

	for (i = 0; str && *(str + i) != '\0'; i++)
		_putchar(*(str + i));
	_putchar('\n');
}

/**
 * program_fail - Computes the program failure instructions
 */
void program_fail(void)
{
	print_str("Error\n");
	exit(98);
}

/**
 * validate_input - Ensures that this program's arguments are valid
 * @num1: The first argument
 * @num2: The second argument
 */
void validate_input(char *num1, char *num2)
{
	int len1;
	int len2;

	for (len1 = 0; *(num1 + len1) != '\0'; len1++)
	{
		if (!(*(num1 + len1) >= '0' && *(num1 + len1) <= '9'))
			program_fail();
	}
	for (len2 = 0; *(num2 + len2) != '\0'; len2++)
	{
		if (!(*(num2 + len2) >= '0' && *(num2 + len2) <= '9'))
			program_fail();
	}
}

/**
 * set_strlen - Sets the length of a string
 * @str: The source string
 * @len: The pointer to the length of the string
 */
void set_strlen(char *str, int *len)
{
	*len = 0;
	while (str && *(str + *len) != '\0')
		*len += 1;
}

/**
 * fill_str - Fills the first n bytes of a string with a given character
 * @str: The string to be filled
 * @n: The number of bytes to fill
 * @c: The character to fill the positions with
 */
void fill_str(char *str, int n, char c)
{
	int i;

	for (i = 0; str && i < n; i++)
		*(str + i) = c;
}

/**
 * left_shift - Shifts a string to the left for a given number of bytes
 * @str: The string to shift
 * @num: The number of bytes to shift the string by
 * @len: The length of the string
 */
void left_shift(char *str, int num, int len)
{
	int i;
	int j;

	for (i = 0; i < num; i++)
	{
		for (j = 1; j <= len; j++)
		{
			*(str + j - 1) = *(str + j) != '\0' && *(str + j - 1) != '\0'
				? *(str + j) : '\0';
		}
	}
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
	int size;
	int mult_len;
	int num_len;
	int i;
	int j;
	char *result;
	char rem;
	char carry = 0;

	set_strlen(multiple, &mult_len);
	set_strlen(num, &num_len);
	size = mult_len + num_len;
	result = malloc(sizeof(char) * (size + 1));
	if (result)
	{
		fill_str(result, size, '0');
		*(result + size) = '\0';
		mult_len--;
		j = size - mult_len - 1;
		for (i = 1; i <= mult_len; i++)
			*(result + size - i) = '0';
		for (i = num_len - 1; i >= 0; i--)
		{
			rem = ((*(num + i) - '0') * (*multiple - '0') + carry) % 10;
			carry = ((*(num + i) - '0') * (*multiple - '0') + carry) / 10;
			*(result + j) = rem + '0';
			j--;
		}
		if (carry > 0)
			*(result + j) = carry + '0';
		if (*result == '0')
			left_shift(result, 1, size);
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

	set_strlen(num, &idx_num);
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
	char *num1;
	char *num2;
	int size;
	int i;
	int len2;
	char *result;

	if (argc == 3)
	{
		num1 = argv[1];
		num2 = argv[2];
		validate_input(num1, num2);
		set_strlen(num1, &size);
		set_strlen(num2, &len2);
		size += len2;
		result = malloc(sizeof(char) * (size + 1));
		if (result)
		{
			fill_str(result, size, '0');
			*(result + size) = '\0';
			for (i = 0; i < len2; i++)
			{
				char *product = multiply(num1, num2 + i);

				add(product, result, size);
				free(product);
			}
			while (*result == '0' && *(result + 1) != '\0')
				left_shift(result, 1, size);
			print_str(result);
			_putchar('\n');
			free(result);
			return (0);
		}
	}
	program_fail();
	return (98);
}
