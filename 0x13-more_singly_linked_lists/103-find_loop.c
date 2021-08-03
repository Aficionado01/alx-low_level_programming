#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: The node at the beginning of the list
 *
 * Return: The address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *hare = head, *tortoise = head;

	if (head)
	{
		while (hare && hare->next)
		{
			hare = hare->next->next;
			tortoise = tortoise->next;
			if (tortoise == hare)
			{
				tortoise = head;
				while (tortoise != hare)
				{
					tortoise = tortoise->next;
					hare = hare->next;
				}
				return (tortoise);
			}
		}
	}
	return (NULL);
}
