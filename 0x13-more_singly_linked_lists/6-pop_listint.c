#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head of a listint_t list and returns its contents
 * @head: The node at the beginning of the list
 *
 * Return: The contents of the head, otherwise 0
 */
int pop_listint(listint_t **head)
{
	int val = 0;
	listint_t *node;

	if (head && *head)
	{
		node = *head;
		val = node->n;
		*head = (*head)->next;
		free(node);
	}
	return (val);
}
