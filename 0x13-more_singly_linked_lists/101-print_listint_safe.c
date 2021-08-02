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
 * print_listint_safe - Prints a listint_t linked list
 * @head: The node at the beginning of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *node;
	void **nodes_addr = NULL;
	unsigned int size = 0;
	size_t i = 0;

	if (head)
	{
		node = head->next;
		while (node)
		{
			if (i >= size)
				nodes_addr = _realloc(nodes_addr,
					sizeof(void *) * size, sizeof(void *) * (size + 10));
			if (nodes_addr)
			{
				size += 10;
				if (exists(nodes_addr, size, (void *)node))
				{
					printf("-> [%p] %d\n", (void *)(!i ? head : node), (!i ? head : node)->n);
					break;
				}
				else
				{
					printf("[%p] %d\n", (void *)(!i ? head : node), (!i ? head : node)->n);
				}
				*(nodes_addr + i) = i == 0 ? (void *)head : (void *)node;
				node = i == 0 ? head->next : node->next;
				i++;
			}
		}
		if (nodes_addr)
			free(nodes_addr);
	}
	return (i);
}
