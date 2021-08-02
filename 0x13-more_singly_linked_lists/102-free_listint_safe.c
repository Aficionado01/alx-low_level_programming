#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include "lists.h"

/**
 * _realloc2 - Reallocates a memory block
 * @ptr: The pointer to the previous memory block
 * @old_size: The size of the old memory block
 * @new_size: The size of the new memory block
 *
 * Return: The pointer to the new memory block otherwise NULL
 */
void *_realloc2(void *ptr, unsigned int old_size, unsigned int new_size)
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
char exists2(void **arr, size_t n, void *item)
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
 * free_listint_safe - Frees a listint_t list
 * @h: The node at the beginning of the list
 *
 * Return: The size of the freed size
 */
size_t free_listint_safe(listint_t **h)
{
	void *node, **nodes_addr = NULL;
	size_t i = 0, n, size = 0, stage = 0;

	if (h && *h)
	{
		node = *h;
		while (stage < 2)
		{
			if (stage == 1)
			{
				if (i < n)
					free((listint_t *)(*(nodes_addr + i))), i++;
				*h = i >= n ? NULL : *h;
				stage += i >= n ? 1 : 0;
			}
			else
			{
				if (i >= size)
					nodes_addr = _realloc2(nodes_addr,
						sizeof(void *) * size, sizeof(void *) * (size + 10));
				if (nodes_addr)
				{
					size += i >= size ? 10 : 0;
					if (exists2(nodes_addr, size, (void *)node))
					{
						stage++, n = i, i = 0;
						continue;
					}
					else
					{
						*(nodes_addr + i) = (void *)node;
						node = ((listint_t *)node)->next, i++;
					}
				}
			}
		}
		if (nodes_addr)
			free(nodes_addr);
	}
	return (sizeof(listint_t) * n);
}
