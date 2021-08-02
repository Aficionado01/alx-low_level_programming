#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL
 * @head: The node at the beginning of the list
 */
void free_listint2(listint_t **head)
{
	if (head)
	{
		if ((*head)->next)
			free_listint(((*head)->next));
		free(*head);
		*head = NULL;
	}
}
