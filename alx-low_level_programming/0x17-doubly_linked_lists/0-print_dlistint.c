#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: The pointer to the head of the dlistint_t list
 *
 * Return: The number of nodes in the dlistint_t list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = NULL;
	size_t count = 0;

	if (h != NULL)
	{
		node = h;
		while (node != NULL)
		{
			printf("%d\n", node->n);
			node = node->next;
			count++;
		}
	}
	return (count);
}
