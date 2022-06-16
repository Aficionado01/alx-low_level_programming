#include "lists.h"

/**
 * get_nodeint_at_index - Gets the node at a given index
 * @head: The node at the beginning of the list
 * @index: The index of the node to retrieve
 *
 * Return: The pointer to the node, otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node = head;

	for (i = 0; node && i <= index; i++)
	{
		if (i == index)
			return (node);
		node = node->next;
	}
	return (NULL);
}
