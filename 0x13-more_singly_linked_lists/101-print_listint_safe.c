#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include "lists.h"

/**
 * _realloc - Reallocates a memory block
 * @ptr: The pointer to the previous memory block
 * @old_size: The size of the old memory block
 * @new_size: The size of the new memory block
 *
 * Return: The pointer to the new memory block otherwise NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size = old_size < new_size ? old_size : new_size;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL)
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
		new_ptr = malloc(new_size);
		if (new_ptr != NULL)
		{
			for (i = 0; i < min_size; i++)
				*((char *)new_ptr + i) = *((char *)ptr + i);
			free(ptr);
			return (new_ptr);
		}
		free(ptr);
		return (NULL);
	}
	else
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
}

/**
 * exists - Checks if an item exists in the given array
 * @arr: The array to look in
 * @n: The lentgh of the array
 * @item: The item to look for
 *
 * Return: 1 if it exists, otherwise, 0
 */
char exists(void **arr, size_t n, void *item)
{
	size_t i;

	for (i = 0; i < n; i++)
	{
		if (*(arr + i) == item)
			return (1);
	}
	return (0);
}

/**
 * print_ptr - Prints a pointer
 * @ptr: The pointer to print
 * @stage: The stage in the printing task
 */
void print_ptr(void *ptr, char stage)
{
	uintptr_t adr = (uintptr_t)ptr;

	if (stage == 0)
	{
		print_int_str(0, "0x", 0);
		if (adr == 0)
			print_int_str(0, "(nil)", 0);
		else
			print_ptr(ptr, 1);
	}
	else
	{
		if (adr / 16 > 0)
			print_ptr((void *)(adr / 16), stage + 1);
		_putchar((adr % 16) < 10 ? (adr % 16) + '0'
														: (adr % 16) - 10 + 'a');
	}
}

/**
 * print_int_str - Prints a number or a string
 * @num: The number to print
 * @str: The string to print
 * @stage: The stage in the printing task
 */
void print_int_str(int num, char *str, char stage)
{
	int i;

	if (str == NULL)
	{
		if (stage == 0)
		{
			if (num < 0)
				_putchar('-');
			print_int_str(num, NULL, 1);
		}
		else
		{
			if (num == 0)
			{
				_putchar('0');
			}
			else
			{
				if ((num / 10 > 0) || (num / 10 < 0))
					print_int_str(num / 10, NULL, stage + 1);
				_putchar(((num % 10) < 0 ? (num % 10) * -1 : (num % 10)) + '0');
			}
		}
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
}

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: The node at the beginning of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *node;
	void **nodes_addr = NULL;
	size_t size = 0;
	const size_t incr = 15;
	size_t i = !head || (head && head->next) ? 0 : 1;

	if (head)
	{
		if (!head->next)
			PRINT_LOOP_NODE(head);
		node = head->next;
		while (node)
		{
			if (i >= size)
				nodes_addr = _realloc(nodes_addr,
															sizeof(void *) * size, sizeof(void *) * (size + incr));
			if (nodes_addr != NULL)
			{
				size += (i >= size ? incr : 0);
				if (exists(nodes_addr, i, (void *)node))
				{
					PRINT_LOOP_NODE_2(i == 0 ? head : node);
					break;
				}
				else
				{
					PRINT_LOOP_NODE(i == 0 ? head : node);
				}
				*(nodes_addr + i) = i == 0 ? (void *)head : (void *)node;
				node = i == 0 ? head->next : node->next;
				i++;
			}
			if (nodes_addr == NULL)
				exit(98);
		}
		if (nodes_addr != NULL)
			free(nodes_addr);
	}
	return (i);
}
