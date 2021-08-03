#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include "lists.h"

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
		if (adr == 0)
		{
			_putchar('0');
		}
		else
		{
			if (adr / 16 > 0)
				print_ptr((void *)(adr / 16), stage + 1);
			_putchar((adr % 16) < 10 ? (adr % 16) + '0'
															: (adr % 16) - 10 + 'a');
		}
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
				if (num / 10 > 0)
					print_int_str(num / 10, NULL, stage + 1);
				_putchar((num % 10) + '0');
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
 * get_listint_loop_node - Retrieves the loop in a linked list
 * @head: The node at the beginning of the list
 *
 * Return: The address of the node where the loop starts, or NULL
 */
listint_t *get_listint_loop_node(listint_t *head)
{
	listint_t *hare = head, *tortoise = head;

	if (head)
	{
		while (hare && hare->next)
		{
			hare = hare->next->next;
			tortoise = tortoise->next;
			if (tortoise == hare)
			{
				tortoise = head;
				while (tortoise != hare)
				{
					tortoise = tortoise->next;
					hare = hare->next;
				}
				return (tortoise);
			}
		}
	}
	return (NULL);
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
	char round = 0;
	listint_t *loop_node;
	size_t i = 0;

	if (head)
	{
		loop_node = get_listint_loop_node(head->next);
		node = head->next;
		while (node)
		{
			if (loop_node == node && round == 1)
			{
				print_int_str(0, "-> [", 0);
				print_ptr((void *)(!i ? head : node), 0);
				print_int_str(0, "] ", 0);
				print_int_str((!i ? head : node)->n, NULL, 0);
				_putchar('\n');
				break;
			}
			else
			{
				print_int_str(0, "[", 0);
				print_ptr((void *)(!i ? head : node), 0);
				print_int_str(0, "] ", 0);
				print_int_str((!i ? head : node)->n, NULL, 0);
				_putchar('\n');
				round += (loop_node == node ? 1 : 0);
			}
			node = i == 0 ? head->next : node->next;
			i++;
		}
		return (i);
	}
	exit(98);
}
