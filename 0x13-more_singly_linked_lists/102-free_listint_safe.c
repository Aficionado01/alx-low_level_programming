#include <stdlib.h>
#include <inttypes.h>
#include "lists.h"

/**
 * free_nodes - Frees a list of nodes
 * @nodes_ptr: An array of node addresses
 * @n: The number of node addresses
*/
void free_nodes(void **nodes_ptr, size_t n)
{
	size_t i;
	listint_t *node;

	for (i = 0; i < n; i++)
	{
		node = (listint_t *)(*(nodes_ptr + i));
		if (node != NULL)
			free(node);
	}
}

/**
 * free_listint_safe - Frees a listint_t list
 * @h: The node at the beginning of the list
 *
 * Return: The size of the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	void **nodes_addr = NULL;
	listint_t *node;
	size_t i = 0, size = 0, incr = 15;

	if (h && *h)
	{
		node = *h;
		while (node != NULL)
		{
			if (i >= size)
				nodes_addr = _realloc(nodes_addr,
															sizeof(void *) * size, sizeof(void *) * (size + incr));
			if (nodes_addr != NULL)
			{
				size += (i >= size ? incr : 0);
				if (exists(nodes_addr, size, (void *)node))
					break;
				*(nodes_addr + i) = (void *)node, i++;
				node = node->next;
			}
		}
		free_nodes(nodes_addr, i);
		*h = NULL;
		h = NULL;
		if (nodes_addr != NULL)
			free(nodes_addr);
	}
	return (i * sizeof(listint_t));
}
