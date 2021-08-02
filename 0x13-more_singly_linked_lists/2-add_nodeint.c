#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: The node at the beginning of the list
 * @n: The value to be contained in the new node
 *
 * Return: The pointer to the new node otherwise, NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	unsigned int size;
	listint_t *new_node;

	if (head)
	{
		size = sizeof(listint_t);
		new_node = malloc(size);
		if (new_node)
		{
			new_node->n = n;
			new_node->next = *head;
			*head = new_node;
		}
	}
	return (new_node);
}
