#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a node at a given index
 * @head: The node at the beginning of the list
 * @idx: The index at which to insert the node
 * @n: The content of the inserted node
 *
 * Return: The pointer to the node, otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node;
	listint_t *prev;

	if (head)
	{
		for (i = 0; i <= idx; i++)
		{
			if ((idx > 0 && i == idx) && (prev && prev->next))
			{
				node = malloc(sizeof(listint_t));
				if (node)
				{
					node->n = n;
					if (prev)
					{
						node->next = prev->next;
						prev->next = node;
					}
					else
					{
						*head = node;
					}
				}
				return (node);
			}
			prev = i == 0 ? *head : prev->next;
		}
	}
	return (NULL);
}
