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
	listint_t *node, *prev;

	if (head != NULL)
	{
		node = malloc(sizeof(listint_t));
		if (node != NULL)
		{
			node->n = n;
			if (idx == 0)
			{
				node->next = *head;
				*head = node;
				return (node);
			}
			prev = *head;
			for (i = 1; i < idx && *head != NULL; i++)
				prev = prev != NULL ? prev->next : NULL;
			if (i == idx && prev != NULL)
			{
				node->next = prev->next;
				prev->next = node;
				return (node);
			}
			else
			{
				free(node);
			}
		}
	}
	return (NULL);
}
