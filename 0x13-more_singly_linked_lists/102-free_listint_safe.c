#include <stdlib.h>
#include <inttypes.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list
 * @h: The node at the beginning of the list
 *
 * Return: The size of the freed list
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
					nodes_addr = _realloc(nodes_addr,
						sizeof(void *) * size, sizeof(void *) * (size + 10));
				if (nodes_addr)
				{
					size += i >= size ? 10 : 0;
					if (exists(nodes_addr, size, (void *)node))
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
