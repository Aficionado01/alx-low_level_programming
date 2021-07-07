#include "holberton.h"

/**
 * _strlen_recursion - Computes the length of a string
 * @s: The string
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	return (*s == '\0' ? 0 : 1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome_substr - Checks if a string is a palindrome
 * @s: The string to check
 * @left: The left index
 * @right: The right index
 *
 * Return: 1 if s is a palindrome, otherwise 0
 */
int is_palindrome_substr(char *s, int left, int right)
{
	if (left == right || (right - left == 1 && *(s + left) == *(s + right)))
		return (1);
	else if ((*(s + left) == *(s + right)) && (right - left > 1))
		return (is_palindrome_substr(s, left + 1, right - 1));
	else
		return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if s is a palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (*s == '\0')
		return (1);
	else if (*s == s[len - 1])
		return (len > 2 ? is_palindrome_substr(s, 1, len - 2) : 1);
	else
		return (0);
}
